/* Generated code for Python module 'textual$css$tokenize'
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



/* The "module_textual$css$tokenize" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$tokenize;
PyDictObject *moduledict_textual$css$tokenize;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_EXPECT;
PyObject *const_str_plain__expect;
PyObject *const_str_plain_Tokenizer;
PyObject *const_str_plain_code;
PyObject *const_str_plain_read_from;
PyObject *const_tuple_str_plain_read_from_tuple;
PyObject *const_str_plain_get_token;
PyObject *const_str_plain_self;
PyObject *const_str_plain_STATE_MAP;
PyObject *const_str_plain_get_state;
PyObject *const_str_plain_STATE_PUSH;
PyObject *const_str_plain_state_stack;
PyObject *const_str_plain_STATE_POP;
PyObject *const_str_plain__replace;
PyObject *const_tuple_str_plain_end_tag_tuple;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_str_plain_eof;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_edaa4011768019126b123cf973451175;
PyObject *const_str_plain_expect;
PyObject *const_str_plain_comment_line;
PyObject *const_str_plain_comment_start;
PyObject *const_str_plain_tokenizer;
PyObject *const_str_plain_skip_to;
PyObject *const_str_plain_expect_comment_end;
PyObject *const_str_plain_declaration_set_start;
PyObject *const_str_plain_nest_level;
PyObject *const_str_plain_declaration_set_end;
PyObject *const_str_plain_expect_declaration;
PyObject *const_str_plain_expect_root_scope;
PyObject *const_str_digest_97108d05cb0e765bccaba0a752899a2b;
PyObject *const_str_plain_items;
PyObject *const_str_plain_tokenize_value;
PyObject *const_tuple_str_plain___name___str_empty_tuple;
PyObject *const_str_digest_d508e4aed3176079d74e8ebf8a5a9008;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_ClassVar;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_058dbb6fc9ff11c18f0d029f91026634;
PyObject *const_tuple_str_plain_Expect_str_plain_Token_str_plain_Tokenizer_tuple;
PyObject *const_str_plain_Expect;
PyObject *const_str_plain_Token;
PyObject *const_str_digest_19e782c9d725a43b7753cd5fa5fca92a;
PyObject *const_str_plain_PERCENT;
PyObject *const_str_digest_93fb074174b6d7b297af3f7ac157b7a1;
PyObject *const_str_plain_DECIMAL;
PyObject *const_str_digest_2d0837268510c5a4ca8530ff1167f9e5;
PyObject *const_str_plain_COMMA;
PyObject *const_str_digest_c5645241f1adb993d416f783bc08c23a;
PyObject *const_str_plain_OPEN_BRACE;
PyObject *const_str_digest_3abf2662174f7a90063e645212a5e6d9;
PyObject *const_str_plain_CLOSE_BRACE;
PyObject *const_str_digest_a6a7bdc7a3ece54eafafa53a05fb17d5;
PyObject *const_str_plain_HEX_COLOR;
PyObject *const_str_plain_rgb;
PyObject *const_str_digest_8c9c3cb617600c789137d784bdbcaf9e;
PyObject *const_str_plain_RGB_COLOR;
PyObject *const_str_plain_hsl;
PyObject *const_str_digest_91b1c9e3eda6d074612d8d4bfb8d5d21;
PyObject *const_str_plain_HSL_COLOR;
PyObject *const_str_digest_0f8fff4d42d0273e28b62b8820259502;
PyObject *const_str_plain_COMMENT_LINE;
PyObject *const_str_digest_3f75daf9e4406ca35d85d93ac67ede70;
PyObject *const_str_plain_COMMENT_START;
PyObject *const_str_digest_04af102526a1c4cc9a0fc976fbf0b7ba;
PyObject *const_str_plain_SCALAR;
PyObject *const_str_digest_dbcfd3f1c3317a05a98226cdf3c663f2;
PyObject *const_str_plain_DURATION;
PyObject *const_str_digest_2248782149e2acba5b16b43591c978f0;
PyObject *const_str_plain_NUMBER;
PyObject *const_str_chr_124;
PyObject *const_str_plain_COLOR;
PyObject *const_str_digest_abf757fbf0d5e5bc877583cdc3147add;
PyObject *const_str_plain_KEY_VALUE;
PyObject *const_str_digest_cf5461664034fb0c268ea9de96d1e3c7;
PyObject *const_str_plain_TOKEN;
PyObject *const_str_digest_a532b3750d0bbd569695956ab7cfd757;
PyObject *const_str_plain_STRING;
PyObject *const_str_digest_7cc6c05e4a58fddbc9775ff6b5e116ba;
PyObject *const_str_plain_VARIABLE_REF;
PyObject *const_str_digest_d4ca12daf77307c5f9f50e5c9d6cf04c;
PyObject *const_str_plain_IDENTIFIER;
PyObject *const_str_digest_6f457e93369c4223ba43a98fcb627b0a;
PyObject *const_str_plain_SELECTOR_TYPE_NAME;
PyObject *const_str_digest_30e148e363bfeaaa623ff8772e9a1ea7;
PyObject *const_str_plain_DECLARATION_NAME;
PyObject *const_str_plain_scalar;
PyObject *const_str_plain_duration;
PyObject *const_str_plain_number;
PyObject *const_str_plain_color;
PyObject *const_str_plain_key_value;
PyObject *const_str_plain_token;
PyObject *const_str_plain_string;
PyObject *const_str_plain_variable_ref;
PyObject *const_str_plain_DECLARATION_VALUES;
PyObject *const_str_digest_2717a74e8094c62311bf53472f4de0ca;
PyObject *const_str_digest_d445831ee2c40c42b48d72398dfe7c9b;
PyObject *const_str_digest_e56abf9379492360b5ea0226e2912c30;
PyObject *const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
PyObject *const_str_chr_58;
PyObject *const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
PyObject *const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple;
PyObject *const_tuple_2fde01937788c9c0be1b28a2f2404bc7_tuple;
PyObject *const_str_plain_expect_eof;
PyObject *const_tuple_true_tuple;
PyObject *const_str_digest_1f60b4cc4eea1734db00989decf96f00;
PyObject *const_str_digest_8782419c9b55e2bb591b04c52356152a;
PyObject *const_tuple_1decc14a31ca104af3787747fcc25146_tuple;
PyObject *const_str_plain_expect_root_nested;
PyObject *const_tuple_str_digest_e597bfd241932bfe9ef6786880116de8_tuple;
PyObject *const_str_plain_variable_value_end;
PyObject *const_str_digest_e48e92f74c269b000e4706665d1a9c0d;
PyObject *const_str_plain_whitespace;
PyObject *const_str_plain_expect_variable_name_continue;
PyObject *const_str_plain_escape;
PyObject *const_tuple_str_digest_aa0dd355d361babad092c985be55f9dd_tuple;
PyObject *const_tuple_str_digest_54aa9a0a95e34ded9e376023f79dd8da_tuple;
PyObject *const_tuple_str_plain_comment_end_tuple;
PyObject *const_str_digest_d34b18b8dce7341c3cf7e3c32cf2cdc2;
PyObject *const_str_chr_62;
PyObject *const_str_chr_44;
PyObject *const_str_digest_cfcb8c946e48617fce4edc0b6e6f41a9;
PyObject *const_tuple_str_digest_9d9b5bedd0618ddef079529c637aa1fe_tuple;
PyObject *const_tuple_88e3502a4b5d3e0f456af88914c0203b_tuple;
PyObject *const_str_plain_expect_selector_continue;
PyObject *const_tuple_str_digest_faaca8d4570fe51da34dc40869017d57_tuple;
PyObject *const_tuple_989f48f632456fe93512ca9fb99b688c_tuple;
PyObject *const_tuple_str_digest_180feb51671511d341d015bf7ec4e2ca_tuple;
PyObject *const_tuple_ed2f5311cf0f11b567288af00aa53f00_tuple;
PyObject *const_str_plain_expect_declaration_solo;
PyObject *const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple;
PyObject *const_dict_dae22da1e8e3200696f8edd00c868c90;
PyObject *const_dict_cfc660031be56963f917bcd8c39779ad;
PyObject *const_dict_1b7f985e47fba71c3ede716ca27f1c6a;
PyObject *const_dict_ddbe7f9b8346371062419007214b5f93;
PyObject *const_dict_54e94805265a59c072dc4fea6c8efed9;
PyObject *const_str_plain_expect_declaration_content;
PyObject *const_str_plain_expect_declaration_content_solo;
PyObject *const_str_digest_acfc3fc6d26f823727983526fa6076e1;
PyObject *const_str_plain_TokenizerState;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_178;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_c69a58c433a30b141464c24b297c4795;
PyObject *const_str_digest_86502fea1660302ab009a2807f79e4ac;
PyObject *const_str_digest_29e79220382c86b6d105a58ae44829a5;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a;
PyObject *const_dict_b68f4f9b60b2531e5609ae570eb76a71;
PyObject *const_str_digest_38d9b937be441262e1617da5b3980843;
PyObject *const_dict_6cabf0bd17cd28768cc63adcf9510097;
PyObject *const_tuple_str_plain__expect_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_427e407ee50ed0c205d0c3b607729e6e;
PyObject *const_str_plain_TCSSTokenizerState;
PyObject *const_int_pos_220;
PyObject *const_str_plain_variable_name;
PyObject *const_str_plain_selector_start;
PyObject *const_str_plain_selector_start_id;
PyObject *const_str_plain_selector_start_class;
PyObject *const_str_plain_selector_start_universal;
PyObject *const_str_plain_selector_id;
PyObject *const_str_plain_selector_class;
PyObject *const_str_plain_selector_universal;
PyObject *const_str_plain_declaration_name;
PyObject *const_str_plain_declaration_end;
PyObject *const_str_plain_nested;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_DeclarationTokenizerState;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_277;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ValueTokenizerState;
PyObject *const_int_pos_285;
PyObject *const_str_plain_StyleTokenizerState;
PyObject *const_int_pos_289;
PyObject *const_str_digest_2ea8f81e959d2691a7ce5e9c7782701e;
PyObject *const_str_digest_8aa20ae27fd25a5de53297c40d45f159;
PyObject *const_str_digest_95d37980b89d3ef9e9a5857a9efdd04f;
PyObject *const_tuple_str_digest_511ffeed9c5a7b56bcb71e94b495c478_tuple;
PyObject *const_tuple_100176f8f1bb6119326dfeb949b33d40_tuple;
PyObject *const_str_plain_expect_semicolon;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_tokenize;
PyObject *const_str_plain_tokenize_declarations;
PyObject *const_str_plain_tokenize_style;
PyObject *const_dict_5f963db4086fa7d1a1e76d0a5b8f2bac;
PyObject *const_str_plain_tokenize_values;
PyObject *const_str_digest_b1d93f393f2dd2784462be64565b4315;
PyObject *const_str_digest_126270f96b6f2287fe4fa8d34bf9507a;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_5b4cebd0e8a57d51b6dd8c4bdb544e7d_tuple;
PyObject *const_tuple_04eb6e002c086cc39480894d7c2e5b2a_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_expect_tuple;
PyObject *const_tuple_str_plain_values_str_plain_value_tokens_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[202];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.tokenize"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECT);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__expect);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tokenizer);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_from);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_from_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_token);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_MAP);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_state);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_PUSH);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_stack);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_POP);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__replace);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tag_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_eof);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_edaa4011768019126b123cf973451175);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment_line);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment_start);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenizer);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_skip_to);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_comment_end);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_start);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_nest_level);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_end);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_root_scope);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_value);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___str_empty_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_d508e4aed3176079d74e8ebf8a5a9008);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Expect_str_plain_Token_str_plain_Tokenizer_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Expect);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Token);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_19e782c9d725a43b7753cd5fa5fca92a);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_93fb074174b6d7b297af3f7ac157b7a1);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECIMAL);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d0837268510c5a4ca8530ff1167f9e5);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMA);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5645241f1adb993d416f783bc08c23a);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_BRACE);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_3abf2662174f7a90063e645212a5e6d9);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_BRACE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6a7bdc7a3ece54eafafa53a05fb17d5);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEX_COLOR);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgb);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c9c3cb617600c789137d784bdbcaf9e);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB_COLOR);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_hsl);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_91b1c9e3eda6d074612d8d4bfb8d5d21);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_HSL_COLOR);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f8fff4d42d0273e28b62b8820259502);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMENT_LINE);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f75daf9e4406ca35d85d93ac67ede70);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMENT_START);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_04af102526a1c4cc9a0fc976fbf0b7ba);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_SCALAR);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbcfd3f1c3317a05a98226cdf3c663f2);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_DURATION);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_2248782149e2acba5b16b43591c978f0);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMBER);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_chr_124);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_COLOR);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_abf757fbf0d5e5bc877583cdc3147add);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_VALUE);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf5461664034fb0c268ea9de96d1e3c7);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOKEN);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_a532b3750d0bbd569695956ab7cfd757);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_STRING);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cc6c05e4a58fddbc9775ff6b5e116ba);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_VARIABLE_REF);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4ca12daf77307c5f9f50e5c9d6cf04c);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDENTIFIER);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f457e93369c4223ba43a98fcb627b0a);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_30e148e363bfeaaa623ff8772e9a1ea7);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECLARATION_NAME);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_scalar);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_duration);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_number);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_value);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_string);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_ref);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECLARATION_VALUES);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_2fde01937788c9c0be1b28a2f2404bc7_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_eof);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_1decc14a31ca104af3787747fcc25146_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_root_nested);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e597bfd241932bfe9ef6786880116de8_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_value_end);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_e48e92f74c269b000e4706665d1a9c0d);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_whitespace);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_variable_name_continue);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_escape);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aa0dd355d361babad092c985be55f9dd_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_54aa9a0a95e34ded9e376023f79dd8da_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_comment_end_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_d34b18b8dce7341c3cf7e3c32cf2cdc2);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfcb8c946e48617fce4edc0b6e6f41a9);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9d9b5bedd0618ddef079529c637aa1fe_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_88e3502a4b5d3e0f456af88914c0203b_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_selector_continue);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_faaca8d4570fe51da34dc40869017d57_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_989f48f632456fe93512ca9fb99b688c_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_180feb51671511d341d015bf7ec4e2ca_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_ed2f5311cf0f11b567288af00aa53f00_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_solo);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_dae22da1e8e3200696f8edd00c868c90);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_cfc660031be56963f917bcd8c39779ad);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_1b7f985e47fba71c3ede716ca27f1c6a);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_ddbe7f9b8346371062419007214b5f93);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_54e94805265a59c072dc4fea6c8efed9);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_content);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_content_solo);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenizerState);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_178);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_c69a58c433a30b141464c24b297c4795);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_86502fea1660302ab009a2807f79e4ac);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_29e79220382c86b6d105a58ae44829a5);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_b68f4f9b60b2531e5609ae570eb76a71);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_38d9b937be441262e1617da5b3980843);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_6cabf0bd17cd28768cc63adcf9510097);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__expect_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_427e407ee50ed0c205d0c3b607729e6e);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_TCSSTokenizerState);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_name);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_id);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_class);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_universal);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_id);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_class);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_universal);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_name);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_end);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_nested);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeclarationTokenizerState);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_277);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValueTokenizerState);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_285);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_StyleTokenizerState);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_289);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ea8f81e959d2691a7ce5e9c7782701e);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_8aa20ae27fd25a5de53297c40d45f159);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_95d37980b89d3ef9e9a5857a9efdd04f);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_511ffeed9c5a7b56bcb71e94b495c478_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_100176f8f1bb6119326dfeb949b33d40_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_expect_semicolon);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_declarations);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_style);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_5f963db4086fa7d1a1e76d0a5b8f2bac);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_values);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1d93f393f2dd2784462be64565b4315);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_126270f96b6f2287fe4fa8d34bf9507a);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_5b4cebd0e8a57d51b6dd8c4bdb544e7d_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_04eb6e002c086cc39480894d7c2e5b2a_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_expect_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_str_plain_value_tokens_tuple);
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
void checkModuleConstants_textual$css$tokenize(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXPECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXPECT);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__expect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__expect);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tokenizer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tokenizer);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_from);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_from_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_read_from_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_token);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STATE_MAP);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_state);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_PUSH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STATE_PUSH);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_stack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_stack);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_STATE_POP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STATE_POP);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__replace);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tag_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_tag_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eof);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_edaa4011768019126b123cf973451175));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edaa4011768019126b123cf973451175);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comment_line);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comment_start);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenizer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenizer);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_skip_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skip_to);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_comment_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_comment_end);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_set_start);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_nest_level));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nest_level);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_set_end);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_declaration);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_root_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_root_scope);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_value);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___name___str_empty_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_d508e4aed3176079d74e8ebf8a5a9008));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d508e4aed3176079d74e8ebf8a5a9008);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassVar);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Expect_str_plain_Token_str_plain_Tokenizer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Expect_str_plain_Token_str_plain_Tokenizer_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Expect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Expect);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Token);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_19e782c9d725a43b7753cd5fa5fca92a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19e782c9d725a43b7753cd5fa5fca92a);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_PERCENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PERCENT);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_93fb074174b6d7b297af3f7ac157b7a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93fb074174b6d7b297af3f7ac157b7a1);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECIMAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECIMAL);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d0837268510c5a4ca8530ff1167f9e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d0837268510c5a4ca8530ff1167f9e5);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMA);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5645241f1adb993d416f783bc08c23a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5645241f1adb993d416f783bc08c23a);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_BRACE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPEN_BRACE);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_3abf2662174f7a90063e645212a5e6d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3abf2662174f7a90063e645212a5e6d9);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_BRACE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSE_BRACE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6a7bdc7a3ece54eafafa53a05fb17d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6a7bdc7a3ece54eafafa53a05fb17d5);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEX_COLOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HEX_COLOR);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rgb);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c9c3cb617600c789137d784bdbcaf9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c9c3cb617600c789137d784bdbcaf9e);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB_COLOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RGB_COLOR);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_hsl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hsl);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_91b1c9e3eda6d074612d8d4bfb8d5d21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91b1c9e3eda6d074612d8d4bfb8d5d21);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_HSL_COLOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HSL_COLOR);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f8fff4d42d0273e28b62b8820259502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f8fff4d42d0273e28b62b8820259502);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMENT_LINE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMENT_LINE);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f75daf9e4406ca35d85d93ac67ede70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f75daf9e4406ca35d85d93ac67ede70);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMENT_START));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMENT_START);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_04af102526a1c4cc9a0fc976fbf0b7ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04af102526a1c4cc9a0fc976fbf0b7ba);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_SCALAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SCALAR);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbcfd3f1c3317a05a98226cdf3c663f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbcfd3f1c3317a05a98226cdf3c663f2);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_DURATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DURATION);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_2248782149e2acba5b16b43591c978f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2248782149e2acba5b16b43591c978f0);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMBER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NUMBER);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_chr_124));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_124);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_COLOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COLOR);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_abf757fbf0d5e5bc877583cdc3147add));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abf757fbf0d5e5bc877583cdc3147add);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_VALUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_VALUE);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf5461664034fb0c268ea9de96d1e3c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf5461664034fb0c268ea9de96d1e3c7);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TOKEN);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_a532b3750d0bbd569695956ab7cfd757));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a532b3750d0bbd569695956ab7cfd757);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_STRING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STRING);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cc6c05e4a58fddbc9775ff6b5e116ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cc6c05e4a58fddbc9775ff6b5e116ba);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_VARIABLE_REF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VARIABLE_REF);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4ca12daf77307c5f9f50e5c9d6cf04c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4ca12daf77307c5f9f50e5c9d6cf04c);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDENTIFIER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDENTIFIER);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f457e93369c4223ba43a98fcb627b0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f457e93369c4223ba43a98fcb627b0a);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_SELECTOR_TYPE_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_30e148e363bfeaaa623ff8772e9a1ea7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30e148e363bfeaaa623ff8772e9a1ea7);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECLARATION_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECLARATION_NAME);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_scalar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scalar);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_duration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_duration);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_number);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_value);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_ref);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECLARATION_VALUES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECLARATION_VALUES);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_2fde01937788c9c0be1b28a2f2404bc7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2fde01937788c9c0be1b28a2f2404bc7_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_eof);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_1decc14a31ca104af3787747fcc25146_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1decc14a31ca104af3787747fcc25146_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_root_nested));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_root_nested);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e597bfd241932bfe9ef6786880116de8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e597bfd241932bfe9ef6786880116de8_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_value_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_value_end);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_e48e92f74c269b000e4706665d1a9c0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e48e92f74c269b000e4706665d1a9c0d);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_whitespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_whitespace);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_variable_name_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_variable_name_continue);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_escape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_escape);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aa0dd355d361babad092c985be55f9dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aa0dd355d361babad092c985be55f9dd_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_54aa9a0a95e34ded9e376023f79dd8da_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_54aa9a0a95e34ded9e376023f79dd8da_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_comment_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_comment_end_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_d34b18b8dce7341c3cf7e3c32cf2cdc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d34b18b8dce7341c3cf7e3c32cf2cdc2);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfcb8c946e48617fce4edc0b6e6f41a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfcb8c946e48617fce4edc0b6e6f41a9);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_9d9b5bedd0618ddef079529c637aa1fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_9d9b5bedd0618ddef079529c637aa1fe_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_88e3502a4b5d3e0f456af88914c0203b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_88e3502a4b5d3e0f456af88914c0203b_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_selector_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_selector_continue);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_faaca8d4570fe51da34dc40869017d57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_faaca8d4570fe51da34dc40869017d57_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_989f48f632456fe93512ca9fb99b688c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_989f48f632456fe93512ca9fb99b688c_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_180feb51671511d341d015bf7ec4e2ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_180feb51671511d341d015bf7ec4e2ca_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_ed2f5311cf0f11b567288af00aa53f00_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ed2f5311cf0f11b567288af00aa53f00_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_solo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_declaration_solo);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_dae22da1e8e3200696f8edd00c868c90));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dae22da1e8e3200696f8edd00c868c90);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_cfc660031be56963f917bcd8c39779ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cfc660031be56963f917bcd8c39779ad);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_1b7f985e47fba71c3ede716ca27f1c6a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1b7f985e47fba71c3ede716ca27f1c6a);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_ddbe7f9b8346371062419007214b5f93));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ddbe7f9b8346371062419007214b5f93);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_54e94805265a59c072dc4fea6c8efed9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_54e94805265a59c072dc4fea6c8efed9);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_declaration_content);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_declaration_content_solo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_declaration_content_solo);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenizerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenizerState);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_178));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_178);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_c69a58c433a30b141464c24b297c4795));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c69a58c433a30b141464c24b297c4795);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_86502fea1660302ab009a2807f79e4ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86502fea1660302ab009a2807f79e4ac);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_29e79220382c86b6d105a58ae44829a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29e79220382c86b6d105a58ae44829a5);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_b68f4f9b60b2531e5609ae570eb76a71));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b68f4f9b60b2531e5609ae570eb76a71);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_38d9b937be441262e1617da5b3980843));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38d9b937be441262e1617da5b3980843);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_6cabf0bd17cd28768cc63adcf9510097));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6cabf0bd17cd28768cc63adcf9510097);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__expect_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__expect_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_427e407ee50ed0c205d0c3b607729e6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_427e407ee50ed0c205d0c3b607729e6e);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_TCSSTokenizerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TCSSTokenizerState);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_int_pos_220));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_220);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_name);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_id);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_class);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_universal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_universal);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_id);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_class);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_universal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_universal);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_name);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_end);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_nested));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nested);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeclarationTokenizerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeclarationTokenizerState);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_277));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_277);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValueTokenizerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValueTokenizerState);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_285));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_285);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_StyleTokenizerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StyleTokenizerState);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_289));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_289);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ea8f81e959d2691a7ce5e9c7782701e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ea8f81e959d2691a7ce5e9c7782701e);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_8aa20ae27fd25a5de53297c40d45f159));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8aa20ae27fd25a5de53297c40d45f159);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_95d37980b89d3ef9e9a5857a9efdd04f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95d37980b89d3ef9e9a5857a9efdd04f);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_511ffeed9c5a7b56bcb71e94b495c478_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_511ffeed9c5a7b56bcb71e94b495c478_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_100176f8f1bb6119326dfeb949b33d40_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_100176f8f1bb6119326dfeb949b33d40_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_expect_semicolon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expect_semicolon);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_declarations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_declarations);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_style);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_5f963db4086fa7d1a1e76d0a5b8f2bac));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f963db4086fa7d1a1e76d0a5b8f2bac);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_values);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1d93f393f2dd2784462be64565b4315));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1d93f393f2dd2784462be64565b4315);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_126270f96b6f2287fe4fa8d34bf9507a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_126270f96b6f2287fe4fa8d34bf9507a);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_5b4cebd0e8a57d51b6dd8c4bdb544e7d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5b4cebd0e8a57d51b6dd8c4bdb544e7d_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_04eb6e002c086cc39480894d7c2e5b2a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_04eb6e002c086cc39480894d7c2e5b2a_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_expect_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_expect_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_values_str_plain_value_tokens_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_values_str_plain_value_tokens_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 40
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
static PyObject *module_var_accessor_textual$css$tokenize$CLOSE_BRACE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_BRACE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSE_BRACE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSE_BRACE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CLOSE_BRACE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CLOSE_BRACE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_BRACE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_BRACE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_BRACE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$COLOR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COLOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COLOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COLOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COLOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COLOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COLOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COLOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COLOR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$COMMA(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMA);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$COMMENT_LINE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_LINE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMENT_LINE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMENT_LINE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMENT_LINE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMENT_LINE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_LINE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_LINE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_LINE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$COMMENT_START(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_START);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMENT_START);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMENT_START, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMENT_START);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMENT_START, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_START);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_START);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_START);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$DECIMAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECIMAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECIMAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECIMAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECIMAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$DECLARATION_NAME(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECLARATION_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECLARATION_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECLARATION_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECLARATION_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$DECLARATION_VALUES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_VALUES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECLARATION_VALUES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECLARATION_VALUES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECLARATION_VALUES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECLARATION_VALUES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_VALUES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_VALUES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_VALUES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$DURATION(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DURATION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DURATION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DURATION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DURATION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DURATION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DURATION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DURATION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DURATION);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$DeclarationTokenizerState(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationTokenizerState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeclarationTokenizerState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeclarationTokenizerState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeclarationTokenizerState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeclarationTokenizerState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationTokenizerState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationTokenizerState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationTokenizerState);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$Expect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Expect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Expect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Expect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Expect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Expect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Expect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Expect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Expect);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$HEX_COLOR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HEX_COLOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HEX_COLOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HEX_COLOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HEX_COLOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HEX_COLOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HEX_COLOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HEX_COLOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HEX_COLOR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$HSL_COLOR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HSL_COLOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HSL_COLOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HSL_COLOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HSL_COLOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HSL_COLOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HSL_COLOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HSL_COLOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HSL_COLOR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$IDENTIFIER(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDENTIFIER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDENTIFIER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDENTIFIER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDENTIFIER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$KEY_VALUE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_VALUE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_VALUE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_VALUE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_VALUE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_VALUE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_VALUE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_VALUE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_VALUE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$NUMBER(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMBER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NUMBER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NUMBER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NUMBER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NUMBER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMBER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMBER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMBER);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$OPEN_BRACE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_BRACE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN_BRACE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN_BRACE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN_BRACE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN_BRACE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_BRACE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_BRACE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_BRACE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$PERCENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PERCENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PERCENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$RGB_COLOR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_RGB_COLOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RGB_COLOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RGB_COLOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RGB_COLOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RGB_COLOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_RGB_COLOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_RGB_COLOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RGB_COLOR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$SCALAR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SCALAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SCALAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SCALAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SCALAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SCALAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SCALAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SCALAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SCALAR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$SELECTOR_TYPE_NAME(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SELECTOR_TYPE_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SELECTOR_TYPE_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$STRING(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STRING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STRING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STRING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STRING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$StyleTokenizerState(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleTokenizerState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StyleTokenizerState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StyleTokenizerState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StyleTokenizerState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StyleTokenizerState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleTokenizerState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleTokenizerState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleTokenizerState);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$TCSSTokenizerState(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TCSSTokenizerState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TCSSTokenizerState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TCSSTokenizerState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TCSSTokenizerState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TCSSTokenizerState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TCSSTokenizerState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TCSSTokenizerState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TCSSTokenizerState);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$TOKEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TOKEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOKEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOKEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOKEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOKEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TOKEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TOKEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TOKEN);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$Tokenizer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokenizer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tokenizer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tokenizer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tokenizer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tokenizer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokenizer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokenizer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokenizer);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$VARIABLE_REF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_VARIABLE_REF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VARIABLE_REF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VARIABLE_REF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VARIABLE_REF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VARIABLE_REF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_VARIABLE_REF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_VARIABLE_REF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VARIABLE_REF);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$ValueTokenizerState(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueTokenizerState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValueTokenizerState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValueTokenizerState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ValueTokenizerState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ValueTokenizerState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueTokenizerState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueTokenizerState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueTokenizerState);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_comment_end(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_comment_end);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_comment_end);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_comment_end, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_comment_end);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_comment_end, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_comment_end);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_comment_end);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_comment_end);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_declaration(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_declaration_content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_content);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_content, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_content);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_content, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_declaration_content_solo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content_solo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_content_solo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_content_solo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_content_solo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_content_solo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content_solo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content_solo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content_solo);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_declaration_solo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_solo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_solo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_solo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_declaration_solo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_declaration_solo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_solo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_solo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_solo);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_root_nested(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_nested);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_root_nested);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_root_nested, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_root_nested);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_root_nested, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_nested);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_nested);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_nested);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_root_scope(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_scope);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_root_scope);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_root_scope, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_root_scope);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_root_scope, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_scope);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_scope);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_scope);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_selector_continue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_selector_continue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_selector_continue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_selector_continue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_selector_continue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_selector_continue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_selector_continue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_selector_continue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_selector_continue);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$expect_variable_name_continue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_variable_name_continue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_variable_name_continue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_variable_name_continue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_expect_variable_name_continue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_expect_variable_name_continue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_variable_name_continue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_variable_name_continue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_variable_name_continue);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$tokenize$tokenize_value(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$tokenize->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$tokenize->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_value);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$tokenize->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_value);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_value, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_value);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_value, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_value);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_value);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_value);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a5e9d82516f7aad68796f388e6cceb0b;
static PyCodeObject *code_objects_38a6df2bfab1d2482de0b8dad5d39652;
static PyCodeObject *code_objects_4583cda215a28dd5dd535d9d669dcd96;
static PyCodeObject *code_objects_400f394967b8f1ad8bb19c28da08be08;
static PyCodeObject *code_objects_c7748755f1f2c11e6bc60790b9444e6a;
static PyCodeObject *code_objects_3743bf1d66f3ee80f86343308d945772;
static PyCodeObject *code_objects_5992963689878d876f048bad9ffd64fe;
static PyCodeObject *code_objects_91931d4bd0a3572a8abf6f597e5034f5;
static PyCodeObject *code_objects_8c69d8ad4de9c51ccfd3d00e54a04d50;
static PyCodeObject *code_objects_5230b8622cf272b65013fa5550a876f2;
static PyCodeObject *code_objects_e56df3c31f0ca902eed9a8c3bc65e58e;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b1d93f393f2dd2784462be64565b4315); CHECK_OBJECT(module_filename_obj);
code_objects_a5e9d82516f7aad68796f388e6cceb0b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_126270f96b6f2287fe4fa8d34bf9507a, mod_consts.const_str_digest_126270f96b6f2287fe4fa8d34bf9507a, NULL, NULL, 0, 0, 0);
code_objects_38a6df2bfab1d2482de0b8dad5d39652 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DeclarationTokenizerState, mod_consts.const_str_plain_DeclarationTokenizerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4583cda215a28dd5dd535d9d669dcd96 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StyleTokenizerState, mod_consts.const_str_plain_StyleTokenizerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_400f394967b8f1ad8bb19c28da08be08 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TCSSTokenizerState, mod_consts.const_str_plain_TCSSTokenizerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c7748755f1f2c11e6bc60790b9444e6a = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TokenizerState, mod_consts.const_str_plain_TokenizerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3743bf1d66f3ee80f86343308d945772 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ValueTokenizerState, mod_consts.const_str_plain_ValueTokenizerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5992963689878d876f048bad9ffd64fe = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b, mod_consts.const_tuple_5b4cebd0e8a57d51b6dd8c4bdb544e7d_tuple, NULL, 3, 0, 0);
code_objects_91931d4bd0a3572a8abf6f597e5034f5 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_edaa4011768019126b123cf973451175, mod_consts.const_tuple_04eb6e002c086cc39480894d7c2e5b2a_tuple, NULL, 3, 0, 0);
code_objects_8c69d8ad4de9c51ccfd3d00e54a04d50 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_5230b8622cf272b65013fa5550a876f2 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_expect, mod_consts.const_str_digest_38d9b937be441262e1617da5b3980843, mod_consts.const_tuple_str_plain_self_str_plain_expect_tuple, NULL, 2, 0, 0);
code_objects_e56df3c31f0ca902eed9a8c3bc65e58e = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tokenize_values, mod_consts.const_str_plain_tokenize_values, mod_consts.const_tuple_str_plain_values_str_plain_value_tokens_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$css$tokenize$$$function__3___call__$$$genobj__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$css$tokenize$$$function__4___call__$$$genobj__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__2_expect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__3___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__4___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__5_tokenize_values(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$css$tokenize$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$tokenize$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$css$tokenize$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$css$tokenize$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$tokenize$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$tokenize$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8c69d8ad4de9c51ccfd3d00e54a04d50, module_textual$css$tokenize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$tokenize$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$css$tokenize$$$function__1___init__ = cache_frame_frame_textual$css$tokenize$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EXPECT);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__expect, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$css$tokenize, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize$$$function__1___init__->m_frame.f_lineno = 186;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$function__1___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$tokenize$$$function__1___init__ == cache_frame_frame_textual$css$tokenize$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$tokenize$$$function__1___init__);
    cache_frame_frame_textual$css$tokenize$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$css$tokenize$$$function__1___init__);

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


static PyObject *impl_textual$css$tokenize$$$function__2_expect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_expect = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$function__2_expect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$tokenize$$$function__2_expect = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$css$tokenize$$$function__2_expect)) {
    Py_XDECREF(cache_frame_frame_textual$css$tokenize$$$function__2_expect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$tokenize$$$function__2_expect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$tokenize$$$function__2_expect = MAKE_FUNCTION_FRAME(tstate, code_objects_5230b8622cf272b65013fa5550a876f2, module_textual$css$tokenize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$tokenize$$$function__2_expect->m_type_description == NULL);
frame_frame_textual$css$tokenize$$$function__2_expect = cache_frame_frame_textual$css$tokenize$$$function__2_expect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$function__2_expect);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$function__2_expect) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_expect);
tmp_assattr_value_1 = par_expect;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__expect, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$function__2_expect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$function__2_expect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$function__2_expect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$function__2_expect,
    type_description_1,
    par_self,
    par_expect
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$tokenize$$$function__2_expect == cache_frame_frame_textual$css$tokenize$$$function__2_expect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$tokenize$$$function__2_expect);
    cache_frame_frame_textual$css$tokenize$$$function__2_expect = NULL;
}

assertFrameObject(frame_frame_textual$css$tokenize$$$function__2_expect);

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
CHECK_OBJECT(par_expect);
Py_DECREF(par_expect);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_expect);
Py_DECREF(par_expect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$tokenize$$$function__3___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_code = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_read_from = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_code;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_read_from;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$css$tokenize$$$function__3___call__$$$genobj__1___call__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_code);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
par_code = NULL;
CHECK_OBJECT(par_read_from);
CHECK_OBJECT(par_read_from);
Py_DECREF(par_read_from);
par_read_from = NULL;
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
struct textual$css$tokenize$$$function__3___call__$$$genobj__1___call___locals {
PyObject *var_state_stack;
PyObject *var_tokenizer;
PyObject *var_get_token;
PyObject *var_get_state;
PyObject *var_expect;
PyObject *var_token;
PyObject *var_name;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$css$tokenize$$$function__3___call__$$$genobj__1___call___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$tokenize$$$function__3___call__$$$genobj__1___call___locals *generator_heap = (struct textual$css$tokenize$$$function__3___call__$$$genobj__1___call___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_state_stack = NULL;
generator_heap->var_tokenizer = NULL;
generator_heap->var_get_token = NULL;
generator_heap->var_get_state = NULL;
generator_heap->var_expect = NULL;
generator_heap->var_token = NULL;
generator_heap->var_name = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_91931d4bd0a3572a8abf6f597e5034f5, module_textual$css$tokenize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_textual$css$tokenize$Tokenizer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Tokenizer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 192;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_code);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 192;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_from);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 192;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 192;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_read_from_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 192;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_tokenizer == NULL);
generator_heap->var_tokenizer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->var_tokenizer);
tmp_expression_value_1 = generator_heap->var_tokenizer;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_token);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 193;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_get_token == NULL);
generator_heap->var_get_token = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 194;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_STATE_MAP);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 194;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 194;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_get_state == NULL);
generator_heap->var_get_state = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_state_stack == NULL);
generator_heap->var_state_stack = tmp_assign_source_4;
}
loop_start_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 198;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__expect);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 198;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_expect;
    generator_heap->var_expect = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
if (generator_heap->var_get_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 199;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = generator_heap->var_get_token;
CHECK_OBJECT(generator_heap->var_expect);
tmp_args_element_value_1 = generator_heap->var_expect;
generator->m_frame->m_frame.f_lineno = 199;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 199;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_5 = generator_heap->var_token;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 200;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_name;
    generator_heap->var_name = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_1 = generator_heap->var_name;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_STATE_MAP);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_1;
if (generator_heap->var_get_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_state);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 202;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = generator_heap->var_get_state;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_7 = generator_heap->var_token;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_name);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 202;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_expect);
tmp_args_element_value_3 = generator_heap->var_expect;
generator->m_frame->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 202;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 202;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__expect, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 202;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_2 = generator_heap->var_name;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 203;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_STATE_PUSH);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 203;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 203;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_assattr_target_2;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_STATE_PUSH);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_name);
tmp_subscript_value_1 = generator_heap->var_name;
tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__expect, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (generator_heap->var_state_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_state_stack);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 205;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = generator_heap->var_state_stack;
CHECK_OBJECT(generator_heap->var_expect);
tmp_item_value_1 = generator_heap->var_expect;
generator_heap->tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(generator_heap->tmp_result == false));
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_3 = generator_heap->var_name;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 206;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_STATE_POP);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 206;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 206;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
if (generator_heap->var_state_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_state_stack);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 207;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_state_stack);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 207;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_list_arg_value_2;
PyObject *tmp_assattr_target_3;
if (generator_heap->var_state_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_state_stack);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = generator_heap->var_state_stack;
tmp_assattr_value_3 = LIST_POP1(tstate, tmp_list_arg_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__expect, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_4;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_EXPECT);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_assattr_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__expect, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_13 = generator_heap->var_token;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__replace);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 211;
tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_end_tag_tuple, 0), mod_consts.const_tuple_str_plain_name_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    assert(old != NULL);
    generator_heap->var_token = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_expression_value_14;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_14 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_14);
generator->m_yield_return_index = 1;
return tmp_expression_value_14;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 212;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto loop_start_1;
branch_end_4:;
branch_no_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_expression_value_15;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_15 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_15);
generator->m_yield_return_index = 2;
return tmp_expression_value_15;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 215;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_4 = generator_heap->var_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_eof;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_end_1;
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 197;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_state_stack,
    generator_heap->var_tokenizer,
    generator_heap->var_get_token,
    generator_heap->var_get_state,
    generator_heap->var_expect,
    generator_heap->var_token,
    generator_heap->var_name
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
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_state_stack);
generator_heap->var_state_stack = NULL;
Py_XDECREF(generator_heap->var_tokenizer);
generator_heap->var_tokenizer = NULL;
Py_XDECREF(generator_heap->var_get_token);
generator_heap->var_get_token = NULL;
Py_XDECREF(generator_heap->var_get_state);
generator_heap->var_get_state = NULL;
Py_XDECREF(generator_heap->var_expect);
generator_heap->var_expect = NULL;
Py_XDECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->var_state_stack);
generator_heap->var_state_stack = NULL;
CHECK_OBJECT(generator_heap->var_tokenizer);
CHECK_OBJECT(generator_heap->var_tokenizer);
Py_DECREF(generator_heap->var_tokenizer);
generator_heap->var_tokenizer = NULL;
Py_XDECREF(generator_heap->var_get_token);
generator_heap->var_get_token = NULL;
Py_XDECREF(generator_heap->var_get_state);
generator_heap->var_get_state = NULL;
CHECK_OBJECT(generator_heap->var_expect);
CHECK_OBJECT(generator_heap->var_expect);
Py_DECREF(generator_heap->var_expect);
generator_heap->var_expect = NULL;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
CHECK_OBJECT(generator_heap->var_name);
CHECK_OBJECT(generator_heap->var_name);
Py_DECREF(generator_heap->var_name);
generator_heap->var_name = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$tokenize$$$function__3___call__$$$genobj__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$tokenize$$$function__3___call__$$$genobj__1___call___context,
        module_textual$css$tokenize,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_edaa4011768019126b123cf973451175,
#endif
        code_objects_91931d4bd0a3572a8abf6f597e5034f5,
        closure,
        3,
#if 1
        sizeof(struct textual$css$tokenize$$$function__3___call__$$$genobj__1___call___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$tokenize$$$function__4___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_code = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_read_from = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_code;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_read_from;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$css$tokenize$$$function__4___call__$$$genobj__1___call__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_code);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
par_code = NULL;
CHECK_OBJECT(par_read_from);
CHECK_OBJECT(par_read_from);
Py_DECREF(par_read_from);
par_read_from = NULL;
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
struct textual$css$tokenize$$$function__4___call__$$$genobj__1___call___locals {
PyObject *var_tokenizer;
PyObject *var_expect;
PyObject *var_get_token;
PyObject *var_get_state;
PyObject *var_nest_level;
PyObject *var_token;
PyObject *var_name;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$css$tokenize$$$function__4___call__$$$genobj__1___call___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$tokenize$$$function__4___call__$$$genobj__1___call___locals *generator_heap = (struct textual$css$tokenize$$$function__4___call__$$$genobj__1___call___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_tokenizer = NULL;
generator_heap->var_expect = NULL;
generator_heap->var_get_token = NULL;
generator_heap->var_get_state = NULL;
generator_heap->var_nest_level = NULL;
generator_heap->var_token = NULL;
generator_heap->var_name = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5992963689878d876f048bad9ffd64fe, module_textual$css$tokenize, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_textual$css$tokenize$Tokenizer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Tokenizer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_code);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_from);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 251;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_read_from_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_tokenizer == NULL);
generator_heap->var_tokenizer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EXPECT);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_expect == NULL);
generator_heap->var_expect = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_tokenizer);
tmp_expression_value_2 = generator_heap->var_tokenizer;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_token);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_get_token == NULL);
generator_heap->var_get_token = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_STATE_MAP);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_get_state == NULL);
generator_heap->var_get_state = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
assert(generator_heap->var_nest_level == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_nest_level = tmp_assign_source_5;
}
loop_start_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
if (generator_heap->var_get_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = generator_heap->var_get_token;
if (generator_heap->var_expect == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expect);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = generator_heap->var_expect;
generator->m_frame->m_frame.f_lineno = 257;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_5 = generator_heap->var_token;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_name;
    generator_heap->var_name = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_1 = generator_heap->var_name;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_comment_line;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 259;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_2 = generator_heap->var_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_comment_start;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "cccooooooo";
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
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
if (generator_heap->var_tokenizer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokenizer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = generator_heap->var_tokenizer;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_skip_to);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_textual$css$tokenize$expect_comment_end(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expect_comment_end);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_3);

generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 262;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto loop_start_1;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_3 = generator_heap->var_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_eof;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_4 = generator_heap->var_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_declaration_set_start;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (generator_heap->var_nest_level == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_nest_level);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = generator_heap->var_nest_level;
tmp_iadd_expr_right_1 = const_int_pos_1;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
generator_heap->var_nest_level = tmp_assign_source_8;

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(generator_heap->var_name);
tmp_cmp_expr_left_5 = generator_heap->var_name;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_declaration_set_end;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (generator_heap->var_nest_level == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_nest_level);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = generator_heap->var_nest_level;
tmp_isub_expr_right_1 = const_int_pos_1;
generator_heap->tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_isub_expr_left_1;
generator_heap->var_nest_level = tmp_assign_source_9;

}
{
PyObject *tmp_assign_source_10;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_nest_level);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_nest_level);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_10 = module_var_accessor_textual$css$tokenize$expect_declaration(tstate);
if (unlikely(tmp_assign_source_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expect_declaration);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_10 = module_var_accessor_textual$css$tokenize$expect_root_scope(tstate);
if (unlikely(tmp_assign_source_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expect_root_scope);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
{
    PyObject *old = generator_heap->var_expect;
    generator_heap->var_expect = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_expect);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_7;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_7 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_7);
generator->m_yield_return_index = 1;
return tmp_expression_value_7;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto loop_start_1;
branch_no_5:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (generator_heap->var_get_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_state);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = generator_heap->var_get_state;
CHECK_OBJECT(generator_heap->var_name);
tmp_args_element_value_3 = generator_heap->var_name;
if (generator_heap->var_expect == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expect);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = generator_heap->var_expect;
generator->m_frame->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_expect;
    generator_heap->var_expect = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_8;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_8 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_8);
generator->m_yield_return_index = 2;
return tmp_expression_value_8;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_tokenizer,
    generator_heap->var_expect,
    generator_heap->var_get_token,
    generator_heap->var_get_state,
    generator_heap->var_nest_level,
    generator_heap->var_token,
    generator_heap->var_name
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
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_tokenizer);
generator_heap->var_tokenizer = NULL;
Py_XDECREF(generator_heap->var_expect);
generator_heap->var_expect = NULL;
Py_XDECREF(generator_heap->var_get_token);
generator_heap->var_get_token = NULL;
Py_XDECREF(generator_heap->var_get_state);
generator_heap->var_get_state = NULL;
Py_XDECREF(generator_heap->var_nest_level);
generator_heap->var_nest_level = NULL;
Py_XDECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->var_tokenizer);
generator_heap->var_tokenizer = NULL;
Py_XDECREF(generator_heap->var_expect);
generator_heap->var_expect = NULL;
Py_XDECREF(generator_heap->var_get_token);
generator_heap->var_get_token = NULL;
Py_XDECREF(generator_heap->var_get_state);
generator_heap->var_get_state = NULL;
Py_XDECREF(generator_heap->var_nest_level);
generator_heap->var_nest_level = NULL;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
CHECK_OBJECT(generator_heap->var_name);
CHECK_OBJECT(generator_heap->var_name);
Py_DECREF(generator_heap->var_name);
generator_heap->var_name = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$tokenize$$$function__4___call__$$$genobj__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$tokenize$$$function__4___call__$$$genobj__1___call___context,
        module_textual$css$tokenize,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b,
#endif
        code_objects_5992963689878d876f048bad9ffd64fe,
        closure,
        3,
#if 1
        sizeof(struct textual$css$tokenize$$$function__4___call__$$$genobj__1___call___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$tokenize$$$function__5_tokenize_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_values = python_pars[0];
PyObject *var_value_tokens = NULL;
PyObject *outline_0_var_name = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$function__5_tokenize_values;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values)) {
    Py_XDECREF(cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values = MAKE_FUNCTION_FRAME(tstate, code_objects_e56df3c31f0ca902eed9a8c3bc65e58e, module_textual$css$tokenize, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values->m_type_description == NULL);
frame_frame_textual$css$tokenize$$$function__5_tokenize_values = cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$function__5_tokenize_values);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$function__5_tokenize_values) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_values);
tmp_expression_value_1 = par_values;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_textual$css$tokenize$$$function__5_tokenize_values->m_frame.f_lineno = 325;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 323;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 325;
type_description_1 = "oo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_name;
    outline_0_var_name = tmp_assign_source_8;
    Py_INCREF(outline_0_var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_9;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_name);
tmp_dictset38_key_1 = outline_0_var_name;
tmp_called_value_2 = module_var_accessor_textual$css$tokenize$tokenize_value(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokenize_value);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_value);
tmp_args_element_value_1 = outline_0_var_value;
tmp_args_element_value_2 = mod_consts.const_tuple_str_plain___name___str_empty_tuple;
frame_frame_textual$css$tokenize$$$function__5_tokenize_values->m_frame.f_lineno = 324;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_dictset38_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_name);
outline_0_var_name = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 323;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_value_tokens == NULL);
var_value_tokens = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$function__5_tokenize_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$function__5_tokenize_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$function__5_tokenize_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$function__5_tokenize_values,
    type_description_1,
    par_values,
    var_value_tokens
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$tokenize$$$function__5_tokenize_values == cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values);
    cache_frame_frame_textual$css$tokenize$$$function__5_tokenize_values = NULL;
}

assertFrameObject(frame_frame_textual$css$tokenize$$$function__5_tokenize_values);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_value_tokens);
tmp_return_value = var_value_tokens;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_value_tokens);
CHECK_OBJECT(var_value_tokens);
Py_DECREF(var_value_tokens);
var_value_tokens = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_values);
Py_DECREF(par_values);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$tokenize$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_314b1fc0e6c4fd44268bbb00bc76e50a,
#endif
        code_objects_8c69d8ad4de9c51ccfd3d00e54a04d50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$tokenize,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__2_expect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$tokenize$$$function__2_expect,
        mod_consts.const_str_plain_expect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_38d9b937be441262e1617da5b3980843,
#endif
        code_objects_5230b8622cf272b65013fa5550a876f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$tokenize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__3___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$tokenize$$$function__3___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edaa4011768019126b123cf973451175,
#endif
        code_objects_91931d4bd0a3572a8abf6f597e5034f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$tokenize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__4___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$tokenize$$$function__4___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_97108d05cb0e765bccaba0a752899a2b,
#endif
        code_objects_5992963689878d876f048bad9ffd64fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$tokenize,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$tokenize$$$function__5_tokenize_values(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$tokenize$$$function__5_tokenize_values,
        mod_consts.const_str_plain_tokenize_values,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e56df3c31f0ca902eed9a8c3bc65e58e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$tokenize,
        mod_consts.const_str_digest_d508e4aed3176079d74e8ebf8a5a9008,
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

static function_impl_code const function_table_textual$css$tokenize[] = {
impl_textual$css$tokenize$$$function__1___init__,
impl_textual$css$tokenize$$$function__2_expect,
impl_textual$css$tokenize$$$function__3___call__,
impl_textual$css$tokenize$$$function__4___call__,
impl_textual$css$tokenize$$$function__5_tokenize_values,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$tokenize);
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
        module_textual$css$tokenize,
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
        function_table_textual$css$tokenize,
        sizeof(function_table_textual$css$tokenize) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.tokenize";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$tokenize(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$tokenize");

    // Store the module for future use.
    module_textual$css$tokenize = module;

    moduledict_textual$css$tokenize = MODULE_DICT(module_textual$css$tokenize);

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
        PRINT_STRING("textual$css$tokenize: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$tokenize: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$tokenize: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.tokenize" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$tokenize\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$tokenize,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$tokenize,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$tokenize,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$tokenize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$tokenize,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$tokenize);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$tokenize);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_dict_unpacking_call_1__called = NULL;
PyObject *tmp_dict_unpacking_call_2__called = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$css$tokenize$$$class__1_TokenizerState_178 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$tokenize = MAKE_MODULE_FRAME(code_objects_a5e9d82516f7aad68796f388e6cceb0b, module_textual$css$tokenize);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize);
assert(Py_REFCNT(frame_frame_textual$css$tokenize) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$tokenize$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$tokenize$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$css$tokenize;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$css$tokenize,
        mod_consts.const_str_plain_ClassVar,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ClassVar);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassVar, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$css$tokenize,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$css$tokenize;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Expect_str_plain_Token_str_plain_Tokenizer_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$css$tokenize,
        mod_consts.const_str_plain_Expect,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Expect);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Expect, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$css$tokenize,
        mod_consts.const_str_plain_Token,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Token);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Token, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$css$tokenize,
        mod_consts.const_str_plain_Tokenizer,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Tokenizer);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_Tokenizer, tmp_assign_source_13);
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
tmp_assign_source_14 = mod_consts.const_str_digest_19e782c9d725a43b7753cd5fa5fca92a;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_PERCENT, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_93fb074174b6d7b297af3f7ac157b7a1;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECIMAL, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_2d0837268510c5a4ca8530ff1167f9e5;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMA, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_c5645241f1adb993d416f783bc08c23a;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_BRACE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_digest_3abf2662174f7a90063e645212a5e6d9;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOSE_BRACE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_digest_a6a7bdc7a3ece54eafafa53a05fb17d5;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HEX_COLOR, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_plain_rgb;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 18);
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$OPEN_BRACE(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$CLOSE_BRACE(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8c9c3cb617600c789137d784bdbcaf9e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$OPEN_BRACE(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 12, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 13, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 14, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 15, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 16, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$tokenize$CLOSE_BRACE(tstate);
assert(!(tmp_tuple_element_1 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 17, tmp_tuple_element_1);
tmp_assign_source_20 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_20 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_RGB_COLOR, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_plain_hsl;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 18);
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$OPEN_BRACE(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$PERCENT(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$PERCENT(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$CLOSE_BRACE(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_91b1c9e3eda6d074612d8d4bfb8d5d21;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 8, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$OPEN_BRACE(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 10, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 11, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$PERCENT(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 12, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 13, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$PERCENT(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 14, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$COMMA(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 15, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 16, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_textual$css$tokenize$CLOSE_BRACE(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 17, tmp_tuple_element_2);
tmp_assign_source_21 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_21 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_HSL_COLOR, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_digest_0f8fff4d42d0273e28b62b8820259502;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_LINE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_digest_3f75daf9e4406ca35d85d93ac67ede70;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMENT_START, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_textual$css$tokenize$DECIMAL(tstate);
assert(!(tmp_tuple_element_3 == NULL));
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_04af102526a1c4cc9a0fc976fbf0b7ba;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_assign_source_24 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_24 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SCALAR, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_str_digest_dbcfd3f1c3317a05a98226cdf3c663f2;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DURATION, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_str_digest_2248782149e2acba5b16b43591c978f0;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_NUMBER, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_textual$css$tokenize$HEX_COLOR(tstate);
assert(!(tmp_tuple_element_4 == NULL));
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_124;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_textual$css$tokenize$RGB_COLOR(tstate);
assert(!(tmp_tuple_element_4 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_124;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_textual$css$tokenize$HSL_COLOR(tstate);
assert(!(tmp_tuple_element_4 == NULL));
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
tmp_assign_source_27 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_27 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_COLOR, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_str_digest_abf757fbf0d5e5bc877583cdc3147add;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_VALUE, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_str_digest_cf5461664034fb0c268ea9de96d1e3c7;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TOKEN, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_str_digest_a532b3750d0bbd569695956ab7cfd757;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_STRING, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_str_digest_7cc6c05e4a58fddbc9775ff6b5e116ba;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_VARIABLE_REF, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = mod_consts.const_str_digest_d4ca12daf77307c5f9f50e5c9d6cf04c;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_str_digest_6f457e93369c4223ba43a98fcb627b0a;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_TYPE_NAME, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = mod_consts.const_str_digest_30e148e363bfeaaa623ff8772e9a1ea7;
UPDATE_STRING_DICT0(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_NAME, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_scalar;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$SCALAR(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_35 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_duration;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$DURATION(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_number;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$NUMBER(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_color;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$COLOR(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_key_value;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$KEY_VALUE(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_token;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$TOKEN(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_string;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$STRING(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_variable_ref;
tmp_dict_value_1 = module_var_accessor_textual$css$tokenize$VARIABLE_REF(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DECLARATION_VALUES, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kw_call_value_8_1;
tmp_called_value_1 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_kw_call_value_1_1 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
assert(!(tmp_kw_call_value_1_1 == NULL));
tmp_kw_call_value_2_1 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
assert(!(tmp_kw_call_value_2_1 == NULL));
tmp_add_expr_left_1 = mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b;
tmp_add_expr_right_1 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
assert(!(tmp_add_expr_right_1 == NULL));
tmp_kw_call_value_3_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_kw_call_value_3_1 == NULL));
tmp_add_expr_left_2 = mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30;
tmp_add_expr_right_2 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
assert(!(tmp_add_expr_right_2 == NULL));
tmp_kw_call_value_4_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_kw_call_value_4_1 == NULL));
tmp_kw_call_value_5_1 = mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
tmp_kw_call_value_6_1 = module_var_accessor_textual$css$tokenize$SELECTOR_TYPE_NAME(tstate);
assert(!(tmp_kw_call_value_6_1 == NULL));
tmp_tuple_element_5 = module_var_accessor_textual$css$tokenize$VARIABLE_REF(tstate);
assert(!(tmp_tuple_element_5 == NULL));
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
tmp_kw_call_value_7_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_kw_call_value_7_1 == NULL));
tmp_kw_call_value_8_1 = mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 62;
{
    PyObject *kw_values[9] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple, kw_values, mod_consts.const_tuple_2fde01937788c9c0be1b28a2f2404bc7_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
CHECK_OBJECT(tmp_kw_call_value_7_1);
Py_DECREF(tmp_kw_call_value_7_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 62;
tmp_assign_source_36 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_scope, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_kw_call_value_6_2;
PyObject *tmp_kw_call_value_7_2;
PyObject *tmp_kw_call_value_8_2;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
tmp_called_value_2 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_kw_call_value_1_2 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = module_var_accessor_textual$css$tokenize$DECLARATION_NAME(tstate);
if (unlikely(tmp_add_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_NAME);
}

if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00;
tmp_kw_call_value_3_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b;
tmp_add_expr_right_4 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_3_2);

exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_3_2);

exception_lineno = 81;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30;
tmp_add_expr_right_5 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_5_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_6_2 = mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
tmp_kw_call_value_7_2 = module_var_accessor_textual$css$tokenize$SELECTOR_TYPE_NAME(tstate);
if (unlikely(tmp_kw_call_value_7_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
}

if (tmp_kw_call_value_7_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 84;

    goto frame_exception_exit_1;
}
tmp_format_value_1 = module_var_accessor_textual$css$tokenize$VARIABLE_REF(tstate);
if (unlikely(tmp_format_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VARIABLE_REF);
}

if (tmp_format_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_5_2);

exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_kw_call_value_8_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_kw_call_value_8_2 == NULL));
tmp_kw_call_value_9_1 = mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
tmp_kw_call_value_10_1 = mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 75;
{
    PyObject *kw_values[11] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1};
    tmp_assign_source_37 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_4f1214ebc5dd1bf78cbb559bc06f331e_tuple, kw_values, mod_consts.const_tuple_1decc14a31ca104af3787747fcc25146_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
CHECK_OBJECT(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_4_2);
CHECK_OBJECT(tmp_kw_call_value_5_2);
Py_DECREF(tmp_kw_call_value_5_2);
CHECK_OBJECT(tmp_kw_call_value_8_2);
Py_DECREF(tmp_kw_call_value_8_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_root_nested, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_instance_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = mod_consts.const_tuple_str_digest_e597bfd241932bfe9ef6786880116de8_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_variable_value_end;
tmp_dict_value_2 = mod_consts.const_str_digest_e48e92f74c269b000e4706665d1a9c0d;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_whitespace;
tmp_dict_value_2 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_comment_start;
tmp_dict_value_2 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_comment_line;
tmp_dict_value_2 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg3_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_direct_call_arg4_1 = module_var_accessor_textual$css$tokenize$DECLARATION_VALUES(tstate);
if (unlikely(tmp_direct_call_arg4_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_VALUES);
}

if (tmp_direct_call_arg4_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg3_1);

exception_lineno = 98;

    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_called_instance_2 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 92;
tmp_assign_source_38 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_variable_name_continue, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_called_instance_3;
tmp_called_value_3 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_textual$css$tokenize$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 103;
tmp_kw_call_value_0_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_escape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_aa0dd355d361babad092c985be55f9dd_tuple, 0)
);

if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 101;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
    tmp_assign_source_39 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_54aa9a0a95e34ded9e376023f79dd8da_tuple, kw_values, mod_consts.const_tuple_str_plain_comment_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_comment_end, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_kw_call_value_2_3;
PyObject *tmp_kw_call_value_3_3;
PyObject *tmp_kw_call_value_4_3;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_kw_call_value_5_3;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_kw_call_value_6_3;
PyObject *tmp_kw_call_value_7_3;
PyObject *tmp_kw_call_value_8_3;
PyObject *tmp_kw_call_value_9_2;
PyObject *tmp_kw_call_value_10_2;
PyObject *tmp_kw_call_value_11_1;
PyObject *tmp_kw_call_value_12_1;
tmp_called_value_4 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_4 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_kw_call_value_1_3 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_kw_call_value_1_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_3 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_kw_call_value_2_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_kw_call_value_2_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_3 = mod_consts.const_str_digest_d34b18b8dce7341c3cf7e3c32cf2cdc2;
tmp_add_expr_left_6 = mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b;
tmp_add_expr_right_6 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_kw_call_value_4_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_7 = mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30;
tmp_add_expr_right_7 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_4_3);

exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_5_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
if (tmp_kw_call_value_5_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_4_3);

exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_6_3 = mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
tmp_kw_call_value_7_3 = module_var_accessor_textual$css$tokenize$SELECTOR_TYPE_NAME(tstate);
if (unlikely(tmp_kw_call_value_7_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
}

if (tmp_kw_call_value_7_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_5_3);

exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_3 = mod_consts.const_str_chr_62;
tmp_kw_call_value_9_2 = mod_consts.const_str_chr_44;
tmp_kw_call_value_10_2 = mod_consts.const_str_digest_cfcb8c946e48617fce4edc0b6e6f41a9;
tmp_kw_call_value_11_1 = mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
tmp_kw_call_value_12_1 = mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 108;
{
    PyObject *kw_values[13] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_2, tmp_kw_call_value_10_2, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1};
    tmp_called_instance_4 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_9d9b5bedd0618ddef079529c637aa1fe_tuple, kw_values, mod_consts.const_tuple_88e3502a4b5d3e0f456af88914c0203b_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_3);
Py_DECREF(tmp_kw_call_value_4_3);
CHECK_OBJECT(tmp_kw_call_value_5_3);
Py_DECREF(tmp_kw_call_value_5_3);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 108;
tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_selector_continue, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_4;
PyObject *tmp_kw_call_value_3_4;
PyObject *tmp_kw_call_value_4_4;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_kw_call_value_5_4;
PyObject *tmp_kw_call_value_6_4;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_kw_call_value_7_4;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_kw_call_value_8_4;
PyObject *tmp_kw_call_value_9_3;
tmp_called_value_5 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_5 = mod_consts.const_str_digest_8782419c9b55e2bb591b04c52356152a;
tmp_kw_call_value_1_4 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_kw_call_value_2_4 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_kw_call_value_2_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_kw_call_value_2_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_4 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_kw_call_value_3_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_kw_call_value_3_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_8 = module_var_accessor_textual$css$tokenize$DECLARATION_NAME(tstate);
if (unlikely(tmp_add_expr_left_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_NAME);
}

if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_8 = mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00;
tmp_kw_call_value_4_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_kw_call_value_4_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_5_4 = mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
tmp_add_expr_left_9 = mod_consts.const_str_digest_d445831ee2c40c42b48d72398dfe7c9b;
tmp_add_expr_right_9 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_4_4);

exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_6_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
if (tmp_kw_call_value_6_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_4_4);

exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_10 = mod_consts.const_str_digest_e56abf9379492360b5ea0226e2912c30;
tmp_add_expr_right_10 = module_var_accessor_textual$css$tokenize$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_6_4);

exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_7_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
if (tmp_kw_call_value_7_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_6_4);

exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_4 = mod_consts.const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
tmp_kw_call_value_9_3 = module_var_accessor_textual$css$tokenize$SELECTOR_TYPE_NAME(tstate);
if (unlikely(tmp_kw_call_value_9_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SELECTOR_TYPE_NAME);
}

if (tmp_kw_call_value_9_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_6_4);
Py_DECREF(tmp_kw_call_value_7_4);

exception_lineno = 139;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 127;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_3};
    tmp_assign_source_41 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_faaca8d4570fe51da34dc40869017d57_tuple, kw_values, mod_consts.const_tuple_989f48f632456fe93512ca9fb99b688c_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_4_4);
Py_DECREF(tmp_kw_call_value_4_4);
CHECK_OBJECT(tmp_kw_call_value_6_4);
Py_DECREF(tmp_kw_call_value_6_4);
CHECK_OBJECT(tmp_kw_call_value_7_4);
Py_DECREF(tmp_kw_call_value_7_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_kw_call_value_1_5;
PyObject *tmp_kw_call_value_2_5;
PyObject *tmp_kw_call_value_3_5;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_kw_call_value_4_5;
tmp_called_value_6 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_6 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
tmp_kw_call_value_1_5 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_kw_call_value_1_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_kw_call_value_1_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_5 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_kw_call_value_2_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_kw_call_value_2_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_11 = module_var_accessor_textual$css$tokenize$DECLARATION_NAME(tstate);
if (unlikely(tmp_add_expr_left_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_NAME);
}

if (tmp_add_expr_left_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_11 = mod_consts.const_str_digest_1f60b4cc4eea1734db00989decf96f00;
tmp_kw_call_value_3_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
if (tmp_kw_call_value_3_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_5 = mod_consts.const_str_digest_7a5d41b6fb7ef71c6361bf30a706e7b5;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 142;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5};
    tmp_called_instance_5 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_180feb51671511d341d015bf7ec4e2ca_tuple, kw_values, mod_consts.const_tuple_ed2f5311cf0f11b567288af00aa53f00_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_5);
Py_DECREF(tmp_kw_call_value_3_5);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 142;
tmp_assign_source_42 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_solo, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_assign_source_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_1__called == NULL);
Py_INCREF(tmp_assign_source_44);
tmp_dict_unpacking_call_1__called = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_7;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_2 = tmp_dict_unpacking_call_1__called;
tmp_direct_call_arg2_2 = mod_consts.const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_3 = tmp_dict_unpacking_call_1__called;
tmp_tuple_element_7 = DICT_COPY(tstate, mod_consts.const_dict_dae22da1e8e3200696f8edd00c868c90);
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = DICT_COPY(tstate, mod_consts.const_dict_cfc660031be56963f917bcd8c39779ad);
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 1, tmp_tuple_element_7);
tmp_dict_key_3 = mod_consts.const_str_plain_comment_start;
tmp_dict_value_3 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto tuple_build_exception_1;
}
tmp_tuple_element_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_7, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 2, tmp_tuple_element_7);
tmp_dict_key_4 = mod_consts.const_str_plain_comment_line;
tmp_dict_value_4 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto tuple_build_exception_1;
}
tmp_tuple_element_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_7, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 3, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_textual$css$tokenize$DECLARATION_VALUES(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_VALUES);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_direct_call_arg2_3, 4, tmp_tuple_element_7);
tmp_tuple_element_7 = DICT_COPY(tstate, mod_consts.const_dict_1b7f985e47fba71c3ede716ca27f1c6a);
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 5, tmp_tuple_element_7);
tmp_tuple_element_7 = DICT_COPY(tstate, mod_consts.const_dict_ddbe7f9b8346371062419007214b5f93);
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 6, tmp_tuple_element_7);
tmp_tuple_element_7 = DICT_COPY(tstate, mod_consts.const_dict_54e94805265a59c072dc4fea6c8efed9);
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 7, tmp_tuple_element_7);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg2_3);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3};
    tmp_direct_call_arg3_2 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_3;
}
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_assign_source_43 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_instance_6;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_assign_source_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;

    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_2__called == NULL);
Py_INCREF(tmp_assign_source_46);
tmp_dict_unpacking_call_2__called = tmp_assign_source_46;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_direct_call_arg1_5;
PyObject *tmp_direct_call_arg2_5;
PyObject *tmp_tuple_element_8;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
tmp_direct_call_arg1_4 = tmp_dict_unpacking_call_2__called;
tmp_direct_call_arg2_4 = mod_consts.const_tuple_str_digest_b19307f3f5bff2b22c5d1c2654d2a5d1_tuple;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
tmp_direct_call_arg1_5 = tmp_dict_unpacking_call_2__called;
tmp_tuple_element_8 = DICT_COPY(tstate, mod_consts.const_dict_dae22da1e8e3200696f8edd00c868c90);
tmp_direct_call_arg2_5 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = DICT_COPY(tstate, mod_consts.const_dict_cfc660031be56963f917bcd8c39779ad);
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 1, tmp_tuple_element_8);
tmp_dict_key_5 = mod_consts.const_str_plain_comment_start;
tmp_dict_value_5 = module_var_accessor_textual$css$tokenize$COMMENT_START(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_START);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto tuple_build_exception_2;
}
tmp_tuple_element_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_8, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 2, tmp_tuple_element_8);
tmp_dict_key_6 = mod_consts.const_str_plain_comment_line;
tmp_dict_value_6 = module_var_accessor_textual$css$tokenize$COMMENT_LINE(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMENT_LINE);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;

    goto tuple_build_exception_2;
}
tmp_tuple_element_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_8, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 3, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_textual$css$tokenize$DECLARATION_VALUES(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECLARATION_VALUES);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_direct_call_arg2_5, 4, tmp_tuple_element_8);
tmp_tuple_element_8 = DICT_COPY(tstate, mod_consts.const_dict_1b7f985e47fba71c3ede716ca27f1c6a);
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 5, tmp_tuple_element_8);
tmp_tuple_element_8 = DICT_COPY(tstate, mod_consts.const_dict_ddbe7f9b8346371062419007214b5f93);
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 6, tmp_tuple_element_8);
tmp_tuple_element_8 = DICT_COPY(tstate, mod_consts.const_dict_54e94805265a59c072dc4fea6c8efed9);
PyTuple_SET_ITEM(tmp_direct_call_arg2_5, 7, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_direct_call_arg2_5);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5, tmp_direct_call_arg2_5};
    tmp_direct_call_arg3_3 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_4;
}
Py_INCREF(tmp_direct_call_arg1_4);
Py_INCREF(tmp_direct_call_arg2_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4, tmp_direct_call_arg3_3};
    tmp_called_instance_6 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
Py_DECREF(tmp_dict_unpacking_call_2__called);
tmp_dict_unpacking_call_2__called = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
CHECK_OBJECT(tmp_dict_unpacking_call_2__called);
Py_DECREF(tmp_dict_unpacking_call_2__called);
tmp_dict_unpacking_call_2__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 165;
tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_expect_declaration_content_solo, tmp_assign_source_45);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_48;
}
// Tried code:
{
PyObject *tmp_assign_source_49;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$css$tokenize$$$class__1_TokenizerState_178 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_TokenizerState;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_178;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2 = MAKE_CLASS_FRAME(tstate, code_objects_c7748755f1f2c11e6bc60790b9444e6a, module_textual$css$tokenize, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2) == 2);

// Framed code:
tmp_dictset_value = module_var_accessor_textual$css$tokenize$expect_root_scope(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_root_scope);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain_EXPECT, tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_c69a58c433a30b141464c24b297c4795;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_EXPECT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain_STATE_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_86502fea1660302ab009a2807f79e4ac;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_STATE_MAP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain_STATE_PUSH, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_86502fea1660302ab009a2807f79e4ac;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_STATE_PUSH;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain_STATE_POP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_29e79220382c86b6d105a58ae44829a5;
tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 182;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_STATE_POP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$css$tokenize$$$class__1_TokenizerState_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$css$tokenize$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_b68f4f9b60b2531e5609ae570eb76a71);

tmp_dictset_value = MAKE_FUNCTION_textual$css$tokenize$$$function__2_expect(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain_expect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6cabf0bd17cd28768cc63adcf9510097);

tmp_dictset_value = MAKE_FUNCTION_textual$css$tokenize$$$function__3___call__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__expect_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__1_TokenizerState_178, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_1;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_TokenizerState;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_textual$css$tokenize$$$class__1_TokenizerState_178;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 178;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;

    goto try_except_handler_7;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_50);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_49 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_textual$css$tokenize$$$class__1_TokenizerState_178);
locals_textual$css$tokenize$$$class__1_TokenizerState_178 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$tokenize$$$class__1_TokenizerState_178);
locals_textual$css$tokenize$$$class__1_TokenizerState_178 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
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

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 178;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenizerState, tmp_assign_source_49);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_52;
}
// Tried code:
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_427e407ee50ed0c205d0c3b607729e6e;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_TCSSTokenizerState;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_220;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3 = MAKE_CLASS_FRAME(tstate, code_objects_400f394967b8f1ad8bb19c28da08be08, module_textual$css$tokenize, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3) == 2);

// Framed code:
tmp_dictset_value = module_var_accessor_textual$css$tokenize$expect_root_scope(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_root_scope);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain_EXPECT, tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_variable_name;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_variable_name_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_variable_name_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = _PyDict_NewPresized( 14 );
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_variable_value_end;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_root_scope(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_root_scope);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_start;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_start_id;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_start_class;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_start_universal;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_id;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_class;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_selector_universal;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_declaration_set_start;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_declaration(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_declaration_name;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_declaration_content(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration_content);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_declaration_end;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_declaration(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_declaration_set_end;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_root_nested(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_root_nested);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_nested;
tmp_dict_value_7 = module_var_accessor_textual$css$tokenize$expect_selector_continue(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_selector_continue);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain_STATE_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$css$tokenize$$$class__2_TCSSTokenizerState_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6cabf0bd17cd28768cc63adcf9510097);

tmp_dictset_value = MAKE_FUNCTION_textual$css$tokenize$$$function__4___call__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_2;
tmp_called_value_8 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_plain_TCSSTokenizerState;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 220;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_10;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_53 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220);
locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220);
locals_textual$css$tokenize$$$class__2_TCSSTokenizerState_220 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
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

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 220;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_TCSSTokenizerState, tmp_assign_source_53);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_textual$css$tokenize$TCSSTokenizerState(tstate);
assert(!(tmp_tuple_element_11 == NULL));
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_55;
}
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_DeclarationTokenizerState;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 277;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_11;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 277;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 277;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_60;
}
branch_end_1:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_DeclarationTokenizerState;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_277;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4 = MAKE_CLASS_FRAME(tstate, code_objects_38a6df2bfab1d2482de0b8dad5d39652, module_textual$css$tokenize, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain_expect_declaration_solo);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_textual$css$tokenize$expect_declaration_solo(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration_solo);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain_EXPECT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_declaration_name;
tmp_dict_value_8 = PyObject_GetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain_expect_declaration_content);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_textual$css$tokenize$expect_declaration_content(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration_content);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dictset_value = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_declaration_end;
tmp_dict_value_8 = PyObject_GetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain_expect_declaration_solo);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_textual$css$tokenize$expect_declaration_solo(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration_solo);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain_STATE_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$css$tokenize$$$class__3_DeclarationTokenizerState_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
branch_no_3:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_DeclarationTokenizerState;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 277;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto try_except_handler_13;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_61 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277);
locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277);
locals_textual$css$tokenize$$$class__3_DeclarationTokenizerState_277 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
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

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 277;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationTokenizerState, tmp_assign_source_61);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_textual$css$tokenize$TCSSTokenizerState(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TCSSTokenizerState);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto try_except_handler_14;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
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
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_ValueTokenizerState;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 285;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_14;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 285;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 285;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_68;
}
branch_end_4:;
{
PyObject *tmp_assign_source_69;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_ValueTokenizerState;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_285;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5 = MAKE_CLASS_FRAME(tstate, code_objects_3743bf1d66f3ee80f86343308d945772, module_textual$css$tokenize, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain_expect_declaration_content_solo);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_textual$css$tokenize$expect_declaration_content_solo(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_expect_declaration_content_solo);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain_EXPECT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "o";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$css$tokenize$$$class__4_ValueTokenizerState_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_16;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
branch_no_6:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_ValueTokenizerState;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 285;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto try_except_handler_16;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_70;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_69 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285);
locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285);
locals_textual$css$tokenize$$$class__4_ValueTokenizerState_285 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 285;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_ValueTokenizerState, tmp_assign_source_69);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
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
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_tuple_element_19;
tmp_tuple_element_19 = module_var_accessor_textual$css$tokenize$TCSSTokenizerState(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TCSSTokenizerState);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;

    goto try_except_handler_17;
}
tmp_assign_source_71 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_72 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_74;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
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
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_StyleTokenizerState;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 289;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_75;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
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
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_17;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 289;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 289;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_76;
}
branch_end_7:;
{
PyObject *tmp_assign_source_77;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_StyleTokenizerState;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_289;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6 = MAKE_CLASS_FRAME(tstate, code_objects_4583cda215a28dd5dd535d9d669dcd96, module_textual$css$tokenize, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6);
assert(Py_REFCNT(frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6) == 2);

// Framed code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_called_instance_8;
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_value_0_7;
PyObject *tmp_kw_call_value_1_6;
PyObject *tmp_kw_call_value_2_6;
PyObject *tmp_kw_call_value_3_6;
PyObject *tmp_kw_call_value_4_6;
PyObject *tmp_kw_call_value_5_5;
PyObject *tmp_kw_call_value_6_5;
PyObject *tmp_kw_call_value_7_5;
tmp_called_value_14 = PyObject_GetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_Expect);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_textual$css$tokenize$Expect(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Expect);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_kw_call_value_0_7 = mod_consts.const_str_digest_2ea8f81e959d2691a7ce5e9c7782701e;
tmp_kw_call_value_1_6 = mod_consts.const_str_digest_8aa20ae27fd25a5de53297c40d45f159;
tmp_kw_call_value_2_6 = mod_consts.const_str_digest_95d37980b89d3ef9e9a5857a9efdd04f;
tmp_kw_call_value_3_6 = PyObject_GetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_PERCENT);

if (tmp_kw_call_value_3_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_kw_call_value_3_6 = module_var_accessor_textual$css$tokenize$PERCENT(tstate);
if (unlikely(tmp_kw_call_value_3_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PERCENT);
}

if (tmp_kw_call_value_3_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_kw_call_value_3_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_kw_call_value_4_6 = PyObject_GetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_COLOR);

if (tmp_kw_call_value_4_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_kw_call_value_4_6 = module_var_accessor_textual$css$tokenize$COLOR(tstate);
if (unlikely(tmp_kw_call_value_4_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COLOR);
}

if (tmp_kw_call_value_4_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_kw_call_value_3_6);

exception_lineno = 297;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_kw_call_value_4_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_kw_call_value_5_5 = PyObject_GetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_TOKEN);

if (tmp_kw_call_value_5_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_kw_call_value_5_5 = module_var_accessor_textual$css$tokenize$TOKEN(tstate);
if (unlikely(tmp_kw_call_value_5_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TOKEN);
}

if (tmp_kw_call_value_5_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_kw_call_value_3_6);
Py_DECREF(tmp_kw_call_value_4_6);

exception_lineno = 298;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_kw_call_value_5_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_kw_call_value_6_5 = PyObject_GetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_VARIABLE_REF);

if (tmp_kw_call_value_6_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_kw_call_value_6_5 = module_var_accessor_textual$css$tokenize$VARIABLE_REF(tstate);
if (unlikely(tmp_kw_call_value_6_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VARIABLE_REF);
}

if (tmp_kw_call_value_6_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);
Py_DECREF(tmp_kw_call_value_3_6);
Py_DECREF(tmp_kw_call_value_4_6);
Py_DECREF(tmp_kw_call_value_5_5);

exception_lineno = 299;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_kw_call_value_6_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_kw_call_value_7_5 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6->m_frame.f_lineno = 291;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_5, tmp_kw_call_value_6_5, tmp_kw_call_value_7_5};
    tmp_called_instance_8 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, mod_consts.const_tuple_str_digest_511ffeed9c5a7b56bcb71e94b495c478_tuple, kw_values, mod_consts.const_tuple_100176f8f1bb6119326dfeb949b33d40_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_kw_call_value_3_6);
Py_DECREF(tmp_kw_call_value_3_6);
CHECK_OBJECT(tmp_kw_call_value_4_6);
Py_DECREF(tmp_kw_call_value_4_6);
CHECK_OBJECT(tmp_kw_call_value_5_5);
Py_DECREF(tmp_kw_call_value_5_5);
CHECK_OBJECT(tmp_kw_call_value_6_5);
Py_DECREF(tmp_kw_call_value_6_5);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6->m_frame.f_lineno = 291;
tmp_called_instance_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_expect_eof,
    PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6->m_frame.f_lineno = 291;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_expect_semicolon,
    PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain_EXPECT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_textual$css$tokenize$$$class__5_StyleTokenizerState_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_19;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
branch_no_9:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_StyleTokenizerState;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$css$tokenize->m_frame.f_lineno = 289;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto try_except_handler_19;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_78;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_77 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289);
locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289);
locals_textual$css$tokenize$$$class__5_StyleTokenizerState_289 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 289;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_StyleTokenizerState, tmp_assign_source_77);
}
goto try_end_7;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_16;
tmp_called_value_16 = module_var_accessor_textual$css$tokenize$TCSSTokenizerState(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TCSSTokenizerState);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 307;
tmp_assign_source_79 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_16);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_17;
tmp_called_value_17 = module_var_accessor_textual$css$tokenize$DeclarationTokenizerState(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeclarationTokenizerState);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 308;
tmp_assign_source_80 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_18;
tmp_called_value_18 = module_var_accessor_textual$css$tokenize$ValueTokenizerState(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ValueTokenizerState);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 309;
tmp_assign_source_81 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_value, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_19;
tmp_called_value_19 = module_var_accessor_textual$css$tokenize$StyleTokenizerState(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StyleTokenizerState);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$tokenize->m_frame.f_lineno = 310;
tmp_assign_source_82 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_style, tmp_assign_source_82);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$tokenize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$tokenize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$tokenize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$tokenize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_5f963db4086fa7d1a1e76d0a5b8f2bac);

tmp_assign_source_83 = MAKE_FUNCTION_textual$css$tokenize$$$function__5_tokenize_values(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_textual$css$tokenize, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values, tmp_assign_source_83);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$tokenize", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.tokenize" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$tokenize);
    return module_textual$css$tokenize;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$tokenize, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$tokenize", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

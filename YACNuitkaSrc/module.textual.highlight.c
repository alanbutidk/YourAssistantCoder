/* Generated code for Python module 'textual$highlight'
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



/* The "module_textual$highlight" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$highlight;
PyDictObject *moduledict_textual$highlight;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_splitext;
PyObject *const_str_digest_5e69e1508571d7ccdbf3586e267dd342;
PyObject *const_str_plain_scss;
PyObject *const_str_plain_default;
PyObject *const_str_plain_guess_lexer_for_filename;
PyObject *const_str_plain_ClassNotFound;
PyObject *const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6;
PyObject *const_tuple_str_plain_guess_lexer_tuple;
PyObject *const_str_plain_guess_lexer;
PyObject *const_str_plain_lstrip;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_get_lexer_by_name;
PyObject *const_str_plain_aliases;
PyObject *const_str_digest_3c29812afebba2073e980a1ad84d9fc1;
PyObject *const_str_plain_guess_language;
PyObject *const_str_newline;
PyObject *const_str_plain_splitlines;
PyObject *const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple;
PyObject *const_tuple_str_plain_text_tuple;
PyObject *const_str_plain_STYLES;
PyObject *const_str_plain_get_tokens;
PyObject *const_str_plain_token_start;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_token_type;
PyObject *const_str_plain_spans;
PyObject *const_str_plain_append;
PyObject *const_str_plain_Span;
PyObject *const_str_plain_Content;
PyObject *const_tuple_str_plain_spans_tuple;
PyObject *const_str_plain_stylize_before;
PyObject *const_tuple_str_digest_00ada9d4f5d3904c325644c530265a67_tuple;
PyObject *const_str_digest_699ae2e886c12ded1704edfeee6539bc;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_Tuple;
PyObject *const_str_digest_3b09836d09e26d1d328b3215b0b6b24b;
PyObject *const_tuple_str_plain_Lexer_tuple;
PyObject *const_str_plain_Lexer;
PyObject *const_tuple_751dcd1d8ceb91d56c061711156caa89_tuple;
PyObject *const_str_digest_c574207cc2e883086040c6beb0095313;
PyObject *const_tuple_str_plain_Token_tuple;
PyObject *const_str_plain_Token;
PyObject *const_str_digest_ce1b0803b9e228b4fef82f896164bef7;
PyObject *const_tuple_str_plain_ClassNotFound_tuple;
PyObject *const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
PyObject *const_tuple_str_plain_Content_str_plain_Span_tuple;
PyObject *const_tuple_type_str_ellipsis_tuple;
PyObject *const_str_plain_TokenType;
PyObject *const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa;
PyObject *const_str_digest_6d0fb324c669bb2744d0f72d25e8b426;
PyObject *const_str_plain_HighlightTheme;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_16;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_Comment;
PyObject *const_str_digest_86526b391335fdc0c0398b3a514e39fa;
PyObject *const_str_plain_Error;
PyObject *const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_Strong;
PyObject *const_str_plain_bold;
PyObject *const_str_plain_Emph;
PyObject *const_str_plain_italic;
PyObject *const_str_plain_Heading;
PyObject *const_str_digest_ddfbdadcd258c1ad23bf02a8f1ffed5a;
PyObject *const_str_plain_Subheading;
PyObject *const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e;
PyObject *const_str_plain_Keyword;
PyObject *const_str_digest_e9c6a7b6a85e848885bc57957b7ba837;
PyObject *const_str_plain_Constant;
PyObject *const_str_digest_eba7c726ac03ec0ecf00c34517ff44df;
PyObject *const_str_plain_Namespace;
PyObject *const_str_digest_37fecedc5aba7ee0ac750608035669db;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Number;
PyObject *const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0;
PyObject *const_str_plain_String;
PyObject *const_str_plain_Backtick;
PyObject *const_str_digest_9b5351c2ad909e5e179612eba8b5895d;
PyObject *const_str_plain_Doc;
PyObject *const_str_digest_065a23aa207ef7acf7637a7b3e2ae029;
PyObject *const_str_plain_Double;
PyObject *const_str_plain_Name;
PyObject *const_str_plain_Attribute;
PyObject *const_str_plain_Builtin;
PyObject *const_str_plain_Pseudo;
PyObject *const_str_plain_Class;
PyObject *const_str_digest_74ce21824157a49fe26d5723107f17d6;
PyObject *const_str_plain_Decorator;
PyObject *const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073;
PyObject *const_str_plain_Function;
PyObject *const_str_digest_13e57f2c35849bb1688e0d318ee0cb79;
PyObject *const_str_plain_Magic;
PyObject *const_str_plain_Tag;
PyObject *const_str_plain_Variable;
PyObject *const_str_digest_f67fbe5199441d22866e2b7ab1d683da;
PyObject *const_str_plain_Operator;
PyObject *const_str_plain_Word;
PyObject *const_str_digest_b2cc62dfd1aa2625e84f853a7f5b79df;
PyObject *const_str_digest_735cf0fc0106fce633e7a3f51c95c385;
PyObject *const_str_plain_Whitespace;
PyObject *const_str_digest_e80e3551fb1bcf87656275d745320afc;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ANSIDarkHighlightTheme;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_55;
PyObject *const_str_digest_dcc5acf04c71597c5572c6b497ee87f0;
PyObject *const_str_plain_ansi_red;
PyObject *const_str_digest_ad86621028822c5e5d49fd453a3aa01f;
PyObject *const_str_plain_ansi_blue;
PyObject *const_str_digest_f74f672e1e3c57e9bb83a66225965111;
PyObject *const_str_plain_ansi_cyan;
PyObject *const_str_plain_ansi_magenta;
PyObject *const_str_plain_ansi_yellow;
PyObject *const_str_plain_ansi_bright_black;
PyObject *const_str_plain_ansi_green;
PyObject *const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d;
PyObject *const_str_plain_ansi_default;
PyObject *const_str_plain_ansi_yelllow;
PyObject *const_str_digest_a79236b8e55863665957d920aad86f83;
PyObject *const_str_plain_ansi_blow;
PyObject *const_str_plain_ansi_greenb;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_ANSILightHighlightTheme;
PyObject *const_int_pos_94;
PyObject *const_str_plain_ans_red;
PyObject *const_str_digest_0981999573850d2aff9745060ae1874a;
PyObject *const_dict_079f27aa6fb5ac81561fafab355ad80a;
PyObject *const_str_plain_language;
PyObject *const_str_plain_theme;
PyObject *const_str_plain_tab_size;
PyObject *const_int_pos_8;
PyObject *const_dict_5f5e3bba8a002c6d030d698ae534c9e5;
PyObject *const_str_plain_highlight;
PyObject *const_str_digest_4445e52ba608948f01227a6a0be6eb62;
PyObject *const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_46b3cfa65b9d0404d57791344101784a_tuple;
PyObject *const_tuple_fb4a65d8f29fb1fa7a27ea3508b8c755_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[145];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.highlight"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitext);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e69e1508571d7ccdbf3586e267dd342);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_scss);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_guess_lexer_for_filename);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassNotFound);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_guess_lexer_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_guess_lexer);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_lexer_by_name);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_aliases);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c29812afebba2073e980a1ad84d9fc1);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_guess_language);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_STYLES);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_tokens);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_start);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_type);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_spans);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Span);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Content);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_spans_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_00ada9d4f5d3904c325644c530265a67_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_699ae2e886c12ded1704edfeee6539bc);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b09836d09e26d1d328b3215b0b6b24b);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Lexer_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lexer);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_751dcd1d8ceb91d56c061711156caa89_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_c574207cc2e883086040c6beb0095313);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_Token);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce1b0803b9e228b4fef82f896164bef7);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClassNotFound_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_str_plain_Span_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_ellipsis_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenType);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_HighlightTheme);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Comment);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_86526b391335fdc0c0398b3a514e39fa);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Error);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Strong);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_bold);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Emph);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_italic);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Heading);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddfbdadcd258c1ad23bf02a8f1ffed5a);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Subheading);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Keyword);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9c6a7b6a85e848885bc57957b7ba837);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_Constant);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_eba7c726ac03ec0ecf00c34517ff44df);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Namespace);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_37fecedc5aba7ee0ac750608035669db);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_Number);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_String);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Backtick);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b5351c2ad909e5e179612eba8b5895d);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Doc);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_065a23aa207ef7acf7637a7b3e2ae029);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Double);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_Name);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Attribute);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Builtin);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pseudo);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Class);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_74ce21824157a49fe26d5723107f17d6);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Decorator);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Function);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_13e57f2c35849bb1688e0d318ee0cb79);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_Magic);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tag);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Variable);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_f67fbe5199441d22866e2b7ab1d683da);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Operator);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Word);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2cc62dfd1aa2625e84f853a7f5b79df);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_735cf0fc0106fce633e7a3f51c95c385);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Whitespace);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIDarkHighlightTheme);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_55);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcc5acf04c71597c5572c6b497ee87f0);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_red);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad86621028822c5e5d49fd453a3aa01f);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_blue);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_f74f672e1e3c57e9bb83a66225965111);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_cyan);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_magenta);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_yellow);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_bright_black);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_green);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_default);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_yelllow);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_blow);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_greenb);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSILightHighlightTheme);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_94);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ans_red);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_079f27aa6fb5ac81561fafab355ad80a);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_theme);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_tab_size);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_5f5e3bba8a002c6d030d698ae534c9e5);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlight);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_4445e52ba608948f01227a6a0be6eb62);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_46b3cfa65b9d0404d57791344101784a_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_fb4a65d8f29fb1fa7a27ea3508b8c755_tuple);
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
void checkModuleConstants_textual$highlight(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitext);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e69e1508571d7ccdbf3586e267dd342));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e69e1508571d7ccdbf3586e267dd342);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_scss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scss);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_guess_lexer_for_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_guess_lexer_for_filename);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassNotFound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassNotFound);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_guess_lexer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_guess_lexer_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_guess_lexer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_guess_lexer);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_lexer_by_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_lexer_by_name);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aliases);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c29812afebba2073e980a1ad84d9fc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c29812afebba2073e980a1ad84d9fc1);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_guess_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_guess_language);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitlines);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_STYLES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STYLES);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_tokens);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_start);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_type);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_spans));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spans);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Span));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Span);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Content);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_spans_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_spans_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stylize_before);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_00ada9d4f5d3904c325644c530265a67_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_00ada9d4f5d3904c325644c530265a67_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_699ae2e886c12ded1704edfeee6539bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_699ae2e886c12ded1704edfeee6539bc);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b09836d09e26d1d328b3215b0b6b24b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b09836d09e26d1d328b3215b0b6b24b);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Lexer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Lexer_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lexer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lexer);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_751dcd1d8ceb91d56c061711156caa89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_751dcd1d8ceb91d56c061711156caa89_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_c574207cc2e883086040c6beb0095313));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c574207cc2e883086040c6beb0095313);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Token_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_Token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Token);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce1b0803b9e228b4fef82f896164bef7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce1b0803b9e228b4fef82f896164bef7);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClassNotFound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClassNotFound_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_str_plain_Span_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Content_str_plain_Span_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_ellipsis_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenType);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_HighlightTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HighlightTheme);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Comment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Comment);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_86526b391335fdc0c0398b3a514e39fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86526b391335fdc0c0398b3a514e39fa);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Error);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Strong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Strong);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_bold));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bold);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Emph));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Emph);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_italic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_italic);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Heading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Heading);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddfbdadcd258c1ad23bf02a8f1ffed5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ddfbdadcd258c1ad23bf02a8f1ffed5a);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Subheading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Subheading);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Keyword));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Keyword);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9c6a7b6a85e848885bc57957b7ba837));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9c6a7b6a85e848885bc57957b7ba837);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_Constant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Constant);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_eba7c726ac03ec0ecf00c34517ff44df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eba7c726ac03ec0ecf00c34517ff44df);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Namespace);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_37fecedc5aba7ee0ac750608035669db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37fecedc5aba7ee0ac750608035669db);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_Number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Number);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_String));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_String);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Backtick));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Backtick);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b5351c2ad909e5e179612eba8b5895d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b5351c2ad909e5e179612eba8b5895d);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Doc);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_065a23aa207ef7acf7637a7b3e2ae029));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_065a23aa207ef7acf7637a7b3e2ae029);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Double);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_Name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Name);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Attribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Attribute);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Builtin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Builtin);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pseudo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pseudo);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Class);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_74ce21824157a49fe26d5723107f17d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74ce21824157a49fe26d5723107f17d6);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Decorator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Decorator);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Function));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Function);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_13e57f2c35849bb1688e0d318ee0cb79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13e57f2c35849bb1688e0d318ee0cb79);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_Magic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Magic);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tag);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Variable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Variable);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_f67fbe5199441d22866e2b7ab1d683da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f67fbe5199441d22866e2b7ab1d683da);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Operator);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Word));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Word);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2cc62dfd1aa2625e84f853a7f5b79df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2cc62dfd1aa2625e84f853a7f5b79df);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_735cf0fc0106fce633e7a3f51c95c385));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_735cf0fc0106fce633e7a3f51c95c385);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Whitespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Whitespace);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIDarkHighlightTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ANSIDarkHighlightTheme);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_55));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_55);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcc5acf04c71597c5572c6b497ee87f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcc5acf04c71597c5572c6b497ee87f0);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_red));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_red);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad86621028822c5e5d49fd453a3aa01f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad86621028822c5e5d49fd453a3aa01f);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_blue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_blue);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_f74f672e1e3c57e9bb83a66225965111));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f74f672e1e3c57e9bb83a66225965111);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_cyan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_cyan);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_magenta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_magenta);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_yellow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_yellow);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_bright_black));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_bright_black);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_green));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_green);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_default);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_yelllow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_yelllow);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_blow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_blow);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_greenb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_greenb);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSILightHighlightTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ANSILightHighlightTheme);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_94));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_94);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ans_red));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ans_red);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_079f27aa6fb5ac81561fafab355ad80a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_079f27aa6fb5ac81561fafab355ad80a);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_theme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_theme);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_tab_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tab_size);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_5f5e3bba8a002c6d030d698ae534c9e5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f5e3bba8a002c6d030d698ae534c9e5);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlight);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_4445e52ba608948f01227a6a0be6eb62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4445e52ba608948f01227a6a0be6eb62);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_46b3cfa65b9d0404d57791344101784a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_46b3cfa65b9d0404d57791344101784a_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_fb4a65d8f29fb1fa7a27ea3508b8c755_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb4a65d8f29fb1fa7a27ea3508b8c755_tuple);
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
static PyObject *module_var_accessor_textual$highlight$ClassNotFound(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassNotFound);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClassNotFound);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClassNotFound, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClassNotFound);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClassNotFound, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassNotFound);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassNotFound);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassNotFound);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$Content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$HighlightTheme(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_HighlightTheme);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HighlightTheme);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HighlightTheme, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HighlightTheme);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HighlightTheme, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_HighlightTheme);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_HighlightTheme);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HighlightTheme);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$Span(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Span);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Span);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Span, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Span);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Span, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Span);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Span);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Span);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$Token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$get_lexer_by_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_get_lexer_by_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_lexer_by_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_lexer_by_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_lexer_by_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_lexer_by_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_get_lexer_by_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_get_lexer_by_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_lexer_by_name);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$guess_language(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_language);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_guess_language);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_guess_language, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_guess_language);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_guess_language, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_language);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_language);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_language);
    }

    return result;
}

static PyObject *module_var_accessor_textual$highlight$guess_lexer_for_filename(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$highlight->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$highlight->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_lexer_for_filename);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$highlight->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_guess_lexer_for_filename);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_guess_lexer_for_filename, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_guess_lexer_for_filename);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_guess_lexer_for_filename, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_lexer_for_filename);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_lexer_for_filename);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_lexer_for_filename);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7634f0165c7c48fa781ce1419a44f985;
static PyCodeObject *code_objects_1da9306d0cec43c692dbc132bf7cfe99;
static PyCodeObject *code_objects_18dbd14a5f13cd7f557e5de022968691;
static PyCodeObject *code_objects_ef44df3b2f93d62c5b9399d22b47e43d;
static PyCodeObject *code_objects_ffc442130c99f2b7d37c27b573e8fd66;
static PyCodeObject *code_objects_c4a73c8099ca929d8e7a84995569feeb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4445e52ba608948f01227a6a0be6eb62); CHECK_OBJECT(module_filename_obj);
code_objects_7634f0165c7c48fa781ce1419a44f985 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0, mod_consts.const_str_digest_0c2d0046714986f4f66de1c0d2e5b7f0, NULL, NULL, 0, 0, 0);
code_objects_1da9306d0cec43c692dbc132bf7cfe99 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ANSIDarkHighlightTheme, mod_consts.const_str_plain_ANSIDarkHighlightTheme, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_18dbd14a5f13cd7f557e5de022968691 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ANSILightHighlightTheme, mod_consts.const_str_plain_ANSILightHighlightTheme, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ef44df3b2f93d62c5b9399d22b47e43d = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_HighlightTheme, mod_consts.const_str_plain_HighlightTheme, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ffc442130c99f2b7d37c27b573e8fd66 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_guess_language, mod_consts.const_str_plain_guess_language, mod_consts.const_tuple_46b3cfa65b9d0404d57791344101784a_tuple, NULL, 2, 0, 0);
code_objects_c4a73c8099ca929d8e7a84995569feeb = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_highlight, mod_consts.const_str_plain_highlight, mod_consts.const_tuple_fb4a65d8f29fb1fa7a27ea3508b8c755_tuple, NULL, 1, 4, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$highlight$$$function__1_guess_language(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$highlight$$$function__2_highlight(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$highlight$$$function__1_guess_language(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_code = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_lexer = NULL;
PyObject *var_lexer_name = NULL;
PyObject *var_guess_lexer = NULL;
PyObject *var__ = NULL;
PyObject *var_ext = NULL;
PyObject *var_extension = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$highlight$$$function__1_guess_language;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_textual$highlight$$$function__1_guess_language = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$highlight$$$function__1_guess_language)) {
    Py_XDECREF(cache_frame_frame_textual$highlight$$$function__1_guess_language);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$highlight$$$function__1_guess_language == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$highlight$$$function__1_guess_language = MAKE_FUNCTION_FRAME(tstate, code_objects_ffc442130c99f2b7d37c27b573e8fd66, module_textual$highlight, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$highlight$$$function__1_guess_language->m_type_description == NULL);
frame_frame_textual$highlight$$$function__1_guess_language = cache_frame_frame_textual$highlight$$$function__1_guess_language;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight$$$function__1_guess_language);
assert(Py_REFCNT(frame_frame_textual$highlight$$$function__1_guess_language) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_path);
tmp_truth_name_1 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 145;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_splitext, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_neg_1;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, -1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_5e69e1508571d7ccdbf3586e267dd342;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = mod_consts.const_str_plain_scss;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_lexer == NULL);
Py_INCREF(tmp_assign_source_1);
var_lexer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_plain_default;
assert(var_lexer_name == NULL);
Py_INCREF(tmp_assign_source_2);
var_lexer_name = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_code);
tmp_truth_name_2 = CHECK_IF_TRUE(par_code);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooo";
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
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_path);
tmp_truth_name_3 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_textual$highlight$guess_lexer_for_filename(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_guess_lexer_for_filename);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
CHECK_OBJECT(par_code);
tmp_args_element_value_3 = par_code;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_lexer;
    assert(old != NULL);
    var_lexer = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_textual$highlight$ClassNotFound(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClassNotFound);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 153;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$highlight$$$function__1_guess_language->m_frame)) {
        frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_3;
branch_no_4:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_lexer);
tmp_cmp_expr_left_3 = var_lexer;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_guess_lexer_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 159;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_guess_lexer,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_guess_lexer);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_guess_lexer == NULL);
var_guess_lexer = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_guess_lexer);
tmp_called_value_2 = var_guess_lexer;
CHECK_OBJECT(par_code);
tmp_args_element_value_4 = par_code;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 162;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_lexer;
    assert(old != NULL);
    var_lexer = tmp_assign_source_5;
    Py_DECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 161;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$highlight$$$function__1_guess_language->m_frame)) {
        frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
branch_no_5:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
int tmp_truth_name_4;
CHECK_OBJECT(var_lexer);
tmp_operand_value_1 = var_lexer;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_path);
tmp_truth_name_4 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(par_path);
tmp_args_element_value_5 = par_path;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 168;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_splitext, tmp_args_element_value_5);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_9);
var__ = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_ext == NULL);
Py_INCREF(tmp_assign_source_10);
var_ext = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
CHECK_OBJECT(var_ext);
tmp_truth_name_5 = CHECK_IF_TRUE(var_ext);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_ext);
tmp_expression_value_3 = var_ext;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lstrip);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 170;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 170;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
assert(var_extension == NULL);
var_extension = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = module_var_accessor_textual$highlight$get_lexer_by_name(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_lexer_by_name);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_extension);
tmp_args_element_value_6 = var_extension;
frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = 171;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_lexer;
    assert(old != NULL);
    var_lexer = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_8:;
goto try_end_7;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__1_guess_language, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = module_var_accessor_textual$highlight$ClassNotFound(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClassNotFound);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 167;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$highlight$$$function__1_guess_language->m_frame)) {
        frame_frame_textual$highlight$$$function__1_guess_language->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_9;
branch_no_9:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
branch_no_7:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_6;
CHECK_OBJECT(var_lexer);
tmp_truth_name_6 = CHECK_IF_TRUE(var_lexer);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_7;
CHECK_OBJECT(var_lexer);
tmp_expression_value_4 = var_lexer;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_aliases);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 176;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_lexer);
tmp_expression_value_6 = var_lexer;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_aliases);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lexer_name;
    assert(old != NULL);
    var_lexer_name = tmp_assign_source_13;
    Py_DECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_lexer);
tmp_expression_value_7 = var_lexer;
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_name);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lexer_name;
    assert(old != NULL);
    var_lexer_name = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_end_11:;
branch_no_10:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__1_guess_language, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight$$$function__1_guess_language->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__1_guess_language, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$highlight$$$function__1_guess_language,
    type_description_1,
    par_code,
    par_path,
    var_lexer,
    var_lexer_name,
    var_guess_lexer,
    var__,
    var_ext,
    var_extension
);


// Release cached frame if used for exception.
if (frame_frame_textual$highlight$$$function__1_guess_language == cache_frame_frame_textual$highlight$$$function__1_guess_language) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$highlight$$$function__1_guess_language);
    cache_frame_frame_textual$highlight$$$function__1_guess_language = NULL;
}

assertFrameObject(frame_frame_textual$highlight$$$function__1_guess_language);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_lexer_name);
tmp_return_value = var_lexer_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_lexer);
var_lexer = NULL;
Py_XDECREF(var_lexer_name);
var_lexer_name = NULL;
Py_XDECREF(var_guess_lexer);
var_guess_lexer = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
Py_XDECREF(var_extension);
var_extension = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lexer);
var_lexer = NULL;
Py_XDECREF(var_lexer_name);
var_lexer_name = NULL;
Py_XDECREF(var_guess_lexer);
var_guess_lexer = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
Py_XDECREF(var_extension);
var_extension = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$highlight$$$function__2_highlight(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_code = python_pars[0];
PyObject *par_language = python_pars[1];
PyObject *par_path = python_pars[2];
PyObject *par_theme = python_pars[3];
PyObject *par_tab_size = python_pars[4];
PyObject *var_spans = NULL;
PyObject *var_lexer = NULL;
PyObject *var_token_start = NULL;
PyObject *var_styles = NULL;
PyObject *var_token_type = NULL;
PyObject *var_token = NULL;
PyObject *var_token_end = NULL;
PyObject *var_style = NULL;
PyObject *var_highlighted_code = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_assignment_expr_2__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$highlight$$$function__2_highlight;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_textual$highlight$$$function__2_highlight = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$highlight$$$function__2_highlight)) {
    Py_XDECREF(cache_frame_frame_textual$highlight$$$function__2_highlight);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$highlight$$$function__2_highlight == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$highlight$$$function__2_highlight = MAKE_FUNCTION_FRAME(tstate, code_objects_c4a73c8099ca929d8e7a84995569feeb, module_textual$highlight, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$highlight$$$function__2_highlight->m_type_description == NULL);
frame_frame_textual$highlight$$$function__2_highlight = cache_frame_frame_textual$highlight$$$function__2_highlight;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight$$$function__2_highlight);
assert(Py_REFCNT(frame_frame_textual$highlight$$$function__2_highlight) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_language);
tmp_operand_value_1 = par_language;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$highlight$guess_language(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_guess_language);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_args_element_value_1 = par_code;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_language;
    assert(old != NULL);
    par_language = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_language);
tmp_cmp_expr_left_1 = par_language;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 206;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
CHECK_OBJECT(par_code);
tmp_expression_value_1 = par_code;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 207;
tmp_iterable_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_code;
    assert(old != NULL);
    par_code = tmp_assign_source_2;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_3 = module_var_accessor_textual$highlight$get_lexer_by_name(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_lexer_by_name);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_language);
tmp_kw_call_arg_value_0_1 = par_language;
tmp_kw_call_dict_value_0_1 = Py_False;
tmp_kw_call_dict_value_1_1 = Py_True;
CHECK_OBJECT(par_tab_size);
tmp_kw_call_dict_value_2_1 = par_tab_size;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 209;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_lexer == NULL);
var_lexer = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__2_highlight, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__2_highlight, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_textual$highlight$ClassNotFound(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClassNotFound);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_called_value_4 = module_var_accessor_textual$highlight$get_lexer_by_name(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_lexer_by_name);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_value_0_1 = Py_False;
tmp_kw_call_value_1_1 = Py_True;
CHECK_OBJECT(par_tab_size);
tmp_kw_call_value_2_1 = par_tab_size;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 216;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_text_tuple, kw_values, mod_consts.const_tuple_str_plain_stripnl_str_plain_ensurenl_str_plain_tabsize_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
assert(var_lexer == NULL);
var_lexer = tmp_assign_source_4;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 208;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$highlight$$$function__2_highlight->m_frame)) {
        frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_3;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
assert(var_token_start == NULL);
Py_INCREF(tmp_assign_source_5);
var_token_start = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_spans == NULL);
var_spans = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_theme);
tmp_expression_value_2 = par_theme;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_STYLES);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_styles == NULL);
var_styles = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_lexer);
tmp_called_instance_1 = var_lexer;
CHECK_OBJECT(par_code);
tmp_args_element_value_3 = par_code;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 227;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_tokens, tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 227;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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



exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_token_type;
    var_token_type = tmp_assign_source_13;
    Py_INCREF(var_token_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_14;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_len_arg_1;
if (var_token_start == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_add_expr_left_1 = var_token_start;
CHECK_OBJECT(var_token);
tmp_len_arg_1 = var_token;
tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_token_end;
    var_token_end = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
if (var_styles == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_3 = var_styles;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
if (var_token_type == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_4 = var_token_type;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 230;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_17 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_style;
    var_style = tmp_assign_source_17;
    Py_INCREF(var_style);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 230;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
if (var_spans == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_spans);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_4 = var_spans;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_7 = module_var_accessor_textual$highlight$Span(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Span);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
if (var_token_start == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_start);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_6 = var_token_start;
CHECK_OBJECT(var_token_end);
tmp_args_element_value_7 = var_token_end;
CHECK_OBJECT(var_style);
tmp_args_element_value_8 = var_style;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 231;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 231;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto loop_end_2;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_5;
if (var_token_type == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_type);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_5 = var_token_type;
tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_parent);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_assignment_expr_2__value;
    tmp_assignment_expr_2__value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_assign_source_19 = tmp_assignment_expr_2__value;
{
    PyObject *old = var_token_type;
    var_token_type = tmp_assign_source_19;
    Py_INCREF(var_token_type);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_cmp_expr_left_3 = tmp_assignment_expr_2__value;
Py_INCREF(tmp_cmp_expr_left_3);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_assignment_expr_2__value);
CHECK_OBJECT(tmp_assignment_expr_2__value);
Py_DECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_end_2;
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(var_token_end);
tmp_assign_source_20 = var_token_end;
{
    PyObject *old = var_token_start;
    var_token_start = tmp_assign_source_20;
    Py_INCREF(var_token_start);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_8 = module_var_accessor_textual$highlight$Content(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Content);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_kw_call_arg_value_0_2 = par_code;
if (var_spans == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_spans);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_2 = var_spans;
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 237;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_spans_tuple);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$highlight$$$function__2_highlight->m_frame.f_lineno = 237;
tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_stylize_before,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_00ada9d4f5d3904c325644c530265a67_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_highlighted_code == NULL);
var_highlighted_code = tmp_assign_source_21;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$function__2_highlight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight$$$function__2_highlight->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$function__2_highlight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$highlight$$$function__2_highlight,
    type_description_1,
    par_code,
    par_language,
    par_path,
    par_theme,
    par_tab_size,
    var_spans,
    var_lexer,
    var_token_start,
    var_styles,
    var_token_type,
    var_token,
    var_token_end,
    var_style,
    var_highlighted_code
);


// Release cached frame if used for exception.
if (frame_frame_textual$highlight$$$function__2_highlight == cache_frame_frame_textual$highlight$$$function__2_highlight) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$highlight$$$function__2_highlight);
    cache_frame_frame_textual$highlight$$$function__2_highlight = NULL;
}

assertFrameObject(frame_frame_textual$highlight$$$function__2_highlight);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_highlighted_code);
tmp_return_value = var_highlighted_code;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_code);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
par_code = NULL;
CHECK_OBJECT(par_language);
CHECK_OBJECT(par_language);
Py_DECREF(par_language);
par_language = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
CHECK_OBJECT(var_lexer);
CHECK_OBJECT(var_lexer);
Py_DECREF(var_lexer);
var_lexer = NULL;
Py_XDECREF(var_token_start);
var_token_start = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_token_type);
var_token_type = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_end);
var_token_end = NULL;
Py_XDECREF(var_style);
var_style = NULL;
CHECK_OBJECT(var_highlighted_code);
CHECK_OBJECT(var_highlighted_code);
Py_DECREF(var_highlighted_code);
var_highlighted_code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_code);
par_code = NULL;
Py_XDECREF(par_language);
par_language = NULL;
Py_XDECREF(var_spans);
var_spans = NULL;
Py_XDECREF(var_lexer);
var_lexer = NULL;
Py_XDECREF(var_token_start);
var_token_start = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_token_type);
var_token_type = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_end);
var_token_end = NULL;
Py_XDECREF(var_style);
var_style = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_theme);
Py_DECREF(par_theme);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_theme);
Py_DECREF(par_theme);
CHECK_OBJECT(par_tab_size);
Py_DECREF(par_tab_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$highlight$$$function__1_guess_language(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$highlight$$$function__1_guess_language,
        mod_consts.const_str_plain_guess_language,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ffc442130c99f2b7d37c27b573e8fd66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$highlight,
        mod_consts.const_str_digest_3c29812afebba2073e980a1ad84d9fc1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$highlight$$$function__2_highlight(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$highlight$$$function__2_highlight,
        mod_consts.const_str_plain_highlight,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c4a73c8099ca929d8e7a84995569feeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$highlight,
        mod_consts.const_str_digest_699ae2e886c12ded1704edfeee6539bc,
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

static function_impl_code const function_table_textual$highlight[] = {
impl_textual$highlight$$$function__1_guess_language,
impl_textual$highlight$$$function__2_highlight,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$highlight);
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
        module_textual$highlight,
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
        function_table_textual$highlight,
        sizeof(function_table_textual$highlight) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.highlight";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$highlight(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$highlight");

    // Store the module for future use.
    module_textual$highlight = module;

    moduledict_textual$highlight = MODULE_DICT(module_textual$highlight);

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
        PRINT_STRING("textual$highlight: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$highlight: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$highlight: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.highlight" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$highlight\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$highlight,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$highlight,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$highlight,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$highlight,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$highlight,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$highlight);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$highlight);
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

        UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
struct Nuitka_FrameObject *frame_frame_textual$highlight;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$highlight$$$class__1_HighlightTheme_16 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$highlight$$$class__1_HighlightTheme_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$highlight = MAKE_MODULE_FRAME(code_objects_7634f0165c7c48fa781ce1419a44f985, module_textual$highlight);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight);
assert(Py_REFCNT(frame_frame_textual$highlight) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$highlight$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$highlight$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_3b09836d09e26d1d328b3215b0b6b24b;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Lexer_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$highlight->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_Lexer,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Lexer);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Lexer, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_bc2c8ffc848309b89316fe6d6faf27c6;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_751dcd1d8ceb91d56c061711156caa89_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$highlight->m_frame.f_lineno = 7;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_get_lexer_by_name,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_get_lexer_by_name);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_get_lexer_by_name, tmp_assign_source_9);
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
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_guess_lexer_for_filename,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_guess_lexer_for_filename);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_lexer_for_filename, tmp_assign_source_10);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_c574207cc2e883086040c6beb0095313;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Token_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$highlight->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_Token,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Token);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Token, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_ce1b0803b9e228b4fef82f896164bef7;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ClassNotFound_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$highlight->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_ClassNotFound,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ClassNotFound);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassNotFound, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$highlight;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Content_str_plain_Span_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$highlight->m_frame.f_lineno = 11;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_Content,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Content);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Content, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$highlight,
        mod_consts.const_str_plain_Span,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Span);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_Span, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_textual$highlight$Tuple(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_str_ellipsis_tuple;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenType, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$highlight$$$class__1_HighlightTheme_16 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_HighlightTheme;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$highlight$$$class__1_HighlightTheme_2 = MAKE_CLASS_FRAME(tstate, code_objects_ef44df3b2f93d62c5b9399d22b47e43d, module_textual$highlight, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight$$$class__1_HighlightTheme_2);
assert(Py_REFCNT(frame_frame_textual$highlight$$$class__1_HighlightTheme_2) == 2);

// Framed code:
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Comment);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_1 = mod_consts.const_str_digest_86526b391335fdc0c0398b3a514e39fa;
tmp_dictset_value = _PyDict_NewPresized( 32 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Error);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_5 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Strong);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_bold;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_7 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Emph);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_9 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_5678e64b1bbb9919a3b8b9db0ec54d84;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_11 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Heading);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_ddfbdadcd258c1ad23bf02a8f1ffed5a;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_13 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Subheading);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_14 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Keyword);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_e9c6a7b6a85e848885bc57957b7ba837;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_16 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Keyword);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_eba7c726ac03ec0ecf00c34517ff44df;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_18 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Keyword);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Namespace);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_37fecedc5aba7ee0ac750608035669db;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_20 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Keyword);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Type);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_bold;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_22 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Number);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_25 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Backtick);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_86526b391335fdc0c0398b3a514e39fa;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_27 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_9b5351c2ad909e5e179612eba8b5895d;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_30 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_Doc);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_065a23aa207ef7acf7637a7b3e2ae029;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_33 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_Double);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_9b5351c2ad909e5e179612eba8b5895d;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_34 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_Name);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_3bd796f4cf2c894b69ce7545584a2e0e;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_36 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_Name);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_Attribute);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_38 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_Name);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_e9c6a7b6a85e848885bc57957b7ba837;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_41 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_Name);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_Pseudo);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_43 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_Name);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_Class);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_74ce21824157a49fe26d5723107f17d6;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_45 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_Name);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_37fecedc5aba7ee0ac750608035669db;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_47 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_Name);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_Decorator);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_49 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_Name);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_13e57f2c35849bb1688e0d318ee0cb79;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_52 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_Name);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_Magic);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_13e57f2c35849bb1688e0d318ee0cb79;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_54 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_Name);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_Tag);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_fc6ff0f1afb47f267aab4e7955a4f073;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_56 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_Name);
if (tmp_expression_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_Variable);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_f67fbe5199441d22866e2b7ab1d683da;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_57 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_Number);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_6cc8bc4ce7fc955c65a3e5f785f2e7c0;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_58 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_Operator);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_plain_bold;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_60 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_Operator);
if (tmp_expression_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_Word);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_b2cc62dfd1aa2625e84f853a7f5b79df;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_61 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_String);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = mod_consts.const_str_digest_735cf0fc0106fce633e7a3f51c95c385;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_expression_value_62 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_Whitespace);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, mod_consts.const_str_plain_STYLES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_textual$highlight$$$class__1_HighlightTheme_16, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_STYLES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$class__1_HighlightTheme_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight$$$class__1_HighlightTheme_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$class__1_HighlightTheme_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$highlight$$$class__1_HighlightTheme_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$highlight$$$class__1_HighlightTheme_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_textual$highlight$$$class__1_HighlightTheme_16, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_HighlightTheme;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$highlight$$$class__1_HighlightTheme_16;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$highlight->m_frame.f_lineno = 16;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$highlight$$$class__1_HighlightTheme_16);
locals_textual$highlight$$$class__1_HighlightTheme_16 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$highlight$$$class__1_HighlightTheme_16);
locals_textual$highlight$$$class__1_HighlightTheme_16 = NULL;
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
exception_lineno = 16;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_HighlightTheme, tmp_assign_source_19);
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_textual$highlight$HighlightTheme(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_63 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_64 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_ANSIDarkHighlightTheme;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$highlight->m_frame.f_lineno = 55;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_66 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_67;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_68;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_68 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
frame_frame_textual$highlight->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_ANSIDarkHighlightTheme;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_55;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3 = MAKE_CLASS_FRAME(tstate, code_objects_1da9306d0cec43c692dbc132bf7cfe99, module_textual$highlight, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3);
assert(Py_REFCNT(frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3) == 2);

// Framed code:
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_69;
tmp_expression_value_69 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_69 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_Comment);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dict_value_2 = mod_consts.const_str_digest_dcc5acf04c71597c5572c6b497ee87f0;
tmp_dictset_value = _PyDict_NewPresized( 32 );
{
PyObject *tmp_expression_value_70;
PyObject *tmp_expression_value_71;
PyObject *tmp_expression_value_72;
PyObject *tmp_expression_value_73;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_expression_value_76;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
PyObject *tmp_expression_value_80;
PyObject *tmp_expression_value_81;
PyObject *tmp_expression_value_82;
PyObject *tmp_expression_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_expression_value_85;
PyObject *tmp_expression_value_86;
PyObject *tmp_expression_value_87;
PyObject *tmp_expression_value_88;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyObject *tmp_expression_value_91;
PyObject *tmp_expression_value_92;
PyObject *tmp_expression_value_93;
PyObject *tmp_expression_value_94;
PyObject *tmp_expression_value_95;
PyObject *tmp_expression_value_96;
PyObject *tmp_expression_value_97;
PyObject *tmp_expression_value_98;
PyObject *tmp_expression_value_99;
PyObject *tmp_expression_value_100;
PyObject *tmp_expression_value_101;
PyObject *tmp_expression_value_102;
PyObject *tmp_expression_value_103;
PyObject *tmp_expression_value_104;
PyObject *tmp_expression_value_105;
PyObject *tmp_expression_value_106;
PyObject *tmp_expression_value_107;
PyObject *tmp_expression_value_108;
PyObject *tmp_expression_value_109;
PyObject *tmp_expression_value_110;
PyObject *tmp_expression_value_111;
PyObject *tmp_expression_value_112;
PyObject *tmp_expression_value_113;
PyObject *tmp_expression_value_114;
PyObject *tmp_expression_value_115;
PyObject *tmp_expression_value_116;
PyObject *tmp_expression_value_117;
PyObject *tmp_expression_value_118;
PyObject *tmp_expression_value_119;
PyObject *tmp_expression_value_120;
PyObject *tmp_expression_value_121;
PyObject *tmp_expression_value_122;
PyObject *tmp_expression_value_123;
PyObject *tmp_expression_value_124;
PyObject *tmp_expression_value_125;
PyObject *tmp_expression_value_126;
PyObject *tmp_expression_value_127;
PyObject *tmp_expression_value_128;
PyObject *tmp_expression_value_129;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_70 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_70 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_70 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_70);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_72 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_72 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_72 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_72);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_expression_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_Strong);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_bold;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_74 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_74 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_expression_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_Emph);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_76 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_76 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_76 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_76);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
if (tmp_expression_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_78 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_78 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_expression_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_Heading);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_digest_ad86621028822c5e5d49fd453a3aa01f;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_80 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_80 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_expression_value_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_Subheading);
CHECK_OBJECT(tmp_expression_value_79);
Py_DECREF(tmp_expression_value_79);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_blue;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_81 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_81 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_81 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_81);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_digest_f74f672e1e3c57e9bb83a66225965111;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_83 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_83 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_83 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_83);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_83);
Py_DECREF(tmp_expression_value_83);
if (tmp_expression_value_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_85 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_85 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_85 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_85);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_expression_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_Namespace);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_magenta;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_87 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_87 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_87 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_87 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_87 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_87);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_87);
Py_DECREF(tmp_expression_value_87);
if (tmp_expression_value_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_Type);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_89 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_89 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_89 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_89);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
if (tmp_expression_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_Number);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_yellow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_92 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_92 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_92 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_92);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_expression_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_expression_value_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_Backtick);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_bright_black;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_94 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_94 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_94 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_94);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_94);
Py_DECREF(tmp_expression_value_94);
if (tmp_expression_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_green;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_97 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_97 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_97 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_97);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_97);
Py_DECREF(tmp_expression_value_97);
if (tmp_expression_value_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_expression_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_Doc);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_100 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_100 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_100 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_100);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_100);
Py_DECREF(tmp_expression_value_100);
if (tmp_expression_value_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_99);
Py_DECREF(tmp_expression_value_99);
if (tmp_expression_value_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_Double);
CHECK_OBJECT(tmp_expression_value_98);
Py_DECREF(tmp_expression_value_98);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_green;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_101 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_101 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_101 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_101);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_101);
Py_DECREF(tmp_expression_value_101);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_103 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_103 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_103 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_103 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_103 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_103);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_103);
Py_DECREF(tmp_expression_value_103);
if (tmp_expression_value_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_Attribute);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_yelllow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_105 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_105 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_105 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_105);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_105);
Py_DECREF(tmp_expression_value_105);
if (tmp_expression_value_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_104);
Py_DECREF(tmp_expression_value_104);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_108 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_108 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_108 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_108 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_108 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_108);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_expression_value_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_107);
Py_DECREF(tmp_expression_value_107);
if (tmp_expression_value_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain_Pseudo);
CHECK_OBJECT(tmp_expression_value_106);
Py_DECREF(tmp_expression_value_106);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_110 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_110 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_110 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_110 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_110);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
if (tmp_expression_value_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_Class);
CHECK_OBJECT(tmp_expression_value_109);
Py_DECREF(tmp_expression_value_109);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_yellow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_112 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_112 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_112 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_112 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_112);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_112);
Py_DECREF(tmp_expression_value_112);
if (tmp_expression_value_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_111);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_114 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_114 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_114 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_114 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_114);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_expression_value_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts.const_str_plain_Decorator);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_116 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_116 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_116 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_116 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_116 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_116);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_116);
Py_DECREF(tmp_expression_value_116);
if (tmp_expression_value_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_115);
Py_DECREF(tmp_expression_value_115);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_blue;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_119 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_119 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_119 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_119 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_119 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_119);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_119);
Py_DECREF(tmp_expression_value_119);
if (tmp_expression_value_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_118);
Py_DECREF(tmp_expression_value_118);
if (tmp_expression_value_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain_Magic);
CHECK_OBJECT(tmp_expression_value_117);
Py_DECREF(tmp_expression_value_117);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_blow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_121 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_121 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_121 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_121 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_121 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_121);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_121);
Py_DECREF(tmp_expression_value_121);
if (tmp_expression_value_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts.const_str_plain_Tag);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_123 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_123 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_123 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_123 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_123 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_123);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_123);
Py_DECREF(tmp_expression_value_123);
if (tmp_expression_value_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts.const_str_plain_Variable);
CHECK_OBJECT(tmp_expression_value_122);
Py_DECREF(tmp_expression_value_122);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_124 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_124 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_124 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_124 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_124 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_124);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts.const_str_plain_Number);
CHECK_OBJECT(tmp_expression_value_124);
Py_DECREF(tmp_expression_value_124);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_yellow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_125 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_125 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_125 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_125);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts.const_str_plain_Operator);
CHECK_OBJECT(tmp_expression_value_125);
Py_DECREF(tmp_expression_value_125);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_127 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_127 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_127 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_127);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_expression_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts.const_str_plain_Operator);
CHECK_OBJECT(tmp_expression_value_127);
Py_DECREF(tmp_expression_value_127);
if (tmp_expression_value_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts.const_str_plain_Word);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_magenta;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_128 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_128 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_128 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_128 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_128);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_128);
Py_DECREF(tmp_expression_value_128);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = mod_consts.const_str_plain_ansi_greenb;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_expression_value_129 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_Token);

if (tmp_expression_value_129 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_129 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_129 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_129 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_129);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain_Whitespace);
CHECK_OBJECT(tmp_expression_value_129);
Py_DECREF(tmp_expression_value_129);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_dict_value_2 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain_STYLES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_STYLES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$highlight$$$class__2_ANSIDarkHighlightTheme_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_ANSIDarkHighlightTheme;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$highlight->m_frame.f_lineno = 55;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_27 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55);
locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55);
locals_textual$highlight$$$class__2_ANSIDarkHighlightTheme_55 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 55;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIDarkHighlightTheme, tmp_assign_source_27);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_textual$highlight$HighlightTheme(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HighlightTheme);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_9;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_130;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_130 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_130, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_131;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_131, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_132;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_132 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_ANSILightHighlightTheme;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$highlight->m_frame.f_lineno = 94;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_133;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_133 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_133, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_134;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_134 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_134, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_135;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_135 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_135 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_135);
Py_DECREF(tmp_expression_value_135);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_9;
}
frame_frame_textual$highlight->m_frame.f_lineno = 94;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_34;
}
branch_end_4:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_3cefc9b503fcc919c5ea0ca9ef7e9daa;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_6d0fb324c669bb2744d0f72d25e8b426;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_ANSILightHighlightTheme;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_94;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4 = MAKE_CLASS_FRAME(tstate, code_objects_18dbd14a5f13cd7f557e5de022968691, module_textual$highlight, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4);
assert(Py_REFCNT(frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4) == 2);

// Framed code:
{
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_136;
tmp_expression_value_136 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_136 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_136 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_136 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_136 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_136);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain_Comment);
CHECK_OBJECT(tmp_expression_value_136);
Py_DECREF(tmp_expression_value_136);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dict_value_3 = mod_consts.const_str_digest_dcc5acf04c71597c5572c6b497ee87f0;
tmp_dictset_value = _PyDict_NewPresized( 32 );
{
PyObject *tmp_expression_value_137;
PyObject *tmp_expression_value_138;
PyObject *tmp_expression_value_139;
PyObject *tmp_expression_value_140;
PyObject *tmp_expression_value_141;
PyObject *tmp_expression_value_142;
PyObject *tmp_expression_value_143;
PyObject *tmp_expression_value_144;
PyObject *tmp_expression_value_145;
PyObject *tmp_expression_value_146;
PyObject *tmp_expression_value_147;
PyObject *tmp_expression_value_148;
PyObject *tmp_expression_value_149;
PyObject *tmp_expression_value_150;
PyObject *tmp_expression_value_151;
PyObject *tmp_expression_value_152;
PyObject *tmp_expression_value_153;
PyObject *tmp_expression_value_154;
PyObject *tmp_expression_value_155;
PyObject *tmp_expression_value_156;
PyObject *tmp_expression_value_157;
PyObject *tmp_expression_value_158;
PyObject *tmp_expression_value_159;
PyObject *tmp_expression_value_160;
PyObject *tmp_expression_value_161;
PyObject *tmp_expression_value_162;
PyObject *tmp_expression_value_163;
PyObject *tmp_expression_value_164;
PyObject *tmp_expression_value_165;
PyObject *tmp_expression_value_166;
PyObject *tmp_expression_value_167;
PyObject *tmp_expression_value_168;
PyObject *tmp_expression_value_169;
PyObject *tmp_expression_value_170;
PyObject *tmp_expression_value_171;
PyObject *tmp_expression_value_172;
PyObject *tmp_expression_value_173;
PyObject *tmp_expression_value_174;
PyObject *tmp_expression_value_175;
PyObject *tmp_expression_value_176;
PyObject *tmp_expression_value_177;
PyObject *tmp_expression_value_178;
PyObject *tmp_expression_value_179;
PyObject *tmp_expression_value_180;
PyObject *tmp_expression_value_181;
PyObject *tmp_expression_value_182;
PyObject *tmp_expression_value_183;
PyObject *tmp_expression_value_184;
PyObject *tmp_expression_value_185;
PyObject *tmp_expression_value_186;
PyObject *tmp_expression_value_187;
PyObject *tmp_expression_value_188;
PyObject *tmp_expression_value_189;
PyObject *tmp_expression_value_190;
PyObject *tmp_expression_value_191;
PyObject *tmp_expression_value_192;
PyObject *tmp_expression_value_193;
PyObject *tmp_expression_value_194;
PyObject *tmp_expression_value_195;
PyObject *tmp_expression_value_196;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_137 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_137 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_137 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_137);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_137);
Py_DECREF(tmp_expression_value_137);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ans_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_139 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_139 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_139 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_139 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_139);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_139);
Py_DECREF(tmp_expression_value_139);
if (tmp_expression_value_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts.const_str_plain_Strong);
CHECK_OBJECT(tmp_expression_value_138);
Py_DECREF(tmp_expression_value_138);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_bold;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_141 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_141 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_141 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_141);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_141);
Py_DECREF(tmp_expression_value_141);
if (tmp_expression_value_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts.const_str_plain_Emph);
CHECK_OBJECT(tmp_expression_value_140);
Py_DECREF(tmp_expression_value_140);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_143 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_143 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_143 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_143);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_143);
Py_DECREF(tmp_expression_value_143);
if (tmp_expression_value_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_142);
Py_DECREF(tmp_expression_value_142);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_145 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_145 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_145 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_145 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_145 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_145);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_145);
Py_DECREF(tmp_expression_value_145);
if (tmp_expression_value_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts.const_str_plain_Heading);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_ad86621028822c5e5d49fd453a3aa01f;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_147 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_147 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_147 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_147 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_147 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_147);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain_Generic);
CHECK_OBJECT(tmp_expression_value_147);
Py_DECREF(tmp_expression_value_147);
if (tmp_expression_value_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts.const_str_plain_Subheading);
CHECK_OBJECT(tmp_expression_value_146);
Py_DECREF(tmp_expression_value_146);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_blue;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_148 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_148 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_148 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_148 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_148);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_148);
Py_DECREF(tmp_expression_value_148);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_f74f672e1e3c57e9bb83a66225965111;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_150 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_150 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_150 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_150 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_150 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_150);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_150);
Py_DECREF(tmp_expression_value_150);
if (tmp_expression_value_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_149);
Py_DECREF(tmp_expression_value_149);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_152 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_152 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_152 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_152);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_152);
Py_DECREF(tmp_expression_value_152);
if (tmp_expression_value_151 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts.const_str_plain_Namespace);
CHECK_OBJECT(tmp_expression_value_151);
Py_DECREF(tmp_expression_value_151);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_magenta;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_154 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_154 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_154 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_154 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_154);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts.const_str_plain_Keyword);
CHECK_OBJECT(tmp_expression_value_154);
Py_DECREF(tmp_expression_value_154);
if (tmp_expression_value_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain_Type);
CHECK_OBJECT(tmp_expression_value_153);
Py_DECREF(tmp_expression_value_153);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_156 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_156 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_156 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_156 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_156 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_156);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_156);
Py_DECREF(tmp_expression_value_156);
if (tmp_expression_value_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts.const_str_plain_Number);
CHECK_OBJECT(tmp_expression_value_155);
Py_DECREF(tmp_expression_value_155);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_159 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_159 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_159 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_159 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_159 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_159);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_159);
Py_DECREF(tmp_expression_value_159);
if (tmp_expression_value_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_158);
Py_DECREF(tmp_expression_value_158);
if (tmp_expression_value_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts.const_str_plain_Backtick);
CHECK_OBJECT(tmp_expression_value_157);
Py_DECREF(tmp_expression_value_157);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_bright_black;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_161 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_161 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_161 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_161 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_161 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_161);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_161);
Py_DECREF(tmp_expression_value_161);
if (tmp_expression_value_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_160);
Py_DECREF(tmp_expression_value_160);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_green;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_164 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_164 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_164 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_164 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_164 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_164);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_164);
Py_DECREF(tmp_expression_value_164);
if (tmp_expression_value_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_163);
Py_DECREF(tmp_expression_value_163);
if (tmp_expression_value_162 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts.const_str_plain_Doc);
CHECK_OBJECT(tmp_expression_value_162);
Py_DECREF(tmp_expression_value_162);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_c16d9d77f3dcdc52ffd38ef01afe2f6d;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_167 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_167 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_167 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_167 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_167 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_167);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts.const_str_plain_Literal);
CHECK_OBJECT(tmp_expression_value_167);
Py_DECREF(tmp_expression_value_167);
if (tmp_expression_value_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_166);
Py_DECREF(tmp_expression_value_166);
if (tmp_expression_value_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain_Double);
CHECK_OBJECT(tmp_expression_value_165);
Py_DECREF(tmp_expression_value_165);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_green;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_168 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_168 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_168 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_168 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_168 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_168);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_168);
Py_DECREF(tmp_expression_value_168);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_170 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_170 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_170 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_170 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_170 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_170);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_170);
Py_DECREF(tmp_expression_value_170);
if (tmp_expression_value_169 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts.const_str_plain_Attribute);
CHECK_OBJECT(tmp_expression_value_169);
Py_DECREF(tmp_expression_value_169);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_yelllow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_172 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_172 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_172 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_172 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_172 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_172);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_172);
Py_DECREF(tmp_expression_value_172);
if (tmp_expression_value_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_171);
Py_DECREF(tmp_expression_value_171);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_cyan;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_175 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_175 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_175 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_175 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_175 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_175);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_175);
Py_DECREF(tmp_expression_value_175);
if (tmp_expression_value_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts.const_str_plain_Builtin);
CHECK_OBJECT(tmp_expression_value_174);
Py_DECREF(tmp_expression_value_174);
if (tmp_expression_value_173 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts.const_str_plain_Pseudo);
CHECK_OBJECT(tmp_expression_value_173);
Py_DECREF(tmp_expression_value_173);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_italic;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_177 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_177 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_177 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_177 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_177 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_177);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_177);
Py_DECREF(tmp_expression_value_177);
if (tmp_expression_value_176 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts.const_str_plain_Class);
CHECK_OBJECT(tmp_expression_value_176);
Py_DECREF(tmp_expression_value_176);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_179 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_179 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_179 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_179 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_179 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_179);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_179);
Py_DECREF(tmp_expression_value_179);
if (tmp_expression_value_178 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts.const_str_plain_Constant);
CHECK_OBJECT(tmp_expression_value_178);
Py_DECREF(tmp_expression_value_178);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_red;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_181 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_181 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_181 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_181 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_181 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_181);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_181);
Py_DECREF(tmp_expression_value_181);
if (tmp_expression_value_180 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts.const_str_plain_Decorator);
CHECK_OBJECT(tmp_expression_value_180);
Py_DECREF(tmp_expression_value_180);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_183 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_183 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_183 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_183 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_183 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_183);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_183);
Py_DECREF(tmp_expression_value_183);
if (tmp_expression_value_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_182);
Py_DECREF(tmp_expression_value_182);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_blue;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_186 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_186 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_186 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_186 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_186 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_186);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_186);
Py_DECREF(tmp_expression_value_186);
if (tmp_expression_value_185 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts.const_str_plain_Function);
CHECK_OBJECT(tmp_expression_value_185);
Py_DECREF(tmp_expression_value_185);
if (tmp_expression_value_184 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts.const_str_plain_Magic);
CHECK_OBJECT(tmp_expression_value_184);
Py_DECREF(tmp_expression_value_184);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_blow;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_188 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_188 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_188 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_188 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_188 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_188);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_187 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_188);
Py_DECREF(tmp_expression_value_188);
if (tmp_expression_value_187 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts.const_str_plain_Tag);
CHECK_OBJECT(tmp_expression_value_187);
Py_DECREF(tmp_expression_value_187);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_a79236b8e55863665957d920aad86f83;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_190 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_190 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_190 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_190 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_190 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_190);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts.const_str_plain_Name);
CHECK_OBJECT(tmp_expression_value_190);
Py_DECREF(tmp_expression_value_190);
if (tmp_expression_value_189 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts.const_str_plain_Variable);
CHECK_OBJECT(tmp_expression_value_189);
Py_DECREF(tmp_expression_value_189);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_191 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_191 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_191 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_191 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_191 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_191);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts.const_str_plain_Number);
CHECK_OBJECT(tmp_expression_value_191);
Py_DECREF(tmp_expression_value_191);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_digest_0981999573850d2aff9745060ae1874a;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_192 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_192 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_192 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_192 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_192 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_192);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts.const_str_plain_Operator);
CHECK_OBJECT(tmp_expression_value_192);
Py_DECREF(tmp_expression_value_192);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_default;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_194 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_194 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_194 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_194 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_194 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_194);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_expression_value_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts.const_str_plain_Operator);
CHECK_OBJECT(tmp_expression_value_194);
Py_DECREF(tmp_expression_value_194);
if (tmp_expression_value_193 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts.const_str_plain_Word);
CHECK_OBJECT(tmp_expression_value_193);
Py_DECREF(tmp_expression_value_193);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_magenta;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_195 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_195 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_195 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_195 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_195 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_195);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts.const_str_plain_String);
CHECK_OBJECT(tmp_expression_value_195);
Py_DECREF(tmp_expression_value_195);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = mod_consts.const_str_plain_ansi_greenb;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_expression_value_196 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_Token);

if (tmp_expression_value_196 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_196 = module_var_accessor_textual$highlight$Token(tstate);
if (unlikely(tmp_expression_value_196 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_expression_value_196 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_196);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts.const_str_plain_Whitespace);
CHECK_OBJECT(tmp_expression_value_196);
Py_DECREF(tmp_expression_value_196);
if (tmp_dict_key_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = const_str_empty;
tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_key_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto dict_build_exception_3;
}
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain_STYLES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_e80e3551fb1bcf87656275d745320afc;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_STYLES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$highlight$$$class__3_ANSILightHighlightTheme_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_ANSILightHighlightTheme;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$highlight->m_frame.f_lineno = 94;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_36;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_35 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94);
locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94);
locals_textual$highlight$$$class__3_ANSILightHighlightTheme_94 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 94;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSILightHighlightTheme, tmp_assign_source_35);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

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
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_079f27aa6fb5ac81561fafab355ad80a);

tmp_assign_source_37 = MAKE_FUNCTION_textual$highlight$$$function__1_guess_language(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_guess_language, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_2;
tmp_dict_key_4 = mod_consts.const_str_plain_language;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = const_str_plain_path;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_theme;
tmp_dict_value_4 = module_var_accessor_textual$highlight$HighlightTheme(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HighlightTheme);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_tab_size;
tmp_dict_value_4 = mod_consts.const_int_pos_8;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5f5e3bba8a002c6d030d698ae534c9e5);

tmp_assign_source_38 = MAKE_FUNCTION_textual$highlight$$$function__2_highlight(tstate, tmp_kw_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$highlight, (Nuitka_StringObject *)mod_consts.const_str_plain_highlight, tmp_assign_source_38);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$highlight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$highlight->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$highlight, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$highlight);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$highlight", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.highlight" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$highlight);
    return module_textual$highlight;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$highlight, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$highlight", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

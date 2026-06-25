/* Generated code for Python module 'textual$css$parse'
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



/* The "module_textual$css$parse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$parse;
PyDictObject *moduledict_textual$css$parse;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_RE_ID_SELECTOR;
PyObject *const_str_plain_fullmatch;
PyObject *const_str_digest_8fc399882fea4579e9f9670ef63c8fd5;
PyObject *const_str_digest_3219015af949bfccb31d0f31f98cfbb8;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_tokenize;
PyObject *const_tuple_str_empty_str_empty_tuple;
PyObject *const_str_plain_SELECTOR_MAP;
PyObject *const_str_plain_CombinatorType;
PyObject *const_str_plain_DESCENDENT;
PyObject *const_str_plain_UnexpectedEnd;
PyObject *const_str_plain_pseudo_class;
PyObject *const_str_plain_selectors;
PyObject *const_str_plain__add_pseudo_class;
PyObject *const_str_plain_value;
PyObject *const_str_plain_lstrip;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_plain_whitespace;
PyObject *const_str_plain_combinator;
PyObject *const_str_plain_SAME;
PyObject *const_str_plain_new_selector;
PyObject *const_str_plain_rule_selectors;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_declaration_set_start;
PyObject *const_str_plain_combinator_child;
PyObject *const_str_plain_CHILD;
PyObject *const_str_plain_get_selector;
PyObject *const_str_plain_SelectorType;
PyObject *const_str_plain_TYPE;
PyObject *const_tuple_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_Selector;
PyObject *const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple;
PyObject *const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple;
PyObject *const_str_plain_SelectorSet;
PyObject *const_str_plain_from_selectors;
PyObject *const_str_plain_StylesBuilder;
PyObject *const_str_plain_token;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_scope;
PyObject *const_str_plain_Declaration;
PyObject *const_tuple_str_plain_whitespace_str_plain_declaration_end_tuple;
PyObject *const_frozenset_f9a2a25d4aecb6aca88294a14ef6faa0;
PyObject *const_str_plain_parse_rule_set;
PyObject *const_str_plain_is_default_rules;
PyObject *const_str_plain_tie_breaker;
PyObject *const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple;
PyObject *const_dict_a43bfa655f3c5d490c4f29093c942531;
PyObject *const_str_digest_cc12b42ccb16b111b512601726cae725;
PyObject *const_str_plain_combine_selectors;
PyObject *const_str_digest_ca614411618b9913acc9f32c7e15bd88;
PyObject *const_str_plain_recursive_parse;
PyObject *const_str_plain_RuleSet;
PyObject *const_str_plain_selector_set;
PyObject *const_str_plain_rule_selector;
PyObject *const_str_plain__total_specificity;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_nested_rules;
PyObject *const_str_plain_append;
PyObject *const_str_plain_declaration_name;
PyObject *const_str_plain_styles_builder;
PyObject *const_str_plain_add_declaration;
PyObject *const_str_plain_declaration;
PyObject *const_str_plain_DeclarationError;
PyObject *const_str_plain_message;
PyObject *const_str_plain_rstrip;
PyObject *const_str_plain_declaration_set_end;
PyObject *const_str_plain__post_parse;
PyObject *const_str_plain_NESTED;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_plain_replace;
PyObject *const_str_plain_pseudo_classes;
PyObject *const_str_plain__add_specificity;
PyObject *const_str_plain_specificity;
PyObject *const_tuple_str_plain_pseudo_classes_str_plain_specificity_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_tokenize_declarations;
PyObject *const_tuple_str_plain_whitespace_str_plain_declaration_end_str_plain_eof_tuple;
PyObject *const_str_digest_4927649886de368b8348ff9a5f0ea9a3;
PyObject *const_str_digest_2c81923d7582a9eacf9a5019bdae2a9d;
PyObject *const_str_chr_39;
PyObject *const_str_plain_get_suggestion;
PyObject *const_str_digest_614b9f8b23b34282a42f6e4bae905cfb;
PyObject *const_str_digest_9a9037bce8e1a993bbd16292c637ba2f;
PyObject *const_str_plain_UnresolvedVariableError;
PyObject *const_str_plain_read_from;
PyObject *const_str_plain_code;
PyObject *const_str_plain_start;
PyObject *const_tuple_str_plain_end_tuple;
PyObject *const_str_digest_7bb7c6e8686f4952809f29672f96f8fc;
PyObject *const_str_digest_66b82c1279f7285fc170352a4631b26b;
PyObject *const_str_plain_css_variables;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_variable_name;
PyObject *const_slice_int_pos_1_int_neg_1_none;
PyObject *const_str_plain_variables;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_variable_tokens;
PyObject *const_str_plain_variable_value_end;
PyObject *const_str_plain_variable_ref;
PyObject *const_str_plain_extend;
PyObject *const_str_plain_location;
PyObject *const_str_plain_with_reference;
PyObject *const_str_plain_ReferencedBy;
PyObject *const_str_plain_ref_name;
PyObject *const_str_plain_ref_location;
PyObject *const_str_plain_ref_length;
PyObject *const_str_plain__unresolved;
PyObject *const_str_plain_ref_code;
PyObject *const_str_plain_substitute_references;
PyObject *const_str_digest_f0eb39a75c9247e8429fef5be990a507;
PyObject *const_str_plain_tokenize_values;
PyObject *const_str_plain_update;
PyObject *const_str_plain_css;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain_selector_start_tuple;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_digest_1d61886b35a65442c3aa5c8690a54f7a;
PyObject *const_tuple_str_plain_HelpText_tuple;
PyObject *const_str_plain_HelpText;
PyObject *const_str_digest_5884710c6cb5b52cb681e611c07027ac;
PyObject *const_tuple_str_plain_DeclarationError_str_plain_StylesBuilder_tuple;
PyObject *const_str_digest_29fdb8be2107fab7f1ab4773cd3e4818;
PyObject *const_tuple_str_plain_UnresolvedVariableError_tuple;
PyObject *const_str_digest_15082faffab5be7907e3bf39213a79fa;
PyObject *const_tuple_914a4d6f0fed66ba39e84f0f5061aefc_tuple;
PyObject *const_str_digest_3012101a6d81a5664d70448375b90279;
PyObject *const_tuple_str_plain_Styles_tuple;
PyObject *const_str_plain_Styles;
PyObject *const_str_digest_acfc3fc6d26f823727983526fa6076e1;
PyObject *const_tuple_c51841fa43929cd186d4a5e6875a0789_tuple;
PyObject *const_str_plain_IDENTIFIER;
PyObject *const_str_plain_Token;
PyObject *const_str_digest_058dbb6fc9ff11c18f0d029f91026634;
PyObject *const_tuple_str_plain_ReferencedBy_str_plain_UnexpectedEnd_tuple;
PyObject *const_str_digest_3f43d1377a3aa44ae25c1e06b470b808;
PyObject *const_tuple_str_plain_CSSLocation_str_plain_Specificity3_tuple;
PyObject *const_str_plain_CSSLocation;
PyObject *const_str_plain_Specificity3;
PyObject *const_str_digest_a97d50c89e867b12fe5ca405c9ed4431;
PyObject *const_tuple_str_plain_get_suggestion_tuple;
PyObject *const_str_plain_selector;
PyObject *const_tuple_int_0_int_0_int_pos_1_tuple;
PyObject *const_str_plain_selector_start;
PyObject *const_str_plain_selector_class;
PyObject *const_str_plain_CLASS;
PyObject *const_tuple_int_0_int_pos_1_int_0_tuple;
PyObject *const_str_plain_selector_start_class;
PyObject *const_str_plain_selector_id;
PyObject *const_str_plain_ID;
PyObject *const_tuple_int_pos_1_int_0_int_0_tuple;
PyObject *const_str_plain_selector_start_id;
PyObject *const_str_plain_selector_universal;
PyObject *const_str_plain_UNIVERSAL;
PyObject *const_str_plain_selector_start_universal;
PyObject *const_str_plain_nested;
PyObject *const_str_digest_a0db151ddb6befa7924a3cbe02d4f54f;
PyObject *const_str_chr_35;
PyObject *const_tuple_int_pos_128_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_4cf0e3b81b4ba459878ec0d610c605e9;
PyObject *const_str_plain_is_id_selector;
PyObject *const_dict_035a53b2dba10e0842fb57d4fdd1a86a;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_dict_29c8d6645f654d58f412875497725970;
PyObject *const_str_plain_parse_selectors;
PyObject *const_tuple_false_int_0_tuple;
PyObject *const_dict_7c793c6cb6df0040b5c5f2706dce0169;
PyObject *const_dict_7fc8960b3895abc6a36687684c83eba8;
PyObject *const_str_plain_parse_declarations;
PyObject *const_dict_dfc34e4fa4d4df30e3f39ffa72fa96e1;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_5050f9bf39c31e0125d7069ab6a786e3;
PyObject *const_tuple_none_none_false_int_0_tuple;
PyObject *const_dict_cb3bfce221e6d73da9dcb84062cf8890;
PyObject *const_str_digest_768c6b8415794358f096a84c8109771d;
PyObject *const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d;
PyObject *const_tuple_c4b0c7eefdf2bd85fccc7e035485362a_tuple;
PyObject *const_tuple_30d0b2f4494dc46b08fc079936f76078_tuple;
PyObject *const_tuple_c7fef87ed82deb9ef532baf184faa2ff_tuple;
PyObject *const_tuple_str_plain_selector_tuple;
PyObject *const_tuple_525551d9bca49414911b1b961c43c4f0_tuple;
PyObject *const_tuple_5463c574209e92333b15ff900e67c6fe_tuple;
PyObject *const_tuple_088aeca98c5eddbb87af10b45295c0b6_tuple;
PyObject *const_tuple_cbe6b38ce6a6ae75d3f63556b9065b4b_tuple;
PyObject *const_tuple_6afacaa9ae1111e02e5f0e9b7622a86b_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.parse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_ID_SELECTOR);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fc399882fea4579e9f9670ef63c8fd5);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_3219015af949bfccb31d0f31f98cfbb8);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_SELECTOR_MAP);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_CombinatorType);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_DESCENDENT);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnexpectedEnd);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_pseudo_class);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_selectors);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__add_pseudo_class);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_whitespace);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_combinator);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_SAME);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_selector);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_rule_selectors);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_start);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_combinator_child);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHILD);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_selector);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorType);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Selector);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorSet);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_selectors);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_StylesBuilder);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Declaration);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_frozenset_f9a2a25d4aecb6aca88294a14ef6faa0);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_rule_set);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_default_rules);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_tie_breaker);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_a43bfa655f3c5d490c4f29093c942531);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc12b42ccb16b111b512601726cae725);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_combine_selectors);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca614411618b9913acc9f32c7e15bd88);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_recursive_parse);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuleSet);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_set);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_rule_selector);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__total_specificity);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_nested_rules);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_name);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles_builder);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_declaration);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeclarationError);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_end);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__post_parse);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_NESTED);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_pseudo_classes);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__add_specificity);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_specificity);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pseudo_classes_str_plain_specificity_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_declarations);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_str_plain_eof_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_4927649886de368b8348ff9a5f0ea9a3);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c81923d7582a9eacf9a5019bdae2a9d);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestion);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_614b9f8b23b34282a42f6e4bae905cfb);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a9037bce8e1a993bbd16292c637ba2f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnresolvedVariableError);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_from);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bb7c6e8686f4952809f29672f96f8fc);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_66b82c1279f7285fc170352a4631b26b);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_css_variables);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_name);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_variables);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_tokens);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_value_end);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_variable_ref);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_location);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_reference);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReferencedBy);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref_name);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref_location);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref_length);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__unresolved);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref_code);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_substitute_references);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0eb39a75c9247e8429fef5be990a507);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_values);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_css);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_start_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d61886b35a65442c3aa5c8690a54f7a);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HelpText_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_HelpText);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_5884710c6cb5b52cb681e611c07027ac);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeclarationError_str_plain_StylesBuilder_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_29fdb8be2107fab7f1ab4773cd3e4818);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnresolvedVariableError_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_914a4d6f0fed66ba39e84f0f5061aefc_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Styles_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_Styles);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_c51841fa43929cd186d4a5e6875a0789_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDENTIFIER);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_Token);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReferencedBy_str_plain_UnexpectedEnd_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSSLocation_str_plain_Specificity3_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSSLocation);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity3);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_a97d50c89e867b12fe5ca405c9ed4431);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_suggestion_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_pos_1_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_class);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLASS);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_int_0_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_class);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_id);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_ID);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_int_0_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_id);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_universal);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIVERSAL);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_universal);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_nested);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0db151ddb6befa7924a3cbe02d4f54f);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_chr_35);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_4cf0e3b81b4ba459878ec0d610c605e9);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_id_selector);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_035a53b2dba10e0842fb57d4fdd1a86a);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_29c8d6645f654d58f412875497725970);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_selectors);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_false_int_0_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_7c793c6cb6df0040b5c5f2706dce0169);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_7fc8960b3895abc6a36687684c83eba8);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_declarations);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_dfc34e4fa4d4df30e3f39ffa72fa96e1);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_5050f9bf39c31e0125d7069ab6a786e3);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_int_0_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_cb3bfce221e6d73da9dcb84062cf8890);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_768c6b8415794358f096a84c8109771d);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_c4b0c7eefdf2bd85fccc7e035485362a_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_30d0b2f4494dc46b08fc079936f76078_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_c7fef87ed82deb9ef532baf184faa2ff_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_525551d9bca49414911b1b961c43c4f0_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_5463c574209e92333b15ff900e67c6fe_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_088aeca98c5eddbb87af10b45295c0b6_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_cbe6b38ce6a6ae75d3f63556b9065b4b_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_6afacaa9ae1111e02e5f0e9b7622a86b_tuple);
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
void checkModuleConstants_textual$css$parse(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_ID_SELECTOR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RE_ID_SELECTOR);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fullmatch);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fc399882fea4579e9f9670ef63c8fd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fc399882fea4579e9f9670ef63c8fd5);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_3219015af949bfccb31d0f31f98cfbb8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3219015af949bfccb31d0f31f98cfbb8);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_str_empty_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_SELECTOR_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SELECTOR_MAP);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_CombinatorType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CombinatorType);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_DESCENDENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DESCENDENT);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnexpectedEnd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnexpectedEnd);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_pseudo_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pseudo_class);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selectors);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__add_pseudo_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add_pseudo_class);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_whitespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_whitespace);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_combinator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combinator);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_SAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SAME);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_selector);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_rule_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rule_selectors);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_set_start);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_combinator_child));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combinator_child);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHILD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHILD);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_selector);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectorType);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Selector);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectorSet);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_selectors);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_StylesBuilder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StylesBuilder);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Declaration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Declaration);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_frozenset_f9a2a25d4aecb6aca88294a14ef6faa0));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_f9a2a25d4aecb6aca88294a14ef6faa0);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_rule_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_rule_set);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_default_rules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_default_rules);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_tie_breaker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tie_breaker);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_a43bfa655f3c5d490c4f29093c942531));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a43bfa655f3c5d490c4f29093c942531);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc12b42ccb16b111b512601726cae725));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc12b42ccb16b111b512601726cae725);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_combine_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combine_selectors);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca614411618b9913acc9f32c7e15bd88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca614411618b9913acc9f32c7e15bd88);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_recursive_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recursive_parse);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuleSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuleSet);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_set);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_rule_selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rule_selector);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__total_specificity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__total_specificity);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_nested_rules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nested_rules);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_name);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles_builder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles_builder);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_declaration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_declaration);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeclarationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeclarationError);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration_set_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration_set_end);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__post_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post_parse);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_NESTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NESTED);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_pseudo_classes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pseudo_classes);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__add_specificity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add_specificity);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_specificity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_specificity);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pseudo_classes_str_plain_specificity_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pseudo_classes_str_plain_specificity_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_declarations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_declarations);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_str_plain_eof_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_str_plain_eof_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_4927649886de368b8348ff9a5f0ea9a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4927649886de368b8348ff9a5f0ea9a3);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c81923d7582a9eacf9a5019bdae2a9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c81923d7582a9eacf9a5019bdae2a9d);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_suggestion);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_614b9f8b23b34282a42f6e4bae905cfb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_614b9f8b23b34282a42f6e4bae905cfb);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a9037bce8e1a993bbd16292c637ba2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a9037bce8e1a993bbd16292c637ba2f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnresolvedVariableError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnresolvedVariableError);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_from);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bb7c6e8686f4952809f29672f96f8fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bb7c6e8686f4952809f29672f96f8fc);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_66b82c1279f7285fc170352a4631b26b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66b82c1279f7285fc170352a4631b26b);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_css_variables));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_css_variables);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_name);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_int_neg_1_none);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_variables));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variables);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_tokens);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_value_end));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_value_end);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_variable_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_variable_ref);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_location);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_reference));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_reference);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReferencedBy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReferencedBy);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref_name);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref_location);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref_length);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__unresolved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unresolved);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref_code);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_substitute_references));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_substitute_references);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0eb39a75c9247e8429fef5be990a507));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0eb39a75c9247e8429fef5be990a507);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokenize_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokenize_values);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_css));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_css);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_start_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_selector_start_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d61886b35a65442c3aa5c8690a54f7a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d61886b35a65442c3aa5c8690a54f7a);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HelpText_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HelpText_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_HelpText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HelpText);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_5884710c6cb5b52cb681e611c07027ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5884710c6cb5b52cb681e611c07027ac);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeclarationError_str_plain_StylesBuilder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DeclarationError_str_plain_StylesBuilder_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_29fdb8be2107fab7f1ab4773cd3e4818));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29fdb8be2107fab7f1ab4773cd3e4818);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnresolvedVariableError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UnresolvedVariableError_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_914a4d6f0fed66ba39e84f0f5061aefc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_914a4d6f0fed66ba39e84f0f5061aefc_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Styles_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Styles_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_Styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Styles);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_c51841fa43929cd186d4a5e6875a0789_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c51841fa43929cd186d4a5e6875a0789_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDENTIFIER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDENTIFIER);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_Token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Token);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ReferencedBy_str_plain_UnexpectedEnd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ReferencedBy_str_plain_UnexpectedEnd_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSSLocation_str_plain_Specificity3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSSLocation_str_plain_Specificity3_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSSLocation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSSLocation);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Specificity3);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_a97d50c89e867b12fe5ca405c9ed4431));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a97d50c89e867b12fe5ca405c9ed4431);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_suggestion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_suggestion_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_pos_1_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_class);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLASS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLASS);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_1_int_0_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_class);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_id);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_ID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ID);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_0_int_0_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_id);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_universal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_universal);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIVERSAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIVERSAL);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_start_universal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_start_universal);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_nested));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nested);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0db151ddb6befa7924a3cbe02d4f54f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0db151ddb6befa7924a3cbe02d4f54f);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_chr_35));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_35);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_128_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_4cf0e3b81b4ba459878ec0d610c605e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4cf0e3b81b4ba459878ec0d610c605e9);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_id_selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_id_selector);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_035a53b2dba10e0842fb57d4fdd1a86a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_035a53b2dba10e0842fb57d4fdd1a86a);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_29c8d6645f654d58f412875497725970));
CHECK_OBJECT_DEEP(mod_consts.const_dict_29c8d6645f654d58f412875497725970);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_selectors);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_false_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_int_0_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_7c793c6cb6df0040b5c5f2706dce0169));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7c793c6cb6df0040b5c5f2706dce0169);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_7fc8960b3895abc6a36687684c83eba8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7fc8960b3895abc6a36687684c83eba8);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_declarations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_declarations);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_dfc34e4fa4d4df30e3f39ffa72fa96e1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dfc34e4fa4d4df30e3f39ffa72fa96e1);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_5050f9bf39c31e0125d7069ab6a786e3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5050f9bf39c31e0125d7069ab6a786e3);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_int_0_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_cb3bfce221e6d73da9dcb84062cf8890));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cb3bfce221e6d73da9dcb84062cf8890);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_768c6b8415794358f096a84c8109771d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_768c6b8415794358f096a84c8109771d);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_c4b0c7eefdf2bd85fccc7e035485362a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4b0c7eefdf2bd85fccc7e035485362a_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_30d0b2f4494dc46b08fc079936f76078_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_30d0b2f4494dc46b08fc079936f76078_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_c7fef87ed82deb9ef532baf184faa2ff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c7fef87ed82deb9ef532baf184faa2ff_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_selector_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_525551d9bca49414911b1b961c43c4f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_525551d9bca49414911b1b961c43c4f0_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_5463c574209e92333b15ff900e67c6fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5463c574209e92333b15ff900e67c6fe_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_088aeca98c5eddbb87af10b45295c0b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_088aeca98c5eddbb87af10b45295c0b6_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_cbe6b38ce6a6ae75d3f63556b9065b4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cbe6b38ce6a6ae75d3f63556b9065b4b_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_6afacaa9ae1111e02e5f0e9b7622a86b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6afacaa9ae1111e02e5f0e9b7622a86b_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 27
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
static PyObject *module_var_accessor_textual$css$parse$CombinatorType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CombinatorType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CombinatorType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CombinatorType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CombinatorType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$Declaration(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Declaration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Declaration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Declaration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Declaration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Declaration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Declaration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Declaration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Declaration);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$DeclarationError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeclarationError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeclarationError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeclarationError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeclarationError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationError);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$IDENTIFIER(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$RE_ID_SELECTOR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_ID_SELECTOR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_ID_SELECTOR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_ID_SELECTOR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_ID_SELECTOR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_ID_SELECTOR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_ID_SELECTOR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_ID_SELECTOR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_ID_SELECTOR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$ReferencedBy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_ReferencedBy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReferencedBy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReferencedBy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReferencedBy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReferencedBy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_ReferencedBy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_ReferencedBy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReferencedBy);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$RuleSet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RuleSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuleSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuleSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuleSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuleSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RuleSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RuleSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuleSet);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$SELECTOR_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SELECTOR_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SELECTOR_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SELECTOR_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SELECTOR_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$Selector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selector);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selector, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selector);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selector, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$SelectorSet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectorSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectorSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectorSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectorSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$SelectorType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectorType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectorType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectorType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectorType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$StylesBuilder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesBuilder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StylesBuilder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StylesBuilder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StylesBuilder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StylesBuilder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesBuilder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesBuilder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesBuilder);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$UnexpectedEnd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnexpectedEnd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnexpectedEnd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnexpectedEnd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnexpectedEnd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnexpectedEnd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnexpectedEnd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnexpectedEnd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnexpectedEnd);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$UnresolvedVariableError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnresolvedVariableError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnresolvedVariableError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnresolvedVariableError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnresolvedVariableError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnresolvedVariableError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnresolvedVariableError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnresolvedVariableError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnresolvedVariableError);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$_add_specificity(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__add_specificity);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__add_specificity);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__add_specificity, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__add_specificity);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__add_specificity, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__add_specificity);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__add_specificity);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__add_specificity);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$_unresolved(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__unresolved);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unresolved);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unresolved, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__unresolved);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__unresolved, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__unresolved);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__unresolved);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__unresolved);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$dataclasses(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$get_suggestion(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_suggestion);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_suggestion, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_suggestion);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_suggestion, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$parse_rule_set(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_rule_set);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_rule_set);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_rule_set, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_rule_set);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_rule_set, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_rule_set);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_rule_set);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_rule_set);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$substitute_references(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_substitute_references);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_substitute_references);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_substitute_references, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_substitute_references);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_substitute_references, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_substitute_references);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_substitute_references);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_substitute_references);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$tokenize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$tokenize_declarations(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_declarations);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_declarations, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_declarations);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_declarations, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$parse$tokenize_values(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$parse->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$parse->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$parse->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_values);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_values, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tokenize_values);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tokenize_values, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4b9e501cbf630bea29400e4842eeecc5;
static PyCodeObject *code_objects_8a7de93e59340a9b54d24c5148138424;
static PyCodeObject *code_objects_7e8c2554232f1bdb2bd12bedd72571fd;
static PyCodeObject *code_objects_91f9731617ba8877ce412bfbd8515899;
static PyCodeObject *code_objects_3f932a404ea4ecf4e37c02d84f3d3292;
static PyCodeObject *code_objects_061b0c1a5e77e4293bbdeb0a80b081f4;
static PyCodeObject *code_objects_01b6d03fe03f626027c1fe782d863b97;
static PyCodeObject *code_objects_76aada8e0be5ff676e85ec53ee3f75a8;
static PyCodeObject *code_objects_f4aae51ee47e2f6969602a8643d59891;
static PyCodeObject *code_objects_8b2488a3ebcd843b05e97e74723296a2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_768c6b8415794358f096a84c8109771d); CHECK_OBJECT(module_filename_obj);
code_objects_4b9e501cbf630bea29400e4842eeecc5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d, mod_consts.const_str_digest_dba7a8bbf10fa8bbe2e2f4c075e4b82d, NULL, NULL, 0, 0, 0);
code_objects_8a7de93e59340a9b54d24c5148138424 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__add_specificity, mod_consts.const_str_plain__add_specificity, mod_consts.const_tuple_c4b0c7eefdf2bd85fccc7e035485362a_tuple, NULL, 2, 0, 0);
code_objects_7e8c2554232f1bdb2bd12bedd72571fd = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__unresolved, mod_consts.const_str_plain__unresolved, mod_consts.const_tuple_30d0b2f4494dc46b08fc079936f76078_tuple, NULL, 3, 0, 0);
code_objects_91f9731617ba8877ce412bfbd8515899 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_combine_selectors, mod_consts.const_str_digest_ca614411618b9913acc9f32c7e15bd88, mod_consts.const_tuple_c7fef87ed82deb9ef532baf184faa2ff_tuple, NULL, 2, 0, 0);
code_objects_3f932a404ea4ecf4e37c02d84f3d3292 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_id_selector, mod_consts.const_str_plain_is_id_selector, mod_consts.const_tuple_str_plain_selector_tuple, NULL, 1, 0, 0);
code_objects_061b0c1a5e77e4293bbdeb0a80b081f4 = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_plain_parse, mod_consts.const_tuple_525551d9bca49414911b1b961c43c4f0_tuple, NULL, 7, 0, 0);
code_objects_01b6d03fe03f626027c1fe782d863b97 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_declarations, mod_consts.const_str_plain_parse_declarations, mod_consts.const_tuple_5463c574209e92333b15ff900e67c6fe_tuple, NULL, 2, 0, 0);
code_objects_76aada8e0be5ff676e85ec53ee3f75a8 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_rule_set, mod_consts.const_str_plain_parse_rule_set, mod_consts.const_tuple_088aeca98c5eddbb87af10b45295c0b6_tuple, NULL, 5, 0, 0);
code_objects_f4aae51ee47e2f6969602a8643d59891 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_selectors, mod_consts.const_str_plain_parse_selectors, mod_consts.const_tuple_cbe6b38ce6a6ae75d3f63556b9065b4b_tuple, NULL, 1, 0, 0);
code_objects_8b2488a3ebcd843b05e97e74723296a2 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_substitute_references, mod_consts.const_str_plain_substitute_references, mod_consts.const_tuple_6afacaa9ae1111e02e5f0e9b7622a86b_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__8_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__1_is_id_selector(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__2__add_specificity(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__3_parse_selectors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__5_parse_declarations(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__6__unresolved(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__7_substitute_references(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__8_parse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$css$parse$$$function__1_is_id_selector(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_selector = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__1_is_id_selector;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__1_is_id_selector = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__1_is_id_selector)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__1_is_id_selector);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__1_is_id_selector == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__1_is_id_selector = MAKE_FUNCTION_FRAME(tstate, code_objects_3f932a404ea4ecf4e37c02d84f3d3292, module_textual$css$parse, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__1_is_id_selector->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__1_is_id_selector = cache_frame_frame_textual$css$parse$$$function__1_is_id_selector;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__1_is_id_selector);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__1_is_id_selector) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_textual$css$parse$RE_ID_SELECTOR(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RE_ID_SELECTOR);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selector);
tmp_args_element_value_1 = par_selector;
frame_frame_textual$css$parse$$$function__1_is_id_selector->m_frame.f_lineno = 56;
tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fullmatch, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__1_is_id_selector, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__1_is_id_selector->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__1_is_id_selector, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__1_is_id_selector,
    type_description_1,
    par_selector
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__1_is_id_selector == cache_frame_frame_textual$css$parse$$$function__1_is_id_selector) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__1_is_id_selector);
    cache_frame_frame_textual$css$parse$$$function__1_is_id_selector = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__1_is_id_selector);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_selector);
Py_DECREF(par_selector);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_selector);
Py_DECREF(par_selector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$parse$$$function__2__add_specificity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_specificity1 = python_pars[0];
PyObject *par_specificity2 = python_pars[1];
PyObject *var_a1 = NULL;
PyObject *var_b1 = NULL;
PyObject *var_c1 = NULL;
PyObject *var_a2 = NULL;
PyObject *var_b2 = NULL;
PyObject *var_c2 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__2__add_specificity;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__2__add_specificity = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__2__add_specificity)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__2__add_specificity);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__2__add_specificity == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__2__add_specificity = MAKE_FUNCTION_FRAME(tstate, code_objects_8a7de93e59340a9b54d24c5148138424, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__2__add_specificity->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__2__add_specificity = cache_frame_frame_textual$css$parse$$$function__2__add_specificity;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__2__add_specificity);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__2__add_specificity) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_specificity1);
tmp_iter_arg_1 = par_specificity1;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
assert(var_a1 == NULL);
Py_INCREF(tmp_assign_source_5);
var_a1 = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_b1 == NULL);
Py_INCREF(tmp_assign_source_6);
var_b1 = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
assert(var_c1 == NULL);
Py_INCREF(tmp_assign_source_7);
var_c1 = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_specificity2);
tmp_iter_arg_2 = par_specificity2;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
assert(var_a2 == NULL);
Py_INCREF(tmp_assign_source_12);
var_a2 = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
assert(var_b2 == NULL);
Py_INCREF(tmp_assign_source_13);
var_b2 = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
assert(var_c2 == NULL);
Py_INCREF(tmp_assign_source_14);
var_c2 = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_tuple_element_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_a1);
tmp_add_expr_left_1 = var_a1;
CHECK_OBJECT(var_a2);
tmp_add_expr_right_1 = var_a2;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_b1);
tmp_add_expr_left_2 = var_b1;
CHECK_OBJECT(var_b2);
tmp_add_expr_right_2 = var_b2;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_c1);
tmp_add_expr_left_3 = var_c1;
CHECK_OBJECT(var_c2);
tmp_add_expr_right_3 = var_c2;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__2__add_specificity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__2__add_specificity->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__2__add_specificity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__2__add_specificity,
    type_description_1,
    par_specificity1,
    par_specificity2,
    var_a1,
    var_b1,
    var_c1,
    var_a2,
    var_b2,
    var_c2
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__2__add_specificity == cache_frame_frame_textual$css$parse$$$function__2__add_specificity) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__2__add_specificity);
    cache_frame_frame_textual$css$parse$$$function__2__add_specificity = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__2__add_specificity);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_a1);
CHECK_OBJECT(var_a1);
Py_DECREF(var_a1);
var_a1 = NULL;
CHECK_OBJECT(var_b1);
CHECK_OBJECT(var_b1);
Py_DECREF(var_b1);
var_b1 = NULL;
CHECK_OBJECT(var_c1);
CHECK_OBJECT(var_c1);
Py_DECREF(var_c1);
var_c1 = NULL;
CHECK_OBJECT(var_a2);
CHECK_OBJECT(var_a2);
Py_DECREF(var_a2);
var_a2 = NULL;
CHECK_OBJECT(var_b2);
CHECK_OBJECT(var_b2);
Py_DECREF(var_b2);
var_b2 = NULL;
CHECK_OBJECT(var_c2);
CHECK_OBJECT(var_c2);
Py_DECREF(var_c2);
var_c2 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_a1);
var_a1 = NULL;
Py_XDECREF(var_b1);
var_b1 = NULL;
Py_XDECREF(var_c1);
var_c1 = NULL;
Py_XDECREF(var_a2);
var_a2 = NULL;
Py_XDECREF(var_b2);
var_b2 = NULL;
Py_XDECREF(var_c2);
var_c2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_specificity1);
Py_DECREF(par_specificity1);
CHECK_OBJECT(par_specificity2);
Py_DECREF(par_specificity2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_specificity1);
Py_DECREF(par_specificity1);
CHECK_OBJECT(par_specificity2);
Py_DECREF(par_specificity2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$parse$$$function__3_parse_selectors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_css_selectors = python_pars[0];
PyObject *var_combinator = NULL;
PyObject *var_selectors = NULL;
PyObject *var_rule_selectors = NULL;
PyObject *var_tokens = NULL;
PyObject *var_get_selector = NULL;
PyObject *var_token = NULL;
PyObject *var_token_name = NULL;
PyObject *var__selector = NULL;
PyObject *var_specificity = NULL;
PyObject *var_selector_set = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__3_parse_selectors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__3_parse_selectors = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__3_parse_selectors)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__3_parse_selectors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__3_parse_selectors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__3_parse_selectors = MAKE_FUNCTION_FRAME(tstate, code_objects_f4aae51ee47e2f6969602a8643d59891, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__3_parse_selectors->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__3_parse_selectors = cache_frame_frame_textual$css$parse$$$function__3_parse_selectors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__3_parse_selectors);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__3_parse_selectors) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_css_selectors);
tmp_expression_value_1 = par_css_selectors;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 79;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooo";
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
tmp_return_value = const_tuple_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_textual$css$parse$tokenize(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokenize);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_css_selectors);
tmp_args_element_value_1 = par_css_selectors;
tmp_args_element_value_2 = mod_consts.const_tuple_str_empty_str_empty_tuple;
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tokens == NULL);
var_tokens = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$css$parse$SELECTOR_MAP(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SELECTOR_MAP);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_get_selector == NULL);
var_get_selector = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DESCENDENT);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_combinator == NULL);
var_combinator = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_selectors == NULL);
var_selectors = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_rule_selectors == NULL);
var_rule_selectors = tmp_assign_source_5;
}
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
CHECK_OBJECT(var_tokens);
tmp_next_arg_1 = var_tokens;
tmp_next_default_1 = Py_None;
tmp_assign_source_6 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_6;
    Py_XDECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__3_parse_selectors, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__3_parse_selectors, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = module_var_accessor_textual$css$parse$UnexpectedEnd(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnexpectedEnd);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto try_break_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 89;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame)) {
        frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// try break handler code:
try_break_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_end_1;
// End of try:
// End of try:
try_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_token);
tmp_cmp_expr_left_2 = var_token;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_token);
tmp_expression_value_4 = var_token;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token_name;
    var_token_name = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_3 = var_token_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_pseudo_class;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = var_selectors;
tmp_subscript_value_1 = const_int_neg_1;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, -1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__add_pseudo_class);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_8 = var_token;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_value);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 98;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 98;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_4 = var_token_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_whitespace;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooo";
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
nuitka_bool tmp_condition_result_6;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_9;
if (var_combinator == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_combinator;
tmp_cmp_expr_right_5 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (var_combinator == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_6 = var_combinator;
tmp_expression_value_9 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_SAME);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_6 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_DESCENDENT);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_combinator;
    var_combinator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_7 = var_token_name;
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_new_selector;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
if (var_rule_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_rule_selectors;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_selectors;
tmp_subscript_value_2 = mod_consts.const_slice_none_none_none;
tmp_item_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = var_selectors;
LIST_CLEAR(tmp_list_arg_value_2);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_None;
{
    PyObject *old = var_combinator;
    var_combinator = tmp_assign_source_9;
    Py_INCREF(var_combinator);
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_8 = var_token_name;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_declaration_set_start;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
goto loop_end_1;
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_9 = var_token_name;
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_combinator_child;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_CHILD);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_combinator;
    var_combinator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_13;
if (var_get_selector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_selector);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_5 = var_get_selector;
CHECK_OBJECT(var_token_name);
tmp_args_element_value_4 = var_token_name;
tmp_expression_value_13 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_TYPE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_1);
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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



exception_lineno = 111;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var__selector;
    var__selector = tmp_assign_source_14;
    Py_INCREF(var__selector);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_specificity;
    var_specificity = tmp_assign_source_15;
    Py_INCREF(var_specificity);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_value_1_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_3 = var_selectors;
tmp_called_value_6 = module_var_accessor_textual$css$parse$Selector(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selector);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_15 = var_token;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_value);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 116;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_combinator == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_2 = var_combinator;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 117;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_expression_value_16 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 117;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_DESCENDENT);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 117;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_kw_call_value_1_1 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(var__selector);
tmp_kw_call_value_2_1 = var__selector;
CHECK_OBJECT(var_specificity);
tmp_kw_call_value_3_1 = var_specificity;
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 115;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_item_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_SAME);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_combinator;
    var_combinator = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
branch_end_9:;
branch_end_8:;
branch_end_7:;
branch_end_5:;
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_1;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_selectors);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_3;
if (var_rule_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_4 = var_rule_selectors;
if (var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = var_selectors;
tmp_subscript_value_3 = mod_consts.const_slice_none_none_none;
tmp_item_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_3);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_10:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_6;
tmp_expression_value_19 = module_var_accessor_textual$css$parse$SelectorSet(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorSet);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_from_selectors);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_rule_selectors == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_rule_selectors;
frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame.f_lineno = 126;
tmp_tuple_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_selector_set == NULL);
var_selector_set = tmp_assign_source_17;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__3_parse_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__3_parse_selectors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__3_parse_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__3_parse_selectors,
    type_description_1,
    par_css_selectors,
    var_combinator,
    var_selectors,
    var_rule_selectors,
    var_tokens,
    var_get_selector,
    var_token,
    var_token_name,
    var__selector,
    var_specificity,
    var_selector_set
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__3_parse_selectors == cache_frame_frame_textual$css$parse$$$function__3_parse_selectors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__3_parse_selectors);
    cache_frame_frame_textual$css$parse$$$function__3_parse_selectors = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__3_parse_selectors);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_selector_set);
tmp_return_value = var_selector_set;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_combinator);
var_combinator = NULL;
Py_XDECREF(var_selectors);
var_selectors = NULL;
Py_XDECREF(var_rule_selectors);
var_rule_selectors = NULL;
Py_XDECREF(var_tokens);
var_tokens = NULL;
Py_XDECREF(var_get_selector);
var_get_selector = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_name);
var_token_name = NULL;
Py_XDECREF(var__selector);
var__selector = NULL;
Py_XDECREF(var_specificity);
var_specificity = NULL;
Py_XDECREF(var_selector_set);
var_selector_set = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_combinator);
var_combinator = NULL;
Py_XDECREF(var_selectors);
var_selectors = NULL;
Py_XDECREF(var_rule_selectors);
var_rule_selectors = NULL;
Py_XDECREF(var_tokens);
var_tokens = NULL;
Py_XDECREF(var_get_selector);
var_get_selector = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_name);
var_token_name = NULL;
Py_XDECREF(var__selector);
var__selector = NULL;
Py_XDECREF(var_specificity);
var_specificity = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_css_selectors);
Py_DECREF(par_css_selectors);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_css_selectors);
Py_DECREF(par_css_selectors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$parse$$$function__4_parse_rule_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_scope = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_tokens = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_token = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_is_default_rules = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_tie_breaker = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_is_default_rules;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_scope;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_tie_breaker;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_token;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_tokens;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_GENERATOR_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_scope);
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);
par_scope = NULL;
CHECK_OBJECT(par_tokens);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
par_tokens = NULL;
CHECK_OBJECT(par_token);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
par_token = NULL;
CHECK_OBJECT(par_is_default_rules);
CHECK_OBJECT(par_is_default_rules);
Py_DECREF(par_is_default_rules);
par_is_default_rules = NULL;
CHECK_OBJECT(par_tie_breaker);
CHECK_OBJECT(par_tie_breaker);
Py_DECREF(par_tie_breaker);
par_tie_breaker = NULL;
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
struct textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_locals {
PyObject *var_combinator;
PyObject *var_selectors;
PyObject *var_rule_selectors;
PyObject *var_errors;
PyObject *var_nested_rules;
PyObject *var_recursive_parse;
PyObject *var_get_selector;
PyObject *var_styles_builder;
PyObject *var__selector;
PyObject *var_specificity;
PyObject *var_scope_selector;
PyObject *var_scope_specificity;
PyObject *var_declaration;
PyObject *var_token_name;
PyObject *var_combine_selectors;
PyObject *var_rule_selector;
PyObject *var_rule_set;
PyObject *var_nested_rule_set;
PyObject *var_error;
PyObject *outline_0_var_recursive_selectors;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_for_loop_3__for_iterator;
PyObject *tmp_for_loop_3__iter_value;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
int tmp_res;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
};
#endif

static PyObject *textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_locals *generator_heap = (struct textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_combinator = NULL;
generator_heap->var_selectors = NULL;
generator_heap->var_rule_selectors = NULL;
generator_heap->var_errors = NULL;
generator_heap->var_nested_rules = NULL;
generator_heap->var_recursive_parse = NULL;
generator_heap->var_get_selector = NULL;
generator_heap->var_styles_builder = NULL;
generator_heap->var__selector = NULL;
generator_heap->var_specificity = NULL;
generator_heap->var_scope_selector = NULL;
generator_heap->var_scope_specificity = NULL;
generator_heap->var_declaration = NULL;
generator_heap->var_token_name = NULL;
generator_heap->var_combine_selectors = NULL;
generator_heap->var_rule_selector = NULL;
generator_heap->var_rule_set = NULL;
generator_heap->var_nested_rule_set = NULL;
generator_heap->var_error = NULL;
generator_heap->outline_0_var_recursive_selectors = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_for_loop_3__for_iterator = NULL;
generator_heap->tmp_for_loop_3__iter_value = NULL;
generator_heap->tmp_listcomp_1__$0 = NULL;
generator_heap->tmp_listcomp_1__contraction = NULL;
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_76aada8e0be5ff676e85ec53ee3f75a8, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
tmp_expression_value_1 = module_var_accessor_textual$css$parse$SELECTOR_MAP(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SELECTOR_MAP);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 137;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_get_selector == NULL);
generator_heap->var_get_selector = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DESCENDENT);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_combinator == NULL);
generator_heap->var_combinator = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_selectors == NULL);
generator_heap->var_selectors = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_rule_selectors == NULL);
generator_heap->var_rule_selectors = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$css$parse$StylesBuilder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_StylesBuilder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 141;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_styles_builder == NULL);
generator_heap->var_styles_builder = tmp_assign_source_5;
}
loop_start_1:;
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 144;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 144;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_pseudo_class;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 144;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = generator_heap->var_selectors;
tmp_subscript_value_1 = const_int_neg_1;
tmp_expression_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, -1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__add_pseudo_class);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 145;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 145;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_8;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 146;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_name);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 146;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_whitespace;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 146;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
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
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_9;
if (generator_heap->var_combinator == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = generator_heap->var_combinator;
tmp_cmp_expr_right_3 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (generator_heap->var_combinator == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = generator_heap->var_combinator;
tmp_expression_value_9 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_SAME);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 147;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_DESCENDENT);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 148;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_combinator;
    generator_heap->var_combinator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_name);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_new_selector;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
if (generator_heap->var_rule_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = generator_heap->var_rule_selectors;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = generator_heap->var_selectors;
tmp_subscript_value_2 = mod_consts.const_slice_none_none_none;
tmp_item_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(generator_heap->tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_2 = generator_heap->var_selectors;
LIST_CLEAR(tmp_list_arg_value_2);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_None;
{
    PyObject *old = generator_heap->var_combinator;
    generator_heap->var_combinator = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_combinator);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_13;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_name);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_declaration_set_start;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
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
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_14;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 155;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_name);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 155;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_combinator_child;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 155;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 156;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_CHILD);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 156;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_combinator;
    generator_heap->var_combinator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_17;
if (generator_heap->var_get_selector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_selector);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = generator_heap->var_get_selector;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_16 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_name);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_17 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_args_element_value_2);

generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_TYPE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_2);

generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
generator->m_frame->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
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
    PyObject *old = generator_heap->var__selector;
    generator_heap->var__selector = tmp_assign_source_12;
    Py_INCREF(generator_heap->var__selector);
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
    PyObject *old = generator_heap->var_specificity;
    generator_heap->var_specificity = tmp_assign_source_13;
    Py_INCREF(generator_heap->var_specificity);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_value_1_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 161;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_3 = generator_heap->var_selectors;
tmp_called_value_5 = module_var_accessor_textual$css$parse$Selector(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Selector);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 162;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_value);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 163;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_88fadafdce8af0fccdf36698d92ee793_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_combinator == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_combinator);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_2 = generator_heap->var_combinator;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_expression_value_20 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_kw_call_value_0_1);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_DESCENDENT);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_kw_call_value_1_1 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(generator_heap->var__selector);
tmp_kw_call_value_2_1 = generator_heap->var__selector;
CHECK_OBJECT(generator_heap->var_specificity);
tmp_kw_call_value_3_1 = generator_heap->var_specificity;
generator->m_frame->m_frame.f_lineno = 162;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_item_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 162;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_2);
assert(!(generator_heap->tmp_result == false));
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 169;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_SAME);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 169;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_combinator;
    generator_heap->var_combinator = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
branch_end_6:;
branch_end_5:;
branch_end_4:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_value_value_1;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_value_value_1 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_assign_source_15 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_15 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    if (!HAS_EXCEPTION_STATE(&generator_heap->exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &generator_heap->exception_state);
    }
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[3]);
    Nuitka_Cell_SET(generator->m_closure[3], tmp_assign_source_15);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 143;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_1;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_selectors);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_scope);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[1]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = generator_heap->var_selectors;
tmp_subscript_value_3 = const_int_0;
tmp_expression_value_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_3, 0);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_8);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_scope);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_8 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_8 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_24;
if (generator_heap->var_get_selector == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_selector);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_7 = generator_heap->var_get_selector;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_scope);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_24 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_TYPE);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_2);
generator->m_frame->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_tuple_unpack_2__source_iter == NULL);
generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_tuple_unpack_2__element_1 == NULL);
generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_tuple_unpack_2__element_2 == NULL);
generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_19 = generator_heap->tmp_tuple_unpack_2__element_1;
assert(generator_heap->var_scope_selector == NULL);
Py_INCREF(tmp_assign_source_19);
generator_heap->var_scope_selector = tmp_assign_source_19;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_20 = generator_heap->tmp_tuple_unpack_2__element_2;
assert(generator_heap->var_scope_specificity == NULL);
Py_INCREF(tmp_assign_source_20);
generator_heap->var_scope_specificity = tmp_assign_source_20;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 178;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_4 = generator_heap->var_selectors;
tmp_called_value_8 = module_var_accessor_textual$css$parse$Selector(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Selector);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_scope);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 181;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_25 = module_var_accessor_textual$css$parse$CombinatorType(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_DESCENDENT);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_scope_selector);
tmp_kw_call_value_2_2 = generator_heap->var_scope_selector;
CHECK_OBJECT(generator_heap->var_scope_specificity);
tmp_kw_call_value_3_2 = generator_heap->var_scope_specificity;
generator->m_frame->m_frame.f_lineno = 180;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

    tmp_item_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_6e189e3cc887a93d13c42172eee69e1b_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
LIST_INSERT_CONST(tmp_list_arg_value_4, 0, tmp_item_value_3);
CHECK_OBJECT(tmp_item_value_3);
Py_DECREF(tmp_item_value_3);
}
branch_no_8:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_4;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_4;
if (generator_heap->var_rule_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_5 = generator_heap->var_rule_selectors;
if (generator_heap->var_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = generator_heap->var_selectors;
tmp_subscript_value_4 = mod_consts.const_slice_none_none_none;
tmp_item_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_4);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_4);
assert(!(generator_heap->tmp_result == false));
}
branch_no_7:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_9 = module_var_accessor_textual$css$parse$Declaration(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Declaration);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_args_element_value_7 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 189;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_declaration == NULL);
generator_heap->var_declaration = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_errors == NULL);
generator_heap->var_errors = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_nested_rules == NULL);
generator_heap->var_nested_rules = tmp_assign_source_23;
}
loop_start_2:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_value_value_2;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 194;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_value_value_2 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_assign_source_24 = ITERATOR_NEXT(tmp_value_value_2);
if (tmp_assign_source_24 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    if (!HAS_EXCEPTION_STATE(&generator_heap->exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &generator_heap->exception_state);
    }
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 194;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[3]);
    Nuitka_Cell_SET(generator->m_closure[3], tmp_assign_source_24);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[3]));
tmp_expression_value_27 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_name);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 195;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token_name;
    generator_heap->var_token_name = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(generator_heap->var_token_name);
tmp_cmp_expr_left_9 = generator_heap->var_token_name;
tmp_cmp_expr_right_9 = mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_tuple;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 196;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
goto loop_start_2;
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(generator_heap->var_token_name);
tmp_cmp_expr_left_10 = generator_heap->var_token_name;
tmp_cmp_expr_right_10 = mod_consts.const_frozenset_f9a2a25d4aecb6aca88294a14ef6faa0;
generator_heap->tmp_res = PySet_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 198;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_10 = module_var_accessor_textual$css$parse$parse_rule_set(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_parse_rule_set);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 206;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = const_str_empty;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(generator->m_closure[4]);
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[3]));
tmp_kw_call_arg_value_2_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_default_rules);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tie_breaker);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 206;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple);
}

if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 206;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 205;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_recursive_parse;
    generator_heap->var_recursive_parse = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a43bfa655f3c5d490c4f29093c942531);

tmp_assign_source_27 = MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors(tstate, tmp_annotations_1);

{
    PyObject *old = generator_heap->var_combine_selectors;
    generator_heap->var_combine_selectors = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_3;
if (generator_heap->var_rule_selectors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = generator_heap->var_rule_selectors;
tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_29;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_29 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
generator_heap->exception_lineno = 244;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_30 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_rule_selector;
    generator_heap->var_rule_selector = tmp_assign_source_30;
    Py_INCREF(generator_heap->var_rule_selector);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_4;
if (generator_heap->var_recursive_parse == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_recursive_parse);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_iter_arg_4 = generator_heap->var_recursive_parse;
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_32 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
generator_heap->exception_lineno = 245;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_33 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_rule_set;
    generator_heap->var_rule_set = tmp_assign_source_33;
    Py_INCREF(generator_heap->var_rule_set);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_15;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_33;
tmp_called_value_11 = module_var_accessor_textual$css$parse$RuleSet(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_RuleSet);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_28 = generator_heap->var_rule_set;
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_selector_set);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 253;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(generator_heap->tmp_listcomp_1__$0 == NULL);
generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->tmp_listcomp_1__contraction == NULL);
generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_36;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_37;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
tmp_next_source_3 = generator_heap->tmp_listcomp_1__$0;
tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_37 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
generator_heap->exception_lineno = 247;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
    generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
tmp_assign_source_38 = generator_heap->tmp_listcomp_1__iter_value_0;
{
    PyObject *old = generator_heap->outline_0_var_recursive_selectors;
    generator_heap->outline_0_var_recursive_selectors = tmp_assign_source_38;
    Py_INCREF(generator_heap->outline_0_var_recursive_selectors);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
tmp_called_value_12 = module_var_accessor_textual$css$parse$SelectorSet(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SelectorSet);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
if (generator_heap->var_combine_selectors == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_combine_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_called_value_13 = generator_heap->var_combine_selectors;
if (generator_heap->var_rule_selector == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_rule_selector);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_10 = generator_heap->var_rule_selector;
CHECK_OBJECT(generator_heap->outline_0_var_recursive_selectors);
tmp_expression_value_29 = generator_heap->outline_0_var_recursive_selectors;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_selectors);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
generator->m_frame->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_args_element_value_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 249;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
generator->m_frame->m_frame.f_lineno = 248;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
generator->m_frame->m_frame.f_lineno = 248;
tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__total_specificity);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_args_element_value_8 = generator_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_8);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
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
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
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
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(generator_heap->outline_0_var_recursive_selectors);
generator_heap->outline_0_var_recursive_selectors = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_0_var_recursive_selectors);
generator_heap->outline_0_var_recursive_selectors = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
generator_heap->exception_lineno = 247;
goto try_except_handler_7;
outline_result_1:;
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_30 = generator_heap->var_rule_set;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_styles);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_8);

generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_31 = generator_heap->var_rule_set;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_errors);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_12);

generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_32 = generator_heap->var_rule_set;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_is_default_rules);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_13);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_33 = generator_heap->var_rule_set;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_tie_breaker);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tie_breaker);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_args_element_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
generator->m_frame->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->var_nested_rule_set;
    generator_heap->var_nested_rule_set = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_16;
if (generator_heap->var_nested_rules == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_nested_rules);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_34 = generator_heap->var_nested_rules;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_append);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(generator_heap->var_nested_rule_set);
tmp_args_element_value_16 = generator_heap->var_nested_rule_set;
generator->m_frame->m_frame.f_lineno = 260;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
goto loop_start_2;
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(generator_heap->var_token_name);
tmp_cmp_expr_left_11 = generator_heap->var_token_name;
tmp_cmp_expr_right_11 = mod_consts.const_str_plain_declaration_name;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
// Tried code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
if (generator_heap->var_styles_builder == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_35 = generator_heap->var_styles_builder;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_add_declaration);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_10;
}
if (generator_heap->var_declaration == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_17 = generator_heap->var_declaration;
generator->m_frame->m_frame.f_lineno = 264;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = module_var_accessor_textual$css$parse$DeclarationError(tstate);
if (unlikely(tmp_cmp_expr_right_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_DeclarationError);
}

if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_11;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_12 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_39); 
{
    PyObject *old = generator_heap->var_error;
    generator_heap->var_error = tmp_assign_source_39;
    Py_INCREF(generator_heap->var_error);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_5;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_36;
if (generator_heap->var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_12;
}

tmp_list_arg_value_6 = generator_heap->var_errors;
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_36 = generator_heap->var_error;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_token);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_item_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyTuple_SET_ITEM(tmp_item_value_5, 0, tmp_tuple_element_3);
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_37 = generator_heap->var_error;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_message);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_5, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_5);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
generator_heap->tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_5);
assert(!(generator_heap->tmp_result == false));
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
try_end_8:;
Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;

goto branch_end_12;
branch_no_12:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 263;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
goto try_except_handler_11;
branch_end_12:;
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_16 = module_var_accessor_textual$css$parse$Declaration(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Declaration);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[3]));
tmp_args_element_value_18 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_args_element_value_19 = const_str_empty;
generator->m_frame->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_declaration;
    generator_heap->var_declaration = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[3]));
tmp_expression_value_39 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_value);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 268;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_declaration);
tmp_assattr_target_1 = generator_heap->var_declaration;
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_11;
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(generator_heap->var_token_name);
tmp_cmp_expr_left_13 = generator_heap->var_token_name;
tmp_cmp_expr_right_13 = mod_consts.const_str_plain_declaration_set_end;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
goto loop_end_2;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_20;
if (generator_heap->var_declaration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = generator_heap->var_declaration;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[3]));
tmp_args_element_value_20 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 272;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_13:;
branch_end_11:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 193;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
// Tried code:
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_42;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_21;
if (generator_heap->var_styles_builder == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_42 = generator_heap->var_styles_builder;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_add_declaration);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_13;
}
if (generator_heap->var_declaration == NULL) {
Py_DECREF(tmp_called_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_args_element_value_21 = generator_heap->var_declaration;
generator->m_frame->m_frame.f_lineno = 275;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_end_10;
// Exception handler code:
try_except_handler_13:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_12 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_12);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_12, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_12);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
tmp_cmp_expr_left_14 = EXC_TYPE(tstate);
tmp_cmp_expr_right_14 = module_var_accessor_textual$css$parse$DeclarationError(tstate);
if (unlikely(tmp_cmp_expr_right_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_DeclarationError);
}

if (tmp_cmp_expr_right_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_14;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_condition_result_14 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_41); 
{
    PyObject *old = generator_heap->var_error;
    generator_heap->var_error = tmp_assign_source_41;
    Py_INCREF(generator_heap->var_error);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_6;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_43;
if (generator_heap->var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_list_arg_value_7 = generator_heap->var_errors;
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_43 = generator_heap->var_error;
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_token);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_item_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_44;
PyTuple_SET_ITEM(tmp_item_value_6, 0, tmp_tuple_element_4);
CHECK_OBJECT(generator_heap->var_error);
tmp_expression_value_44 = generator_heap->var_error;
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_message);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_item_value_6, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_item_value_6);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
generator_heap->tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_6);
assert(!(generator_heap->tmp_result == false));
}
goto try_end_11;
// Exception handler code:
try_except_handler_15:;
generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_13 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_13;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
try_end_11:;
Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;

goto branch_end_14;
branch_no_14:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 274;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
goto try_except_handler_14;
branch_end_14:;
goto try_end_12;
// Exception handler code:
try_except_handler_14:;
generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_14 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_14;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto try_end_10;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_10:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_20;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_list_arg_2;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_element_value_22;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_46;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_called_value_20 = module_var_accessor_textual$css$parse$RuleSet(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_RuleSet);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_45 = module_var_accessor_textual$css$parse$SelectorSet(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SelectorSet);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_from_selectors);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_rule_selectors == NULL) {
Py_DECREF(tmp_called_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_rule_selectors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_22 = generator_heap->var_rule_selectors;
generator->m_frame->m_frame.f_lineno = 280;
tmp_list_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_list_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = MAKE_LIST(tstate, tmp_list_arg_2);
CHECK_OBJECT(tmp_list_arg_2);
Py_DECREF(tmp_list_arg_2);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_styles_builder == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = generator_heap->var_styles_builder;
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_styles);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_errors == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_2_2 = generator_heap->var_errors;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_default_rules);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tie_breaker);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 279;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_rule_set;
    generator_heap->var_rule_set = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_6;
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_called_instance_2 = generator_heap->var_rule_set;
generator->m_frame->m_frame.f_lineno = 287;
tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__post_parse);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 287;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_expression_value_47;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_rule_set);
tmp_expression_value_47 = generator_heap->var_rule_set;
Py_INCREF(tmp_expression_value_47);
generator->m_yield_return_index = 1;
return tmp_expression_value_47;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 288;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_iter_arg_6;
if (generator_heap->var_nested_rules == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_nested_rules);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_6 = generator_heap->var_nested_rules;
tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_3__for_iterator == NULL);
generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_43;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_44;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
tmp_next_source_4 = generator_heap->tmp_for_loop_3__for_iterator;
tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_44 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
generator_heap->exception_lineno = 290;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
    generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
tmp_assign_source_45 = generator_heap->tmp_for_loop_3__iter_value;
{
    PyObject *old = generator_heap->var_nested_rule_set;
    generator_heap->var_nested_rule_set = tmp_assign_source_45;
    Py_INCREF(generator_heap->var_nested_rule_set);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_7;
CHECK_OBJECT(generator_heap->var_nested_rule_set);
tmp_called_instance_3 = generator_heap->var_nested_rule_set;
generator->m_frame->m_frame.f_lineno = 291;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__post_parse);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_expression_value_48;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_nested_rule_set);
tmp_expression_value_48 = generator_heap->var_nested_rule_set;
Py_INCREF(tmp_expression_value_48);
generator->m_yield_return_index = 2;
return tmp_expression_value_48;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "cccccooooooooooooooooooo";
    goto try_except_handler_16;
}
goto loop_start_6;
loop_end_6:;
goto try_end_13;
// Exception handler code:
try_except_handler_16:;
generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_15 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_15;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_13:;

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
    generator->m_closure[1],
    generator->m_closure[4],
    generator->m_closure[3],
    generator->m_closure[0],
    generator->m_closure[2],
    generator_heap->var_combinator,
    generator_heap->var_selectors,
    generator_heap->var_rule_selectors,
    generator_heap->var_errors,
    generator_heap->var_nested_rules,
    generator_heap->var_recursive_parse,
    generator_heap->var_get_selector,
    generator_heap->var_styles_builder,
    generator_heap->var__selector,
    generator_heap->var_specificity,
    generator_heap->var_scope_selector,
    generator_heap->var_scope_specificity,
    generator_heap->var_declaration,
    generator_heap->var_token_name,
    generator_heap->var_combine_selectors,
    generator_heap->var_rule_selector,
    generator_heap->var_rule_set,
    generator_heap->var_nested_rule_set,
    generator_heap->var_error
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
goto try_end_14;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_16 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_combinator);
generator_heap->var_combinator = NULL;
Py_XDECREF(generator_heap->var_selectors);
generator_heap->var_selectors = NULL;
Py_XDECREF(generator_heap->var_rule_selectors);
generator_heap->var_rule_selectors = NULL;
Py_XDECREF(generator_heap->var_errors);
generator_heap->var_errors = NULL;
Py_XDECREF(generator_heap->var_nested_rules);
generator_heap->var_nested_rules = NULL;
Py_XDECREF(generator_heap->var_recursive_parse);
generator_heap->var_recursive_parse = NULL;
Py_XDECREF(generator_heap->var_get_selector);
generator_heap->var_get_selector = NULL;
Py_XDECREF(generator_heap->var_styles_builder);
generator_heap->var_styles_builder = NULL;
Py_XDECREF(generator_heap->var__selector);
generator_heap->var__selector = NULL;
Py_XDECREF(generator_heap->var_specificity);
generator_heap->var_specificity = NULL;
Py_XDECREF(generator_heap->var_scope_selector);
generator_heap->var_scope_selector = NULL;
Py_XDECREF(generator_heap->var_scope_specificity);
generator_heap->var_scope_specificity = NULL;
Py_XDECREF(generator_heap->var_declaration);
generator_heap->var_declaration = NULL;
Py_XDECREF(generator_heap->var_token_name);
generator_heap->var_token_name = NULL;
Py_XDECREF(generator_heap->var_combine_selectors);
generator_heap->var_combine_selectors = NULL;
Py_XDECREF(generator_heap->var_rule_selector);
generator_heap->var_rule_selector = NULL;
Py_XDECREF(generator_heap->var_rule_set);
generator_heap->var_rule_set = NULL;
Py_XDECREF(generator_heap->var_nested_rule_set);
generator_heap->var_nested_rule_set = NULL;
Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_16;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

goto function_exception_exit;
// End of try:
try_end_14:;
Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
Py_XDECREF(generator_heap->var_combinator);
generator_heap->var_combinator = NULL;
Py_XDECREF(generator_heap->var_selectors);
generator_heap->var_selectors = NULL;
Py_XDECREF(generator_heap->var_rule_selectors);
generator_heap->var_rule_selectors = NULL;
Py_XDECREF(generator_heap->var_errors);
generator_heap->var_errors = NULL;
Py_XDECREF(generator_heap->var_nested_rules);
generator_heap->var_nested_rules = NULL;
Py_XDECREF(generator_heap->var_recursive_parse);
generator_heap->var_recursive_parse = NULL;
Py_XDECREF(generator_heap->var_get_selector);
generator_heap->var_get_selector = NULL;
Py_XDECREF(generator_heap->var_styles_builder);
generator_heap->var_styles_builder = NULL;
Py_XDECREF(generator_heap->var__selector);
generator_heap->var__selector = NULL;
Py_XDECREF(generator_heap->var_specificity);
generator_heap->var_specificity = NULL;
Py_XDECREF(generator_heap->var_scope_selector);
generator_heap->var_scope_selector = NULL;
Py_XDECREF(generator_heap->var_scope_specificity);
generator_heap->var_scope_specificity = NULL;
Py_XDECREF(generator_heap->var_declaration);
generator_heap->var_declaration = NULL;
CHECK_OBJECT(generator_heap->var_token_name);
CHECK_OBJECT(generator_heap->var_token_name);
Py_DECREF(generator_heap->var_token_name);
generator_heap->var_token_name = NULL;
Py_XDECREF(generator_heap->var_combine_selectors);
generator_heap->var_combine_selectors = NULL;
Py_XDECREF(generator_heap->var_rule_selector);
generator_heap->var_rule_selector = NULL;
CHECK_OBJECT(generator_heap->var_rule_set);
CHECK_OBJECT(generator_heap->var_rule_set);
Py_DECREF(generator_heap->var_rule_set);
generator_heap->var_rule_set = NULL;
Py_XDECREF(generator_heap->var_nested_rule_set);
generator_heap->var_nested_rule_set = NULL;
Py_XDECREF(generator_heap->var_error);
generator_heap->var_error = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_context,
        module_textual$css$parse,
        mod_consts.const_str_plain_parse_rule_set,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_76aada8e0be5ff676e85ec53ee3f75a8,
        closure,
        5,
#if 1
        sizeof(struct textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_selectors1 = python_pars[0];
PyObject *par_selectors2 = python_pars[1];
PyObject *var_final_selector = NULL;
PyObject *var_nested_selector = NULL;
PyObject *var_merged_selector = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors = MAKE_FUNCTION_FRAME(tstate, code_objects_91f9731617ba8877ce412bfbd8515899, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors = cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors) == 2);

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
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_selectors2);
tmp_truth_name_1 = CHECK_IF_TRUE(par_selectors2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_selectors2);
tmp_expression_value_2 = par_selectors2;
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_NESTED);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_selectors1);
tmp_expression_value_4 = par_selectors1;
tmp_subscript_value_2 = const_int_neg_1;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, -1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_final_selector == NULL);
var_final_selector = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_selectors2);
tmp_expression_value_5 = par_selectors2;
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_nested_selector == NULL);
var_nested_selector = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
tmp_expression_value_6 = module_var_accessor_textual$css$parse$dataclasses(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_final_selector);
tmp_kw_call_arg_value_0_1 = var_final_selector;
CHECK_OBJECT(var_final_selector);
tmp_expression_value_7 = var_final_selector;
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_pseudo_classes);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 233;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_nested_selector);
tmp_expression_value_8 = var_nested_selector;
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pseudo_classes);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_textual$css$parse$_add_specificity(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__add_specificity);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_final_selector);
tmp_expression_value_9 = var_final_selector;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_specificity);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_nested_selector);
tmp_expression_value_10 = var_nested_selector;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_specificity);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors->m_frame.f_lineno = 236;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors->m_frame.f_lineno = 230;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_pseudo_classes_str_plain_specificity_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_merged_selector == NULL);
var_merged_selector = tmp_assign_source_3;
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_selectors1);
tmp_expression_value_11 = par_selectors1;
tmp_subscript_value_4 = mod_consts.const_slice_none_int_neg_1_none;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_merged_selector);
tmp_tuple_element_2 = var_merged_selector;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_selectors2);
tmp_expression_value_12 = par_selectors2;
tmp_subscript_value_5 = mod_consts.const_slice_int_pos_1_none_none;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
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
    tmp_return_value = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_selectors1);
tmp_add_expr_left_1 = par_selectors1;
CHECK_OBJECT(par_selectors2);
tmp_add_expr_right_1 = par_selectors2;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors,
    type_description_1,
    par_selectors1,
    par_selectors2,
    var_final_selector,
    var_nested_selector,
    var_merged_selector
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors == cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors);
    cache_frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_final_selector);
var_final_selector = NULL;
Py_XDECREF(var_nested_selector);
var_nested_selector = NULL;
Py_XDECREF(var_merged_selector);
var_merged_selector = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_final_selector);
var_final_selector = NULL;
Py_XDECREF(var_nested_selector);
var_nested_selector = NULL;
Py_XDECREF(var_merged_selector);
var_merged_selector = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_selectors1);
Py_DECREF(par_selectors1);
CHECK_OBJECT(par_selectors2);
Py_DECREF(par_selectors2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_selectors1);
Py_DECREF(par_selectors1);
CHECK_OBJECT(par_selectors2);
Py_DECREF(par_selectors2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$parse$$$function__5_parse_declarations(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_css = python_pars[0];
PyObject *par_read_from = python_pars[1];
PyObject *var_declaration = NULL;
PyObject *var_errors = NULL;
PyObject *var_tokens = NULL;
PyObject *var_styles_builder = NULL;
PyObject *var_token = NULL;
PyObject *var_token_name = NULL;
PyObject *var_error = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__5_parse_declarations;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__5_parse_declarations = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__5_parse_declarations)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__5_parse_declarations);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__5_parse_declarations == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__5_parse_declarations = MAKE_FUNCTION_FRAME(tstate, code_objects_01b6d03fe03f626027c1fe782d863b97, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__5_parse_declarations->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__5_parse_declarations = cache_frame_frame_textual$css$parse$$$function__5_parse_declarations;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__5_parse_declarations);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__5_parse_declarations) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$css$parse$tokenize_declarations(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokenize_declarations);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_css);
tmp_args_element_value_1 = par_css;
CHECK_OBJECT(par_read_from);
tmp_args_element_value_2 = par_read_from;
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 306;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tokens == NULL);
var_tokens = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$css$parse$StylesBuilder(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StylesBuilder);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 307;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_styles_builder == NULL);
var_styles_builder = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_declaration == NULL);
Py_INCREF(tmp_assign_source_3);
var_declaration = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_errors == NULL);
var_errors = tmp_assign_source_4;
}
loop_start_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
CHECK_OBJECT(var_tokens);
tmp_next_arg_1 = var_tokens;
tmp_next_default_1 = Py_None;
tmp_assign_source_5 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_token);
tmp_cmp_expr_left_1 = var_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_token);
tmp_expression_value_1 = var_token;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token_name;
    var_token_name = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_2 = var_token_name;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_whitespace_str_plain_declaration_end_str_plain_eof_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooooooooo";
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
goto loop_start_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_3 = var_token_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_declaration_name;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooooo";
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
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
if (var_declaration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 319;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_declaration);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooooo";
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
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
if (var_styles_builder == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = var_styles_builder;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_add_declaration);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (var_declaration == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = var_declaration;
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 321;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = module_var_accessor_textual$css$parse$DeclarationError(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeclarationError);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_7); 
assert(var_error == NULL);
Py_INCREF(tmp_assign_source_7);
var_error = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_errors);
tmp_list_arg_value_1 = var_errors;
CHECK_OBJECT(var_error);
tmp_expression_value_3 = var_error;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_token);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_item_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_error);
tmp_expression_value_4 = var_error;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_message);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 324;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame)) {
        frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error);
var_error = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 320;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame)) {
        frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_3;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
branch_no_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_textual$css$parse$Declaration(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Declaration);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_args_element_value_4 = var_token;
tmp_args_element_value_5 = const_str_empty;
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 325;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_declaration;
    var_declaration = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_token);
tmp_expression_value_6 = var_token;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 326;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_declaration);
tmp_assattr_target_1 = var_declaration;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_token_name);
tmp_cmp_expr_left_5 = var_token_name;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_declaration_set_end;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_1;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
if (var_declaration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 330;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_declaration);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
if (var_declaration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = var_declaration;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_tokens);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_args_element_value_6 = var_token;
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 331;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
branch_end_6:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_3;
if (var_declaration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(var_declaration);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
if (var_styles_builder == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_9 = var_styles_builder;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_add_declaration);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_declaration == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_7 = var_declaration;
frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = 335;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = module_var_accessor_textual$css$parse$DeclarationError(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeclarationError);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
assert(var_error == NULL);
Py_INCREF(tmp_assign_source_9);
var_error = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_errors);
tmp_list_arg_value_2 = var_errors;
CHECK_OBJECT(var_error);
tmp_expression_value_10 = var_error;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_token);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
tmp_item_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_item_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_error);
tmp_expression_value_11 = var_error;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_message);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_item_value_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_item_value_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 338;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame)) {
        frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error);
var_error = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 334;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame)) {
        frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_6;
branch_end_9:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
branch_no_8:;
{
PyObject *tmp_expression_value_12;
if (var_styles_builder == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_styles_builder);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 340;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = var_styles_builder;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_styles);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__5_parse_declarations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__5_parse_declarations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__5_parse_declarations,
    type_description_1,
    par_css,
    par_read_from,
    var_declaration,
    var_errors,
    var_tokens,
    var_styles_builder,
    var_token,
    var_token_name,
    var_error
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__5_parse_declarations == cache_frame_frame_textual$css$parse$$$function__5_parse_declarations) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__5_parse_declarations);
    cache_frame_frame_textual$css$parse$$$function__5_parse_declarations = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__5_parse_declarations);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_declaration);
var_declaration = NULL;
CHECK_OBJECT(var_errors);
CHECK_OBJECT(var_errors);
Py_DECREF(var_errors);
var_errors = NULL;
CHECK_OBJECT(var_tokens);
CHECK_OBJECT(var_tokens);
Py_DECREF(var_tokens);
var_tokens = NULL;
Py_XDECREF(var_styles_builder);
var_styles_builder = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_name);
var_token_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_declaration);
var_declaration = NULL;
Py_XDECREF(var_errors);
var_errors = NULL;
Py_XDECREF(var_tokens);
var_tokens = NULL;
Py_XDECREF(var_styles_builder);
var_styles_builder = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_token_name);
var_token_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_css);
Py_DECREF(par_css);
CHECK_OBJECT(par_read_from);
Py_DECREF(par_read_from);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_css);
Py_DECREF(par_css);
CHECK_OBJECT(par_read_from);
Py_DECREF(par_read_from);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$parse$$$function__6__unresolved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_variable_name = python_pars[0];
PyObject *par_variables = python_pars[1];
PyObject *par_token = python_pars[2];
PyObject *var_message = NULL;
PyObject *var_suggested_variable = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse$$$function__6__unresolved;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$parse$$$function__6__unresolved = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$parse$$$function__6__unresolved)) {
    Py_XDECREF(cache_frame_frame_textual$css$parse$$$function__6__unresolved);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$parse$$$function__6__unresolved == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$parse$$$function__6__unresolved = MAKE_FUNCTION_FRAME(tstate, code_objects_7e8c2554232f1bdb2bd12bedd72571fd, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$parse$$$function__6__unresolved->m_type_description == NULL);
frame_frame_textual$css$parse$$$function__6__unresolved = cache_frame_frame_textual$css$parse$$$function__6__unresolved;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse$$$function__6__unresolved);
assert(Py_REFCNT(frame_frame_textual$css$parse$$$function__6__unresolved) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_2c81923d7582a9eacf9a5019bdae2a9d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_variable_name);
tmp_format_value_1 = par_variable_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_message == NULL);
var_message = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_arg_1;
tmp_called_value_1 = module_var_accessor_textual$css$parse$get_suggestion(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_suggestion);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_variable_name);
tmp_args_element_value_1 = par_variable_name;
CHECK_OBJECT(par_variables);
tmp_list_arg_1 = par_variables;
tmp_args_element_value_2 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__6__unresolved->m_frame.f_lineno = 355;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_suggested_variable == NULL);
var_suggested_variable = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_suggested_variable);
tmp_truth_name_1 = CHECK_IF_TRUE(var_suggested_variable);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_message);
tmp_iadd_expr_left_1 = var_message;
tmp_tuple_element_2 = mod_consts.const_str_digest_614b9f8b23b34282a42f6e4bae905cfb;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_suggested_variable);
tmp_format_value_2 = var_suggested_variable;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_9a9037bce8e1a993bbd16292c637ba2f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_3 = tmp_iadd_expr_left_1;
var_message = tmp_assign_source_3;

}
branch_no_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = module_var_accessor_textual$css$parse$UnresolvedVariableError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnresolvedVariableError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_token);
tmp_expression_value_1 = par_token;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_read_from);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_token);
tmp_expression_value_2 = par_token;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_code);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 361;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_token);
tmp_expression_value_3 = par_token;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_start);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_message);
tmp_kw_call_arg_value_3_1 = var_message;
CHECK_OBJECT(par_token);
tmp_expression_value_4 = par_token;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_end);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 364;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse$$$function__6__unresolved->m_frame.f_lineno = 359;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 359;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse$$$function__6__unresolved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse$$$function__6__unresolved->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse$$$function__6__unresolved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$parse$$$function__6__unresolved,
    type_description_1,
    par_variable_name,
    par_variables,
    par_token,
    var_message,
    var_suggested_variable
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$parse$$$function__6__unresolved == cache_frame_frame_textual$css$parse$$$function__6__unresolved) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$parse$$$function__6__unresolved);
    cache_frame_frame_textual$css$parse$$$function__6__unresolved = NULL;
}

assertFrameObject(frame_frame_textual$css$parse$$$function__6__unresolved);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_message);
var_message = NULL;
Py_XDECREF(var_suggested_variable);
var_suggested_variable = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_variable_name);
Py_DECREF(par_variable_name);
CHECK_OBJECT(par_variables);
Py_DECREF(par_variables);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_textual$css$parse$$$function__7_substitute_references(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_tokens = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_css_variables = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_css_variables;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_tokens;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_tokens);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
par_tokens = NULL;
CHECK_OBJECT(par_css_variables);
CHECK_OBJECT(par_css_variables);
Py_DECREF(par_css_variables);
par_css_variables = NULL;
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
struct textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_locals {
PyObject *var_variables;
PyObject *var_iter_tokens;
PyObject *var_token;
PyObject *var_variable_name;
PyObject *var_variable_tokens;
PyObject *var_ref_name;
PyObject *var_reference_tokens;
PyObject *var_ref_location;
PyObject *var_ref_length;
PyObject *var__token;
PyObject *var_ref_code;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_locals *generator_heap = (struct textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_variables = NULL;
generator_heap->var_iter_tokens = NULL;
generator_heap->var_token = NULL;
generator_heap->var_variable_name = NULL;
generator_heap->var_variable_tokens = NULL;
generator_heap->var_ref_name = NULL;
generator_heap->var_reference_tokens = NULL;
generator_heap->var_ref_location = NULL;
generator_heap->var_ref_length = NULL;
generator_heap->var__token = NULL;
generator_heap->var_ref_code = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8b2488a3ebcd843b05e97e74723296a2, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_css_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 385;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 385;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_css_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 385;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 385;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 385;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 385;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(generator_heap->var_variables == NULL);
generator_heap->var_variables = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 386;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 386;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_iter_tokens == NULL);
generator_heap->var_iter_tokens = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
CHECK_OBJECT(generator_heap->var_iter_tokens);
tmp_next_arg_1 = generator_heap->var_iter_tokens;
tmp_next_default_1 = Py_None;
tmp_assign_source_3 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 389;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_token);
tmp_cmp_expr_left_1 = generator_heap->var_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_2 = generator_heap->var_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 392;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_variable_name;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 392;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_4 = generator_heap->var_token;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_int_neg_1_none;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 393;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_variable_name;
    generator_heap->var_variable_name = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 394;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = generator_heap->var_variables;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_setdefault);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 394;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_variable_name);
tmp_args_element_value_1 = generator_heap->var_variable_name;
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 0);
generator->m_frame->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 394;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_variable_tokens;
    generator_heap->var_variable_tokens = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_6 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 1;
return tmp_expression_value_6;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 395;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
loop_start_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_next_arg_2;
PyObject *tmp_next_default_2;
CHECK_OBJECT(generator_heap->var_iter_tokens);
tmp_next_arg_2 = generator_heap->var_iter_tokens;
tmp_next_default_2 = Py_None;
tmp_assign_source_6 = BUILTIN_NEXT2(tstate, tmp_next_arg_2, tmp_next_default_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(generator_heap->var_token);
tmp_cmp_expr_left_3 = generator_heap->var_token;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_7 = generator_heap->var_token;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_name);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_whitespace;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
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


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto branch_end_3;
branch_no_3:;
goto loop_end_2;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
loop_start_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 407;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = generator_heap->var_token;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 407;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_3;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 409;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = generator_heap->var_token;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_name);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 409;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_whitespace;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 409;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
if (generator_heap->var_variable_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = generator_heap->var_variable_tokens;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_token == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = generator_heap->var_token;
generator->m_frame->m_frame.f_lineno = 410;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_11;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 411;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_11);
generator->m_yield_return_index = 3;
return tmp_expression_value_11;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 411;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_12;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = generator_heap->var_token;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_name);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_variable_value_end;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_13;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 413;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_13);
generator->m_yield_return_index = 4;
return tmp_expression_value_13;
yield_return_4:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 413;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
goto loop_end_3;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_14;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = generator_heap->var_token;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_name);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_str_plain_variable_ref;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 417;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = generator_heap->var_token;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_value);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 417;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 417;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_name;
    generator_heap->var_ref_name = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(generator_heap->var_ref_name);
tmp_cmp_expr_left_8 = generator_heap->var_ref_name;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 418;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_8 = generator_heap->var_variables;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 418;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 419;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = generator_heap->var_variables;
CHECK_OBJECT(generator_heap->var_ref_name);
tmp_subscript_value_3 = generator_heap->var_ref_name;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 419;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_reference_tokens;
    generator_heap->var_reference_tokens = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
if (generator_heap->var_variable_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = generator_heap->var_variable_tokens;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_extend);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_reference_tokens);
tmp_args_element_value_4 = generator_heap->var_reference_tokens;
generator->m_frame->m_frame.f_lineno = 420;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_19;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 421;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = generator_heap->var_token;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_location);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 421;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_location;
    generator_heap->var_ref_location = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_20;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = generator_heap->var_token;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_value);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_length;
    generator_heap->var_ref_length = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_reference_tokens);
tmp_iter_arg_2 = generator_heap->var_reference_tokens;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 423;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooooooooo";
generator_heap->exception_lineno = 423;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_13 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var__token;
    generator_heap->var__token = tmp_assign_source_13;
    Py_INCREF(generator_heap->var__token);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_21;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_23;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
CHECK_OBJECT(generator_heap->var__token);
tmp_expression_value_22 = generator_heap->var__token;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_with_reference);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 424;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_6 = module_var_accessor_textual$css$parse$ReferencedBy(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ReferencedBy);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
if (generator_heap->var_ref_name == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = generator_heap->var_ref_name;
if (generator_heap->var_ref_location == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_location);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = generator_heap->var_ref_location;
if (generator_heap->var_ref_length == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_length);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = generator_heap->var_ref_length;
if (generator_heap->var_token == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_23 = generator_heap->var_token;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_code);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 424;
tmp_expression_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 424;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_22, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 5;
return tmp_expression_value_21;
yield_return_5:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_22, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 424;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_5 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_5);
Py_DECREF(tmp_yield_result_5);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 423;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_4;
loop_end_4:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_12;
tmp_called_value_7 = module_var_accessor_textual$css$parse$_unresolved(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__unresolved);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_ref_name);
tmp_args_element_value_10 = generator_heap->var_ref_name;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = generator_heap->var_variables;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_keys);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 430;
tmp_args_element_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_token == NULL) {
Py_DECREF(tmp_args_element_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = generator_heap->var_token;
generator->m_frame->m_frame.f_lineno = 430;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_13;
if (generator_heap->var_variable_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = generator_heap->var_variable_tokens;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_append);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_token == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = generator_heap->var_token;
generator->m_frame->m_frame.f_lineno = 432;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_expression_value_26;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_6;
if (generator_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 433;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_26);
generator->m_yield_return_index = 6;
return tmp_expression_value_26;
yield_return_6:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 433;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_6 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_6);
Py_DECREF(tmp_yield_result_6);
}
branch_end_7:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_next_arg_3;
PyObject *tmp_next_default_3;
CHECK_OBJECT(generator_heap->var_iter_tokens);
tmp_next_arg_3 = generator_heap->var_iter_tokens;
tmp_next_default_3 = Py_None;
tmp_assign_source_14 = BUILTIN_NEXT2(tstate, tmp_next_arg_3, tmp_next_default_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 406;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_27 = generator_heap->var_token;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_name);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_variable_ref;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_29 = generator_heap->var_token;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_value);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 436;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 436;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_variable_name;
    generator_heap->var_variable_name = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(generator_heap->var_variable_name);
tmp_cmp_expr_left_10 = generator_heap->var_variable_name;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_10 = generator_heap->var_variables;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_5;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = generator_heap->var_variables;
CHECK_OBJECT(generator_heap->var_variable_name);
tmp_subscript_value_5 = generator_heap->var_variable_name;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_variable_tokens;
    generator_heap->var_variable_tokens = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_31 = generator_heap->var_token;
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_location);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 439;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_location;
    generator_heap->var_ref_location = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_32 = generator_heap->var_token;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_value);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_length;
    generator_heap->var_ref_length = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_33 = generator_heap->var_token;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_code);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 441;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_ref_code;
    generator_heap->var_ref_code = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(generator_heap->var_variable_tokens);
tmp_iter_arg_3 = generator_heap->var_variable_tokens;
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 442;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooooooooo";
generator_heap->exception_lineno = 442;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_22 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var__token;
    generator_heap->var__token = tmp_assign_source_22;
    Py_INCREF(generator_heap->var__token);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_34;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_7;
CHECK_OBJECT(generator_heap->var__token);
tmp_expression_value_35 = generator_heap->var__token;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_with_reference);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 443;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_11 = module_var_accessor_textual$css$parse$ReferencedBy(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ReferencedBy);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
if (generator_heap->var_variable_name == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_15 = generator_heap->var_variable_name;
if (generator_heap->var_ref_location == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_location);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_16 = generator_heap->var_ref_location;
if (generator_heap->var_ref_length == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_length);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_17 = generator_heap->var_ref_length;
if (generator_heap->var_ref_code == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ref_code);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_18 = generator_heap->var_ref_code;
generator->m_frame->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_11, call_args);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_10);

generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 443;
tmp_expression_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 443;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_expression_value_35, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 7;
return tmp_expression_value_34;
yield_return_7:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_expression_value_35, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 443;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
tmp_yield_result_7 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_7);
Py_DECREF(tmp_yield_result_7);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 442;
generator_heap->type_description_1 = "ccooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_5;
loop_end_5:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_element_value_21;
tmp_called_value_12 = module_var_accessor_textual$css$parse$_unresolved(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__unresolved);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_variable_name);
tmp_args_element_value_19 = generator_heap->var_variable_name;
if (generator_heap->var_variables == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_36 = generator_heap->var_variables;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain_keys);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 447;
tmp_args_element_value_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_token);
tmp_args_element_value_21 = generator_heap->var_token;
generator->m_frame->m_frame.f_lineno = 447;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_expression_value_37;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_8;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_37 = generator_heap->var_token;
Py_INCREF(tmp_expression_value_37);
generator->m_yield_return_index = 8;
return tmp_expression_value_37;
yield_return_8:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "ccooooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_8 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_8);
Py_DECREF(tmp_yield_result_8);
}
branch_end_9:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 388;
generator_heap->type_description_1 = "ccooooooooooo";
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
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_variables,
    generator_heap->var_iter_tokens,
    generator_heap->var_token,
    generator_heap->var_variable_name,
    generator_heap->var_variable_tokens,
    generator_heap->var_ref_name,
    generator_heap->var_reference_tokens,
    generator_heap->var_ref_location,
    generator_heap->var_ref_length,
    generator_heap->var__token,
    generator_heap->var_ref_code
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
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_variables);
generator_heap->var_variables = NULL;
Py_XDECREF(generator_heap->var_iter_tokens);
generator_heap->var_iter_tokens = NULL;
Py_XDECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
Py_XDECREF(generator_heap->var_variable_name);
generator_heap->var_variable_name = NULL;
Py_XDECREF(generator_heap->var_variable_tokens);
generator_heap->var_variable_tokens = NULL;
Py_XDECREF(generator_heap->var_ref_name);
generator_heap->var_ref_name = NULL;
Py_XDECREF(generator_heap->var_reference_tokens);
generator_heap->var_reference_tokens = NULL;
Py_XDECREF(generator_heap->var_ref_location);
generator_heap->var_ref_location = NULL;
Py_XDECREF(generator_heap->var_ref_length);
generator_heap->var_ref_length = NULL;
Py_XDECREF(generator_heap->var__token);
generator_heap->var__token = NULL;
Py_XDECREF(generator_heap->var_ref_code);
generator_heap->var_ref_code = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->var_variables);
generator_heap->var_variables = NULL;
CHECK_OBJECT(generator_heap->var_iter_tokens);
CHECK_OBJECT(generator_heap->var_iter_tokens);
Py_DECREF(generator_heap->var_iter_tokens);
generator_heap->var_iter_tokens = NULL;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
Py_XDECREF(generator_heap->var_variable_name);
generator_heap->var_variable_name = NULL;
Py_XDECREF(generator_heap->var_variable_tokens);
generator_heap->var_variable_tokens = NULL;
Py_XDECREF(generator_heap->var_ref_name);
generator_heap->var_ref_name = NULL;
Py_XDECREF(generator_heap->var_reference_tokens);
generator_heap->var_reference_tokens = NULL;
Py_XDECREF(generator_heap->var_ref_location);
generator_heap->var_ref_location = NULL;
Py_XDECREF(generator_heap->var_ref_length);
generator_heap->var_ref_length = NULL;
Py_XDECREF(generator_heap->var__token);
generator_heap->var__token = NULL;
Py_XDECREF(generator_heap->var_ref_code);
generator_heap->var_ref_code = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_context,
        module_textual$css$parse,
        mod_consts.const_str_plain_substitute_references,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_8b2488a3ebcd843b05e97e74723296a2,
        closure,
        2,
#if 1
        sizeof(struct textual$css$parse$$$function__7_substitute_references$$$genobj__1_substitute_references_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$parse$$$function__8_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_scope = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_css = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_read_from = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_variables = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_variable_tokens = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_is_default_rules = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_tie_breaker = Nuitka_Cell_New1(python_pars[6]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[7];
tmp_closure_1[0] = par_css;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_is_default_rules;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_read_from;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_scope;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_tie_breaker;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_variable_tokens;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_variables;
Py_INCREF(tmp_closure_1[6]);
tmp_return_value = MAKE_GENERATOR_textual$css$parse$$$function__8_parse$$$genobj__1_parse(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_scope);
CHECK_OBJECT(par_scope);
Py_DECREF(par_scope);
par_scope = NULL;
CHECK_OBJECT(par_css);
CHECK_OBJECT(par_css);
Py_DECREF(par_css);
par_css = NULL;
CHECK_OBJECT(par_read_from);
CHECK_OBJECT(par_read_from);
Py_DECREF(par_read_from);
par_read_from = NULL;
CHECK_OBJECT(par_variables);
CHECK_OBJECT(par_variables);
Py_DECREF(par_variables);
par_variables = NULL;
CHECK_OBJECT(par_variable_tokens);
CHECK_OBJECT(par_variable_tokens);
Py_DECREF(par_variable_tokens);
par_variable_tokens = NULL;
CHECK_OBJECT(par_is_default_rules);
CHECK_OBJECT(par_is_default_rules);
Py_DECREF(par_is_default_rules);
par_is_default_rules = NULL;
CHECK_OBJECT(par_tie_breaker);
CHECK_OBJECT(par_tie_breaker);
Py_DECREF(par_tie_breaker);
par_tie_breaker = NULL;
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
struct textual$css$parse$$$function__8_parse$$$genobj__1_parse_locals {
PyObject *var_reference_tokens;
PyObject *var_tokens;
PyObject *var_token;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$css$parse$$$function__8_parse$$$genobj__1_parse_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$parse$$$function__8_parse$$$genobj__1_parse_locals *generator_heap = (struct textual$css$parse$$$function__8_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_reference_tokens = NULL;
generator_heap->var_tokens = NULL;
generator_heap->var_token = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_061b0c1a5e77e4293bbdeb0a80b081f4, module_textual$css$parse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 472;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_textual$css$parse$tokenize_values(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokenize_values);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 472;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variables);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 472;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[6]);
generator->m_frame->m_frame.f_lineno = 472;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 472;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(generator_heap->var_reference_tokens == NULL);
generator_heap->var_reference_tokens = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 473;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[5]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 473;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(generator_heap->var_reference_tokens);
tmp_expression_value_1 = generator_heap->var_reference_tokens;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 474;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 474;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[5]);
generator->m_frame->m_frame.f_lineno = 474;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 474;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_textual$css$parse$substitute_references(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_substitute_references);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_textual$css$parse$tokenize(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokenize);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_css);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read_from);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 476;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_variable_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[5]);
generator->m_frame->m_frame.f_lineno = 476;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_6};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 476;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_tokens == NULL);
generator_heap->var_tokens = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
if (generator_heap->var_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 478;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_next_arg_1 = generator_heap->var_tokens;
tmp_next_default_1 = Py_None;
tmp_assign_source_3 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 478;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_token;
    generator_heap->var_token = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_token);
tmp_cmp_expr_left_2 = generator_heap->var_token;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(generator_heap->var_token);
tmp_expression_value_3 = generator_heap->var_token;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 481;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 481;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 481;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_selector_start_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 481;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_2);

generator_heap->exception_lineno = 481;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_yieldfrom_result_1;
tmp_called_value_6 = module_var_accessor_textual$css$parse$parse_rule_set(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_parse_rule_set);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 482;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_scope);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 483;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (generator_heap->var_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 484;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = generator_heap->var_tokens;
CHECK_OBJECT(generator_heap->var_token);
tmp_kw_call_arg_value_2_1 = generator_heap->var_token;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_default_rules);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 486;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tie_breaker);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 487;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 482;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_is_default_rules_str_plain_tie_breaker_tuple);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 482;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_4;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 482;
generator_heap->type_description_1 = "cccccccooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 477;
generator_heap->type_description_1 = "cccccccooo";
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
    generator->m_closure[3],
    generator->m_closure[0],
    generator->m_closure[2],
    generator->m_closure[6],
    generator->m_closure[5],
    generator->m_closure[1],
    generator->m_closure[4],
    generator_heap->var_reference_tokens,
    generator_heap->var_tokens,
    generator_heap->var_token
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

Py_XDECREF(generator_heap->var_reference_tokens);
generator_heap->var_reference_tokens = NULL;
Py_XDECREF(generator_heap->var_tokens);
generator_heap->var_tokens = NULL;
Py_XDECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_reference_tokens);
CHECK_OBJECT(generator_heap->var_reference_tokens);
Py_DECREF(generator_heap->var_reference_tokens);
generator_heap->var_reference_tokens = NULL;
Py_XDECREF(generator_heap->var_tokens);
generator_heap->var_tokens = NULL;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$parse$$$function__8_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$parse$$$function__8_parse$$$genobj__1_parse_context,
        module_textual$css$parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_061b0c1a5e77e4293bbdeb0a80b081f4,
        closure,
        7,
#if 1
        sizeof(struct textual$css$parse$$$function__8_parse$$$genobj__1_parse_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__1_is_id_selector(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__1_is_id_selector,
        mod_consts.const_str_plain_is_id_selector,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3f932a404ea4ecf4e37c02d84f3d3292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_8fc399882fea4579e9f9670ef63c8fd5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__2__add_specificity(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__2__add_specificity,
        mod_consts.const_str_plain__add_specificity,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8a7de93e59340a9b54d24c5148138424,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_3219015af949bfccb31d0f31f98cfbb8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__3_parse_selectors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__3_parse_selectors,
        mod_consts.const_str_plain_parse_selectors,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f4aae51ee47e2f6969602a8643d59891,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__4_parse_rule_set,
        mod_consts.const_str_plain_parse_rule_set,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_76aada8e0be5ff676e85ec53ee3f75a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors,
        mod_consts.const_str_plain_combine_selectors,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca614411618b9913acc9f32c7e15bd88,
#endif
        code_objects_91f9731617ba8877ce412bfbd8515899,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_cc12b42ccb16b111b512601726cae725,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__5_parse_declarations(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__5_parse_declarations,
        mod_consts.const_str_plain_parse_declarations,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_01b6d03fe03f626027c1fe782d863b97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_4927649886de368b8348ff9a5f0ea9a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__6__unresolved(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__6__unresolved,
        mod_consts.const_str_plain__unresolved,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7e8c2554232f1bdb2bd12bedd72571fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_7bb7c6e8686f4952809f29672f96f8fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__7_substitute_references(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__7_substitute_references,
        mod_consts.const_str_plain_substitute_references,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8b2488a3ebcd843b05e97e74723296a2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_66b82c1279f7285fc170352a4631b26b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$parse$$$function__8_parse(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$parse$$$function__8_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_061b0c1a5e77e4293bbdeb0a80b081f4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$parse,
        mod_consts.const_str_digest_f0eb39a75c9247e8429fef5be990a507,
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

static function_impl_code const function_table_textual$css$parse[] = {
impl_textual$css$parse$$$function__4_parse_rule_set$$$genobj__1_parse_rule_set$$$function__1_combine_selectors,
impl_textual$css$parse$$$function__1_is_id_selector,
impl_textual$css$parse$$$function__2__add_specificity,
impl_textual$css$parse$$$function__3_parse_selectors,
impl_textual$css$parse$$$function__4_parse_rule_set,
impl_textual$css$parse$$$function__5_parse_declarations,
impl_textual$css$parse$$$function__6__unresolved,
impl_textual$css$parse$$$function__7_substitute_references,
impl_textual$css$parse$$$function__8_parse,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$parse);
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
        module_textual$css$parse,
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
        function_table_textual$css$parse,
        sizeof(function_table_textual$css$parse) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.parse";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$parse(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$parse");

    // Store the module for future use.
    module_textual$css$parse = module;

    moduledict_textual$css$parse = MODULE_DICT(module_textual$css$parse);

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
        PRINT_STRING("textual$css$parse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$parse: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$parse: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.parse" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$parse\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$parse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$parse,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$parse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$parse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$parse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$parse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$parse);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$parse;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$parse = MAKE_MODULE_FRAME(code_objects_4b9e501cbf630bea29400e4842eeecc5, module_textual$css$parse);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$parse);
assert(Py_REFCNT(frame_frame_textual$css$parse) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$parse$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$parse$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_12);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_1d61886b35a65442c3aa5c8690a54f7a;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_HelpText_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_HelpText,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_HelpText);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_HelpText, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_5884710c6cb5b52cb681e611c07027ac;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DeclarationError_str_plain_StylesBuilder_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 9;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_DeclarationError,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_DeclarationError);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_DeclarationError, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_StylesBuilder,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_StylesBuilder);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_StylesBuilder, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_29fdb8be2107fab7f1ab4773cd3e4818;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_UnresolvedVariableError_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_UnresolvedVariableError,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_UnresolvedVariableError);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnresolvedVariableError, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_914a4d6f0fed66ba39e84f0f5061aefc_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 11;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_CombinatorType,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Declaration,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Declaration);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Declaration, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_RuleSet,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_RuleSet);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RuleSet, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Selector,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Selector);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_SelectorSet,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_SelectorSet);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_SelectorType,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_SelectorType);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorType, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Styles_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 19;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Styles,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Styles);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Styles, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_acfc3fc6d26f823727983526fa6076e1;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_c51841fa43929cd186d4a5e6875a0789_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 20;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_IDENTIFIER,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_IDENTIFIER, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Token,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Token);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Token, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_tokenize,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_tokenize);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_tokenize_declarations,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_tokenize_declarations);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_declarations, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_tokenize_values,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_tokenize_values);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_tokenize_values, tmp_assign_source_31);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_058dbb6fc9ff11c18f0d029f91026634;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ReferencedBy_str_plain_UnexpectedEnd_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 27;
tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_32;
}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_ReferencedBy,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ReferencedBy);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_ReferencedBy, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_22 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_UnexpectedEnd,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_UnexpectedEnd);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_UnexpectedEnd, tmp_assign_source_34);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_3f43d1377a3aa44ae25c1e06b470b808;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_CSSLocation_str_plain_Specificity3_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 28;
tmp_assign_source_35 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_35;
}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_23 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_CSSLocation,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_CSSLocation);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_CSSLocation, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_24 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_Specificity3,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_Specificity3);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_Specificity3, tmp_assign_source_37);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_a97d50c89e867b12fe5ca405c9ed4431;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$css$parse;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_get_suggestion_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$css$parse->m_frame.f_lineno = 29;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_textual$css$parse,
        mod_consts.const_str_plain_get_suggestion,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_get_suggestion);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_selector;
tmp_expression_value_1 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TYPE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_tuple_int_0_int_0_int_pos_1_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
tmp_assign_source_39 = _PyDict_NewPresized( 9 );
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_9;
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_start;
tmp_expression_value_2 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_TYPE);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_tuple_int_0_int_0_int_pos_1_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_class;
tmp_expression_value_3 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto dict_build_exception_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CLASS);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_tuple_int_0_int_pos_1_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_start_class;
tmp_expression_value_4 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CLASS);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_tuple_int_0_int_pos_1_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_id;
tmp_expression_value_5 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ID);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_tuple_int_pos_1_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_start_id;
tmp_expression_value_6 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto dict_build_exception_1;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ID);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_tuple_int_pos_1_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_universal;
tmp_expression_value_7 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto dict_build_exception_1;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_UNIVERSAL);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_selector_start_universal;
tmp_expression_value_8 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto dict_build_exception_1;
}
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_UNIVERSAL);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_nested;
tmp_expression_value_9 = module_var_accessor_textual$css$parse$SelectorType(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectorType);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto dict_build_exception_1;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_NESTED);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_39);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_SELECTOR_MAP, tmp_assign_source_39);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_a0db151ddb6befa7924a3cbe02d4f54f;
tmp_ass_subscribed_1 = module_var_accessor_textual$css$parse$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_SELECTOR_MAP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_expression_value_10 = module_var_accessor_textual$css$parse$re(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_str_chr_35;
tmp_add_expr_right_1 = module_var_accessor_textual$css$parse$IDENTIFIER(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDENTIFIER);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse->m_frame.f_lineno = 43;
tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_ID_SELECTOR, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_3 = module_var_accessor_textual$css$parse$lru_cache(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse->m_frame.f_lineno = 46;
tmp_called_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_128_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_4cf0e3b81b4ba459878ec0d610c605e9);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$css$parse$$$function__1_is_id_selector(tstate, tmp_annotations_1);

frame_frame_textual$css$parse->m_frame.f_lineno = 46;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_is_id_selector, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_035a53b2dba10e0842fb57d4fdd1a86a);

tmp_assign_source_42 = MAKE_FUNCTION_textual$css$parse$$$function__2__add_specificity(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__add_specificity, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_5 = module_var_accessor_textual$css$parse$lru_cache(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto frame_exception_exit_1;
}
frame_frame_textual$css$parse->m_frame.f_lineno = 77;
tmp_called_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1024_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_29c8d6645f654d58f412875497725970);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$css$parse$$$function__3_parse_selectors(tstate, tmp_annotations_3);

frame_frame_textual$css$parse->m_frame.f_lineno = 77;
tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_selectors, tmp_assign_source_43);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
tmp_defaults_1 = mod_consts.const_tuple_false_int_0_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_7c793c6cb6df0040b5c5f2706dce0169);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_44 = MAKE_FUNCTION_textual$css$parse$$$function__4_parse_rule_set(tstate, tmp_defaults_1, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_rule_set, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_7fc8960b3895abc6a36687684c83eba8);

tmp_assign_source_45 = MAKE_FUNCTION_textual$css$parse$$$function__5_parse_declarations(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_declarations, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_dfc34e4fa4d4df30e3f39ffa72fa96e1);

tmp_assign_source_46 = MAKE_FUNCTION_textual$css$parse$$$function__6__unresolved(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain__unresolved, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_7;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_5050f9bf39c31e0125d7069ab6a786e3);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_47 = MAKE_FUNCTION_textual$css$parse$$$function__7_substitute_references(tstate, tmp_defaults_2, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_substitute_references, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_8;
tmp_defaults_3 = mod_consts.const_tuple_none_none_false_int_0_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_cb3bfce221e6d73da9dcb84062cf8890);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_48 = MAKE_FUNCTION_textual$css$parse$$$function__8_parse(tstate, tmp_defaults_3, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_textual$css$parse, (Nuitka_StringObject *)mod_consts.const_str_plain_parse, tmp_assign_source_48);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$parse", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.parse" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$parse);
    return module_textual$css$parse;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$parse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$parse", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'docstring_parser$epydoc'
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



/* The "module_docstring_parser$epydoc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_docstring_parser$epydoc;
PyDictObject *moduledict_docstring_parser$epydoc;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_strip;
PyObject *const_str_plain_Docstring;
PyObject *const_str_plain_DocstringStyle;
PyObject *const_str_plain_EPYDOC;
PyObject *const_tuple_str_plain_style_tuple;
PyObject *const_str_plain_cleandoc;
PyObject *const_str_plain_re;
PyObject *const_str_plain_search;
PyObject *const_str_digest_220dbd62cd09c593d1471cdd5302ac92;
PyObject *const_str_plain_M;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_start;
PyObject *const_tuple_str_newline_int_pos_1_tuple;
PyObject *const_str_plain_short_description;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_newline_tuple;
PyObject *const_str_plain_blank_after_short_description;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_digest_09bc009ffd858aaf58df7e98266d9b89_tuple;
PyObject *const_str_plain_blank_after_long_description;
PyObject *const_str_plain_long_description;
PyObject *const_tuple_str_digest_1aaed1f721736612eec784141f116260_tuple;
PyObject *const_tuple_str_digest_69363c3018df71a2291563181a1bc9d8_tuple;
PyObject *const_tuple_str_digest_b5aff9006a051d1e95b50e571ccb8391_tuple;
PyObject *const_tuple_str_digest_a75d6b424a0dd298dbacb26ff1a7275e_tuple;
PyObject *const_tuple_str_digest_aee3f611c849b1ed09c7bdd232341586_tuple;
PyObject *const_str_plain_finditer;
PyObject *const_str_digest_602f745a29bb56abafa45907f0eb19f1;
PyObject *const_str_plain_S;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_param_pattern;
PyObject *const_str_plain_attribute_pattern;
PyObject *const_str_plain_raise_pattern;
PyObject *const_str_plain_return_pattern;
PyObject *const_str_plain_meta_pattern;
PyObject *const_str_plain_ParseError;
PyObject *const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea;
PyObject *const_str_digest_080e3a36b51a04e8885de5b0d8e6142f;
PyObject *const_str_plain_param;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_attribute;
PyObject *const_str_plain_raise;
PyObject *const_str_plain_return;
PyObject *const_str_plain_meta;
PyObject *const_str_plain__clean_str;
PyObject *const_str_digest_2717a74e8094c62311bf53472f4de0ca;
PyObject *const_tuple_520ee66924e8626819faa95cf0d42a88_tuple;
PyObject *const_str_newline;
PyObject *const_str_plain_stream;
PyObject *const_tuple_str_plain_param_str_plain_attribute_str_plain_return_tuple;
PyObject *const_tuple_str_plain_return_tuple;
PyObject *const_str_plain_params;
PyObject *const_str_plain_type_name;
PyObject *const_str_plain_description;
PyObject *const_frozenset_dd777cb7575e8d2413e257bc028ab070;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_is_generator;
PyObject *const_str_digest_3a6eeef8cc20647295dd2f364bc184eb;
PyObject *const_tuple_str_plain_param_str_plain_attribute_tuple;
PyObject *const_str_plain_is_done;
PyObject *const_tuple_str_plain_type_name_tuple;
PyObject *const_tuple_str_chr_63_tuple;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_match;
PyObject *const_str_digest_496301caa8cfa13fdf04eea40ee48941;
PyObject *const_str_plain_DOTALL;
PyObject *const_str_plain_rstrip;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_DocstringParam;
PyObject *const_tuple_str_plain_description_tuple;
PyObject *const_tuple_76efcb0764b11881654c90d64cfa9955_tuple;
PyObject *const_str_plain_DocstringReturns;
PyObject *const_tuple_str_plain_is_generator_false_tuple;
PyObject *const_tuple_4d40bd91fca60d42b0d2b4c3e62a2661_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_DocstringRaises;
PyObject *const_tuple_str_plain_args_str_plain_description_str_plain_type_name_tuple;
PyObject *const_str_plain_DocstringMeta;
PyObject *const_tuple_str_plain_args_str_plain_description_tuple;
PyObject *const_str_digest_24746f585ec81069525114d28b7a36fd;
PyObject *const_str_plain_ret;
PyObject *const_str_plain_append;
PyObject *const_str_digest_92af979234bf950cfeaf71893feaaa8c;
PyObject *const_str_plain_desc;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_is_type;
PyObject *const_str_plain_process_desc;
PyObject *const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7;
PyObject *const_str_plain_is_optional;
PyObject *const_str_chr_63;
PyObject *const_str_digest_03386dc6975876a3b08961eee1096431;
PyObject *const_str_plain_arg_name;
PyObject *const_str_chr_58;
PyObject *const_str_plain_parts;
PyObject *const_str_digest_703ceb7877e2f1307d7cced9564cab59;
PyObject *const_tuple_str_plain_yield_str_plain_ytype_tuple;
PyObject *const_tuple_str_plain_return_str_plain_rtype_tuple;
PyObject *const_str_chr_64;
PyObject *const_str_digest_28abd051fa8d5c0c1c00f0d93cbfbe11;
PyObject *const_str_digest_f397d8a2bad7ed4361679f7731a3939d;
PyObject *const_str_space;
PyObject *const_str_digest_dcbf6393b23c804b2b95b8bfe5cbfe73;
PyObject *const_str_plain_rendering_style;
PyObject *const_str_plain_RenderingStyle;
PyObject *const_str_plain_EXPANDED;
PyObject *const_str_plain_CLEAN;
PyObject *const_str_plain_splitlines;
PyObject *const_str_plain_indent;
PyObject *const_str_digest_eed7c38205d1c563a3664fc066321ac4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_T;
PyObject *const_str_plain_common;
PyObject *const_tuple_d22546ba9c7f5b6fbd891feb4538b5e9_tuple;
PyObject *const_str_plain_string;
PyObject *const_str_plain_text;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_COMPACT;
PyObject *const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
PyObject *const_str_plain_docstring;
PyObject *const_str_plain_compose;
PyObject *const_str_digest_7b9ed185caf368c256cce992d046e9bf;
PyObject *const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3;
PyObject *const_tuple_str_plain_string_tuple;
PyObject *const_tuple_c50c8c9c212fc1de8a28137e7a5ad308_tuple;
PyObject *const_tuple_ea1feb5bde589ac618ff2a9ecc4edf0d_tuple;
PyObject *const_tuple_e1b7786f724104830fe93fe166b0cda9_tuple;
PyObject *const_tuple_str_plain_indent_str_plain_rendering_style_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[130];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("docstring_parser.epydoc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Docstring);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringStyle);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_EPYDOC);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_220dbd62cd09c593d1471cdd5302ac92);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_M);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_int_pos_1_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_short_description);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_blank_after_short_description);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_09bc009ffd858aaf58df7e98266d9b89_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_blank_after_long_description);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_long_description);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1aaed1f721736612eec784141f116260_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_69363c3018df71a2291563181a1bc9d8_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b5aff9006a051d1e95b50e571ccb8391_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a75d6b424a0dd298dbacb26ff1a7275e_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aee3f611c849b1ed09c7bdd232341586_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_finditer);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_602f745a29bb56abafa45907f0eb19f1);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_S);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_param_pattern);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_attribute_pattern);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_pattern);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_return_pattern);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_meta_pattern);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParseError);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_param);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_attribute);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_meta);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__clean_str);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_520ee66924e8626819faa95cf0d42a88_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_attribute_str_plain_return_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_name);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_frozenset_dd777cb7575e8d2413e257bc028ab070);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_generator);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a6eeef8cc20647295dd2f364bc184eb);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_attribute_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_done);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_name_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_496301caa8cfa13fdf04eea40ee48941);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringParam);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_76efcb0764b11881654c90d64cfa9955_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringReturns);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_generator_false_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_4d40bd91fca60d42b0d2b4c3e62a2661_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringRaises);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_description_str_plain_type_name_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringMeta);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_description_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ret);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_92af979234bf950cfeaf71893feaaa8c);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_desc);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_type);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_desc);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_optional);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_03386dc6975876a3b08961eee1096431);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_arg_name);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_parts);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_703ceb7877e2f1307d7cced9564cab59);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_yield_str_plain_ytype_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_str_plain_rtype_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_28abd051fa8d5c0c1c00f0d93cbfbe11);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_f397d8a2bad7ed4361679f7731a3939d);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcbf6393b23c804b2b95b8bfe5cbfe73);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_rendering_style);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderingStyle);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXPANDED);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLEAN);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_indent);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_eed7c38205d1c563a3664fc066321ac4);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_common);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_d22546ba9c7f5b6fbd891feb4538b5e9_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_string);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPACT);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_docstring);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b9ed185caf368c256cce992d046e9bf);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_c50c8c9c212fc1de8a28137e7a5ad308_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_ea1feb5bde589ac618ff2a9ecc4edf0d_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_e1b7786f724104830fe93fe166b0cda9_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_str_plain_rendering_style_tuple);
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
void checkModuleConstants_docstring_parser$epydoc(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Docstring);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringStyle);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_EPYDOC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EPYDOC);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_style_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleandoc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_220dbd62cd09c593d1471cdd5302ac92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_220dbd62cd09c593d1471cdd5302ac92);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_M));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_M);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_int_pos_1_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_short_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_short_description);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_blank_after_short_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blank_after_short_description);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_09bc009ffd858aaf58df7e98266d9b89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_09bc009ffd858aaf58df7e98266d9b89_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_blank_after_long_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blank_after_long_description);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_long_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_long_description);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1aaed1f721736612eec784141f116260_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1aaed1f721736612eec784141f116260_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_69363c3018df71a2291563181a1bc9d8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_69363c3018df71a2291563181a1bc9d8_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b5aff9006a051d1e95b50e571ccb8391_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b5aff9006a051d1e95b50e571ccb8391_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a75d6b424a0dd298dbacb26ff1a7275e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a75d6b424a0dd298dbacb26ff1a7275e_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aee3f611c849b1ed09c7bdd232341586_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aee3f611c849b1ed09c7bdd232341586_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_finditer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finditer);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_602f745a29bb56abafa45907f0eb19f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_602f745a29bb56abafa45907f0eb19f1);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_S));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_param_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_param_pattern);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_attribute_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attribute_pattern);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_pattern);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_return_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return_pattern);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_meta_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meta_pattern);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParseError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParseError);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_param);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_attribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attribute);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meta);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__clean_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__clean_str);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_520ee66924e8626819faa95cf0d42a88_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_520ee66924e8626819faa95cf0d42a88_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_attribute_str_plain_return_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_param_str_plain_attribute_str_plain_return_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_return_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_params);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_name);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_frozenset_dd777cb7575e8d2413e257bc028ab070));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_dd777cb7575e8d2413e257bc028ab070);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_generator);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a6eeef8cc20647295dd2f364bc184eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a6eeef8cc20647295dd2f364bc184eb);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_attribute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_param_str_plain_attribute_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_done);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_name_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_63_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_496301caa8cfa13fdf04eea40ee48941));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_496301caa8cfa13fdf04eea40ee48941);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOTALL);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringParam);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_description_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_76efcb0764b11881654c90d64cfa9955_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76efcb0764b11881654c90d64cfa9955_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringReturns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringReturns);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_generator_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_generator_false_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_4d40bd91fca60d42b0d2b4c3e62a2661_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d40bd91fca60d42b0d2b4c3e62a2661_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringRaises));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringRaises);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_description_str_plain_type_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_description_str_plain_type_name_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringMeta);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_description_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ret);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_92af979234bf950cfeaf71893feaaa8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92af979234bf950cfeaf71893feaaa8c);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_desc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_desc);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_type);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_desc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_desc);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_optional);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_03386dc6975876a3b08961eee1096431));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03386dc6975876a3b08961eee1096431);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_arg_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arg_name);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parts);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_703ceb7877e2f1307d7cced9564cab59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_703ceb7877e2f1307d7cced9564cab59);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_yield_str_plain_ytype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_yield_str_plain_ytype_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_str_plain_rtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_return_str_plain_rtype_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_64);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_28abd051fa8d5c0c1c00f0d93cbfbe11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28abd051fa8d5c0c1c00f0d93cbfbe11);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_f397d8a2bad7ed4361679f7731a3939d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f397d8a2bad7ed4361679f7731a3939d);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcbf6393b23c804b2b95b8bfe5cbfe73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcbf6393b23c804b2b95b8bfe5cbfe73);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_rendering_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rendering_style);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderingStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderingStyle);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXPANDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXPANDED);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLEAN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLEAN);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitlines);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_indent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_indent);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_eed7c38205d1c563a3664fc066321ac4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eed7c38205d1c563a3664fc066321ac4);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_common);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_d22546ba9c7f5b6fbd891feb4538b5e9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d22546ba9c7f5b6fbd891feb4538b5e9_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPACT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMPACT);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_docstring);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b9ed185caf368c256cce992d046e9bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b9ed185caf368c256cce992d046e9bf);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_string_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_string_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_c50c8c9c212fc1de8a28137e7a5ad308_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c50c8c9c212fc1de8a28137e7a5ad308_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_ea1feb5bde589ac618ff2a9ecc4edf0d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ea1feb5bde589ac618ff2a9ecc4edf0d_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_e1b7786f724104830fe93fe166b0cda9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e1b7786f724104830fe93fe166b0cda9_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_str_plain_rendering_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_indent_str_plain_rendering_style_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_docstring_parser$epydoc$Docstring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_Docstring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Docstring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Docstring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Docstring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Docstring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_Docstring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_Docstring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Docstring);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$DocstringMeta(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringMeta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringMeta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringMeta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringMeta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringMeta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringMeta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringMeta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringMeta);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$DocstringParam(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringParam);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$DocstringRaises(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringRaises);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringRaises);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringRaises, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringRaises);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringRaises, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringRaises);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringRaises);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringRaises);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$DocstringReturns(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringReturns);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringReturns);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringReturns, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringReturns);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringReturns, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringReturns);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringReturns);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringReturns);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$DocstringStyle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringStyle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringStyle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringStyle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringStyle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringStyle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringStyle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringStyle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringStyle);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$ParseError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseError);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$RenderingStyle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderingStyle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RenderingStyle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RenderingStyle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RenderingStyle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RenderingStyle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderingStyle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderingStyle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderingStyle);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$_clean_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__clean_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__clean_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__clean_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__clean_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_str);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_docstring_parser$epydoc$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_docstring_parser$epydoc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_docstring_parser$epydoc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_docstring_parser$epydoc->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_35a87f192ab8ad8576e0c329cef7b698;
static PyCodeObject *code_objects_f99f578d316ce90fbb0b1efce6a8ad22;
static PyCodeObject *code_objects_5dfd5578d738dc6dc44ae03633a09c4d;
static PyCodeObject *code_objects_4b20d5fa8c216763635dbc3d1cf5ba7a;
static PyCodeObject *code_objects_6c922fe3f09a76eda7190edab8bb5431;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7b9ed185caf368c256cce992d046e9bf); CHECK_OBJECT(module_filename_obj);
code_objects_35a87f192ab8ad8576e0c329cef7b698 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3, mod_consts.const_str_digest_7cbb26bd8a715d769cf85f9f9cb309b3, NULL, NULL, 0, 0, 0);
code_objects_f99f578d316ce90fbb0b1efce6a8ad22 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__clean_str, mod_consts.const_str_plain__clean_str, mod_consts.const_tuple_str_plain_string_tuple, NULL, 1, 0, 0);
code_objects_5dfd5578d738dc6dc44ae03633a09c4d = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_compose, mod_consts.const_str_plain_compose, mod_consts.const_tuple_c50c8c9c212fc1de8a28137e7a5ad308_tuple, NULL, 3, 0, 0);
code_objects_4b20d5fa8c216763635dbc3d1cf5ba7a = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse, mod_consts.const_str_plain_parse, mod_consts.const_tuple_ea1feb5bde589ac618ff2a9ecc4edf0d_tuple, NULL, 1, 0, 0);
code_objects_6c922fe3f09a76eda7190edab8bb5431 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_process_desc, mod_consts.const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7, mod_consts.const_tuple_e1b7786f724104830fe93fe166b0cda9_tuple, mod_consts.const_tuple_str_plain_indent_str_plain_rendering_style_tuple, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__1__clean_str(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__2_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_docstring_parser$epydoc$$$function__1__clean_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
struct Nuitka_FrameObject *frame_frame_docstring_parser$epydoc$$$function__1__clean_str;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str)) {
    Py_XDECREF(cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str = MAKE_FUNCTION_FRAME(tstate, code_objects_f99f578d316ce90fbb0b1efce6a8ad22, module_docstring_parser$epydoc, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str->m_type_description == NULL);
frame_frame_docstring_parser$epydoc$$$function__1__clean_str = cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_docstring_parser$epydoc$$$function__1__clean_str);
assert(Py_REFCNT(frame_frame_docstring_parser$epydoc$$$function__1__clean_str) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_string);
tmp_expression_value_1 = par_string;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__1__clean_str->m_frame.f_lineno = 23;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_string;
    assert(old != NULL);
    par_string = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_string);
tmp_len_arg_1 = par_string;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_string);
tmp_return_value = par_string;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_docstring_parser$epydoc$$$function__1__clean_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_docstring_parser$epydoc$$$function__1__clean_str->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_docstring_parser$epydoc$$$function__1__clean_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_docstring_parser$epydoc$$$function__1__clean_str,
    type_description_1,
    par_string
);


// Release cached frame if used for exception.
if (frame_frame_docstring_parser$epydoc$$$function__1__clean_str == cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str);
    cache_frame_frame_docstring_parser$epydoc$$$function__1__clean_str = NULL;
}

assertFrameObject(frame_frame_docstring_parser$epydoc$$$function__1__clean_str);

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
CHECK_OBJECT(par_string);
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
par_string = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_string);
par_string = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_docstring_parser$epydoc$$$function__2_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_text = python_pars[0];
PyObject *var_stream = NULL;
PyObject *var_key = NULL;
PyObject *var_params = NULL;
PyObject *var_is_done = NULL;
PyObject *var_ret = NULL;
PyObject *var_match = NULL;
PyObject *var_desc_chunk = NULL;
PyObject *var_meta_chunk = NULL;
PyObject *var_parts = NULL;
PyObject *var_long_desc_chunk = NULL;
PyObject *var_param_pattern = NULL;
PyObject *var_attribute_pattern = NULL;
PyObject *var_raise_pattern = NULL;
PyObject *var_return_pattern = NULL;
PyObject *var_meta_pattern = NULL;
PyObject *var_chunk = NULL;
PyObject *var_param_match = NULL;
PyObject *var_attribute_match = NULL;
PyObject *var_raise_match = NULL;
PyObject *var_return_match = NULL;
PyObject *var_meta_match = NULL;
PyObject *var_base = NULL;
PyObject *var_args = NULL;
PyObject *var_token = NULL;
PyObject *var_desc = NULL;
PyObject *var_first_line = NULL;
PyObject *var_rest = NULL;
PyObject *var_arg_name = NULL;
PyObject *var_info = NULL;
PyObject *var_info_key = NULL;
PyObject *var_is_generator = NULL;
PyObject *var_type_name = NULL;
PyObject *var_is_optional = NULL;
PyObject *var_default = NULL;
PyObject *var_meta_item = NULL;
PyObject *var__ = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__element_4 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
PyObject *tmp_tuple_unpack_6__element_1 = NULL;
PyObject *tmp_tuple_unpack_6__source_iter = NULL;
PyObject *tmp_tuple_unpack_7__element_1 = NULL;
PyObject *tmp_tuple_unpack_7__element_2 = NULL;
PyObject *tmp_tuple_unpack_7__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_docstring_parser$epydoc$$$function__2_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
static struct Nuitka_FrameObject *cache_frame_frame_docstring_parser$epydoc$$$function__2_parse = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_docstring_parser$epydoc$$$function__2_parse)) {
    Py_XDECREF(cache_frame_frame_docstring_parser$epydoc$$$function__2_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_docstring_parser$epydoc$$$function__2_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_docstring_parser$epydoc$$$function__2_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_4b20d5fa8c216763635dbc3d1cf5ba7a, module_docstring_parser$epydoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_docstring_parser$epydoc$$$function__2_parse->m_type_description == NULL);
frame_frame_docstring_parser$epydoc$$$function__2_parse = cache_frame_frame_docstring_parser$epydoc$$$function__2_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_docstring_parser$epydoc$$$function__2_parse);
assert(Py_REFCNT(frame_frame_docstring_parser$epydoc$$$function__2_parse) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_docstring_parser$epydoc$Docstring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Docstring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_docstring_parser$epydoc$DocstringStyle(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringStyle);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EPYDOC);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 34;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_text);
tmp_operand_value_1 = par_text;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
CHECK_OBJECT(var_ret);
tmp_return_value = var_ret;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_docstring_parser$epydoc$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_1 = par_text;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 38;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cleandoc, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_text;
    assert(old != NULL);
    par_text = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_search);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_220dbd62cd09c593d1471cdd5302ac92;
CHECK_OBJECT(par_text);
tmp_kw_call_arg_value_1_1 = par_text;
tmp_expression_value_3 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_M);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 39;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_match == NULL);
var_match = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_match);
tmp_truth_name_1 = CHECK_IF_TRUE(var_match);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_text);
tmp_expression_value_4 = par_text;
CHECK_OBJECT(var_match);
tmp_called_instance_2 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 41;
tmp_stop_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_start);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_desc_chunk == NULL);
var_desc_chunk = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_stop_value_2;
CHECK_OBJECT(par_text);
tmp_expression_value_5 = par_text;
CHECK_OBJECT(var_match);
tmp_called_instance_3 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 42;
tmp_start_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_start);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_meta_chunk == NULL);
var_meta_chunk = tmp_assign_source_5;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(par_text);
tmp_assign_source_6 = par_text;
assert(var_desc_chunk == NULL);
Py_INCREF(tmp_assign_source_6);
var_desc_chunk = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = const_str_empty;
assert(var_meta_chunk == NULL);
Py_INCREF(tmp_assign_source_7);
var_meta_chunk = tmp_assign_source_7;
}
branch_end_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_desc_chunk);
tmp_expression_value_6 = var_desc_chunk;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 47;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_newline_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parts == NULL);
var_parts = tmp_assign_source_8;
}
{
PyObject *tmp_assattr_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_parts);
tmp_expression_value_7 = var_parts;
tmp_subscript_value_3 = const_int_0;
tmp_or_left_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
tmp_or_right_value_1 = Py_None;
Py_INCREF(tmp_or_right_value_1);
tmp_assattr_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_ret);
tmp_assattr_target_1 = var_ret;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_short_description, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_parts);
tmp_len_arg_1 = var_parts;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_parts);
tmp_expression_value_8 = var_parts;
tmp_subscript_value_4 = const_int_pos_1;
tmp_or_left_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 1);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 50;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_assign_source_9 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_9 = tmp_or_left_value_2;
or_end_2:;
assert(var_long_desc_chunk == NULL);
var_long_desc_chunk = tmp_assign_source_9;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_long_desc_chunk);
tmp_expression_value_9 = var_long_desc_chunk;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_startswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 51;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_newline_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_assattr_target_2 = var_ret;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_blank_after_short_description, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_long_desc_chunk);
tmp_expression_value_10 = var_long_desc_chunk;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_endswith);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 52;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_09bc009ffd858aaf58df7e98266d9b89_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ret);
tmp_assattr_target_3 = var_ret;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_blank_after_long_description, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_long_desc_chunk);
tmp_expression_value_11 = var_long_desc_chunk;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_strip);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 53;
tmp_or_left_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 53;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = Py_None;
Py_INCREF(tmp_or_right_value_3);
tmp_assattr_value_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_assattr_value_4 = tmp_or_left_value_3;
or_end_3:;
CHECK_OBJECT(var_ret);
tmp_assattr_target_4 = var_ret;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_long_description, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 55;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1aaed1f721736612eec784141f116260_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_param_pattern == NULL);
var_param_pattern = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 58;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_69363c3018df71a2291563181a1bc9d8_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_attribute_pattern == NULL);
var_attribute_pattern = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_6;
tmp_called_instance_6 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 59;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_b5aff9006a051d1e95b50e571ccb8391_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_raise_pattern == NULL);
var_raise_pattern = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_7;
tmp_called_instance_7 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 60;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a75d6b424a0dd298dbacb26ff1a7275e_tuple, 0)
);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_return_pattern == NULL);
var_return_pattern = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 61;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_aee3f611c849b1ed09c7bdd232341586_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_meta_pattern == NULL);
var_meta_pattern = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_stream == NULL);
var_stream = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_expression_value_12 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_finditer);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_602f745a29bb56abafa45907f0eb19f1;
CHECK_OBJECT(var_meta_chunk);
tmp_kw_call_arg_value_1_2 = var_meta_chunk;
tmp_expression_value_13 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 68;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_S);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 68;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 68;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_M);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 68;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 68;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 67;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
exception_lineno = 67;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_18 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_match;
    var_match = tmp_assign_source_18;
    Py_INCREF(var_match);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_instance_9;
CHECK_OBJECT(var_match);
tmp_called_instance_9 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 70;
tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_chunk);
tmp_operand_value_2 = var_chunk;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_start_1;
branch_no_4:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_15 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_search);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_param_pattern == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = var_param_pattern;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_3 = var_chunk;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 74;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_param_match;
    var_param_match = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_16 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_search);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_attribute_pattern == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_attribute_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = var_attribute_pattern;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_5 = var_chunk;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_attribute_match;
    var_attribute_match = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_17 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_search);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_raise_pattern == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_raise_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = var_raise_pattern;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_7 = var_chunk;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_raise_match;
    var_raise_match = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_18 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_search);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_return_pattern == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_return_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = var_return_pattern;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_9 = var_chunk;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 77;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_return_match;
    var_return_match = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_expression_value_19 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_search);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_meta_pattern == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_meta_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_10 = var_meta_pattern;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_11 = var_chunk;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_meta_match;
    var_meta_match = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
int tmp_or_left_truth_6;
PyObject *tmp_or_left_value_6;
PyObject *tmp_or_right_value_6;
int tmp_or_left_truth_7;
PyObject *tmp_or_left_value_7;
PyObject *tmp_or_right_value_7;
CHECK_OBJECT(var_param_match);
tmp_or_left_value_4 = var_param_match;
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_attribute_match);
tmp_or_left_value_5 = var_attribute_match;
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(var_raise_match);
tmp_or_left_value_6 = var_raise_match;
tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
CHECK_OBJECT(var_return_match);
tmp_or_left_value_7 = var_return_match;
tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
if (tmp_or_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_7 == 1) {
    goto or_left_7;
} else {
    goto or_right_7;
}
or_right_7:;
CHECK_OBJECT(var_meta_match);
tmp_or_right_value_7 = var_meta_match;
tmp_or_right_value_6 = tmp_or_right_value_7;
goto or_end_7;
or_left_7:;
tmp_or_right_value_6 = tmp_or_left_value_7;
or_end_7:;
tmp_or_right_value_5 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_or_right_value_5 = tmp_or_left_value_6;
or_end_6:;
tmp_or_right_value_4 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_or_right_value_4 = tmp_or_left_value_5;
or_end_5:;
tmp_assign_source_25 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_assign_source_25 = tmp_or_left_value_4;
or_end_4:;
{
    PyObject *old = var_match;
    assert(old != NULL);
    var_match = tmp_assign_source_25;
    Py_INCREF(var_match);
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_match);
tmp_operand_value_3 = var_match;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_13 = module_var_accessor_docstring_parser$epydoc$ParseError(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParseError);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_chunk);
tmp_format_value_1 = var_chunk;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_12 == NULL));
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 88;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_2;
}
branch_no_5:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_called_instance_10;
PyObject *tmp_stop_value_3;
CHECK_OBJECT(var_chunk);
tmp_expression_value_20 = var_chunk;
CHECK_OBJECT(var_match);
tmp_called_instance_10 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 90;
tmp_start_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, const_str_plain_end);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_stop_value_3 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_5 == NULL));
tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_desc_chunk;
    var_desc_chunk = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
CHECK_OBJECT(var_param_match);
tmp_truth_name_2 = CHECK_IF_TRUE(var_param_match);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_plain_param;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_27;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_11;
CHECK_OBJECT(var_match);
tmp_called_instance_11 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 93;
tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_instance_12;
CHECK_OBJECT(var_match);
tmp_called_instance_12 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 94;
tmp_expression_value_21 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 94;
tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_29 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_29, 0, tmp_list_element_1);
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
CHECK_OBJECT(var_attribute_match);
tmp_truth_name_3 = CHECK_IF_TRUE(var_attribute_match);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_str_plain_attribute;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_30;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_13;
CHECK_OBJECT(var_match);
tmp_called_instance_13 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 97;
tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_13,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_list_element_2;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_22;
PyObject *tmp_called_instance_14;
CHECK_OBJECT(var_match);
tmp_called_instance_14 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 98;
tmp_expression_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_14,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 98;
tmp_list_element_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_32 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_32, 0, tmp_list_element_2);
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_4;
CHECK_OBJECT(var_raise_match);
tmp_truth_name_4 = CHECK_IF_TRUE(var_raise_match);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_str_plain_raise;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_33;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_instance_15;
CHECK_OBJECT(var_match);
tmp_called_instance_15 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 101;
tmp_assign_source_34 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_15,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_16;
PyObject *tmp_list_element_3;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_23;
PyObject *tmp_called_instance_17;
CHECK_OBJECT(var_match);
tmp_called_instance_16 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 102;
tmp_cmp_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_16,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_9 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_35 = MAKE_LIST_EMPTY(tstate, 0);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_match);
tmp_called_instance_17 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 102;
tmp_expression_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_17,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 102;
tmp_list_element_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_16);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_35 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_35, 0, tmp_list_element_3);
condexpr_end_1:;
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_5;
CHECK_OBJECT(var_return_match);
tmp_truth_name_5 = CHECK_IF_TRUE(var_return_match);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_10 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_str_plain_return;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_36;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_instance_18;
CHECK_OBJECT(var_match);
tmp_called_instance_18 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 105;
tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_18,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = mod_consts.const_str_plain_meta;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_39;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_instance_19;
CHECK_OBJECT(var_match);
tmp_called_instance_19 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 109;
tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_19,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_instance_20;
tmp_called_value_17 = module_var_accessor_docstring_parser$epydoc$_clean_str(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__clean_str);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_match);
tmp_called_instance_20 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 110;
tmp_expression_value_24 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_20,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 110;
tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 110;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
CHECK_OBJECT(var_token);
tmp_cmp_expr_left_3 = var_token;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_11 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_42 = MAKE_LIST_EMPTY(tstate, 0);
goto condexpr_end_2;
condexpr_false_2:;
tmp_expression_value_25 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_split);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_14 = mod_consts.const_str_digest_2717a74e8094c62311bf53472f4de0ca;
CHECK_OBJECT(var_token);
tmp_args_element_value_15 = var_token;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
condexpr_end_2:;
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_4 = var_key;
tmp_cmp_expr_right_4 = mod_consts.const_tuple_520ee66924e8626819faa95cf0d42a88_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_12 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_16;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_called_value_20 = module_var_accessor_docstring_parser$epydoc$ParseError(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParseError);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_21eb7c01298b06b9ef9cce8034e7a4ea;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_chunk);
tmp_format_value_2 = var_chunk;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_16 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_16 == NULL));
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 127;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_2;
}
branch_no_10:;
branch_end_9:;
branch_end_8:;
branch_end_7:;
branch_end_6:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_desc_chunk);
tmp_expression_value_26 = var_desc_chunk;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_strip);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 131;
tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_desc;
    var_desc = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_str_newline;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_5 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_13 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(var_desc);
tmp_expression_value_27 = var_desc;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_split);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 133;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_22, mod_consts.const_tuple_str_newline_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_46;
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



exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_47 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_first_line;
    var_first_line = tmp_assign_source_47;
    Py_INCREF(var_first_line);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_48 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_rest;
    var_rest = tmp_assign_source_48;
    Py_INCREF(var_rest);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_49;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_instance_21;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(var_first_line);
tmp_add_expr_left_2 = var_first_line;
tmp_add_expr_right_2 = mod_consts.const_str_newline;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_instance_21 = module_var_accessor_docstring_parser$epydoc$inspect(tstate);
if (unlikely(tmp_called_instance_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_rest);
tmp_args_element_value_17 = var_rest;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 134;
tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_21, mod_consts.const_str_plain_cleandoc, tmp_args_element_value_17);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_desc;
    assert(old != NULL);
    var_desc = tmp_assign_source_49;
    Py_DECREF(old);
}

}
branch_no_11:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_3;
if (var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_stream;
CHECK_OBJECT(var_base);
tmp_tuple_element_3 = var_base;
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_item_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_key);
tmp_tuple_element_3 = var_key;
PyTuple_SET_ITEM0(tmp_item_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_args);
tmp_tuple_element_3 = var_args;
PyTuple_SET_ITEM0(tmp_item_value_1, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_desc);
tmp_tuple_element_3 = var_desc;
PyTuple_SET_ITEM0(tmp_item_value_1, 3, tmp_tuple_element_3);
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
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
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(var_params == NULL);
var_params = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_3;
if (var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = var_stream;
tmp_assign_source_51 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_51;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_52;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_52 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_52 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
exception_lineno = 139;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_53 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_54 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 4);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_55 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 4);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_56 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 4);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_57 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_4;
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_57;
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



exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_58;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_58 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_58;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_59 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_59;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_60 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_60;
    Py_INCREF(var_args);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_61;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_61 = tmp_tuple_unpack_2__element_4;
{
    PyObject *old = var_desc;
    var_desc = tmp_assign_source_61;
    Py_INCREF(var_desc);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_6 = var_base;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_str_plain_param_str_plain_attribute_str_plain_return_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_start_2;
branch_no_12:;
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iter_arg_5;
int tmp_or_left_truth_8;
PyObject *tmp_or_left_value_8;
PyObject *tmp_or_right_value_8;
CHECK_OBJECT(var_args);
tmp_or_left_value_8 = var_args;
tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
if (tmp_or_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_8 == 1) {
    goto or_left_8;
} else {
    goto or_right_8;
}
or_right_8:;
tmp_or_right_value_8 = mod_consts.const_tuple_str_plain_return_tuple;
tmp_iter_arg_5 = tmp_or_right_value_8;
goto or_end_8;
or_left_8:;
tmp_iter_arg_5 = tmp_or_left_value_8;
or_end_8:;
tmp_assign_source_62 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_63 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 1);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_8;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_5;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_64;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_64 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_arg_name;
    var_arg_name = tmp_assign_source_64;
    Py_INCREF(var_arg_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_65;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
if (var_params == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_dict_arg_value_1 = var_params;
CHECK_OBJECT(var_arg_name);
tmp_key_value_1 = var_arg_name;
tmp_default_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_65 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = const_str_plain_type;
CHECK_OBJECT(var_key);
tmp_cmp_expr_right_7 = var_key;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_15 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_15 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_assign_source_66 = mod_consts.const_str_plain_type_name;
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_66 = mod_consts.const_str_plain_description;
condexpr_end_3:;
{
    PyObject *old = var_info_key;
    var_info_key = tmp_assign_source_66;
    Py_INCREF(var_info_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_desc);
tmp_ass_subvalue_1 = var_desc;
CHECK_OBJECT(var_info);
tmp_ass_subscribed_1 = var_info;
CHECK_OBJECT(var_info_key);
tmp_ass_subscript_1 = var_info_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_8 = var_base;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_return;
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_9 = var_key;
tmp_cmp_expr_right_9 = mod_consts.const_frozenset_dd777cb7575e8d2413e257bc028ab070;
tmp_res = PySet_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_67 = (tmp_res == 1) ? Py_True : Py_False;
{
    PyObject *old = var_is_generator;
    var_is_generator = tmp_assign_source_67;
    Py_INCREF(var_is_generator);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(var_info);
tmp_expression_value_28 = var_info;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_setdefault);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_18 = mod_consts.const_str_plain_is_generator;
CHECK_OBJECT(var_is_generator);
tmp_args_element_value_19 = var_is_generator;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_is_generator);
tmp_cmp_expr_right_10 = var_is_generator;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_20;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_called_value_24 = module_var_accessor_docstring_parser$epydoc$ParseError(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParseError);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_4 = mod_consts.const_str_digest_3a6eeef8cc20647295dd2f364bc184eb;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_arg_name);
tmp_format_value_3 = var_arg_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_080e3a36b51a04e8885de5b0d8e6142f;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_20 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_20 == NULL));
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 151;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 151;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_5;
}
branch_no_14:;
branch_no_13:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(var_is_done == NULL);
var_is_done = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_iter_arg_6;
if (var_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_6 = var_stream;
tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_69;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_70;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_70 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_70 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
exception_lineno = 156;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 0, 4);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_72;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 1, 4);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_74 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 2, 4);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_74;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_75 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 3, 4);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_4;
    tmp_tuple_unpack_4__element_4 = tmp_assign_source_75;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_10;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_76;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_76 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_base;
    var_base = tmp_assign_source_76;
    Py_INCREF(var_base);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_77;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_77 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_77;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_78;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_78 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_78;
    Py_INCREF(var_args);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_assign_source_79;
CHECK_OBJECT(tmp_tuple_unpack_4__element_4);
tmp_assign_source_79 = tmp_tuple_unpack_4__element_4;
{
    PyObject *old = var_desc;
    var_desc = tmp_assign_source_79;
    Py_INCREF(var_desc);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;

{
bool tmp_condition_result_18;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_operand_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_6;
PyObject *tmp_default_value_2;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_11 = var_base;
tmp_cmp_expr_right_11 = mod_consts.const_tuple_str_plain_param_str_plain_attribute_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_is_done == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_done);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_2 = var_is_done;
CHECK_OBJECT(var_args);
tmp_expression_value_29 = var_args;
tmp_subscript_value_6 = const_int_0;
tmp_key_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_6, 0);
if (tmp_key_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_default_value_2 = Py_False;
tmp_operand_value_4 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_operand_value_4 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_operand_value_4 = tmp_default_value_2;
    Py_INCREF(tmp_operand_value_4);
}
CHECK_OBJECT(tmp_key_value_2);
Py_DECREF(tmp_key_value_2);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_18 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_18 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_18 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
// Tried code:
{
PyObject *tmp_assign_source_80;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(var_args);
tmp_iter_arg_8 = var_args;
tmp_assign_source_80 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_80;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_81;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_81 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 0, 1);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_81;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_13;
// End of try:
try_end_11:;
goto try_end_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_10;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_82;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_82 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_arg_name;
    var_arg_name = tmp_assign_source_82;
    Py_INCREF(var_arg_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_83;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_3;
if (var_params == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_3 = var_params;
CHECK_OBJECT(var_arg_name);
tmp_key_value_3 = var_arg_name;
tmp_assign_source_83 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_83;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(var_info);
tmp_expression_value_30 = var_info;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_get);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 160;
tmp_assign_source_84 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_25, mod_consts.const_tuple_str_plain_type_name_tuple);

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_type_name;
    var_type_name = tmp_assign_source_84;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_19;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_6;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_1;
int tmp_truth_name_7;
CHECK_OBJECT(var_type_name);
tmp_truth_name_6 = CHECK_IF_TRUE(var_type_name);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_left_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_type_name);
tmp_expression_value_31 = var_type_name;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_endswith);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 162;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_26, mod_consts.const_tuple_str_chr_63_tuple);

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_right_value_2 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_condition_result_19 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_19 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = Py_True;
{
    PyObject *old = var_is_optional;
    var_is_optional = tmp_assign_source_85;
    Py_INCREF(var_is_optional);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_type_name);
tmp_expression_value_32 = var_type_name;
tmp_subscript_value_7 = mod_consts.const_slice_none_int_neg_1_none;
tmp_assign_source_86 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_7);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_type_name;
    assert(old != NULL);
    var_type_name = tmp_assign_source_86;
    Py_DECREF(old);
}

}
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = Py_False;
{
    PyObject *old = var_is_optional;
    var_is_optional = tmp_assign_source_87;
    Py_INCREF(var_is_optional);
    Py_XDECREF(old);
}

}
branch_end_16:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_expression_value_34;
tmp_expression_value_33 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_match);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_496301caa8cfa13fdf04eea40ee48941;
CHECK_OBJECT(var_desc);
tmp_kw_call_arg_value_1_3 = var_desc;
tmp_expression_value_34 = module_var_accessor_docstring_parser$epydoc$re(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_DOTALL);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 168;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_27, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_match;
    var_match = tmp_assign_source_88;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_89;
nuitka_bool tmp_condition_result_20;
int tmp_truth_name_8;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_35;
PyObject *tmp_called_instance_22;
CHECK_OBJECT(var_match);
tmp_truth_name_8 = CHECK_IF_TRUE(var_match);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_20 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(var_match);
tmp_called_instance_22 = var_match;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 169;
tmp_expression_value_35 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_22,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 169;
tmp_assign_source_89 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_28, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_assign_source_89 = Py_None;
Py_INCREF(tmp_assign_source_89);
condexpr_end_4:;
{
    PyObject *old = var_default;
    var_default = tmp_assign_source_89;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_29;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_list_element_4;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
tmp_called_value_29 = module_var_accessor_docstring_parser$epydoc$DocstringParam(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringParam);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_key);
tmp_list_element_4 = var_key;
tmp_kw_call_value_0_2 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_kw_call_value_0_2, 0, tmp_list_element_4);
CHECK_OBJECT(var_arg_name);
tmp_list_element_4 = var_arg_name;
PyList_SET_ITEM0(tmp_kw_call_value_0_2, 1, tmp_list_element_4);
CHECK_OBJECT(var_info);
tmp_expression_value_36 = var_info;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain_get);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 173;
tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_30, mod_consts.const_tuple_str_plain_description_tuple);

CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_2);

exception_lineno = 173;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_arg_name);
tmp_kw_call_value_2_1 = var_arg_name;
if (var_type_name == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_type_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_kw_call_value_3_1 = var_type_name;
CHECK_OBJECT(var_is_optional);
tmp_kw_call_value_4_1 = var_is_optional;
CHECK_OBJECT(var_default);
tmp_kw_call_value_5_1 = var_default;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 171;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_assign_source_90 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_29, kw_values, mod_consts.const_tuple_76efcb0764b11881654c90d64cfa9955_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_meta_item;
    var_meta_item = tmp_assign_source_90;
    Py_XDECREF(old);
}

}
tmp_dictset_value = Py_True;
if (var_is_done == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_done);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dictset_dict = var_is_done;
CHECK_OBJECT(var_arg_name);
tmp_dictset_key = var_arg_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_21;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_operand_value_5;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_key_value_4;
PyObject *tmp_default_value_3;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_12 = var_base;
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_return;
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
if (var_is_done == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_done);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_4 = var_is_done;
tmp_key_value_4 = mod_consts.const_str_plain_return;
tmp_default_value_3 = Py_False;
tmp_operand_value_5 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
if (tmp_operand_value_5 == NULL) {
    tmp_operand_value_5 = tmp_default_value_3;
    Py_INCREF(tmp_operand_value_5);
}
assert(!(tmp_operand_value_5 == NULL));
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_21 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_21 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
if (var_params == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_5 = var_params;
tmp_key_value_5 = mod_consts.const_str_plain_return;
tmp_assign_source_91 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_91;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_called_value_31;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_list_element_5;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_39;
tmp_called_value_31 = module_var_accessor_docstring_parser$epydoc$DocstringReturns(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringReturns);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_key);
tmp_list_element_5 = var_key;
tmp_kw_call_value_0_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_kw_call_value_0_3, 0, tmp_list_element_5);
CHECK_OBJECT(var_info);
tmp_expression_value_37 = var_info;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain_get);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 184;
tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_32, mod_consts.const_tuple_str_plain_description_tuple);

CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);

exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_info);
tmp_expression_value_38 = var_info;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_get);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 185;
tmp_kw_call_value_2_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_33, mod_consts.const_tuple_str_plain_type_name_tuple);

CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_info);
tmp_expression_value_39 = var_info;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain_get);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 186;
tmp_kw_call_value_3_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_34, mod_consts.const_tuple_str_plain_is_generator_false_tuple);

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_2_2);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 182;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

    tmp_assign_source_92 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_31, kw_values, mod_consts.const_tuple_4d40bd91fca60d42b0d2b4c3e62a2661_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_2_2);
Py_DECREF(tmp_kw_call_value_2_2);
CHECK_OBJECT(tmp_kw_call_value_3_2);
Py_DECREF(tmp_kw_call_value_3_2);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_meta_item;
    var_meta_item = tmp_assign_source_92;
    Py_XDECREF(old);
}

}
tmp_dictset_value = Py_True;
if (var_is_done == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_done);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dictset_dict = var_is_done;
tmp_dictset_key = mod_consts.const_str_plain_return;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_17;
branch_no_17:;
{
nuitka_bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_13 = var_base;
tmp_cmp_expr_right_13 = mod_consts.const_str_plain_raise;
tmp_condition_result_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
// Tried code:
{
PyObject *tmp_assign_source_93;
PyObject *tmp_iter_arg_9;
int tmp_or_left_truth_9;
PyObject *tmp_or_left_value_9;
PyObject *tmp_or_right_value_9;
CHECK_OBJECT(var_args);
tmp_or_left_value_9 = var_args;
tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
if (tmp_or_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (tmp_or_left_truth_9 == 1) {
    goto or_left_9;
} else {
    goto or_right_9;
}
or_right_9:;
tmp_or_right_value_9 = mod_consts.const_tuple_none_tuple;
tmp_iter_arg_9 = tmp_or_right_value_9;
goto or_end_9;
or_left_9:;
tmp_iter_arg_9 = tmp_or_left_value_9;
or_end_9:;
tmp_assign_source_93 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_tuple_unpack_6__source_iter;
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_93;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_94;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
tmp_assign_source_94 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 0, 1);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_tuple_unpack_6__element_1;
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_94;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 1);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
}
goto try_end_13;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_15;
// End of try:
try_end_13:;
goto try_end_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_10;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
Py_DECREF(tmp_tuple_unpack_6__source_iter);
tmp_tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_95;
CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
tmp_assign_source_95 = tmp_tuple_unpack_6__element_1;
{
    PyObject *old = var_type_name;
    var_type_name = tmp_assign_source_95;
    Py_INCREF(var_type_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_6__element_1);
tmp_tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_35;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_list_element_6;
PyObject *tmp_kw_call_value_1_3;
PyObject *tmp_kw_call_value_2_3;
tmp_called_value_35 = module_var_accessor_docstring_parser$epydoc$DocstringRaises(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringRaises);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_key);
tmp_list_element_6 = var_key;
tmp_add_expr_left_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_3, 0, tmp_list_element_6);
CHECK_OBJECT(var_args);
tmp_add_expr_right_3 = var_args;
tmp_kw_call_value_0_4 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_desc);
tmp_kw_call_value_1_3 = var_desc;
CHECK_OBJECT(var_type_name);
tmp_kw_call_value_2_3 = var_type_name;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 191;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

    tmp_assign_source_96 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_35, kw_values, mod_consts.const_tuple_str_plain_args_str_plain_description_str_plain_type_name_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_meta_item;
    var_meta_item = tmp_assign_source_96;
    Py_XDECREF(old);
}

}
goto branch_end_18;
branch_no_18:;
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_base);
tmp_cmp_expr_left_14 = var_base;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_meta;
tmp_condition_result_23 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_36;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_list_element_7;
PyObject *tmp_kw_call_value_1_4;
tmp_called_value_36 = module_var_accessor_docstring_parser$epydoc$DocstringMeta(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringMeta);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_key);
tmp_list_element_7 = var_key;
tmp_add_expr_left_4 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_4, 0, tmp_list_element_7);
CHECK_OBJECT(var_args);
tmp_add_expr_right_4 = var_args;
tmp_kw_call_value_0_5 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_desc);
tmp_kw_call_value_1_4 = var_desc;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 197;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4};

    tmp_assign_source_97 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_36, kw_values, mod_consts.const_tuple_str_plain_args_str_plain_description_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_5);
Py_DECREF(tmp_kw_call_value_0_5);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_meta_item;
    var_meta_item = tmp_assign_source_97;
    Py_XDECREF(old);
}

}
goto branch_end_19;
branch_no_19:;
// Tried code:
{
PyObject *tmp_assign_source_98;
PyObject *tmp_iter_arg_10;
int tmp_or_left_truth_10;
PyObject *tmp_or_left_value_10;
PyObject *tmp_or_right_value_10;
CHECK_OBJECT(var_args);
tmp_or_left_value_10 = var_args;
tmp_or_left_truth_10 = CHECK_IF_TRUE(tmp_or_left_value_10);
if (tmp_or_left_truth_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
if (tmp_or_left_truth_10 == 1) {
    goto or_left_10;
} else {
    goto or_right_10;
}
or_right_10:;
tmp_or_right_value_10 = mod_consts.const_tuple_str_plain_return_tuple;
tmp_iter_arg_10 = tmp_or_right_value_10;
goto or_end_10;
or_left_10:;
tmp_iter_arg_10 = tmp_or_left_value_10;
or_end_10:;
tmp_assign_source_98 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_tuple_unpack_7__source_iter;
    tmp_tuple_unpack_7__source_iter = tmp_assign_source_98;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_99;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_99 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_14, 0, 1);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_1;
    tmp_tuple_unpack_7__element_1 = tmp_assign_source_99;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
tmp_list_arg_1 = tmp_tuple_unpack_7__source_iter;
tmp_assign_source_100 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_7__element_2;
    tmp_tuple_unpack_7__element_2 = tmp_assign_source_100;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_15;
nuitka_digit tmp_cmp_expr_right_15;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_len_arg_2 = tmp_tuple_unpack_7__element_2;
tmp_cmp_expr_left_15 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_cmp_expr_left_15 == NULL));
tmp_cmp_expr_right_15 = 0;
tmp_condition_result_24 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_condition_result_24 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_5;
nuitka_digit tmp_add_expr_right_5;
PyObject *tmp_len_arg_3;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_len_arg_3 = tmp_tuple_unpack_7__element_2;
tmp_add_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_add_expr_left_5 == NULL));
tmp_add_expr_right_5 = 1;
tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 202;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_18;
}
branch_no_20:;
goto try_end_15;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_10;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
Py_DECREF(tmp_tuple_unpack_7__source_iter);
tmp_tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_101;
CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
tmp_assign_source_101 = tmp_tuple_unpack_7__element_1;
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_101;
    Py_INCREF(var_key);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_1);
tmp_tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_102;
CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
tmp_assign_source_102 = tmp_tuple_unpack_7__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_102;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_7__element_2);
tmp_tuple_unpack_7__element_2 = NULL;

{
bool tmp_condition_result_25;
PyObject *tmp_operand_value_6;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_key_value_6;
PyObject *tmp_default_value_4;
if (var_is_done == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_done);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_6 = var_is_done;
CHECK_OBJECT(var_key);
tmp_key_value_6 = var_key;
tmp_default_value_4 = Py_False;
tmp_operand_value_6 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
if (tmp_operand_value_6 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_operand_value_6 = tmp_default_value_4;
    Py_INCREF(tmp_operand_value_6);
}
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_25 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_raise_type_5;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 203;
tmp_raise_type_5 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 203;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_10;
}
branch_no_21:;
goto loop_start_3;
branch_end_19:;
branch_end_18:;
branch_end_17:;
branch_end_15:;
{
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_21;
if (var_ret == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ret);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_41 = var_ret;
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_meta);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_meta_item);
tmp_args_element_value_21 = var_meta_item;
frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame.f_lineno = 206;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_3;
loop_end_3:;
goto try_end_17;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
if (var_ret == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ret);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "ooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_ret;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_docstring_parser$epydoc$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_docstring_parser$epydoc$$$function__2_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_docstring_parser$epydoc$$$function__2_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_docstring_parser$epydoc$$$function__2_parse,
    type_description_1,
    par_text,
    var_stream,
    var_key,
    var_params,
    var_is_done,
    var_ret,
    var_match,
    var_desc_chunk,
    var_meta_chunk,
    var_parts,
    var_long_desc_chunk,
    var_param_pattern,
    var_attribute_pattern,
    var_raise_pattern,
    var_return_pattern,
    var_meta_pattern,
    var_chunk,
    var_param_match,
    var_attribute_match,
    var_raise_match,
    var_return_match,
    var_meta_match,
    var_base,
    var_args,
    var_token,
    var_desc,
    var_first_line,
    var_rest,
    var_arg_name,
    var_info,
    var_info_key,
    var_is_generator,
    var_type_name,
    var_is_optional,
    var_default,
    var_meta_item,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_docstring_parser$epydoc$$$function__2_parse == cache_frame_frame_docstring_parser$epydoc$$$function__2_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_docstring_parser$epydoc$$$function__2_parse);
    cache_frame_frame_docstring_parser$epydoc$$$function__2_parse = NULL;
}

assertFrameObject(frame_frame_docstring_parser$epydoc$$$function__2_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_text);
par_text = NULL;
Py_XDECREF(var_stream);
var_stream = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_is_done);
var_is_done = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_desc_chunk);
var_desc_chunk = NULL;
Py_XDECREF(var_meta_chunk);
var_meta_chunk = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_long_desc_chunk);
var_long_desc_chunk = NULL;
Py_XDECREF(var_param_pattern);
var_param_pattern = NULL;
Py_XDECREF(var_attribute_pattern);
var_attribute_pattern = NULL;
Py_XDECREF(var_raise_pattern);
var_raise_pattern = NULL;
Py_XDECREF(var_return_pattern);
var_return_pattern = NULL;
Py_XDECREF(var_meta_pattern);
var_meta_pattern = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_param_match);
var_param_match = NULL;
Py_XDECREF(var_attribute_match);
var_attribute_match = NULL;
Py_XDECREF(var_raise_match);
var_raise_match = NULL;
Py_XDECREF(var_return_match);
var_return_match = NULL;
Py_XDECREF(var_meta_match);
var_meta_match = NULL;
Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_desc);
var_desc = NULL;
Py_XDECREF(var_first_line);
var_first_line = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
Py_XDECREF(var_arg_name);
var_arg_name = NULL;
Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_info_key);
var_info_key = NULL;
Py_XDECREF(var_is_generator);
var_is_generator = NULL;
Py_XDECREF(var_type_name);
var_type_name = NULL;
Py_XDECREF(var_is_optional);
var_is_optional = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_meta_item);
var_meta_item = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_text);
par_text = NULL;
Py_XDECREF(var_stream);
var_stream = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_is_done);
var_is_done = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_desc_chunk);
var_desc_chunk = NULL;
Py_XDECREF(var_meta_chunk);
var_meta_chunk = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_long_desc_chunk);
var_long_desc_chunk = NULL;
Py_XDECREF(var_param_pattern);
var_param_pattern = NULL;
Py_XDECREF(var_attribute_pattern);
var_attribute_pattern = NULL;
Py_XDECREF(var_raise_pattern);
var_raise_pattern = NULL;
Py_XDECREF(var_return_pattern);
var_return_pattern = NULL;
Py_XDECREF(var_meta_pattern);
var_meta_pattern = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_param_match);
var_param_match = NULL;
Py_XDECREF(var_attribute_match);
var_attribute_match = NULL;
Py_XDECREF(var_raise_match);
var_raise_match = NULL;
Py_XDECREF(var_return_match);
var_return_match = NULL;
Py_XDECREF(var_meta_match);
var_meta_match = NULL;
Py_XDECREF(var_base);
var_base = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_desc);
var_desc = NULL;
Py_XDECREF(var_first_line);
var_first_line = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
Py_XDECREF(var_arg_name);
var_arg_name = NULL;
Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_info_key);
var_info_key = NULL;
Py_XDECREF(var_is_generator);
var_is_generator = NULL;
Py_XDECREF(var_type_name);
var_type_name = NULL;
Py_XDECREF(var_is_optional);
var_is_optional = NULL;
Py_XDECREF(var_default);
var_default = NULL;
Py_XDECREF(var_meta_item);
var_meta_item = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_docstring_parser$epydoc$$$function__3_compose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_docstring = python_pars[0];
struct Nuitka_CellObject *par_rendering_style = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_indent = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_parts = NULL;
PyObject *var_process_desc = NULL;
PyObject *var_meta = NULL;
PyObject *var_type_name = NULL;
PyObject *var_text = NULL;
PyObject *var_arg_key = NULL;
PyObject *var_type_key = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_docstring_parser$epydoc$$$function__3_compose;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_docstring_parser$epydoc$$$function__3_compose = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose)) {
    Py_XDECREF(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_docstring_parser$epydoc$$$function__3_compose == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_docstring_parser$epydoc$$$function__3_compose = MAKE_FUNCTION_FRAME(tstate, code_objects_5dfd5578d738dc6dc44ae03633a09c4d, module_docstring_parser$epydoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose->m_type_description == NULL);
frame_frame_docstring_parser$epydoc$$$function__3_compose = cache_frame_frame_docstring_parser$epydoc$$$function__3_compose;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_docstring_parser$epydoc$$$function__3_compose);
assert(Py_REFCNT(frame_frame_docstring_parser$epydoc$$$function__3_compose) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_dict_key_1 = mod_consts.const_str_plain_desc;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_is_type;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_closure_1[0] = par_indent;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_rendering_style;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_process_desc == NULL);
var_process_desc = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_parts == NULL);
var_parts = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_docstring);
tmp_expression_value_3 = par_docstring;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_short_description);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 240;
type_description_1 = "occooooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_parts);
tmp_list_arg_value_1 = var_parts;
CHECK_OBJECT(par_docstring);
tmp_expression_value_4 = par_docstring;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_short_description);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_docstring);
tmp_expression_value_5 = par_docstring;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_blank_after_short_description);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 242;
type_description_1 = "occooooooo";
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
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_parts);
tmp_list_arg_value_2 = var_parts;
tmp_item_value_2 = const_str_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_docstring);
tmp_expression_value_6 = par_docstring;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_long_description);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 244;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_parts);
tmp_list_arg_value_3 = var_parts;
CHECK_OBJECT(par_docstring);
tmp_expression_value_7 = par_docstring;
tmp_item_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_long_description);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_docstring);
tmp_expression_value_8 = par_docstring;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_blank_after_long_description);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 246;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_parts);
tmp_list_arg_value_4 = var_parts;
tmp_item_value_4 = const_str_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
branch_no_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_docstring);
tmp_expression_value_9 = par_docstring;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_meta);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "occooooooo";
exception_lineno = 249;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_meta;
    var_meta = tmp_assign_source_5;
    Py_INCREF(var_meta);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_meta);
tmp_isinstance_inst_1 = var_meta;
tmp_isinstance_cls_1 = module_var_accessor_docstring_parser$epydoc$DocstringParam(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringParam);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_5;
CHECK_OBJECT(var_meta);
tmp_expression_value_10 = var_meta;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_type_name);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 251;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_6;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_6;
int tmp_truth_name_6;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_format_spec_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_meta);
tmp_expression_value_11 = var_meta;
tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_is_optional);
if (tmp_attribute_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_6);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_6);

exception_lineno = 254;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_6);
Py_DECREF(tmp_attribute_value_6);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_meta);
tmp_expression_value_12 = var_meta;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_type_name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_63;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_6 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_meta);
tmp_expression_value_13 = var_meta;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_type_name);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
{
    PyObject *old = var_type_name;
    var_type_name = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_03386dc6975876a3b08961eee1096431;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_meta);
tmp_expression_value_14 = var_meta;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_arg_name);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "occooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "occooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_text);
tmp_iadd_expr_left_1 = var_text;
if (var_process_desc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_1 = var_process_desc;
CHECK_OBJECT(var_type_name);
tmp_args_element_value_1 = var_type_name;
tmp_args_element_value_2 = Py_True;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
var_text = tmp_assign_source_8;

}
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_5 = var_parts;
CHECK_OBJECT(var_text);
tmp_item_value_5 = var_text;
tmp_result = LIST_APPEND0(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
branch_no_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
tmp_tuple_element_3 = mod_consts.const_str_digest_703ceb7877e2f1307d7cced9564cab59;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_meta);
tmp_expression_value_15 = var_meta;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_arg_name);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "occooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "occooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_add_expr_left_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_add_expr_left_1 == NULL));
if (var_process_desc == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = var_process_desc;
CHECK_OBJECT(var_meta);
tmp_expression_value_16 = var_meta;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_description);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 261;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_4 = Py_False;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 260;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 260;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_17 = var_parts;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_5 = var_text;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 263;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_meta);
tmp_isinstance_inst_2 = var_meta;
tmp_isinstance_cls_2 = module_var_accessor_docstring_parser$epydoc$DocstringReturns(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringReturns);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
nuitka_bool tmp_condition_result_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_7;
int tmp_truth_name_7;
CHECK_OBJECT(var_meta);
tmp_expression_value_18 = var_meta;
tmp_attribute_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_is_generator);
if (tmp_attribute_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "occooooooo";
    goto try_except_handler_3;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_7);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_7);

exception_lineno = 267;
type_description_1 = "occooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_7);
Py_DECREF(tmp_attribute_value_7);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_iter_arg_2 = mod_consts.const_tuple_str_plain_yield_str_plain_ytype_tuple;
goto condexpr_end_2;
condexpr_false_2:;
tmp_iter_arg_2 = mod_consts.const_tuple_str_plain_return_str_plain_rtype_tuple;
condexpr_end_2:;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "occooooooo";
    goto try_except_handler_3;
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



exception_lineno = 265;
type_description_1 = "occooooooo";
    goto try_except_handler_4;
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



exception_lineno = 265;
type_description_1 = "occooooooo";
    goto try_except_handler_4;
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



exception_lineno = 265;
type_description_1 = "occooooooo";
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
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_arg_key;
    var_arg_key = tmp_assign_source_13;
    Py_INCREF(var_arg_key);
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
    PyObject *old = var_type_key;
    var_type_key = tmp_assign_source_14;
    Py_INCREF(var_type_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_attribute_value_8;
int tmp_truth_name_8;
CHECK_OBJECT(var_meta);
tmp_expression_value_19 = var_meta;
tmp_attribute_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_type_name);
if (tmp_attribute_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_attribute_value_8);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_8);

exception_lineno = 270;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_10 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_8);
Py_DECREF(tmp_attribute_value_8);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_7;
tmp_tuple_element_4 = mod_consts.const_str_chr_64;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_type_key);
tmp_format_value_4 = var_type_key;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "occooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_add_expr_left_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_add_expr_left_2 == NULL));
if (var_process_desc == NULL) {
Py_DECREF(tmp_add_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var_process_desc;
CHECK_OBJECT(var_meta);
tmp_expression_value_20 = var_meta;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_type_name);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 271;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_7 = Py_True;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 271;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_add_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 271;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_6 = var_parts;
CHECK_OBJECT(var_text);
tmp_item_value_6 = var_text;
tmp_result = LIST_APPEND0(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
branch_no_8:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_attribute_value_9;
int tmp_truth_name_9;
CHECK_OBJECT(var_meta);
tmp_expression_value_21 = var_meta;
tmp_attribute_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_description);
if (tmp_attribute_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_9);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_9);

exception_lineno = 273;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_11 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_9);
Py_DECREF(tmp_attribute_value_9);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_9;
tmp_tuple_element_5 = mod_consts.const_str_chr_64;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_arg_key);
tmp_format_value_5 = var_arg_key;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "occooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_add_expr_left_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_add_expr_left_3 == NULL));
if (var_process_desc == NULL) {
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_5 = var_process_desc;
CHECK_OBJECT(var_meta);
tmp_expression_value_22 = var_meta;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_description);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 274;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_9 = Py_False;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_add_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 274;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_23 = var_parts;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_10 = var_text;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 275;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_9:;
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(var_meta);
tmp_isinstance_inst_3 = var_meta;
tmp_isinstance_cls_3 = module_var_accessor_docstring_parser$epydoc$DocstringRaises(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringRaises);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_17;
nuitka_bool tmp_condition_result_13;
PyObject *tmp_expression_value_24;
PyObject *tmp_attribute_value_10;
int tmp_truth_name_10;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_meta);
tmp_expression_value_24 = var_meta;
tmp_attribute_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_type_name);
if (tmp_attribute_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_attribute_value_10);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_10);

exception_lineno = 277;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_13 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_10);
Py_DECREF(tmp_attribute_value_10);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_tuple_element_6 = mod_consts.const_str_digest_28abd051fa8d5c0c1c00f0d93cbfbe11;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_meta);
tmp_expression_value_25 = var_meta;
tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_type_name);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "occooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "occooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_17 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_assign_source_17 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_17 = mod_consts.const_str_digest_f397d8a2bad7ed4361679f7731a3939d;
Py_INCREF(tmp_assign_source_17);
condexpr_end_3:;
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_text);
tmp_iadd_expr_left_2 = var_text;
if (var_process_desc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_7 = var_process_desc;
CHECK_OBJECT(var_meta);
tmp_expression_value_26 = var_meta;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_description);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_12 = Py_False;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 278;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_18 = tmp_iadd_expr_left_2;
var_text = tmp_assign_source_18;

}
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_7;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_7 = var_parts;
CHECK_OBJECT(var_text);
tmp_item_value_7 = var_text;
tmp_result = LIST_APPEND0(tmp_list_arg_value_7, tmp_item_value_7);
assert(!(tmp_result == false));
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_string_concat_values_7;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_chr_64;
tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_27;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(var_meta);
tmp_expression_value_27 = var_meta;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_args);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "occooooooo";
    goto tuple_build_exception_6;
}
tmp_tuple_element_7 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "occooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_7);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_19 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_7);
CHECK_OBJECT(tmp_string_concat_values_7);
Py_DECREF(tmp_string_concat_values_7);
assert(!(tmp_assign_source_19 == NULL));
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(var_text);
tmp_iadd_expr_left_3 = var_text;
if (var_process_desc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_process_desc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_called_value_8 = var_process_desc;
CHECK_OBJECT(var_meta);
tmp_expression_value_28 = var_meta;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_description);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_14 = Py_False;
frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_20 = tmp_iadd_expr_left_3;
var_text = tmp_assign_source_20;

}
{
PyObject *tmp_list_arg_value_8;
PyObject *tmp_item_value_8;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "occooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_8 = var_parts;
CHECK_OBJECT(var_text);
tmp_item_value_8 = var_text;
tmp_result = LIST_APPEND0(tmp_list_arg_value_8, tmp_item_value_8);
assert(!(tmp_result == false));
}
branch_end_10:;
branch_end_7:;
branch_end_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "occooooooo";
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
{
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_2 = mod_consts.const_str_newline;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "occooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_2 = var_parts;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "occooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_docstring_parser$epydoc$$$function__3_compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_docstring_parser$epydoc$$$function__3_compose->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_docstring_parser$epydoc$$$function__3_compose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_docstring_parser$epydoc$$$function__3_compose,
    type_description_1,
    par_docstring,
    par_rendering_style,
    par_indent,
    var_parts,
    var_process_desc,
    var_meta,
    var_type_name,
    var_text,
    var_arg_key,
    var_type_key
);


// Release cached frame if used for exception.
if (frame_frame_docstring_parser$epydoc$$$function__3_compose == cache_frame_frame_docstring_parser$epydoc$$$function__3_compose) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose);
    cache_frame_frame_docstring_parser$epydoc$$$function__3_compose = NULL;
}

assertFrameObject(frame_frame_docstring_parser$epydoc$$$function__3_compose);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_rendering_style);
CHECK_OBJECT(par_rendering_style);
Py_DECREF(par_rendering_style);
par_rendering_style = NULL;
CHECK_OBJECT(par_indent);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
par_indent = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_process_desc);
var_process_desc = NULL;
Py_XDECREF(var_meta);
var_meta = NULL;
Py_XDECREF(var_type_name);
var_type_name = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_arg_key);
var_arg_key = NULL;
Py_XDECREF(var_type_key);
var_type_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_rendering_style);
CHECK_OBJECT(par_rendering_style);
Py_DECREF(par_rendering_style);
par_rendering_style = NULL;
CHECK_OBJECT(par_indent);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
par_indent = NULL;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_process_desc);
var_process_desc = NULL;
Py_XDECREF(var_meta);
var_meta = NULL;
Py_XDECREF(var_type_name);
var_type_name = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_arg_key);
var_arg_key = NULL;
Py_XDECREF(var_type_key);
var_type_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_docstring);
Py_DECREF(par_docstring);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_docstring);
Py_DECREF(par_docstring);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_desc = python_pars[0];
PyObject *par_is_type = python_pars[1];
PyObject *var_first = NULL;
PyObject *var_rest = NULL;
PyObject *outline_0_var_line = NULL;
PyObject *outline_1_var_line = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
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
static struct Nuitka_FrameObject *cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc)) {
    Py_XDECREF(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc = MAKE_FUNCTION_FRAME(tstate, code_objects_6c922fe3f09a76eda7190edab8bb5431, module_docstring_parser$epydoc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_type_description == NULL);
frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc = cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc);
assert(Py_REFCNT(frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_desc);
tmp_operand_value_1 = par_desc;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooocc";
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_operand_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rendering_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_1 = module_var_accessor_docstring_parser$epydoc$RenderingStyle(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RenderingStyle);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EXPANDED);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rendering_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_2 = module_var_accessor_docstring_parser$epydoc$RenderingStyle(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RenderingStyle);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CLEAN);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_is_type);
tmp_operand_value_2 = par_is_type;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_desc);
tmp_expression_value_3 = par_desc;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooocc";
    goto try_except_handler_2;
}
frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_frame.f_lineno = 231;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooocc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooocc";
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
tmp_assign_source_2 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_1, 0, 1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "oooocc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_list_arg_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooocc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_len_arg_1 = tmp_tuple_unpack_1__element_2;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_3 == NULL));
tmp_cmp_expr_right_3 = 0;
tmp_condition_result_3 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_len_arg_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_len_arg_2 = tmp_tuple_unpack_1__element_2;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = 1;
tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooocc";
    goto try_except_handler_3;
}
frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_frame.f_lineno = 231;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 231;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooocc";
goto try_except_handler_3;
}
branch_no_3:;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_first == NULL);
Py_INCREF(tmp_assign_source_4);
var_first = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_rest == NULL);
Py_INCREF(tmp_assign_source_5);
var_rest = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_list_element_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
tmp_add_expr_left_4 = mod_consts.const_str_newline;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_first);
tmp_add_expr_right_3 = var_first;
tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_left_2, 0, tmp_list_element_1);
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_rest);
tmp_iter_arg_2 = var_rest;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooocc";
exception_lineno = 233;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_line;
    outline_0_var_line = tmp_assign_source_9;
    Py_INCREF(outline_0_var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "oooocc";
    goto try_except_handler_5;
}

tmp_add_expr_left_5 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(outline_0_var_line);
tmp_add_expr_right_5 = outline_0_var_line;
tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_add_expr_right_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_add_expr_right_2);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 233;
goto frame_exception_exit_1;
outline_result_1:;
tmp_iterable_value_1 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_desc);
tmp_expression_value_4 = par_desc;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_splitlines);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_6;
}
frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_frame.f_lineno = 236;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_6;
}
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_2, 0, 1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_list_arg_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_list_arg_2 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = MAKE_LIST(tstate, tmp_list_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_len_arg_3 = tmp_tuple_unpack_2__element_2;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_cmp_expr_left_4 == NULL));
tmp_cmp_expr_right_4 = 0;
tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_add_expr_left_6;
nuitka_digit tmp_add_expr_right_6;
PyObject *tmp_len_arg_4;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_24746f585ec81069525114d28b7a36fd;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_len_arg_4 = tmp_tuple_unpack_2__element_2;
tmp_add_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_4);
assert(!(tmp_add_expr_left_6 == NULL));
tmp_add_expr_right_6 = 1;
tmp_mod_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
assert(!(tmp_mod_expr_right_2 == NULL));
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooocc";
    goto try_except_handler_7;
}
frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_frame.f_lineno = 236;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 236;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooocc";
goto try_except_handler_7;
}
branch_no_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
assert(var_first == NULL);
Py_INCREF(tmp_assign_source_13);
var_first = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
assert(var_rest == NULL);
Py_INCREF(tmp_assign_source_14);
var_rest = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_list_element_2;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
tmp_str_arg_value_2 = mod_consts.const_str_newline;
tmp_add_expr_left_8 = mod_consts.const_str_space;
CHECK_OBJECT(var_first);
tmp_add_expr_right_8 = var_first;
tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_7 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_left_7, 0, tmp_list_element_2);
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_rest);
tmp_iter_arg_4 = var_rest;
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto try_except_handler_8;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooocc";
exception_lineno = 237;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_18 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_line;
    outline_1_var_line = tmp_assign_source_18;
    Py_INCREF(outline_1_var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_indent);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "oooocc";
    goto try_except_handler_9;
}

tmp_add_expr_left_9 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(outline_1_var_line);
tmp_add_expr_right_9 = outline_1_var_line;
tmp_append_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto try_except_handler_9;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto try_except_handler_9;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto try_except_handler_9;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_add_expr_right_7 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_add_expr_right_7);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_1_var_line);
outline_1_var_line = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_line);
outline_1_var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 237;
goto frame_exception_exit_1;
outline_result_2:;
tmp_iterable_value_2 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_iterable_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
    goto frame_exception_exit_1;
}
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc,
    type_description_1,
    par_desc,
    par_is_type,
    var_first,
    var_rest,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc == cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc);
    cache_frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc = NULL;
}

assertFrameObject(frame_frame_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_first);
var_first = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_first);
var_first = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_desc);
Py_DECREF(par_desc);
CHECK_OBJECT(par_is_type);
Py_DECREF(par_is_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_desc);
Py_DECREF(par_desc);
CHECK_OBJECT(par_is_type);
Py_DECREF(par_is_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__1__clean_str(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docstring_parser$epydoc$$$function__1__clean_str,
        mod_consts.const_str_plain__clean_str,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f99f578d316ce90fbb0b1efce6a8ad22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_docstring_parser$epydoc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__2_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docstring_parser$epydoc$$$function__2_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4b20d5fa8c216763635dbc3d1cf5ba7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_docstring_parser$epydoc,
        mod_consts.const_str_digest_92af979234bf950cfeaf71893feaaa8c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docstring_parser$epydoc$$$function__3_compose,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5dfd5578d738dc6dc44ae03633a09c4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_docstring_parser$epydoc,
        mod_consts.const_str_digest_dcbf6393b23c804b2b95b8bfe5cbfe73,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc,
        mod_consts.const_str_plain_process_desc,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bcbbb4d83d19f1f23c7aafbde4cbfaf7,
#endif
        code_objects_6c922fe3f09a76eda7190edab8bb5431,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_docstring_parser$epydoc,
        NULL,
        closure,
        2
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

static function_impl_code const function_table_docstring_parser$epydoc[] = {
impl_docstring_parser$epydoc$$$function__3_compose$$$function__1_process_desc,
impl_docstring_parser$epydoc$$$function__1__clean_str,
impl_docstring_parser$epydoc$$$function__2_parse,
impl_docstring_parser$epydoc$$$function__3_compose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_docstring_parser$epydoc);
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
        module_docstring_parser$epydoc,
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
        function_table_docstring_parser$epydoc,
        sizeof(function_table_docstring_parser$epydoc) / sizeof(function_impl_code)
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
static char const *module_full_name = "docstring_parser.epydoc";
#endif

// Internal entry point for module code.
PyObject *module_code_docstring_parser$epydoc(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("docstring_parser$epydoc");

    // Store the module for future use.
    module_docstring_parser$epydoc = module;

    moduledict_docstring_parser$epydoc = MODULE_DICT(module_docstring_parser$epydoc);

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
        PRINT_STRING("docstring_parser$epydoc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("docstring_parser$epydoc: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("docstring_parser$epydoc: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "docstring_parser.epydoc" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initdocstring_parser$epydoc\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_docstring_parser$epydoc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_docstring_parser$epydoc,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_docstring_parser$epydoc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_docstring_parser$epydoc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_docstring_parser$epydoc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_docstring_parser$epydoc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_docstring_parser$epydoc);
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

        UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_docstring_parser$epydoc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_eed7c38205d1c563a3664fc066321ac4;
UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_docstring_parser$epydoc = MAKE_MODULE_FRAME(code_objects_35a87f192ab8ad8576e0c329cef7b698, module_docstring_parser$epydoc);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_docstring_parser$epydoc);
assert(Py_REFCNT(frame_frame_docstring_parser$epydoc) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_docstring_parser$epydoc$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_docstring_parser$epydoc$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_docstring_parser$epydoc;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_docstring_parser$epydoc->m_frame.f_lineno = 6;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_docstring_parser$epydoc;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_docstring_parser$epydoc->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_common;
tmp_globals_arg_value_3 = (PyObject *)moduledict_docstring_parser$epydoc;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_d22546ba9c7f5b6fbd891feb4538b5e9_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_docstring_parser$epydoc->m_frame.f_lineno = 10;
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
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_Docstring,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Docstring);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_Docstring, tmp_assign_source_8);
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
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_DocstringMeta,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_DocstringMeta);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringMeta, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_DocstringParam,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_DocstringParam);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringParam, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_DocstringRaises,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DocstringRaises);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringRaises, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_DocstringReturns,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_DocstringReturns);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringReturns, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_DocstringStyle,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_DocstringStyle);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringStyle, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_ParseError,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ParseError);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseError, tmp_assign_source_14);
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
        (PyObject *)moduledict_docstring_parser$epydoc,
        mod_consts.const_str_plain_RenderingStyle,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_RenderingStyle);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderingStyle, tmp_assign_source_15);
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
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_string;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_annotations_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto dict_build_exception_1;
}
tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_16 = MAKE_FUNCTION_docstring_parser$epydoc$$$function__1__clean_str(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_str, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_text;
tmp_expression_value_4 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_docstring_parser$epydoc$Docstring(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Docstring);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_assign_source_17 = MAKE_FUNCTION_docstring_parser$epydoc$$$function__2_parse(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_parse, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_expression_value_5 = module_var_accessor_docstring_parser$epydoc$RenderingStyle(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RenderingStyle);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_COMPACT);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);
tmp_dict_key_3 = mod_consts.const_str_plain_docstring;
tmp_dict_value_3 = module_var_accessor_docstring_parser$epydoc$Docstring(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Docstring);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_1);

exception_lineno = 212;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_rendering_style;
tmp_dict_value_3 = module_var_accessor_docstring_parser$epydoc$RenderingStyle(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RenderingStyle);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_indent;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_defaults_1);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_assign_source_18 = MAKE_FUNCTION_docstring_parser$epydoc$$$function__3_compose(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)mod_consts.const_str_plain_compose, tmp_assign_source_18);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_docstring_parser$epydoc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_docstring_parser$epydoc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_docstring_parser$epydoc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_docstring_parser$epydoc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("docstring_parser$epydoc", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "docstring_parser.epydoc" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_docstring_parser$epydoc);
    return module_docstring_parser$epydoc;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_docstring_parser$epydoc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("docstring_parser$epydoc", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

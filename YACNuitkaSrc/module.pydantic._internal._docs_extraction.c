/* Generated code for Python module 'pydantic$_internal$_docs_extraction'
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



/* The "module_pydantic$_internal$_docs_extraction" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_internal$_docs_extraction;
PyDictObject *moduledict_pydantic$_internal$_docs_extraction;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_target;
PyObject *const_str_plain_attrs;
PyObject *const_str_plain_previous_node_type;
PyObject *const_str_plain_visit;
PyObject *const_str_plain_ast;
PyObject *const_str_plain_Name;
PyObject *const_str_plain_id;
PyObject *const_str_plain_value;
PyObject *const_str_plain_Constant;
PyObject *const_str_plain_AnnAssign;
PyObject *const_str_plain_cleandoc;
PyObject *const_str_plain_textwrap;
PyObject *const_str_plain_dedent;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_tuple_str_space_str_chr_9_tuple_tuple;
PyObject *const_str_digest_9c026196ffc49f710e8df48af595b706;
PyObject *const_str_plain_dedent_source;
PyObject *const_str_plain_currentframe;
PyObject *const_str_plain_frame;
PyObject *const_str_plain_getmodule;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_f_lineno;
PyObject *const_str_plain_findsource;
PyObject *const_str_plain_getblock;
PyObject *const_str_plain_lines;
PyObject *const_str_plain__dedent_source_lines;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_block_tree;
PyObject *const_str_plain_body;
PyObject *const_str_plain_FunctionDef;
PyObject *const_str_plain_dedent_workaround;
PyObject *const_str_plain_stmt;
PyObject *const_str_plain_ClassDef;
PyObject *const_str_plain_f_back;
PyObject *const_str_plain_getsourcelines;
PyObject *const_str_plain__extract_source_from_frame;
PyObject *const_str_plain_DocstringVisitor;
PyObject *const_str_digest_873ba7f4b2da0459158a4d697c35f47e;
PyObject *const_str_digest_b4ad5a72704bee48cb0a01ea4e5c2655;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_NodeVisitor;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2d28099f66683d85bcc76d06fe917943;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_11;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_ba32d25afe6fd2880473158151cd3283;
PyObject *const_dict_35cb87aaf326a66ade579fbe29ed03cb;
PyObject *const_str_digest_d097efb8446c09ccbfbf69e936137b42;
PyObject *const_dict_e5b5bdebd7037355db89919b52f1d477;
PyObject *const_str_plain_visit_AnnAssign;
PyObject *const_str_digest_af8e819896f0e62139f3beb1ff41633f;
PyObject *const_dict_999e6bcedb100889717c41a239400a8d;
PyObject *const_str_plain_visit_Expr;
PyObject *const_str_digest_d2196668f35102c668ed698c8cf9f11f;
PyObject *const_tuple_b769756e6b42af6ef4862c9900534c69_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_2c2fac0794752fe6325480ba67093816;
PyObject *const_dict_71b41988d11450689cec708d15562cf7;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_edba761a675524926ba53d3d485ed75d;
PyObject *const_str_plain_extract_docstrings_from_cls;
PyObject *const_str_digest_470557b8e0cd24c379ab93ca44b6cf36;
PyObject *const_str_digest_01d3740d947fc0769a2d869db66439ac;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_source_str_plain_dedent_source_tuple;
PyObject *const_tuple_89ce4c8edd24d319eabc595e63229ce5_tuple;
PyObject *const_tuple_b72b2481e258b3b23954ea1529c67033_tuple;
PyObject *const_tuple_c4317c877ef7e1f242e12e4574597698_tuple;
PyObject *const_tuple_str_plain_self_str_plain_node_tuple;
PyObject *const_tuple_str_plain_self_str_plain_node_str_plain_docstring_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[80];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._internal._docs_extraction"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_target);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrs);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_previous_node_type);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_visit);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ast);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Name);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Constant);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnnAssign);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_dedent);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_space_str_chr_9_tuple_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c026196ffc49f710e8df48af595b706);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_dedent_source);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_currentframe);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmodule);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_lineno);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_findsource);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_getblock);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_lines);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__dedent_source_lines);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_block_tree);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDef);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_dedent_workaround);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_stmt);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassDef);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_back);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_getsourcelines);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__extract_source_from_frame);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringVisitor);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_873ba7f4b2da0459158a4d697c35f47e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4ad5a72704bee48cb0a01ea4e5c2655);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_NodeVisitor);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d28099f66683d85bcc76d06fe917943);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_11);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba32d25afe6fd2880473158151cd3283);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_35cb87aaf326a66ade579fbe29ed03cb);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_d097efb8446c09ccbfbf69e936137b42);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_e5b5bdebd7037355db89919b52f1d477);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_visit_AnnAssign);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_af8e819896f0e62139f3beb1ff41633f);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_999e6bcedb100889717c41a239400a8d);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_visit_Expr);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2196668f35102c668ed698c8cf9f11f);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_b769756e6b42af6ef4862c9900534c69_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_2c2fac0794752fe6325480ba67093816);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_71b41988d11450689cec708d15562cf7);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_edba761a675524926ba53d3d485ed75d);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_docstrings_from_cls);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_470557b8e0cd24c379ab93ca44b6cf36);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_01d3740d947fc0769a2d869db66439ac);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_str_plain_dedent_source_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_89ce4c8edd24d319eabc595e63229ce5_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_b72b2481e258b3b23954ea1529c67033_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_c4317c877ef7e1f242e12e4574597698_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_str_plain_docstring_tuple);
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
void checkModuleConstants_pydantic$_internal$_docs_extraction(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_target));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_target);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrs);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_previous_node_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_previous_node_type);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_visit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visit);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ast);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Name);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Constant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Constant);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnnAssign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnnAssign);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleandoc);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_textwrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textwrap);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_dedent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dedent);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_space_str_chr_9_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_str_space_str_chr_9_tuple_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c026196ffc49f710e8df48af595b706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c026196ffc49f710e8df48af595b706);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_dedent_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dedent_source);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_currentframe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_currentframe);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frame);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmodule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getmodule);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_lineno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_lineno);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_findsource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_findsource);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_getblock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getblock);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lines);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__dedent_source_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dedent_source_lines);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_block_tree));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block_tree);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionDef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionDef);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_dedent_workaround));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dedent_workaround);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_stmt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stmt);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassDef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassDef);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_back));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_back);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_getsourcelines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getsourcelines);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__extract_source_from_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extract_source_from_frame);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocstringVisitor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocstringVisitor);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_873ba7f4b2da0459158a4d697c35f47e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_873ba7f4b2da0459158a4d697c35f47e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4ad5a72704bee48cb0a01ea4e5c2655));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4ad5a72704bee48cb0a01ea4e5c2655);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_NodeVisitor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NodeVisitor);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d28099f66683d85bcc76d06fe917943));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d28099f66683d85bcc76d06fe917943);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_11));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_11);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba32d25afe6fd2880473158151cd3283));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba32d25afe6fd2880473158151cd3283);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_35cb87aaf326a66ade579fbe29ed03cb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_35cb87aaf326a66ade579fbe29ed03cb);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_d097efb8446c09ccbfbf69e936137b42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d097efb8446c09ccbfbf69e936137b42);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_e5b5bdebd7037355db89919b52f1d477));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5b5bdebd7037355db89919b52f1d477);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_visit_AnnAssign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visit_AnnAssign);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_af8e819896f0e62139f3beb1ff41633f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af8e819896f0e62139f3beb1ff41633f);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_999e6bcedb100889717c41a239400a8d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_999e6bcedb100889717c41a239400a8d);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_visit_Expr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visit_Expr);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2196668f35102c668ed698c8cf9f11f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2196668f35102c668ed698c8cf9f11f);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_b769756e6b42af6ef4862c9900534c69_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b769756e6b42af6ef4862c9900534c69_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_2c2fac0794752fe6325480ba67093816));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2c2fac0794752fe6325480ba67093816);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_71b41988d11450689cec708d15562cf7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71b41988d11450689cec708d15562cf7);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_edba761a675524926ba53d3d485ed75d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_edba761a675524926ba53d3d485ed75d);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_docstrings_from_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_docstrings_from_cls);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_470557b8e0cd24c379ab93ca44b6cf36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_470557b8e0cd24c379ab93ca44b6cf36);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_01d3740d947fc0769a2d869db66439ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01d3740d947fc0769a2d869db66439ac);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_str_plain_dedent_source_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_source_str_plain_dedent_source_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_89ce4c8edd24d319eabc595e63229ce5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_89ce4c8edd24d319eabc595e63229ce5_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_b72b2481e258b3b23954ea1529c67033_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b72b2481e258b3b23954ea1529c67033_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_c4317c877ef7e1f242e12e4574597698_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4317c877ef7e1f242e12e4574597698_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_node_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_str_plain_docstring_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_node_str_plain_docstring_tuple);
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
static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$DocstringVisitor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringVisitor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringVisitor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringVisitor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocstringVisitor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocstringVisitor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringVisitor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringVisitor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringVisitor);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$_dedent_source_lines(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__dedent_source_lines);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dedent_source_lines);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dedent_source_lines, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dedent_source_lines);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dedent_source_lines, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__dedent_source_lines);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__dedent_source_lines);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dedent_source_lines);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$_extract_source_from_frame(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_source_from_frame);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_source_from_frame);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_source_from_frame, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extract_source_from_frame);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extract_source_from_frame, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_source_from_frame);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_source_from_frame);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_source_from_frame);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$ast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_docs_extraction$textwrap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_docs_extraction->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_docs_extraction->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_docs_extraction->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_textwrap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_textwrap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_textwrap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_textwrap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9b9feb1511ef87cd4e871f436efda641;
static PyCodeObject *code_objects_6557c53991ab9bddb11ff923878da718;
static PyCodeObject *code_objects_ec1e781ed753c80dbc6d5d8a794574d0;
static PyCodeObject *code_objects_e7d1fe5429439a7f3525f005c3c1f492;
static PyCodeObject *code_objects_22ed55ad2e6e0b3b0f2fa5627b51b306;
static PyCodeObject *code_objects_6c93866201d454894a76c1f11ba71a4d;
static PyCodeObject *code_objects_48c646f57686fe86f01598377bac1b22;
static PyCodeObject *code_objects_3d39d87a6194ff543ef010ec0439f8ba;
static PyCodeObject *code_objects_d8496385a46bf6357138544582216081;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_470557b8e0cd24c379ab93ca44b6cf36); CHECK_OBJECT(module_filename_obj);
code_objects_9b9feb1511ef87cd4e871f436efda641 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_01d3740d947fc0769a2d869db66439ac, mod_consts.const_str_digest_01d3740d947fc0769a2d869db66439ac, NULL, NULL, 0, 0, 0);
code_objects_6557c53991ab9bddb11ff923878da718 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DocstringVisitor, mod_consts.const_str_plain_DocstringVisitor, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ec1e781ed753c80dbc6d5d8a794574d0 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ba32d25afe6fd2880473158151cd3283, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_e7d1fe5429439a7f3525f005c3c1f492 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__dedent_source_lines, mod_consts.const_str_plain__dedent_source_lines, mod_consts.const_tuple_str_plain_source_str_plain_dedent_source_tuple, NULL, 1, 0, 0);
code_objects_22ed55ad2e6e0b3b0f2fa5627b51b306 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__extract_source_from_frame, mod_consts.const_str_plain__extract_source_from_frame, mod_consts.const_tuple_89ce4c8edd24d319eabc595e63229ce5_tuple, NULL, 1, 0, 0);
code_objects_6c93866201d454894a76c1f11ba71a4d = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_docstrings_from_cls, mod_consts.const_str_plain_extract_docstrings_from_cls, mod_consts.const_tuple_b72b2481e258b3b23954ea1529c67033_tuple, NULL, 2, 0, 0);
code_objects_48c646f57686fe86f01598377bac1b22 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_visit, mod_consts.const_str_digest_d097efb8446c09ccbfbf69e936137b42, mod_consts.const_tuple_c4317c877ef7e1f242e12e4574597698_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_3d39d87a6194ff543ef010ec0439f8ba = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_visit_AnnAssign, mod_consts.const_str_digest_af8e819896f0e62139f3beb1ff41633f, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple, NULL, 2, 0, 0);
code_objects_d8496385a46bf6357138544582216081 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_visit_Expr, mod_consts.const_str_digest_d2196668f35102c668ed698c8cf9f11f, mod_consts.const_tuple_str_plain_self_str_plain_node_str_plain_docstring_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__2_visit(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec1e781ed753c80dbc6d5d8a794574d0, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 13;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pydantic$_internal$_docs_extraction, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__->m_frame.f_lineno = 13;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_target, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_attrs, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_previous_node_type, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__1___init__);

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


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__2_visit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_node = python_pars[1];
PyObject *var_node_result = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit = MAKE_FUNCTION_FRAME(tstate, code_objects_48c646f57686fe86f01598377bac1b22, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit) == 2);

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

exception_lineno = 20;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_pydantic$_internal$_docs_extraction, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_node);
tmp_args_element_value_1 = par_node;
frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit->m_frame.f_lineno = 20;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_visit, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
assert(var_node_result == NULL);
var_node_result = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_node);
tmp_type_arg_1 = par_node;
tmp_assattr_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_previous_node_type, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit,
    type_description_1,
    par_self,
    par_node,
    var_node_result,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__2_visit);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_node_result);
tmp_return_value = var_node_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_node_result);
CHECK_OBJECT(var_node_result);
Py_DECREF(var_node_result);
var_node_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_node_result);
var_node_result = NULL;
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
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_node = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign = MAKE_FUNCTION_FRAME(tstate, code_objects_3d39d87a6194ff543ef010ec0439f8ba, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_node);
tmp_expression_value_1 = par_node;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_target);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Name);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_node);
tmp_expression_value_4 = par_node;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_target);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_id);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_target, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign,
    type_description_1,
    par_self,
    par_node
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign);

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
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_node = python_pars[1];
PyObject *var_docstring = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr = MAKE_FUNCTION_FRAME(tstate, code_objects_d8496385a46bf6357138544582216081, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_node);
tmp_expression_value_1 = par_node;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Constant);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_node);
tmp_expression_value_4 = par_node;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_previous_node_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_AnnAssign);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_cleandoc);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_node);
tmp_expression_value_9 = par_node;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_value);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr->m_frame.f_lineno = 34;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_docstring == NULL);
var_docstring = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_target);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_docstring);
tmp_ass_subvalue_1 = var_docstring;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_attrs);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_target);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 36;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_target, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr,
    type_description_1,
    par_self,
    par_node,
    var_docstring
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr);

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
Py_XDECREF(var_docstring);
var_docstring = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_docstring);
var_docstring = NULL;
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
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_source = python_pars[0];
PyObject *var_dedent_source = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines = MAKE_FUNCTION_FRAME(tstate, code_objects_e7d1fe5429439a7f3525f005c3c1f492, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_docs_extraction$textwrap(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_textwrap);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dedent);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(par_source);
tmp_iterable_value_1 = par_source;
tmp_args_element_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines->m_frame.f_lineno = 42;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_dedent_source == NULL);
var_dedent_source = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_dedent_source);
tmp_expression_value_2 = var_dedent_source;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines->m_frame.f_lineno = 43;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_tuple_str_space_str_chr_9_tuple_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 43;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_9c026196ffc49f710e8df48af595b706;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_dedent_source);
tmp_format_value_1 = var_dedent_source;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_dedent_source;
    assert(old != NULL);
    var_dedent_source = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
if (var_dedent_source == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dedent_source);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_dedent_source;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines,
    type_description_1,
    par_source,
    var_dedent_source
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_source);
Py_DECREF(par_source);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_source);
Py_DECREF(par_source);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_frame = NULL;
PyObject *var_lnum = NULL;
PyObject *var_lines = NULL;
PyObject *var__ = NULL;
PyObject *var_block_lines = NULL;
PyObject *var_dedent_source = NULL;
PyObject *var_block_tree = NULL;
PyObject *var_stmt = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
nuitka_bool tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_22ed55ad2e6e0b3b0f2fa5627b51b306, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 52;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_currentframe);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_frame == NULL);
var_frame = tmp_assign_source_1;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (var_frame == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_frame;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooo";
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
goto loop_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getmodule);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_frame == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_frame;
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 55;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_getmodule);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_cls == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = par_cls;
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 55;
tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 55;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
if (var_frame == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = var_frame;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_lineno);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lnum;
    var_lnum = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_TRUE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_3;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
tmp_expression_value_4 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_findsource);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (var_frame == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_3 = var_frame;
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 58;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
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



exception_lineno = 58;
type_description_1 = "ooooooooo";
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



exception_lineno = 58;
type_description_1 = "ooooooooo";
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



exception_lineno = 58;
type_description_1 = "ooooooooo";
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
    PyObject *old = var_lines;
    var_lines = tmp_assign_source_7;
    Py_INCREF(var_lines);
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
    PyObject *old = var__;
    var__ = tmp_assign_source_8;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_9;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 57;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame)) {
        frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_5;
branch_no_3:;
goto try_end_4;
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
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_try_except_2__unhandled_indicator;
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_stop_value_1;
tmp_expression_value_5 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_getblock);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_lines == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lines);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = var_lines;
CHECK_OBJECT(var_lnum);
tmp_sub_expr_left_1 = var_lnum;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 64;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_block_lines;
    var_block_lines = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_pydantic$_internal$_docs_extraction$_dedent_source_lines(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dedent_source_lines);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_block_lines);
tmp_args_element_value_5 = var_block_lines;
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 65;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dedent_source;
    var_dedent_source = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_dedent_source);
tmp_args_element_value_6 = var_dedent_source;
frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = 67;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse, tmp_args_element_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_block_tree;
    var_block_tree = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_14;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_SyntaxError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 66;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame)) {
        frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_7;
branch_no_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
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
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
if (var_block_tree == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_block_tree);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = var_block_tree;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_body);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stmt;
    var_stmt = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_stmt);
tmp_isinstance_inst_1 = var_stmt;
tmp_expression_value_9 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_FunctionDef);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_stmt);
tmp_expression_value_10 = var_stmt;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_name);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_dedent_workaround;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_7 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_stmt);
tmp_expression_value_12 = var_stmt;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_body);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stmt;
    assert(old != NULL);
    var_stmt = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
if (var_stmt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stmt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_2 = var_stmt;
tmp_expression_value_13 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ClassDef);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_stmt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stmt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_stmt;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_name);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_cls == NULL) {
Py_DECREF(tmp_cmp_expr_left_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = par_cls;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(var_block_lines);
tmp_return_value = var_block_lines;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_8:;
branch_no_6:;
branch_no_4:;
branch_no_2:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_16;
if (var_frame == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_frame;
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_f_back);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_frame;
    var_frame = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame,
    type_description_1,
    par_cls,
    var_frame,
    var_lnum,
    var_lines,
    var__,
    var_block_lines,
    var_dedent_source,
    var_block_tree,
    var_stmt
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame);

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
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_lnum);
var_lnum = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_block_lines);
var_block_lines = NULL;
Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
Py_XDECREF(var_block_tree);
var_block_tree = NULL;
Py_XDECREF(var_stmt);
var_stmt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_lnum);
var_lnum = NULL;
Py_XDECREF(var_lines);
var_lines = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_block_lines);
var_block_lines = NULL;
Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
Py_XDECREF(var_block_tree);
var_block_tree = NULL;
Py_XDECREF(var_stmt);
var_stmt = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_use_inspect = python_pars[1];
PyObject *var_source = NULL;
PyObject *var__ = NULL;
PyObject *var_dedent_source = NULL;
PyObject *var_visitor = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls = MAKE_FUNCTION_FRAME(tstate, code_objects_6c93866201d454894a76c1f11ba71a4d, module_pydantic$_internal$_docs_extraction, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_type_description == NULL);
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls = cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_use_inspect);
tmp_truth_name_1 = CHECK_IF_TRUE(par_use_inspect);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooo";
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
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_docs_extraction$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 95;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getsourcelines, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oooooo";
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
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto try_return_handler_5;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 94;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame)) {
        frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_2:;
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_source == NULL);
Py_INCREF(tmp_assign_source_4);
var_source = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_docs_extraction$_extract_source_from_frame(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extract_source_from_frame);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_2 = par_cls;
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 99;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_source == NULL);
var_source = tmp_assign_source_6;
}
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_source);
tmp_operand_value_1 = var_source;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_docs_extraction$_dedent_source_lines(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dedent_source_lines);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_source);
tmp_args_element_value_3 = var_source;
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 104;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_dedent_source == NULL);
var_dedent_source = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_docs_extraction$DocstringVisitor(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocstringVisitor);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 106;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_visitor == NULL);
var_visitor = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_visitor);
tmp_expression_value_1 = var_visitor;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_visit);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dedent_source);
tmp_args_element_value_5 = var_dedent_source;
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 107;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame.f_lineno = 107;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_visitor);
tmp_expression_value_2 = var_visitor;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_attrs);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls,
    type_description_1,
    par_cls,
    par_use_inspect,
    var_source,
    var__,
    var_dedent_source,
    var_visitor
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls == cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls);
    cache_frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_source);
var_source = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
Py_XDECREF(var_visitor);
var_visitor = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_source);
var_source = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_dedent_source);
var_dedent_source = NULL;
Py_XDECREF(var_visitor);
var_visitor = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_use_inspect);
Py_DECREF(par_use_inspect);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_use_inspect);
Py_DECREF(par_use_inspect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba32d25afe6fd2880473158151cd3283,
#endif
        code_objects_ec1e781ed753c80dbc6d5d8a794574d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__2_visit(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__2_visit,
        mod_consts.const_str_plain_visit,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d097efb8446c09ccbfbf69e936137b42,
#endif
        code_objects_48c646f57686fe86f01598377bac1b22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign,
        mod_consts.const_str_plain_visit_AnnAssign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af8e819896f0e62139f3beb1ff41633f,
#endif
        code_objects_3d39d87a6194ff543ef010ec0439f8ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr,
        mod_consts.const_str_plain_visit_Expr,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2196668f35102c668ed698c8cf9f11f,
#endif
        code_objects_d8496385a46bf6357138544582216081,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines,
        mod_consts.const_str_plain__dedent_source_lines,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7d1fe5429439a7f3525f005c3c1f492,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame,
        mod_consts.const_str_plain__extract_source_from_frame,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_22ed55ad2e6e0b3b0f2fa5627b51b306,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls,
        mod_consts.const_str_plain_extract_docstrings_from_cls,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6c93866201d454894a76c1f11ba71a4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_docs_extraction,
        mod_consts.const_str_digest_873ba7f4b2da0459158a4d697c35f47e,
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

static function_impl_code const function_table_pydantic$_internal$_docs_extraction[] = {
impl_pydantic$_internal$_docs_extraction$$$function__1___init__,
impl_pydantic$_internal$_docs_extraction$$$function__2_visit,
impl_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign,
impl_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr,
impl_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines,
impl_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame,
impl_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_internal$_docs_extraction);
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
        module_pydantic$_internal$_docs_extraction,
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
        function_table_pydantic$_internal$_docs_extraction,
        sizeof(function_table_pydantic$_internal$_docs_extraction) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._internal._docs_extraction";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_internal$_docs_extraction(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_internal$_docs_extraction");

    // Store the module for future use.
    module_pydantic$_internal$_docs_extraction = module;

    moduledict_pydantic$_internal$_docs_extraction = MODULE_DICT(module_pydantic$_internal$_docs_extraction);

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
        PRINT_STRING("pydantic$_internal$_docs_extraction: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_internal$_docs_extraction: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_internal$_docs_extraction: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._docs_extraction" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_internal$_docs_extraction\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_internal$_docs_extraction,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_docs_extraction,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_docs_extraction,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_docs_extraction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_docs_extraction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_internal$_docs_extraction);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_internal$_docs_extraction);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b4ad5a72704bee48cb0a01ea4e5c2655;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_internal$_docs_extraction = MAKE_MODULE_FRAME(code_objects_9b9feb1511ef87cd4e871f436efda641, module_pydantic$_internal$_docs_extraction);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_internal$_docs_extraction$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_internal$_docs_extraction$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ast;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_internal$_docs_extraction;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 5;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_ast, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$_internal$_docs_extraction;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 6;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_textwrap;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$_internal$_docs_extraction;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 7;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_textwrap, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_internal$_docs_extraction,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_docs_extraction$ast(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NodeVisitor);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_10 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_DocstringVisitor;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 11;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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


exception_lineno = 11;

    goto try_except_handler_1;
}
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 11;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 11;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
branch_end_1:;
{
PyObject *tmp_assign_source_15;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2d28099f66683d85bcc76d06fe917943;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_DocstringVisitor;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_11;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2 = MAKE_CLASS_FRAME(tstate, code_objects_6557c53991ab9bddb11ff923878da718, module_pydantic$_internal$_docs_extraction, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_35cb87aaf326a66ade579fbe29ed03cb);
tmp_closure_2[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__2_visit(tstate, tmp_annotations_2, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain_visit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e5b5bdebd7037355db89919b52f1d477);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__3_visit_AnnAssign(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain_visit_AnnAssign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_999e6bcedb100889717c41a239400a8d);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__4_visit_Expr(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain_visit_Expr, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_b769756e6b42af6ef4862c9900534c69_tuple;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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


exception_lineno = 11;

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
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_DocstringVisitor;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$_internal$_docs_extraction->m_frame.f_lineno = 11;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_16);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_15 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11);
locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11);
locals_pydantic$_internal$_docs_extraction$$$class__1_DocstringVisitor_11 = NULL;
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
exception_lineno = 11;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_DocstringVisitor, tmp_assign_source_15);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_docs_extraction, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_docs_extraction->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_docs_extraction, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_internal$_docs_extraction);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_2c2fac0794752fe6325480ba67093816);

tmp_assign_source_17 = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__5__dedent_source_lines(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__dedent_source_lines, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_71b41988d11450689cec708d15562cf7);

tmp_assign_source_18 = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__6__extract_source_from_frame(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain__extract_source_from_frame, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_7;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_edba761a675524926ba53d3d485ed75d);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_19 = MAKE_FUNCTION_pydantic$_internal$_docs_extraction$$$function__7_extract_docstrings_from_cls(tstate, tmp_defaults_1, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_docstrings_from_cls, tmp_assign_source_19);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_internal$_docs_extraction", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._docs_extraction" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_internal$_docs_extraction);
    return module_pydantic$_internal$_docs_extraction;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_docs_extraction, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_internal$_docs_extraction", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'anthropic$_utils$_path'
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



/* The "module_anthropic$_utils$_path" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$_utils$_path;
PyDictObject *moduledict_anthropic$_utils$_path;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_quote;
PyObject *const_dict_b9e06c0a53a82133a0c4d50287a9df93;
PyObject *const_str_digest_2affd8775188a207b5a275ac178e89c5;
PyObject *const_dict_a24f0f690c30a0b61a459435c2ec22c4;
PyObject *const_str_digest_bfe9c24e05fe695eb8167f0ceffff57a;
PyObject *const_dict_685fc30f937b27d381cc638af70a2022;
PyObject *const_str_digest_a5088952686e7e0d2eafa5df1b13a01e;
PyObject *const_str_plain__PLACEHOLDER_RE;
PyObject *const_int_pos_2;
PyObject *const_str_plain_parts;
PyObject *const_str_digest_ef243a132449babd8d4b802aa6356b36;
PyObject *const_str_digest_02ae8e675186fee4146740ecc259aaac;
PyObject *const_str_plain_null;
PyObject *const_str_plain_true;
PyObject *const_str_plain_false;
PyObject *const_str_plain_quoter;
PyObject *const_str_digest_820ff4d650314d2e23dd1455cd0e30d3;
PyObject *const_str_chr_35;
PyObject *const_tuple_str_chr_35_int_pos_1_tuple;
PyObject *const_str_chr_63;
PyObject *const_tuple_str_chr_63_int_pos_1_tuple;
PyObject *const_str_plain__interpolate;
PyObject *const_str_plain__quote_path_segment_part;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_str_plain__DOT_SEGMENT_RE;
PyObject *const_str_plain_match;
PyObject *const_str_digest_6aa4e90831d5c7f834978466e137734d;
PyObject *const_str_digest_437dc8e2e77806a5d14a7cbd0580907c;
PyObject *const_str_digest_7bbc848dcb7f5ee65747bd753c123f82;
PyObject *const_str_plain__quote_query_part;
PyObject *const_str_plain__quote_fragment_part;
PyObject *const_str_digest_227f7abe79bc911a8ca3b5b59f43fe51;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Callable;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_quote_tuple;
PyObject *const_tuple_str_digest_b52350b42792a896b9931ef0a7377d13_tuple;
PyObject *const_tuple_str_digest_a187cff28490b68d2a438327bdf6f78b_tuple;
PyObject *const_dict_26018cb1860156721df06839bc962f89;
PyObject *const_dict_12e0f5e429484d26a8714eeb1b4b5bf7;
PyObject *const_dict_bd774ed7206de1dac0dada128614af08;
PyObject *const_str_plain_path_template;
PyObject *const_str_digest_7b1b9dccd57c8f793cf71b41bcde3338;
PyObject *const_str_digest_86edab54a45358d8ce9cd11569053e8a;
PyObject *const_tuple_adc8c43af6f36aa220368c78f0e27ccf_tuple;
PyObject *const_tuple_str_plain_value_tuple;
PyObject *const_tuple_aef678f3dbd7f7465efe39ef56e00720_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic._utils._path"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_b9e06c0a53a82133a0c4d50287a9df93);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_2affd8775188a207b5a275ac178e89c5);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_dict_a24f0f690c30a0b61a459435c2ec22c4);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe9c24e05fe695eb8167f0ceffff57a);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_685fc30f937b27d381cc638af70a2022);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5088952686e7e0d2eafa5df1b13a01e);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__PLACEHOLDER_RE);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_parts);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef243a132449babd8d4b802aa6356b36);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_02ae8e675186fee4146740ecc259aaac);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_null);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_false);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_quoter);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_820ff4d650314d2e23dd1455cd0e30d3);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_chr_35);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_35_int_pos_1_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_int_pos_1_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__interpolate);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__quote_path_segment_part);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__DOT_SEGMENT_RE);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aa4e90831d5c7f834978466e137734d);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_437dc8e2e77806a5d14a7cbd0580907c);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bbc848dcb7f5ee65747bd753c123f82);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__quote_query_part);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__quote_fragment_part);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_227f7abe79bc911a8ca3b5b59f43fe51);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quote_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b52350b42792a896b9931ef0a7377d13_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a187cff28490b68d2a438327bdf6f78b_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_26018cb1860156721df06839bc962f89);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_12e0f5e429484d26a8714eeb1b4b5bf7);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_bd774ed7206de1dac0dada128614af08);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_path_template);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b1b9dccd57c8f793cf71b41bcde3338);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_86edab54a45358d8ce9cd11569053e8a);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_adc8c43af6f36aa220368c78f0e27ccf_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_aef678f3dbd7f7465efe39ef56e00720_tuple);
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
void checkModuleConstants_anthropic$_utils$_path(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_b9e06c0a53a82133a0c4d50287a9df93));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b9e06c0a53a82133a0c4d50287a9df93);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_2affd8775188a207b5a275ac178e89c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2affd8775188a207b5a275ac178e89c5);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_dict_a24f0f690c30a0b61a459435c2ec22c4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a24f0f690c30a0b61a459435c2ec22c4);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe9c24e05fe695eb8167f0ceffff57a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe9c24e05fe695eb8167f0ceffff57a);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_685fc30f937b27d381cc638af70a2022));
CHECK_OBJECT_DEEP(mod_consts.const_dict_685fc30f937b27d381cc638af70a2022);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5088952686e7e0d2eafa5df1b13a01e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5088952686e7e0d2eafa5df1b13a01e);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__PLACEHOLDER_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PLACEHOLDER_RE);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parts);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef243a132449babd8d4b802aa6356b36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef243a132449babd8d4b802aa6356b36);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_02ae8e675186fee4146740ecc259aaac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02ae8e675186fee4146740ecc259aaac);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_null);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_false));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_false);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_quoter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quoter);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_820ff4d650314d2e23dd1455cd0e30d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_820ff4d650314d2e23dd1455cd0e30d3);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_chr_35));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_35);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_35_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_35_int_pos_1_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_chr_63));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_63);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_63_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_63_int_pos_1_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__interpolate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__interpolate);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__quote_path_segment_part));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quote_path_segment_part);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__DOT_SEGMENT_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DOT_SEGMENT_RE);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aa4e90831d5c7f834978466e137734d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6aa4e90831d5c7f834978466e137734d);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_437dc8e2e77806a5d14a7cbd0580907c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_437dc8e2e77806a5d14a7cbd0580907c);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bbc848dcb7f5ee65747bd753c123f82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bbc848dcb7f5ee65747bd753c123f82);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__quote_query_part));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quote_query_part);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__quote_fragment_part));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quote_fragment_part);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_227f7abe79bc911a8ca3b5b59f43fe51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_227f7abe79bc911a8ca3b5b59f43fe51);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quote_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_quote_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b52350b42792a896b9931ef0a7377d13_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b52350b42792a896b9931ef0a7377d13_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a187cff28490b68d2a438327bdf6f78b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a187cff28490b68d2a438327bdf6f78b_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_26018cb1860156721df06839bc962f89));
CHECK_OBJECT_DEEP(mod_consts.const_dict_26018cb1860156721df06839bc962f89);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_12e0f5e429484d26a8714eeb1b4b5bf7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_12e0f5e429484d26a8714eeb1b4b5bf7);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_bd774ed7206de1dac0dada128614af08));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bd774ed7206de1dac0dada128614af08);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_path_template));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_path_template);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b1b9dccd57c8f793cf71b41bcde3338));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b1b9dccd57c8f793cf71b41bcde3338);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_86edab54a45358d8ce9cd11569053e8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86edab54a45358d8ce9cd11569053e8a);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_adc8c43af6f36aa220368c78f0e27ccf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_adc8c43af6f36aa220368c78f0e27ccf_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_aef678f3dbd7f7465efe39ef56e00720_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aef678f3dbd7f7465efe39ef56e00720_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_anthropic$_utils$_path$_DOT_SEGMENT_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__DOT_SEGMENT_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DOT_SEGMENT_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DOT_SEGMENT_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DOT_SEGMENT_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DOT_SEGMENT_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__DOT_SEGMENT_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__DOT_SEGMENT_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DOT_SEGMENT_RE);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$_PLACEHOLDER_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__PLACEHOLDER_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PLACEHOLDER_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PLACEHOLDER_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PLACEHOLDER_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PLACEHOLDER_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__PLACEHOLDER_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__PLACEHOLDER_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PLACEHOLDER_RE);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$_interpolate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__interpolate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__interpolate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__interpolate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__interpolate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__interpolate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__interpolate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__interpolate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__interpolate);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$_quote_fragment_part(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_fragment_part);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_fragment_part);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_fragment_part, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_fragment_part);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_fragment_part, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_fragment_part);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_fragment_part);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_fragment_part);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$_quote_path_segment_part(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_path_segment_part);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_path_segment_part);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_path_segment_part, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_path_segment_part);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_path_segment_part, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_path_segment_part);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_path_segment_part);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_path_segment_part);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$_quote_query_part(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_query_part);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_query_part);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_query_part, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__quote_query_part);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__quote_query_part, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_query_part);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_query_part);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_query_part);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$quote(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_quote);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_quote, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_quote);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_path$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_path->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_path->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_path->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3faa5a906a017935ecbafd30eea7dd1e;
static PyCodeObject *code_objects_dad75adb05f99e8f51e572ccb65a7214;
static PyCodeObject *code_objects_437cace573e52601255e4d3dd0ee5d49;
static PyCodeObject *code_objects_a4522e75830938acd86a24f91fa20266;
static PyCodeObject *code_objects_01dc7d7fb184dfab3332c7932909e5c8;
static PyCodeObject *code_objects_d13349cbcefee7a6bf835ff2f79329ed;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7b1b9dccd57c8f793cf71b41bcde3338); CHECK_OBJECT(module_filename_obj);
code_objects_3faa5a906a017935ecbafd30eea7dd1e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_86edab54a45358d8ce9cd11569053e8a, mod_consts.const_str_digest_86edab54a45358d8ce9cd11569053e8a, NULL, NULL, 0, 0, 0);
code_objects_dad75adb05f99e8f51e572ccb65a7214 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__interpolate, mod_consts.const_str_plain__interpolate, mod_consts.const_tuple_adc8c43af6f36aa220368c78f0e27ccf_tuple, NULL, 3, 0, 0);
code_objects_437cace573e52601255e4d3dd0ee5d49 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__quote_fragment_part, mod_consts.const_str_plain__quote_fragment_part, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_a4522e75830938acd86a24f91fa20266 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__quote_path_segment_part, mod_consts.const_str_plain__quote_path_segment_part, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_01dc7d7fb184dfab3332c7932909e5c8 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__quote_query_part, mod_consts.const_str_plain__quote_query_part, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_d13349cbcefee7a6bf835ff2f79329ed = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_path_template, mod_consts.const_str_plain_path_template, mod_consts.const_tuple_aef678f3dbd7f7465efe39ef56e00720_tuple, NULL, 1, 0, 1);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__1__quote_path_segment_part(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__2__quote_query_part(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__3__quote_fragment_part(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__4__interpolate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__5_path_template(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$_utils$_path$$$function__1__quote_path_segment_part(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part = MAKE_FUNCTION_FRAME(tstate, code_objects_a4522e75830938acd86a24f91fa20266, module_anthropic$_utils$_path, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part->m_type_description == NULL);
frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part = cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$_utils$_path$quote(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_b9e06c0a53a82133a0c4d50287a9df93);
frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part->m_frame.f_lineno = 26;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part == cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part);
    cache_frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_path$$$function__1__quote_path_segment_part);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_path$$$function__2__quote_query_part(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part = MAKE_FUNCTION_FRAME(tstate, code_objects_01dc7d7fb184dfab3332c7932909e5c8, module_anthropic$_utils$_path, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part->m_type_description == NULL);
frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part = cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$_utils$_path$quote(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_a24f0f690c30a0b61a459435c2ec22c4);
frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part->m_frame.f_lineno = 35;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part == cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part);
    cache_frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_path$$$function__2__quote_query_part);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_path$$$function__3__quote_fragment_part(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part = MAKE_FUNCTION_FRAME(tstate, code_objects_437cace573e52601255e4d3dd0ee5d49, module_anthropic$_utils$_path, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part->m_type_description == NULL);
frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part = cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$_utils$_path$quote(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quote);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_685fc30f937b27d381cc638af70a2022);
frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part->m_frame.f_lineno = 44;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part == cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part);
    cache_frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_path$$$function__3__quote_fragment_part);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_path$$$function__4__interpolate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_template = python_pars[0];
PyObject *par_values = python_pars[1];
PyObject *par_quoter = python_pars[2];
PyObject *var_parts = NULL;
PyObject *var_i = NULL;
PyObject *var_name = NULL;
PyObject *var_val = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path$$$function__4__interpolate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate = MAKE_FUNCTION_FRAME(tstate, code_objects_dad75adb05f99e8f51e572ccb65a7214, module_anthropic$_utils$_path, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate->m_type_description == NULL);
frame_frame_anthropic$_utils$_path$$$function__4__interpolate = cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path$$$function__4__interpolate);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path$$$function__4__interpolate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_anthropic$_utils$_path$_PLACEHOLDER_RE(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PLACEHOLDER_RE);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_template);
tmp_args_element_value_1 = par_template;
frame_frame_anthropic$_utils$_path$$$function__4__interpolate->m_frame.f_lineno = 61;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_parts == NULL);
var_parts = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = const_int_pos_1;
CHECK_OBJECT(var_parts);
tmp_len_arg_1 = var_parts;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_xrange_step_1 = mod_consts.const_int_pos_2;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 63;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_4;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = var_parts;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
CHECK_OBJECT(par_values);
tmp_cmp_expr_right_1 = par_values;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ef243a132449babd8d4b802aa6356b36;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_name);
tmp_format_value_1 = var_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_02ae8e675186fee4146740ecc259aaac;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$_utils$_path$$$function__4__interpolate->m_frame.f_lineno = 66;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_KeyError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto try_except_handler_2;
}
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_values);
tmp_expression_value_3 = par_values;
CHECK_OBJECT(var_name);
tmp_subscript_value_2 = var_name;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_val;
    var_val = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_val);
tmp_cmp_expr_left_2 = var_val;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_null;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_parts;
CHECK_OBJECT(var_i);
tmp_ass_subscript_1 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_val);
tmp_isinstance_inst_1 = var_val;
tmp_isinstance_cls_1 = (PyObject *)&PyBool_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_2;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_val);
tmp_truth_name_1 = CHECK_IF_TRUE(var_val);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_true;
goto condexpr_end_1;
condexpr_false_1:;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_false;
condexpr_end_1:;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_2 = var_parts;
CHECK_OBJECT(var_i);
tmp_ass_subscript_2 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
if (par_quoter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quoter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = par_quoter;
CHECK_OBJECT(par_values);
tmp_expression_value_4 = par_values;
CHECK_OBJECT(var_name);
tmp_subscript_value_3 = var_name;
tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$_utils$_path$$$function__4__interpolate->m_frame.f_lineno = 73;
tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (var_parts == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_3 = var_parts;
CHECK_OBJECT(var_i);
tmp_ass_subscript_3 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
}
branch_end_3:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
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
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
if (var_parts == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parts);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_parts;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path$$$function__4__interpolate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path$$$function__4__interpolate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path$$$function__4__interpolate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_path$$$function__4__interpolate,
    type_description_1,
    par_template,
    par_values,
    par_quoter,
    var_parts,
    var_i,
    var_name,
    var_val
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_path$$$function__4__interpolate == cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate);
    cache_frame_frame_anthropic$_utils$_path$$$function__4__interpolate = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_path$$$function__4__interpolate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_val);
var_val = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parts);
var_parts = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_val);
var_val = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_template);
Py_DECREF(par_template);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
CHECK_OBJECT(par_quoter);
Py_DECREF(par_quoter);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_template);
Py_DECREF(par_template);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
CHECK_OBJECT(par_quoter);
Py_DECREF(par_quoter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_path$$$function__5_path_template(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_template = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_fragment_template = NULL;
PyObject *var_query_template = NULL;
PyObject *var_rest = NULL;
PyObject *var_path_template = NULL;
PyObject *var_path_result = NULL;
PyObject *var_segment = NULL;
PyObject *var_result = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path$$$function__5_path_template;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_fragment_template == NULL);
Py_INCREF(tmp_assign_source_1);
var_fragment_template = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(var_query_template == NULL);
Py_INCREF(tmp_assign_source_2);
var_query_template = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_template);
tmp_assign_source_3 = par_template;
assert(var_rest == NULL);
Py_INCREF(tmp_assign_source_3);
var_rest = tmp_assign_source_3;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template = MAKE_FUNCTION_FRAME(tstate, code_objects_d13349cbcefee7a6bf835ff2f79329ed, module_anthropic$_utils$_path, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_type_description == NULL);
frame_frame_anthropic$_utils$_path$$$function__5_path_template = cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path$$$function__5_path_template);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path$$$function__5_path_template) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_35;
CHECK_OBJECT(var_rest);
tmp_cmp_expr_right_1 = var_rest;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_rest);
tmp_expression_value_1 = var_rest;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 104;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_35_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
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



exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_rest;
    assert(old != NULL);
    var_rest = tmp_assign_source_7;
    Py_INCREF(var_rest);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_fragment_template;
    assert(old != NULL);
    var_fragment_template = tmp_assign_source_8;
    Py_INCREF(var_fragment_template);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_chr_63;
CHECK_OBJECT(var_rest);
tmp_cmp_expr_right_2 = var_rest;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_rest);
tmp_expression_value_2 = var_rest;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 106;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_63_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooooooooo";
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
{
    PyObject *old = var_rest;
    assert(old != NULL);
    var_rest = tmp_assign_source_12;
    Py_INCREF(var_rest);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_query_template;
    assert(old != NULL);
    var_query_template = tmp_assign_source_13;
    Py_INCREF(var_query_template);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_no_2:;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_rest);
tmp_assign_source_14 = var_rest;
assert(var_path_template == NULL);
Py_INCREF(tmp_assign_source_14);
var_path_template = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_anthropic$_utils$_path$_interpolate(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__interpolate);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path_template);
tmp_args_element_value_1 = var_path_template;
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_2 = par_kwargs;
tmp_args_element_value_3 = module_var_accessor_anthropic$_utils$_path$_quote_path_segment_part(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__quote_path_segment_part);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_path_result == NULL);
var_path_result = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_path_result);
tmp_expression_value_3 = var_path_result;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 117;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 117;
        goto try_except_handler_6;
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
    PyObject *old = var_segment;
    var_segment = tmp_assign_source_18;
    Py_INCREF(var_segment);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_anthropic$_utils$_path$_DOT_SEGMENT_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DOT_SEGMENT_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_segment);
tmp_args_element_value_4 = var_segment;
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 118;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 118;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_6aa4e90831d5c7f834978466e137734d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_path_result);
tmp_operand_value_1 = var_path_result;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_437dc8e2e77806a5d14a7cbd0580907c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_segment);
tmp_operand_value_2 = var_segment;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7bbc848dcb7f5ee65747bd753c123f82;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 119;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 119;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_6;
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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
PyObject *tmp_assign_source_19;
CHECK_OBJECT(var_path_result);
tmp_assign_source_19 = var_path_result;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_19);
var_result = tmp_assign_source_19;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_query_template);
tmp_cmp_expr_left_3 = var_query_template;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_1 = var_result;
tmp_add_expr_left_1 = mod_consts.const_str_chr_63;
tmp_called_value_5 = module_var_accessor_anthropic$_utils$_path$_interpolate(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__interpolate);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_query_template);
tmp_args_element_value_5 = var_query_template;
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_6 = par_kwargs;
tmp_args_element_value_7 = module_var_accessor_anthropic$_utils$_path$_quote_query_part(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__quote_query_part);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_20;

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_fragment_template);
tmp_cmp_expr_left_4 = var_fragment_template;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_2 = var_result;
tmp_add_expr_left_2 = mod_consts.const_str_chr_35;
tmp_called_value_6 = module_var_accessor_anthropic$_utils$_path$_interpolate(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__interpolate);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fragment_template);
tmp_args_element_value_8 = var_fragment_template;
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_9 = par_kwargs;
tmp_args_element_value_10 = module_var_accessor_anthropic$_utils$_path$_quote_fragment_part(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__quote_fragment_part);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_add_expr_right_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_21;

}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path$$$function__5_path_template, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path$$$function__5_path_template->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path$$$function__5_path_template, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_path$$$function__5_path_template,
    type_description_1,
    par_template,
    par_kwargs,
    var_fragment_template,
    var_query_template,
    var_rest,
    var_path_template,
    var_path_result,
    var_segment,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_path$$$function__5_path_template == cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template);
    cache_frame_frame_anthropic$_utils$_path$$$function__5_path_template = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_path$$$function__5_path_template);

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
CHECK_OBJECT(var_fragment_template);
CHECK_OBJECT(var_fragment_template);
Py_DECREF(var_fragment_template);
var_fragment_template = NULL;
CHECK_OBJECT(var_query_template);
CHECK_OBJECT(var_query_template);
Py_DECREF(var_query_template);
var_query_template = NULL;
CHECK_OBJECT(var_rest);
CHECK_OBJECT(var_rest);
Py_DECREF(var_rest);
var_rest = NULL;
CHECK_OBJECT(var_path_template);
CHECK_OBJECT(var_path_template);
Py_DECREF(var_path_template);
var_path_template = NULL;
CHECK_OBJECT(var_path_result);
CHECK_OBJECT(var_path_result);
Py_DECREF(var_path_result);
var_path_result = NULL;
Py_XDECREF(var_segment);
var_segment = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fragment_template);
var_fragment_template = NULL;
Py_XDECREF(var_query_template);
var_query_template = NULL;
Py_XDECREF(var_rest);
var_rest = NULL;
Py_XDECREF(var_path_template);
var_path_template = NULL;
Py_XDECREF(var_path_result);
var_path_result = NULL;
Py_XDECREF(var_segment);
var_segment = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_template);
Py_DECREF(par_template);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_template);
Py_DECREF(par_template);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__1__quote_path_segment_part(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_path$$$function__1__quote_path_segment_part,
        mod_consts.const_str_plain__quote_path_segment_part,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a4522e75830938acd86a24f91fa20266,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_path,
        mod_consts.const_str_digest_2affd8775188a207b5a275ac178e89c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__2__quote_query_part(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_path$$$function__2__quote_query_part,
        mod_consts.const_str_plain__quote_query_part,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_01dc7d7fb184dfab3332c7932909e5c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_path,
        mod_consts.const_str_digest_bfe9c24e05fe695eb8167f0ceffff57a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__3__quote_fragment_part(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_path$$$function__3__quote_fragment_part,
        mod_consts.const_str_plain__quote_fragment_part,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_437cace573e52601255e4d3dd0ee5d49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_path,
        mod_consts.const_str_digest_a5088952686e7e0d2eafa5df1b13a01e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__4__interpolate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_path$$$function__4__interpolate,
        mod_consts.const_str_plain__interpolate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dad75adb05f99e8f51e572ccb65a7214,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_path,
        mod_consts.const_str_digest_820ff4d650314d2e23dd1455cd0e30d3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_path$$$function__5_path_template(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_path$$$function__5_path_template,
        mod_consts.const_str_plain_path_template,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d13349cbcefee7a6bf835ff2f79329ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_path,
        mod_consts.const_str_digest_227f7abe79bc911a8ca3b5b59f43fe51,
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

static function_impl_code const function_table_anthropic$_utils$_path[] = {
impl_anthropic$_utils$_path$$$function__1__quote_path_segment_part,
impl_anthropic$_utils$_path$$$function__2__quote_query_part,
impl_anthropic$_utils$_path$$$function__3__quote_fragment_part,
impl_anthropic$_utils$_path$$$function__4__interpolate,
impl_anthropic$_utils$_path$$$function__5_path_template,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$_utils$_path);
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
        module_anthropic$_utils$_path,
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
        function_table_anthropic$_utils$_path,
        sizeof(function_table_anthropic$_utils$_path) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic._utils._path";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$_utils$_path(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$_utils$_path");

    // Store the module for future use.
    module_anthropic$_utils$_path = module;

    moduledict_anthropic$_utils$_path = MODULE_DICT(module_anthropic$_utils$_path);

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
        PRINT_STRING("anthropic$_utils$_path: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$_utils$_path: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$_utils$_path: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic._utils._path" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$_utils$_path\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$_utils$_path,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$_utils$_path,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$_utils$_path,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$_utils$_path,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$_utils$_path,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$_utils$_path);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$_utils$_path);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$_utils$_path = MAKE_MODULE_FRAME(code_objects_3faa5a906a017935ecbafd30eea7dd1e, module_anthropic$_utils$_path);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_path);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_path) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$_utils$_path$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$_utils$_path$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$_utils$_path;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$_utils$_path->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_5);
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
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$_utils$_path,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$_utils$_path,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_8);
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
        (PyObject *)moduledict_anthropic$_utils$_path,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$_utils$_path;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_quote_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$_utils$_path->m_frame.f_lineno = 9;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$_utils$_path,
        mod_consts.const_str_plain_quote,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_quote);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_quote, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$_utils$_path$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path->m_frame.f_lineno = 12;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_b52350b42792a896b9931ef0a7377d13_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__DOT_SEGMENT_RE, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_anthropic$_utils$_path$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_path->m_frame.f_lineno = 14;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a187cff28490b68d2a438327bdf6f78b_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__PLACEHOLDER_RE, tmp_assign_source_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$_utils$_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_26018cb1860156721df06839bc962f89);

tmp_assign_source_13 = MAKE_FUNCTION_anthropic$_utils$_path$$$function__1__quote_path_segment_part(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_path_segment_part, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_26018cb1860156721df06839bc962f89);

tmp_assign_source_14 = MAKE_FUNCTION_anthropic$_utils$_path$$$function__2__quote_query_part(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_query_part, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_26018cb1860156721df06839bc962f89);

tmp_assign_source_15 = MAKE_FUNCTION_anthropic$_utils$_path$$$function__3__quote_fragment_part(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__quote_fragment_part, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_12e0f5e429484d26a8714eeb1b4b5bf7);

tmp_assign_source_16 = MAKE_FUNCTION_anthropic$_utils$_path$$$function__4__interpolate(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain__interpolate, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_bd774ed7206de1dac0dada128614af08);

tmp_assign_source_17 = MAKE_FUNCTION_anthropic$_utils$_path$$$function__5_path_template(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)mod_consts.const_str_plain_path_template, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$_utils$_path", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic._utils._path" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$_utils$_path);
    return module_anthropic$_utils$_path;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_path, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$_utils$_path", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

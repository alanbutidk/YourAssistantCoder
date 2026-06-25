/* Generated code for Python module 'web_search'
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



/* The "module_web_search" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_web_search;
PyDictObject *moduledict_web_search;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlencode;
PyObject *const_str_plain_q;
PyObject *const_str_plain_json;
PyObject *const_str_plain_no_html;
PyObject *const_str_plain_1;
PyObject *const_str_plain_skip_disambig;
PyObject *const_str_digest_ac33c15a45e73a3f965f431d7307f226;
PyObject *const_str_plain_request;
PyObject *const_str_plain_Request;
PyObject *const_dict_d6b4c7506d8358cd1c8b418e926415fd;
PyObject *const_str_plain_urlopen;
PyObject *const_dict_490f440f506c3a3237194bebb8a34f03;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_decode;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_data;
PyObject *const_tuple_str_plain_AbstractText_tuple;
PyObject *const_str_digest_9dba25f8eb56c380adbb13903aa2a563;
PyObject *const_str_plain_AbstractText;
PyObject *const_tuple_str_plain_AbstractURL_tuple;
PyObject *const_str_digest_b54c1f736e940fdc85d61276fb9211a1;
PyObject *const_str_plain_AbstractURL;
PyObject *const_str_plain_RelatedTopics;
PyObject *const_str_digest_20751023ae6ecd027a9028b1a1a7f97d;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_str_plain_Text;
PyObject *const_slice_none_int_pos_200_none;
PyObject *const_tuple_str_plain_FirstURL_str_empty_tuple;
PyObject *const_str_plain_results;
PyObject *const_str_digest_a3a2dd55b816c9490fff0582d282bf95;
PyObject *const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
PyObject *const_str_chr_41;
PyObject *const_str_plain__ddg_html_search;
PyObject *const_str_newline;
PyObject *const_str_digest_1fe7648cca3178f63ff15f217f5aabc6;
PyObject *const_str_digest_1e9af22a30f7884a6765c3c1f04cebb4;
PyObject *const_str_digest_77f891aebd48eb579debbeed02d1227e;
PyObject *const_dict_11cb3072264fdd887e8ff5c0b872a0c3;
PyObject *const_tuple_bca69903aa4823e8f2c5a8129155a877_tuple;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_str_plain_re;
PyObject *const_str_plain_findall;
PyObject *const_str_digest_cf1310c362bf893564c395f20b41a70d;
PyObject *const_str_plain_html;
PyObject *const_str_plain_DOTALL;
PyObject *const_str_digest_7043a0d54a137728f00be0d04973b241;
PyObject *const_str_digest_b9cdb211b807bac15320f15c280ef6bc;
PyObject *const_str_plain_clean;
PyObject *const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60;
PyObject *const_str_digest_84dfcea27d924bd8cfb7d89d78784a14;
PyObject *const_str_plain_min;
PyObject *const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
PyObject *const_str_plain_append;
PyObject *const_str_chr_42;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_digest_3c6c4c9793ddbf2bf6eac46acb279597;
PyObject *const_str_digest_f28219cd3092b2a6f314fe125a9cac68;
PyObject *const_str_digest_1d1d133b0865ad65641b56158a8fd9cb;
PyObject *const_str_plain_sub;
PyObject *const_str_digest_17af0aa1ccecfa84d17f48fa1d698d77;
PyObject *const_str_plain_strip;
PyObject *const_str_digest_327e2874f7c8a70935f574d8f881196f;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_int_pos_5_tuple;
PyObject *const_dict_c47f609265faed8dc9fe5aa0e6468c5b;
PyObject *const_str_plain_search;
PyObject *const_str_digest_6bf1abb2c61be63eff5c725bfa036039;
PyObject *const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4;
PyObject *const_tuple_c13ae72ce03f9f1ddc49f98880781e2d_tuple;
PyObject *const_tuple_str_plain_s_tuple;
PyObject *const_tuple_82b1b87434d7ef1b1d23be40a0bce601_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[76];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("web_search"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_q);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_no_html);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_skip_disambig);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac33c15a45e73a3f965f431d7307f226);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_d6b4c7506d8358cd1c8b418e926415fd);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_490f440f506c3a3237194bebb8a34f03);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractText_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dba25f8eb56c380adbb13903aa2a563);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractText);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractURL_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_b54c1f736e940fdc85d61276fb9211a1);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractURL);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedTopics);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_20751023ae6ecd027a9028b1a1a7f97d);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_200_none);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FirstURL_str_empty_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_results);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3a2dd55b816c9490fff0582d282bf95);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__ddg_html_search);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fe7648cca3178f63ff15f217f5aabc6);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e9af22a30f7884a6765c3c1f04cebb4);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_77f891aebd48eb579debbeed02d1227e);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_11cb3072264fdd887e8ff5c0b872a0c3);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_bca69903aa4823e8f2c5a8129155a877_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_findall);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf1310c362bf893564c395f20b41a70d);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_html);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_7043a0d54a137728f00be0d04973b241);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9cdb211b807bac15320f15c280ef6bc);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_clean);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_84dfcea27d924bd8cfb7d89d78784a14);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_chr_42);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c6c4c9793ddbf2bf6eac46acb279597);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_f28219cd3092b2a6f314fe125a9cac68);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d1d133b0865ad65641b56158a8fd9cb);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_17af0aa1ccecfa84d17f48fa1d698d77);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_327e2874f7c8a70935f574d8f881196f);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_5_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_c47f609265faed8dc9fe5aa0e6468c5b);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bf1abb2c61be63eff5c725bfa036039);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_c13ae72ce03f9f1ddc49f98880781e2d_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_82b1b87434d7ef1b1d23be40a0bce601_tuple);
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
void checkModuleConstants_web_search(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_q));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_q);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_no_html));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_no_html);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_1);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_skip_disambig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skip_disambig);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac33c15a45e73a3f965f431d7307f226));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac33c15a45e73a3f965f431d7307f226);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_d6b4c7506d8358cd1c8b418e926415fd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d6b4c7506d8358cd1c8b418e926415fd);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_490f440f506c3a3237194bebb8a34f03));
CHECK_OBJECT_DEEP(mod_consts.const_dict_490f440f506c3a3237194bebb8a34f03);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractText_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AbstractText_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dba25f8eb56c380adbb13903aa2a563));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9dba25f8eb56c380adbb13903aa2a563);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractText);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractURL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AbstractURL_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_b54c1f736e940fdc85d61276fb9211a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b54c1f736e940fdc85d61276fb9211a1);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractURL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractURL);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_RelatedTopics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RelatedTopics);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_20751023ae6ecd027a9028b1a1a7f97d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20751023ae6ecd027a9028b1a1a7f97d);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_200_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_200_none);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FirstURL_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FirstURL_str_empty_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_results));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_results);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3a2dd55b816c9490fff0582d282bf95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3a2dd55b816c9490fff0582d282bf95);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__ddg_html_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ddg_html_search);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fe7648cca3178f63ff15f217f5aabc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fe7648cca3178f63ff15f217f5aabc6);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e9af22a30f7884a6765c3c1f04cebb4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e9af22a30f7884a6765c3c1f04cebb4);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_77f891aebd48eb579debbeed02d1227e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77f891aebd48eb579debbeed02d1227e);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_11cb3072264fdd887e8ff5c0b872a0c3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_11cb3072264fdd887e8ff5c0b872a0c3);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_bca69903aa4823e8f2c5a8129155a877_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bca69903aa4823e8f2c5a8129155a877_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_findall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_findall);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf1310c362bf893564c395f20b41a70d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf1310c362bf893564c395f20b41a70d);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_html));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_html);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOTALL);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_7043a0d54a137728f00be0d04973b241));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7043a0d54a137728f00be0d04973b241);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9cdb211b807bac15320f15c280ef6bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9cdb211b807bac15320f15c280ef6bc);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_clean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clean);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_84dfcea27d924bd8cfb7d89d78784a14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84dfcea27d924bd8cfb7d89d78784a14);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_chr_42));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_42);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c6c4c9793ddbf2bf6eac46acb279597));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c6c4c9793ddbf2bf6eac46acb279597);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_f28219cd3092b2a6f314fe125a9cac68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f28219cd3092b2a6f314fe125a9cac68);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d1d133b0865ad65641b56158a8fd9cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d1d133b0865ad65641b56158a8fd9cb);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_17af0aa1ccecfa84d17f48fa1d698d77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17af0aa1ccecfa84d17f48fa1d698d77);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_327e2874f7c8a70935f574d8f881196f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_327e2874f7c8a70935f574d8f881196f);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_5_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_c47f609265faed8dc9fe5aa0e6468c5b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c47f609265faed8dc9fe5aa0e6468c5b);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bf1abb2c61be63eff5c725bfa036039));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bf1abb2c61be63eff5c725bfa036039);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_c13ae72ce03f9f1ddc49f98880781e2d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c13ae72ce03f9f1ddc49f98880781e2d_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_82b1b87434d7ef1b1d23be40a0bce601_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_82b1b87434d7ef1b1d23be40a0bce601_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_web_search$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_web_search->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_web_search->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_web_search->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_web_search$_ddg_html_search(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_web_search->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_web_search->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain__ddg_html_search);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_web_search->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ddg_html_search);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ddg_html_search, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ddg_html_search);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ddg_html_search, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain__ddg_html_search);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain__ddg_html_search);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ddg_html_search);
    }

    return result;
}

static PyObject *module_var_accessor_web_search$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_web_search->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_web_search->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_web_search->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_web_search$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_web_search->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_web_search->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_web_search->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_web_search$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_web_search->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_web_search->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_web_search->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b6611af9fc26ad98c71161d625a6ba79;
static PyCodeObject *code_objects_84c32ab59e675d04439ccee2f930ba4d;
static PyCodeObject *code_objects_7f9134183046b9adbe91a99ab67b52e0;
static PyCodeObject *code_objects_47f5e4de33f139e1d1af40f811878648;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6bf1abb2c61be63eff5c725bfa036039); CHECK_OBJECT(module_filename_obj);
code_objects_b6611af9fc26ad98c71161d625a6ba79 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4, mod_consts.const_str_digest_78c90dae1ae79bc0e9aa014db117c0d4, NULL, NULL, 0, 0, 0);
code_objects_84c32ab59e675d04439ccee2f930ba4d = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ddg_html_search, mod_consts.const_str_plain__ddg_html_search, mod_consts.const_tuple_c13ae72ce03f9f1ddc49f98880781e2d_tuple, NULL, 2, 0, 0);
code_objects_7f9134183046b9adbe91a99ab67b52e0 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clean, mod_consts.const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60, mod_consts.const_tuple_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_47f5e4de33f139e1d1af40f811878648 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_search, mod_consts.const_str_plain_search, mod_consts.const_tuple_82b1b87434d7ef1b1d23be40a0bce601_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_web_search$$$function__1_search(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_web_search$$$function__2__ddg_html_search(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_web_search$$$function__2__ddg_html_search$$$function__1_clean(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_web_search$$$function__1_search(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_query = python_pars[0];
PyObject *par_max_results = python_pars[1];
PyObject *var_params = NULL;
PyObject *var_url = NULL;
PyObject *var_req = NULL;
PyObject *var_resp = NULL;
PyObject *var_data = NULL;
PyObject *var_results = NULL;
PyObject *var_topics = NULL;
PyObject *var_t = NULL;
PyObject *var_text = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_web_search$$$function__1_search;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_web_search$$$function__1_search = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_web_search$$$function__1_search)) {
    Py_XDECREF(cache_frame_frame_web_search$$$function__1_search);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_web_search$$$function__1_search == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_web_search$$$function__1_search = MAKE_FUNCTION_FRAME(tstate, code_objects_47f5e4de33f139e1d1af40f811878648, module_web_search, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_web_search$$$function__1_search->m_type_description == NULL);
frame_frame_web_search$$$function__1_search = cache_frame_frame_web_search$$$function__1_search;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_web_search$$$function__1_search);
assert(Py_REFCNT(frame_frame_web_search$$$function__1_search) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_1 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_q;
CHECK_OBJECT(par_query);
tmp_dict_value_1 = par_query;
tmp_args_element_value_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_format;
tmp_dict_value_1 = mod_consts.const_str_plain_json;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_no_html;
tmp_dict_value_1 = mod_consts.const_str_plain_1;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_skip_disambig;
tmp_dict_value_1 = mod_consts.const_str_plain_1;
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 19;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlencode, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ac33c15a45e73a3f965f431d7307f226;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_params);
tmp_format_value_1 = var_params;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_url == NULL);
var_url = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Request);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_url);
tmp_tuple_element_2 = var_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_d6b4c7506d8358cd1c8b418e926415fd);
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 21;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(var_req == NULL);
var_req = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_5 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_request);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_req);
tmp_tuple_element_3 = var_req;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_490f440f506c3a3237194bebb8a34f03);
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 23;
tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 23;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_7 = tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_8 = tmp_with_1__enter;
assert(var_resp == NULL);
Py_INCREF(tmp_assign_source_8);
var_resp = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_2;
tmp_expression_value_8 = module_var_accessor_web_search$json(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_loads);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_resp);
tmp_called_instance_2 = var_resp;
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 24;
tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_read);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 24;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 24;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
assert(var_data == NULL);
var_data = tmp_assign_source_9;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__1_search, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__1_search, exception_keeper_lineno_1);
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
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 23;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
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
    exception_lineno = 23;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__1_search->m_frame)) {
        frame_frame_web_search$$$function__1_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 23;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__1_search->m_frame)) {
        frame_frame_web_search$$$function__1_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 23;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
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
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 23;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_results == NULL);
var_results = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_3;
int tmp_truth_name_1;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 29;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = var_data;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 29;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_AbstractText_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 29;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_results);
tmp_list_arg_value_1 = var_results;
tmp_tuple_element_4 = mod_consts.const_str_digest_9dba25f8eb56c380adbb13903aa2a563;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}

tmp_expression_value_11 = var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_AbstractText;
tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_item_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_item_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_4;
int tmp_truth_name_2;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_12 = var_data;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 31;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_AbstractURL_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 31;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(var_results);
tmp_list_arg_value_2 = var_results;
tmp_tuple_element_5 = mod_consts.const_str_digest_b54c1f736e940fdc85d61276fb9211a1;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_5);
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}

tmp_expression_value_13 = var_data;
tmp_subscript_value_2 = mod_consts.const_str_plain_AbstractURL;
tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_2);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_item_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_item_value_2 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_6:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_results);
tmp_list_arg_value_3 = var_results;
tmp_item_value_3 = const_str_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_5:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
PyObject *tmp_subscript_value_3;
PyObject *tmp_stop_value_1;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 36;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_15 = var_data;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_RelatedTopics;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 36;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_max_results);
tmp_stop_value_1 = par_max_results;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(var_topics == NULL);
var_topics = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
CHECK_OBJECT(var_topics);
tmp_truth_name_3 = CHECK_IF_TRUE(var_topics);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_results);
tmp_list_arg_value_4 = var_results;
tmp_item_value_4 = mod_consts.const_str_digest_20751023ae6ecd027a9028b1a1a7f97d;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_topics);
tmp_iter_arg_1 = var_topics;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 39;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_15 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_t;
    var_t = tmp_assign_source_15;
    Py_INCREF(var_t);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_5;
int tmp_truth_name_4;
CHECK_OBJECT(var_t);
tmp_isinstance_inst_1 = var_t;
tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_t);
tmp_expression_value_16 = var_t;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 40;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_Text_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 40;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
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
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_t);
tmp_expression_value_18 = var_t;
tmp_subscript_value_4 = mod_consts.const_str_plain_Text;
tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_subscript_value_5 = mod_consts.const_slice_none_int_pos_200_none;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_t);
tmp_expression_value_19 = var_t;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 42;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_FirstURL_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_url;
    var_url = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_6;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_5;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_7;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_5 = var_results;
tmp_tuple_element_6 = mod_consts.const_str_digest_a3a2dd55b816c9490fff0582d282bf95;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_text);
tmp_format_value_4 = var_text;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_add_expr_left_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_add_expr_left_1 == NULL));
CHECK_OBJECT(var_url);
tmp_truth_name_5 = CHECK_IF_TRUE(var_url);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 43;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_tuple_element_7 = mod_consts.const_str_digest_b0a73c883a655937e1ff2aa8bb687e6a;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_7);
CHECK_OBJECT(var_url);
tmp_format_value_5 = var_url;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_add_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_add_expr_right_1 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_add_expr_right_1 = const_str_empty;
Py_INCREF(tmp_add_expr_right_1);
condexpr_end_1:;
tmp_item_value_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_item_value_5 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_7:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_2;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 45;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_operand_value_2 = var_results;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_14 = module_var_accessor_web_search$_ddg_html_search(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ddg_html_search);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_query);
tmp_args_element_value_6 = par_query;
CHECK_OBJECT(par_max_results);
tmp_args_element_value_7 = par_max_results;
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_no_9:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 49;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_iterable_value_1 = var_results;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__1_search, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__1_search, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_18); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_18);
var_e = tmp_assign_source_18;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_15 = module_var_accessor_web_search$_ddg_html_search(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ddg_html_search);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(par_query);
tmp_args_element_value_8 = par_query;
CHECK_OBJECT(par_max_results);
tmp_args_element_value_9 = par_max_results;
frame_frame_web_search$$$function__1_search->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooo";
    goto try_except_handler_10;
}
goto try_return_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__1_search, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__1_search, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = mod_consts.const_str_digest_1fe7648cca3178f63ff15f217f5aabc6;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_8);
CHECK_OBJECT(var_e);
tmp_format_value_6 = var_e;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_return_value == NULL));
goto try_return_handler_11;
}
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 53;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__1_search->m_frame)) {
        frame_frame_web_search$$$function__1_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_11;
branch_end_11:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_return_handler_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_8;
// End of try:
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 17;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__1_search->m_frame)) {
        frame_frame_web_search$$$function__1_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_8;
branch_end_10:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__1_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_web_search$$$function__1_search->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__1_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_web_search$$$function__1_search,
    type_description_1,
    par_query,
    par_max_results,
    var_params,
    var_url,
    var_req,
    var_resp,
    var_data,
    var_results,
    var_topics,
    var_t,
    var_text,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_web_search$$$function__1_search == cache_frame_frame_web_search$$$function__1_search) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_web_search$$$function__1_search);
    cache_frame_frame_web_search$$$function__1_search = NULL;
}

assertFrameObject(frame_frame_web_search$$$function__1_search);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_topics);
var_topics = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_topics);
var_topics = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_text);
var_text = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_max_results);
Py_DECREF(par_max_results);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_max_results);
Py_DECREF(par_max_results);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_web_search$$$function__2__ddg_html_search(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_query = python_pars[0];
PyObject *par_max_results = python_pars[1];
PyObject *var_params = NULL;
PyObject *var_url = NULL;
PyObject *var_req = NULL;
PyObject *var_resp = NULL;
PyObject *var_html = NULL;
PyObject *var_snippets = NULL;
PyObject *var_titles = NULL;
PyObject *var_urls = NULL;
PyObject *var_clean = NULL;
PyObject *var_results = NULL;
PyObject *var_i = NULL;
PyObject *var_title = NULL;
PyObject *var_snippet = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_web_search$$$function__2__ddg_html_search;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_web_search$$$function__2__ddg_html_search = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_web_search$$$function__2__ddg_html_search)) {
    Py_XDECREF(cache_frame_frame_web_search$$$function__2__ddg_html_search);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_web_search$$$function__2__ddg_html_search == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_web_search$$$function__2__ddg_html_search = MAKE_FUNCTION_FRAME(tstate, code_objects_84c32ab59e675d04439ccee2f930ba4d, module_web_search, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_web_search$$$function__2__ddg_html_search->m_type_description == NULL);
frame_frame_web_search$$$function__2__ddg_html_search = cache_frame_frame_web_search$$$function__2__ddg_html_search;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_web_search$$$function__2__ddg_html_search);
assert(Py_REFCNT(frame_frame_web_search$$$function__2__ddg_html_search) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_1 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_q;
CHECK_OBJECT(par_query);
tmp_dict_value_1 = par_query;
tmp_args_element_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_args_element_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 62;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlencode, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_77f891aebd48eb579debbeed02d1227e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_params);
tmp_format_value_1 = var_params;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_url == NULL);
var_url = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Request);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_url);
tmp_tuple_element_2 = var_url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_11cb3072264fdd887e8ff5c0b872a0c3);
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 64;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_req == NULL);
var_req = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_5 = module_var_accessor_web_search$urllib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_request);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_req);
tmp_tuple_element_3 = var_req;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_490f440f506c3a3237194bebb8a34f03);
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 67;
tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 67;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_7 = tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_8 = tmp_with_1__enter;
assert(var_resp == NULL);
Py_INCREF(tmp_assign_source_8);
var_resp = tmp_assign_source_8;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_resp);
tmp_called_instance_2 = var_resp;
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 68;
tmp_expression_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_read);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 68;
tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_bca69903aa4823e8f2c5a8129155a877_tuple, 0), mod_consts.const_tuple_str_plain_errors_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
assert(var_html == NULL);
var_html = tmp_assign_source_9;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__2__ddg_html_search, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__2__ddg_html_search, exception_keeper_lineno_1);
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
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
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
    exception_lineno = 67;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__2__ddg_html_search->m_frame)) {
        frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 67;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__2__ddg_html_search->m_frame)) {
        frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 67;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
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
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 67;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_findall);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_cf1310c362bf893564c395f20b41a70d;
if (var_html == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_html);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = var_html;
tmp_expression_value_10 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_snippets == NULL);
var_snippets = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_12;
tmp_expression_value_11 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_findall);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_8 = mod_consts.const_str_digest_7043a0d54a137728f00be0d04973b241;
if (var_html == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_html);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = var_html;
tmp_expression_value_12 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_titles == NULL);
var_titles = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_14;
tmp_expression_value_13 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_findall);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_b9cdb211b807bac15320f15c280ef6bc;
if (var_html == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_html);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_12 = var_html;
tmp_expression_value_14 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_DOTALL);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(var_urls == NULL);
var_urls = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_web_search$$$function__2__ddg_html_search$$$function__1_clean(tstate);

assert(var_clean == NULL);
var_clean = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_list_element_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_84dfcea27d924bd8cfb7d89d78784a14;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_query);
tmp_format_value_2 = par_query;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_newline;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_list_element_1 == NULL));
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assign_source_15, 0, tmp_list_element_1);
assert(var_results == NULL);
var_results = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_len_arg_1;
tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_11 != NULL);
CHECK_OBJECT(par_max_results);
tmp_args_element_value_14 = par_max_results;
CHECK_OBJECT(var_snippets);
tmp_len_arg_1 = var_snippets;
tmp_args_element_value_15 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_xrange_low_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
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
tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 78;
        goto try_except_handler_7;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_18;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_4 = var_i;
CHECK_OBJECT(var_titles);
tmp_len_arg_2 = var_titles;
tmp_cmp_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (var_clean == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clean);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_12 = var_clean;
CHECK_OBJECT(var_titles);
tmp_expression_value_15 = var_titles;
CHECK_OBJECT(var_i);
tmp_subscript_value_1 = var_i;
tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_1);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 79;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_19 = const_str_empty;
Py_INCREF(tmp_assign_source_19);
condexpr_end_1:;
{
    PyObject *old = var_title;
    var_title = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_3;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_5 = var_i;
CHECK_OBJECT(var_snippets);
tmp_len_arg_3 = var_snippets;
tmp_cmp_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (var_clean == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clean);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_13 = var_clean;
CHECK_OBJECT(var_snippets);
tmp_expression_value_16 = var_snippets;
CHECK_OBJECT(var_i);
tmp_subscript_value_2 = var_i;
tmp_args_element_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_2);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 80;
tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_20 = const_str_empty;
Py_INCREF(tmp_assign_source_20);
condexpr_end_2:;
{
    PyObject *old = var_snippet;
    var_snippet = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_4;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_6 = var_i;
CHECK_OBJECT(var_urls);
tmp_len_arg_4 = var_urls;
tmp_cmp_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_7 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
if (var_clean == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_clean);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_called_value_14 = var_clean;
CHECK_OBJECT(var_urls);
tmp_expression_value_17 = var_urls;
CHECK_OBJECT(var_i);
tmp_subscript_value_3 = var_i;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_3);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 81;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_21 = const_str_empty;
Py_INCREF(tmp_assign_source_21);
condexpr_end_3:;
{
    PyObject *old = var_url;
    var_url = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_title);
tmp_truth_name_1 = CHECK_IF_TRUE(var_title);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_snippet);
tmp_truth_name_2 = CHECK_IF_TRUE(var_snippet);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_8 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_8 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_5;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_1 = var_results;
CHECK_OBJECT(var_title);
tmp_truth_name_3 = CHECK_IF_TRUE(var_title);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_tuple_element_5 = mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_title);
tmp_format_value_3 = var_title;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_item_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_item_value_1 == NULL));
goto condexpr_end_4;
condexpr_false_4:;
tmp_item_value_1 = const_str_empty;
Py_INCREF(tmp_item_value_1);
condexpr_end_4:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_4;
CHECK_OBJECT(var_snippet);
tmp_truth_name_4 = CHECK_IF_TRUE(var_snippet);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_18 = var_results;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_append);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_snippet);
tmp_args_element_value_19 = var_snippet;
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 84;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_5;
CHECK_OBJECT(var_url);
tmp_truth_name_5 = CHECK_IF_TRUE(var_url);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_20;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_6;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_19 = var_results;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_append);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_tuple_element_6 = mod_consts.const_str_chr_42;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_url);
tmp_format_value_4 = var_url;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_42;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_16);
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_args_element_value_20 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_args_element_value_20 == NULL));
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 85;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_7:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_5;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_20 = var_results;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_append);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = 86;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
nuitka_digit tmp_cmp_expr_right_7;
PyObject *tmp_len_arg_5;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_7;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_5 = var_results;
tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_7 = 1;
tmp_condition_result_12 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_12 != false) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iterable_value_1 = var_results;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_tuple_element_7 = mod_consts.const_str_digest_3c6c4c9793ddbf2bf6eac46acb279597;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_7);
CHECK_OBJECT(par_query);
tmp_format_value_5 = par_query;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_return_value == NULL));
condexpr_end_5:;
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__2__ddg_html_search, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__2__ddg_html_search, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_22); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_22);
var_e = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = mod_consts.const_str_digest_f28219cd3092b2a6f314fe125a9cac68;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_8);
CHECK_OBJECT(var_e);
tmp_format_value_6 = var_e;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_return_value == NULL));
goto try_return_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 61;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_web_search$$$function__2__ddg_html_search->m_frame)) {
        frame_frame_web_search$$$function__2__ddg_html_search->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_8;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__2__ddg_html_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_web_search$$$function__2__ddg_html_search->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__2__ddg_html_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_web_search$$$function__2__ddg_html_search,
    type_description_1,
    par_query,
    par_max_results,
    var_params,
    var_url,
    var_req,
    var_resp,
    var_html,
    var_snippets,
    var_titles,
    var_urls,
    var_clean,
    var_results,
    var_i,
    var_title,
    var_snippet,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_web_search$$$function__2__ddg_html_search == cache_frame_frame_web_search$$$function__2__ddg_html_search) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_web_search$$$function__2__ddg_html_search);
    cache_frame_frame_web_search$$$function__2__ddg_html_search = NULL;
}

assertFrameObject(frame_frame_web_search$$$function__2__ddg_html_search);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
Py_XDECREF(var_html);
var_html = NULL;
Py_XDECREF(var_snippets);
var_snippets = NULL;
Py_XDECREF(var_titles);
var_titles = NULL;
Py_XDECREF(var_urls);
var_urls = NULL;
Py_XDECREF(var_clean);
var_clean = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_snippet);
var_snippet = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_req);
var_req = NULL;
Py_XDECREF(var_resp);
var_resp = NULL;
Py_XDECREF(var_html);
var_html = NULL;
Py_XDECREF(var_snippets);
var_snippets = NULL;
Py_XDECREF(var_titles);
var_titles = NULL;
Py_XDECREF(var_urls);
var_urls = NULL;
Py_XDECREF(var_clean);
var_clean = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_snippet);
var_snippet = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_max_results);
Py_DECREF(par_max_results);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_max_results);
Py_DECREF(par_max_results);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_web_search$$$function__2__ddg_html_search$$$function__1_clean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean)) {
    Py_XDECREF(cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean = MAKE_FUNCTION_FRAME(tstate, code_objects_7f9134183046b9adbe91a99ab67b52e0, module_web_search, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean->m_type_description == NULL);
frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean = cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean);
assert(Py_REFCNT(frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_web_search$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_17af0aa1ccecfa84d17f48fa1d698d77;
tmp_args_element_value_2 = const_str_empty;
CHECK_OBJECT(par_s);
tmp_args_element_value_3 = par_s;
frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_sub,
        call_args
    );
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean->m_frame.f_lineno = 75;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean,
    type_description_1,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean == cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean);
    cache_frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean = NULL;
}

assertFrameObject(frame_frame_web_search$$$function__2__ddg_html_search$$$function__1_clean);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_web_search$$$function__1_search(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_web_search$$$function__1_search,
        mod_consts.const_str_plain_search,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_47f5e4de33f139e1d1af40f811878648,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_web_search,
        mod_consts.const_str_digest_1e9af22a30f7884a6765c3c1f04cebb4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_web_search$$$function__2__ddg_html_search(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_web_search$$$function__2__ddg_html_search,
        mod_consts.const_str_plain__ddg_html_search,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84c32ab59e675d04439ccee2f930ba4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_web_search,
        mod_consts.const_str_digest_1d1d133b0865ad65641b56158a8fd9cb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_web_search$$$function__2__ddg_html_search$$$function__1_clean(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_web_search$$$function__2__ddg_html_search$$$function__1_clean,
        mod_consts.const_str_plain_clean,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1ec2e7512d03dcbe9ae95016e403b60,
#endif
        code_objects_7f9134183046b9adbe91a99ab67b52e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_web_search,
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

static function_impl_code const function_table_web_search[] = {
impl_web_search$$$function__2__ddg_html_search$$$function__1_clean,
impl_web_search$$$function__1_search,
impl_web_search$$$function__2__ddg_html_search,
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

    return Nuitka_Function_GetFunctionState(function, function_table_web_search);
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
        module_web_search,
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
        function_table_web_search,
        sizeof(function_table_web_search) / sizeof(function_impl_code)
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
static char const *module_full_name = "web_search";
#endif

// Internal entry point for module code.
PyObject *module_code_web_search(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("web_search");

    // Store the module for future use.
    module_web_search = module;

    moduledict_web_search = MODULE_DICT(module_web_search);

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
        PRINT_STRING("web_search: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("web_search: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("web_search: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "web_search" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initweb_search\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_web_search,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_web_search,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_web_search,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_web_search,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_web_search,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_web_search);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_web_search);
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

        UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_web_search;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_327e2874f7c8a70935f574d8f881196f;
UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_web_search = MAKE_MODULE_FRAME(code_objects_b6611af9fc26ad98c71161d625a6ba79, module_web_search);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_web_search);
assert(Py_REFCNT(frame_frame_web_search) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_web_search$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_web_search$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42;
tmp_globals_arg_value_1 = (PyObject *)moduledict_web_search;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_web_search->m_frame.f_lineno = 6;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_web_search;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_web_search->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_web_search;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_web_search->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_4 = (PyObject *)moduledict_web_search;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_web_search->m_frame.f_lineno = 9;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_web_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_web_search->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_web_search, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_web_search);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_5_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c47f609265faed8dc9fe5aa0e6468c5b);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_8 = MAKE_FUNCTION_web_search$$$function__1_search(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain_search, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_5_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c47f609265faed8dc9fe5aa0e6468c5b);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_9 = MAKE_FUNCTION_web_search$$$function__2__ddg_html_search(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_web_search, (Nuitka_StringObject *)mod_consts.const_str_plain__ddg_html_search, tmp_assign_source_9);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("web_search", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "web_search" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_web_search);
    return module_web_search;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_web_search, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("web_search", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

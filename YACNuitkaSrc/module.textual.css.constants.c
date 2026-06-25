/* Generated code for Python module 'textual$css$constants'
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



/* The "module_textual$css$constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$constants;
PyDictObject *moduledict_textual$css$constants;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_set_bb3bba87cc4b1e0a685b16540ec153cf;
PyObject *const_str_plain_VALID_VISIBILITY;
PyObject *const_str_plain_Final;
PyObject *const_set_6429a665ead8aba9b442ad6d7f928c45;
PyObject *const_str_plain_VALID_DISPLAY;
PyObject *const_set_5ce06f353f5edb47ce0e4fbcb83a96bd;
PyObject *const_str_plain_VALID_BORDER;
PyObject *const_set_9072d1c6159f6611b0dbae6161039ec7;
PyObject *const_str_plain_VALID_EDGE;
PyObject *const_set_3996b632dc9546d8d2a6589996df3610;
PyObject *const_str_plain_VALID_LAYOUT;
PyObject *const_set_94effbe02a542d70db523ddc31cd5041;
PyObject *const_str_plain_VALID_BOX_SIZING;
PyObject *const_set_fc3b7ed144372a226ac8fda0cefa7a14;
PyObject *const_str_plain_VALID_OVERFLOW;
PyObject *const_set_4e55cef0145b6a7fd3d9d2cd394681cf;
PyObject *const_str_plain_VALID_ALIGN_HORIZONTAL;
PyObject *const_set_19c3bbf40081d4fb2c7f62e92ae23f16;
PyObject *const_str_plain_VALID_ALIGN_VERTICAL;
PyObject *const_set_7c5577047c43069f5c9f449771a9c2f8;
PyObject *const_str_plain_VALID_POSITION;
PyObject *const_set_f129a1f7601a07ccfff03cd7da19a362;
PyObject *const_str_plain_VALID_TEXT_ALIGN;
PyObject *const_set_04d49004f338ce613f28bd809ad7aef5;
PyObject *const_str_plain_VALID_SCROLLBAR_GUTTER;
PyObject *const_set_23f7102c973269a8e8d85931ece35a61;
PyObject *const_str_plain_VALID_STYLE_FLAGS;
PyObject *const_set_29ed26e7e27c23e7a92025cab8d209f8;
PyObject *const_str_plain_VALID_PSEUDO_CLASSES;
PyObject *const_set_adee7bfb78dd228aecda9fadd7f15b06;
PyObject *const_str_plain_VALID_OVERLAY;
PyObject *const_set_779a7e880b2cb3cebdbabd34d088f794;
PyObject *const_str_plain_VALID_CONSTRAIN;
PyObject *const_set_9034c09f114acbf89200b8f5a4816d65;
PyObject *const_str_plain_VALID_KEYLINE;
PyObject *const_set_99184795c564e140ff9103ecf9fbfadb;
PyObject *const_str_plain_VALID_HATCH;
PyObject *const_set_82883a98d24d6a42e27159a08bd1ccea;
PyObject *const_str_plain_VALID_TEXT_WRAP;
PyObject *const_set_ca67b7db45942d320eb4d0a818e7eff2;
PyObject *const_str_plain_VALID_TEXT_OVERFLOW;
PyObject *const_set_fd7f573feb52739ab01995c59dea98fa;
PyObject *const_str_plain_VALID_EXPAND;
PyObject *const_str_plain_VALID_SCROLLBAR_VISIBILITY;
PyObject *const_set_975d7d831f0e4c3338485b0693fabbb7;
PyObject *const_str_plain_VALID_POINTER;
PyObject *const_dict_eff3cff9dcd7d1cba274646fc77a6c14;
PyObject *const_str_plain_HATCHES;
PyObject *const_str_digest_0d2eee7ea9baa416194e793cece558f1;
PyObject *const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_set_bb3bba87cc4b1e0a685b16540ec153cf);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_VISIBILITY);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Final);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_set_6429a665ead8aba9b442ad6d7f928c45);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_DISPLAY);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_set_5ce06f353f5edb47ce0e4fbcb83a96bd);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_BORDER);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_set_9072d1c6159f6611b0dbae6161039ec7);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_EDGE);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_set_3996b632dc9546d8d2a6589996df3610);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_LAYOUT);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_set_94effbe02a542d70db523ddc31cd5041);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_BOX_SIZING);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_set_fc3b7ed144372a226ac8fda0cefa7a14);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_OVERFLOW);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_set_4e55cef0145b6a7fd3d9d2cd394681cf);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_ALIGN_HORIZONTAL);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_set_19c3bbf40081d4fb2c7f62e92ae23f16);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_ALIGN_VERTICAL);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_set_7c5577047c43069f5c9f449771a9c2f8);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_POSITION);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_set_f129a1f7601a07ccfff03cd7da19a362);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_ALIGN);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_set_04d49004f338ce613f28bd809ad7aef5);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_SCROLLBAR_GUTTER);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_set_23f7102c973269a8e8d85931ece35a61);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_STYLE_FLAGS);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_set_29ed26e7e27c23e7a92025cab8d209f8);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_PSEUDO_CLASSES);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_set_adee7bfb78dd228aecda9fadd7f15b06);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_OVERLAY);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_set_779a7e880b2cb3cebdbabd34d088f794);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_CONSTRAIN);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_set_9034c09f114acbf89200b8f5a4816d65);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_KEYLINE);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_set_99184795c564e140ff9103ecf9fbfadb);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_HATCH);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_set_82883a98d24d6a42e27159a08bd1ccea);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_WRAP);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_set_ca67b7db45942d320eb4d0a818e7eff2);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_OVERFLOW);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_set_fd7f573feb52739ab01995c59dea98fa);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_EXPAND);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_SCROLLBAR_VISIBILITY);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_set_975d7d831f0e4c3338485b0693fabbb7);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_POINTER);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_eff3cff9dcd7d1cba274646fc77a6c14);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_HATCHES);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d2eee7ea9baa416194e793cece558f1);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9);
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
void checkModuleConstants_textual$css$constants(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_set_bb3bba87cc4b1e0a685b16540ec153cf));
CHECK_OBJECT_DEEP(mod_consts.const_set_bb3bba87cc4b1e0a685b16540ec153cf);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_VISIBILITY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_VISIBILITY);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Final);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_set_6429a665ead8aba9b442ad6d7f928c45));
CHECK_OBJECT_DEEP(mod_consts.const_set_6429a665ead8aba9b442ad6d7f928c45);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_DISPLAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_DISPLAY);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_set_5ce06f353f5edb47ce0e4fbcb83a96bd));
CHECK_OBJECT_DEEP(mod_consts.const_set_5ce06f353f5edb47ce0e4fbcb83a96bd);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_BORDER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_BORDER);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_set_9072d1c6159f6611b0dbae6161039ec7));
CHECK_OBJECT_DEEP(mod_consts.const_set_9072d1c6159f6611b0dbae6161039ec7);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_EDGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_EDGE);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_set_3996b632dc9546d8d2a6589996df3610));
CHECK_OBJECT_DEEP(mod_consts.const_set_3996b632dc9546d8d2a6589996df3610);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_LAYOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_LAYOUT);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_set_94effbe02a542d70db523ddc31cd5041));
CHECK_OBJECT_DEEP(mod_consts.const_set_94effbe02a542d70db523ddc31cd5041);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_BOX_SIZING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_BOX_SIZING);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_set_fc3b7ed144372a226ac8fda0cefa7a14));
CHECK_OBJECT_DEEP(mod_consts.const_set_fc3b7ed144372a226ac8fda0cefa7a14);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_OVERFLOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_OVERFLOW);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_set_4e55cef0145b6a7fd3d9d2cd394681cf));
CHECK_OBJECT_DEEP(mod_consts.const_set_4e55cef0145b6a7fd3d9d2cd394681cf);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_ALIGN_HORIZONTAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_ALIGN_HORIZONTAL);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_set_19c3bbf40081d4fb2c7f62e92ae23f16));
CHECK_OBJECT_DEEP(mod_consts.const_set_19c3bbf40081d4fb2c7f62e92ae23f16);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_ALIGN_VERTICAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_ALIGN_VERTICAL);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_set_7c5577047c43069f5c9f449771a9c2f8));
CHECK_OBJECT_DEEP(mod_consts.const_set_7c5577047c43069f5c9f449771a9c2f8);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_POSITION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_POSITION);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_set_f129a1f7601a07ccfff03cd7da19a362));
CHECK_OBJECT_DEEP(mod_consts.const_set_f129a1f7601a07ccfff03cd7da19a362);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_ALIGN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_TEXT_ALIGN);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_set_04d49004f338ce613f28bd809ad7aef5));
CHECK_OBJECT_DEEP(mod_consts.const_set_04d49004f338ce613f28bd809ad7aef5);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_SCROLLBAR_GUTTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_SCROLLBAR_GUTTER);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_set_23f7102c973269a8e8d85931ece35a61));
CHECK_OBJECT_DEEP(mod_consts.const_set_23f7102c973269a8e8d85931ece35a61);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_STYLE_FLAGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_STYLE_FLAGS);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_set_29ed26e7e27c23e7a92025cab8d209f8));
CHECK_OBJECT_DEEP(mod_consts.const_set_29ed26e7e27c23e7a92025cab8d209f8);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_PSEUDO_CLASSES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_PSEUDO_CLASSES);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_set_adee7bfb78dd228aecda9fadd7f15b06));
CHECK_OBJECT_DEEP(mod_consts.const_set_adee7bfb78dd228aecda9fadd7f15b06);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_OVERLAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_OVERLAY);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_set_779a7e880b2cb3cebdbabd34d088f794));
CHECK_OBJECT_DEEP(mod_consts.const_set_779a7e880b2cb3cebdbabd34d088f794);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_CONSTRAIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_CONSTRAIN);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_set_9034c09f114acbf89200b8f5a4816d65));
CHECK_OBJECT_DEEP(mod_consts.const_set_9034c09f114acbf89200b8f5a4816d65);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_KEYLINE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_KEYLINE);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_set_99184795c564e140ff9103ecf9fbfadb));
CHECK_OBJECT_DEEP(mod_consts.const_set_99184795c564e140ff9103ecf9fbfadb);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_HATCH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_HATCH);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_set_82883a98d24d6a42e27159a08bd1ccea));
CHECK_OBJECT_DEEP(mod_consts.const_set_82883a98d24d6a42e27159a08bd1ccea);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_WRAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_TEXT_WRAP);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_set_ca67b7db45942d320eb4d0a818e7eff2));
CHECK_OBJECT_DEEP(mod_consts.const_set_ca67b7db45942d320eb4d0a818e7eff2);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_TEXT_OVERFLOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_TEXT_OVERFLOW);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_set_fd7f573feb52739ab01995c59dea98fa));
CHECK_OBJECT_DEEP(mod_consts.const_set_fd7f573feb52739ab01995c59dea98fa);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_EXPAND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_EXPAND);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_SCROLLBAR_VISIBILITY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_SCROLLBAR_VISIBILITY);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_set_975d7d831f0e4c3338485b0693fabbb7));
CHECK_OBJECT_DEEP(mod_consts.const_set_975d7d831f0e4c3338485b0693fabbb7);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_VALID_POINTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VALID_POINTER);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_eff3cff9dcd7d1cba274646fc77a6c14));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eff3cff9dcd7d1cba274646fc77a6c14);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_HATCHES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HATCHES);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d2eee7ea9baa416194e793cece558f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d2eee7ea9baa416194e793cece558f1);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_textual$css$constants$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$constants->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$constants$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$constants->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_75470dee579a3c1b9c6dd0301dc3f0e5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0d2eee7ea9baa416194e793cece558f1); CHECK_OBJECT(module_filename_obj);
code_objects_75470dee579a3c1b9c6dd0301dc3f0e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9, mod_consts.const_str_digest_e69b429f5b6f17f0c6f11ed3a957aed9, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_textual$css$constants[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$constants);
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
        module_textual$css$constants,
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
        function_table_textual$css$constants,
        sizeof(function_table_textual$css$constants) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.constants";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$constants(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$constants");

    // Store the module for future use.
    module_textual$css$constants = module;

    moduledict_textual$css$constants = MODULE_DICT(module_textual$css$constants);

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
        PRINT_STRING("textual$css$constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$constants: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$constants: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.constants" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$constants\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$constants);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$css$constants;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$constants = MAKE_MODULE_FRAME(code_objects_75470dee579a3c1b9c6dd0301dc3f0e5, module_textual$css$constants);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$constants);
assert(Py_REFCNT(frame_frame_textual$css$constants) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$constants$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$constants$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = PySet_New(mod_consts.const_set_bb3bba87cc4b1e0a685b16540ec153cf);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_VISIBILITY, tmp_assign_source_7);
}
tmp_dictset_value = mod_consts.const_str_plain_Final;
tmp_dictset_dict = module_var_accessor_textual$css$constants$__annotations__(tstate);
assert(!(tmp_dictset_dict == NULL));
tmp_dictset_key = mod_consts.const_str_plain_VALID_VISIBILITY;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = PySet_New(mod_consts.const_set_6429a665ead8aba9b442ad6d7f928c45);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_DISPLAY, tmp_assign_source_8);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_1 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_VALID_DISPLAY;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = PySet_New(mod_consts.const_set_5ce06f353f5edb47ce0e4fbcb83a96bd);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_BORDER, tmp_assign_source_9);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_2 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_VALID_BORDER;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = PySet_New(mod_consts.const_set_9072d1c6159f6611b0dbae6161039ec7);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_EDGE, tmp_assign_source_10);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_3 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_VALID_EDGE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = PySet_New(mod_consts.const_set_3996b632dc9546d8d2a6589996df3610);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_LAYOUT, tmp_assign_source_11);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_4 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_VALID_LAYOUT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = PySet_New(mod_consts.const_set_94effbe02a542d70db523ddc31cd5041);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_BOX_SIZING, tmp_assign_source_12);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_5 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_VALID_BOX_SIZING;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = PySet_New(mod_consts.const_set_fc3b7ed144372a226ac8fda0cefa7a14);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_OVERFLOW, tmp_assign_source_13);
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_6 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_VALID_OVERFLOW;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = PySet_New(mod_consts.const_set_4e55cef0145b6a7fd3d9d2cd394681cf);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_ALIGN_HORIZONTAL, tmp_assign_source_14);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_7 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_VALID_ALIGN_HORIZONTAL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = PySet_New(mod_consts.const_set_19c3bbf40081d4fb2c7f62e92ae23f16);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_ALIGN_VERTICAL, tmp_assign_source_15);
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_8 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_VALID_ALIGN_VERTICAL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = PySet_New(mod_consts.const_set_7c5577047c43069f5c9f449771a9c2f8);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_POSITION, tmp_assign_source_16);
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_9 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_VALID_POSITION;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = PySet_New(mod_consts.const_set_f129a1f7601a07ccfff03cd7da19a362);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_TEXT_ALIGN, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_10 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_VALID_TEXT_ALIGN;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = PySet_New(mod_consts.const_set_04d49004f338ce613f28bd809ad7aef5);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_SCROLLBAR_GUTTER, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_11 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_VALID_SCROLLBAR_GUTTER;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = PySet_New(mod_consts.const_set_23f7102c973269a8e8d85931ece35a61);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_STYLE_FLAGS, tmp_assign_source_19);
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_12 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_VALID_STYLE_FLAGS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = PySet_New(mod_consts.const_set_29ed26e7e27c23e7a92025cab8d209f8);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_PSEUDO_CLASSES, tmp_assign_source_20);
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_13 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_VALID_PSEUDO_CLASSES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = PySet_New(mod_consts.const_set_adee7bfb78dd228aecda9fadd7f15b06);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_OVERLAY, tmp_assign_source_21);
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_14 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_VALID_OVERLAY;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = PySet_New(mod_consts.const_set_779a7e880b2cb3cebdbabd34d088f794);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_CONSTRAIN, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_15 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_VALID_CONSTRAIN;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = PySet_New(mod_consts.const_set_9034c09f114acbf89200b8f5a4816d65);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_KEYLINE, tmp_assign_source_23);
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_16 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_VALID_KEYLINE;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = PySet_New(mod_consts.const_set_99184795c564e140ff9103ecf9fbfadb);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_HATCH, tmp_assign_source_24);
}
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_ass_subvalue_17 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_17 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_VALID_HATCH;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = PySet_New(mod_consts.const_set_82883a98d24d6a42e27159a08bd1ccea);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_TEXT_WRAP, tmp_assign_source_25);
}
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_18 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_VALID_TEXT_WRAP;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = PySet_New(mod_consts.const_set_ca67b7db45942d320eb4d0a818e7eff2);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_TEXT_OVERFLOW, tmp_assign_source_26);
}
{
PyObject *tmp_ass_subvalue_19;
PyObject *tmp_ass_subscribed_19;
PyObject *tmp_ass_subscript_19;
tmp_ass_subvalue_19 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_19 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_19 = mod_consts.const_str_plain_VALID_TEXT_OVERFLOW;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = PySet_New(mod_consts.const_set_fd7f573feb52739ab01995c59dea98fa);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_EXPAND, tmp_assign_source_27);
}
{
PyObject *tmp_ass_subvalue_20;
PyObject *tmp_ass_subscribed_20;
PyObject *tmp_ass_subscript_20;
tmp_ass_subvalue_20 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_20 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_20 = mod_consts.const_str_plain_VALID_EXPAND;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = PySet_New(mod_consts.const_set_bb3bba87cc4b1e0a685b16540ec153cf);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_SCROLLBAR_VISIBILITY, tmp_assign_source_28);
}
{
PyObject *tmp_ass_subvalue_21;
PyObject *tmp_ass_subscribed_21;
PyObject *tmp_ass_subscript_21;
tmp_ass_subvalue_21 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_21 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_21 = mod_consts.const_str_plain_VALID_SCROLLBAR_VISIBILITY;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = PySet_New(mod_consts.const_set_975d7d831f0e4c3338485b0693fabbb7);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_VALID_POINTER, tmp_assign_source_29);
}
{
PyObject *tmp_ass_subvalue_22;
PyObject *tmp_ass_subscribed_22;
PyObject *tmp_ass_subscript_22;
tmp_ass_subvalue_22 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_22 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_22 = mod_consts.const_str_plain_VALID_POINTER;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = DICT_COPY(tstate, mod_consts.const_dict_eff3cff9dcd7d1cba274646fc77a6c14);
UPDATE_STRING_DICT1(moduledict_textual$css$constants, (Nuitka_StringObject *)mod_consts.const_str_plain_HATCHES, tmp_assign_source_30);
}
{
PyObject *tmp_ass_subvalue_23;
PyObject *tmp_ass_subscribed_23;
PyObject *tmp_ass_subscript_23;
tmp_ass_subvalue_23 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_23 = module_var_accessor_textual$css$constants$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_23 = mod_consts.const_str_plain_HATCHES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$constants, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$constants->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$constants, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$constants);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$constants", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.constants" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$constants);
    return module_textual$css$constants;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$constants", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

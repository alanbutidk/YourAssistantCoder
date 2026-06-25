/* Generated code for Python module 'colorama$ansi'
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



/* The "module_colorama$ansi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$ansi;
PyDictObject *moduledict_colorama$ansi;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_CSI;
PyObject *const_str_plain_m;
PyObject *const_str_plain_OSC;
PyObject *const_str_digest_8af3020d8d75c369014ac4f4111b39e5;
PyObject *const_str_plain_BEL;
PyObject *const_str_plain_J;
PyObject *const_str_plain_K;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_str_plain_code_to_chars;
PyObject *const_str_plain_A;
PyObject *const_str_plain_B;
PyObject *const_str_plain_C;
PyObject *const_str_plain_D;
PyObject *const_str_chr_59;
PyObject *const_str_plain_H;
PyObject *const_str_digest_c3e96bcf28c33479865ac8afd649ee24;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_52eb4f81ebdca710bdf151533294a7ec;
PyObject *const_str_digest_c9b902e026a28619980a8e7af93913c0;
PyObject *const_str_chr_7;
PyObject *const_str_plain_set_title;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_clear_screen;
PyObject *const_str_plain_clear_line;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AnsiCodes;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_25;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_AnsiCursor;
PyObject *const_int_pos_36;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_UP;
PyObject *const_str_digest_44d01b2866fa43fb83797aa505558b36;
PyObject *const_str_plain_DOWN;
PyObject *const_str_digest_3d4a9874c187a2691dcd4103fb0194e6;
PyObject *const_str_plain_FORWARD;
PyObject *const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d;
PyObject *const_str_plain_BACK;
PyObject *const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad;
PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
PyObject *const_str_plain_POS;
PyObject *const_str_digest_f93d7b2d5389563129c8d80dbe232372;
PyObject *const_str_plain_AnsiFore;
PyObject *const_int_pos_49;
PyObject *const_int_pos_30;
PyObject *const_str_plain_BLACK;
PyObject *const_int_pos_31;
PyObject *const_str_plain_RED;
PyObject *const_int_pos_32;
PyObject *const_str_plain_GREEN;
PyObject *const_int_pos_33;
PyObject *const_str_plain_YELLOW;
PyObject *const_int_pos_34;
PyObject *const_str_plain_BLUE;
PyObject *const_int_pos_35;
PyObject *const_str_plain_MAGENTA;
PyObject *const_str_plain_CYAN;
PyObject *const_int_pos_37;
PyObject *const_str_plain_WHITE;
PyObject *const_int_pos_39;
PyObject *const_str_plain_RESET;
PyObject *const_int_pos_90;
PyObject *const_str_plain_LIGHTBLACK_EX;
PyObject *const_int_pos_91;
PyObject *const_str_plain_LIGHTRED_EX;
PyObject *const_int_pos_92;
PyObject *const_str_plain_LIGHTGREEN_EX;
PyObject *const_int_pos_93;
PyObject *const_str_plain_LIGHTYELLOW_EX;
PyObject *const_int_pos_94;
PyObject *const_str_plain_LIGHTBLUE_EX;
PyObject *const_int_pos_95;
PyObject *const_str_plain_LIGHTMAGENTA_EX;
PyObject *const_int_pos_96;
PyObject *const_str_plain_LIGHTCYAN_EX;
PyObject *const_int_pos_97;
PyObject *const_str_plain_LIGHTWHITE_EX;
PyObject *const_str_plain_AnsiBack;
PyObject *const_int_pos_71;
PyObject *const_int_pos_40;
PyObject *const_int_pos_41;
PyObject *const_int_pos_42;
PyObject *const_int_pos_43;
PyObject *const_int_pos_44;
PyObject *const_int_pos_45;
PyObject *const_int_pos_46;
PyObject *const_int_pos_47;
PyObject *const_int_pos_100;
PyObject *const_int_pos_101;
PyObject *const_int_pos_102;
PyObject *const_int_pos_103;
PyObject *const_int_pos_104;
PyObject *const_int_pos_105;
PyObject *const_int_pos_106;
PyObject *const_int_pos_107;
PyObject *const_str_plain_AnsiStyle;
PyObject *const_str_plain_BRIGHT;
PyObject *const_int_pos_2;
PyObject *const_str_plain_DIM;
PyObject *const_int_pos_22;
PyObject *const_str_plain_NORMAL;
PyObject *const_str_plain_RESET_ALL;
PyObject *const_str_plain_Fore;
PyObject *const_str_plain_Back;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_Cursor;
PyObject *const_str_digest_6f1bd2b77dd8db3000c4740f9443e3f1;
PyObject *const_str_digest_086f677772b7ba9161e306e0bc9456b3;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_n_tuple;
PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_y_tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
PyObject *const_tuple_str_plain_mode_tuple;
PyObject *const_tuple_str_plain_code_tuple;
PyObject *const_tuple_str_plain_title_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[126];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("colorama.ansi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSI);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_m);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_OSC);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_8af3020d8d75c369014ac4f4111b39e5);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_BEL);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_J);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_K);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_to_chars);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_B);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_C);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_D);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_59);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_H);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3e96bcf28c33479865ac8afd649ee24);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_52eb4f81ebdca710bdf151533294a7ec);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9b902e026a28619980a8e7af93913c0);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_chr_7);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_title);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_screen);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_line);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiCodes);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiCursor);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_UP);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_44d01b2866fa43fb83797aa505558b36);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d4a9874c187a2691dcd4103fb0194e6);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORWARD);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_BACK);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_POS);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_f93d7b2d5389563129c8d80dbe232372);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiFore);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_49);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLACK);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_RED);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_GREEN);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_YELLOW);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_34);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLUE);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_35);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAGENTA);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_CYAN);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_WHITE);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_39);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESET);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_90);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTBLACK_EX);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTRED_EX);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTGREEN_EX);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_93);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTYELLOW_EX);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_94);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTBLUE_EX);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_95);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTMAGENTA_EX);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_96);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTCYAN_EX);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_97);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTWHITE_EX);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiBack);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_71);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_43);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_46);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_101);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_102);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_104);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_105);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_106);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_107);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiStyle);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRIGHT);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIM);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_NORMAL);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_ALL);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fore);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Back);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cursor);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f1bd2b77dd8db3000c4740f9443e3f1);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_086f677772b7ba9161e306e0bc9456b3);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_tuple);
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
void checkModuleConstants_colorama$ansi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSI);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_m));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_m);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_OSC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OSC);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_8af3020d8d75c369014ac4f4111b39e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8af3020d8d75c369014ac4f4111b39e5);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_BEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BEL);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_J));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_J);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_K));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_K);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_to_chars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_to_chars);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_A));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_A);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_B));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_B);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_C));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_C);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_D));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_D);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_59));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_59);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_H));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_H);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3e96bcf28c33479865ac8afd649ee24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3e96bcf28c33479865ac8afd649ee24);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_52eb4f81ebdca710bdf151533294a7ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52eb4f81ebdca710bdf151533294a7ec);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9b902e026a28619980a8e7af93913c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9b902e026a28619980a8e7af93913c0);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_chr_7));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_7);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_title);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_screen);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_line);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnsiCodes);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_25));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_25);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiCursor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnsiCursor);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_36));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_36);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_UP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UP);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_44d01b2866fa43fb83797aa505558b36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44d01b2866fa43fb83797aa505558b36);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOWN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOWN);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d4a9874c187a2691dcd4103fb0194e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d4a9874c187a2691dcd4103fb0194e6);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORWARD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FORWARD);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_BACK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BACK);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_POS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POS);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_f93d7b2d5389563129c8d80dbe232372));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f93d7b2d5389563129c8d80dbe232372);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiFore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnsiFore);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_49));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_49);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLACK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLACK);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_31));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_31);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_RED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RED);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_GREEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GREEN);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_YELLOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_YELLOW);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_34));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_34);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BLUE);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_35));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_35);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAGENTA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAGENTA);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_CYAN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CYAN);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_37));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_37);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_WHITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WHITE);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_39));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_39);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESET);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_90));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_90);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTBLACK_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTBLACK_EX);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTRED_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTRED_EX);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTGREEN_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTGREEN_EX);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_93));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_93);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTYELLOW_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTYELLOW_EX);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_94));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_94);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTBLUE_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTBLUE_EX);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_95));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_95);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTMAGENTA_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTMAGENTA_EX);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_96));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_96);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTCYAN_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTCYAN_EX);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_97));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_97);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_LIGHTWHITE_EX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LIGHTWHITE_EX);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiBack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnsiBack);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_71));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_71);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_40));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_40);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_41));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_41);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_42));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_42);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_43));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_43);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_44));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_44);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_46));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_46);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_47));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_47);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_101));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_101);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_102));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_102);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_int_pos_103));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_103);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_104));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_104);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_105));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_105);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_106));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_106);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_107));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_107);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnsiStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnsiStyle);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRIGHT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BRIGHT);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIM);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_NORMAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NORMAL);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_ALL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESET_ALL);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Fore);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Back));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Back);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cursor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Cursor);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f1bd2b77dd8db3000c4740f9443e3f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f1bd2b77dd8db3000c4740f9443e3f1);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_086f677772b7ba9161e306e0bc9456b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_086f677772b7ba9161e306e0bc9456b3);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_n_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mode_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_code_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_title_tuple);
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
static PyObject *module_var_accessor_colorama$ansi$AnsiBack(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiBack);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiBack);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiBack, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiBack);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiBack, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiBack);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiBack);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiBack);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$AnsiCodes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCodes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiCodes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiCodes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiCodes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiCodes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCodes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCodes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCodes);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$AnsiCursor(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCursor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiCursor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiCursor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiCursor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiCursor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCursor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCursor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCursor);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$AnsiFore(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiFore);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiFore);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiFore, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiFore);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiFore, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiFore);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiFore);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiFore);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$AnsiStyle(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiStyle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiStyle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiStyle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnsiStyle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnsiStyle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiStyle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiStyle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiStyle);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$BEL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_BEL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BEL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BEL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BEL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BEL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_BEL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_BEL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BEL);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$CSI(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_CSI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CSI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CSI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CSI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CSI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_CSI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_CSI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CSI);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$OSC(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_OSC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OSC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OSC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OSC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OSC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_OSC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_OSC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OSC);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_colorama$ansi$code_to_chars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_colorama$ansi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_colorama$ansi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_code_to_chars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_colorama$ansi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_code_to_chars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_code_to_chars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_code_to_chars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_code_to_chars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_code_to_chars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_code_to_chars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_code_to_chars);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6bbebea326cc87a1d5744cb3b0470fdc;
static PyCodeObject *code_objects_bdabe61952685b69bfcc76bc0fdda6fb;
static PyCodeObject *code_objects_ed444f9ff1e527351038b0176695ef7a;
static PyCodeObject *code_objects_15179c51952bc5c1b0d7267cb1be2fdf;
static PyCodeObject *code_objects_556616b16649286fea62b1257aee41c1;
static PyCodeObject *code_objects_483acc5b407b56d8f1290a9d04220d13;
static PyCodeObject *code_objects_3db5222d88097c662a6fe00c1eebe52e;
static PyCodeObject *code_objects_185b3410cc280b323f692505721958ac;
static PyCodeObject *code_objects_1807c577acda5f439b61a97bf38cb89b;
static PyCodeObject *code_objects_ff8e4a558bf9d2c2d9ff8dc6f1c51326;
static PyCodeObject *code_objects_fc164bfddd948a095f60adae26e533c1;
static PyCodeObject *code_objects_3eb2170d2d6ce5e02bcdde8dbb50c124;
static PyCodeObject *code_objects_57a9d6defaea07f64075298a586a5055;
static PyCodeObject *code_objects_105f332137d56677d0646091acd97562;
static PyCodeObject *code_objects_2412b78d311610ba958095c6cd11855d;
static PyCodeObject *code_objects_8e1fb749b210035242152e73187ebd7d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6f1bd2b77dd8db3000c4740f9443e3f1); CHECK_OBJECT(module_filename_obj);
code_objects_6bbebea326cc87a1d5744cb3b0470fdc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_086f677772b7ba9161e306e0bc9456b3, mod_consts.const_str_digest_086f677772b7ba9161e306e0bc9456b3, NULL, NULL, 0, 0, 0);
code_objects_bdabe61952685b69bfcc76bc0fdda6fb = MAKE_CODE_OBJECT(module_filename_obj, 71, 0, mod_consts.const_str_plain_AnsiBack, mod_consts.const_str_plain_AnsiBack, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ed444f9ff1e527351038b0176695ef7a = MAKE_CODE_OBJECT(module_filename_obj, 25, 0, mod_consts.const_str_plain_AnsiCodes, mod_consts.const_str_plain_AnsiCodes, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_15179c51952bc5c1b0d7267cb1be2fdf = MAKE_CODE_OBJECT(module_filename_obj, 36, 0, mod_consts.const_str_plain_AnsiCursor, mod_consts.const_str_plain_AnsiCursor, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_556616b16649286fea62b1257aee41c1 = MAKE_CODE_OBJECT(module_filename_obj, 49, 0, mod_consts.const_str_plain_AnsiFore, mod_consts.const_str_plain_AnsiFore, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_483acc5b407b56d8f1290a9d04220d13 = MAKE_CODE_OBJECT(module_filename_obj, 93, 0, mod_consts.const_str_plain_AnsiStyle, mod_consts.const_str_plain_AnsiStyle, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3db5222d88097c662a6fe00c1eebe52e = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_BACK, mod_consts.const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple, NULL, 2, 0, 0);
code_objects_185b3410cc280b323f692505721958ac = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_DOWN, mod_consts.const_str_digest_3d4a9874c187a2691dcd4103fb0194e6, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple, NULL, 2, 0, 0);
code_objects_1807c577acda5f439b61a97bf38cb89b = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_FORWARD, mod_consts.const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple, NULL, 2, 0, 0);
code_objects_ff8e4a558bf9d2c2d9ff8dc6f1c51326 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_POS, mod_consts.const_str_digest_f93d7b2d5389563129c8d80dbe232372, mod_consts.const_tuple_str_plain_self_str_plain_x_str_plain_y_tuple, NULL, 3, 0, 0);
code_objects_fc164bfddd948a095f60adae26e533c1 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_UP, mod_consts.const_str_digest_44d01b2866fa43fb83797aa505558b36, mod_consts.const_tuple_str_plain_self_str_plain_n_tuple, NULL, 2, 0, 0);
code_objects_3eb2170d2d6ce5e02bcdde8dbb50c124 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_57a9d6defaea07f64075298a586a5055 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clear_line, mod_consts.const_str_plain_clear_line, mod_consts.const_tuple_str_plain_mode_tuple, NULL, 1, 0, 0);
code_objects_105f332137d56677d0646091acd97562 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clear_screen, mod_consts.const_str_plain_clear_screen, mod_consts.const_tuple_str_plain_mode_tuple, NULL, 1, 0, 0);
code_objects_2412b78d311610ba958095c6cd11855d = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_code_to_chars, mod_consts.const_str_plain_code_to_chars, mod_consts.const_tuple_str_plain_code_tuple, NULL, 1, 0, 0);
code_objects_8e1fb749b210035242152e73187ebd7d = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_title, mod_consts.const_str_plain_set_title, mod_consts.const_tuple_str_plain_title_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__10_POS(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__1_code_to_chars(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__2_set_title(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__3_clear_screen(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__4_clear_line(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__5___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__6_UP(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__7_DOWN(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__8_FORWARD(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__9_BACK(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_colorama$ansi$$$function__1_code_to_chars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_code = python_pars[0];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__1_code_to_chars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__1_code_to_chars = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__1_code_to_chars)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__1_code_to_chars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__1_code_to_chars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__1_code_to_chars = MAKE_FUNCTION_FRAME(tstate, code_objects_2412b78d311610ba958095c6cd11855d, module_colorama$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__1_code_to_chars->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__1_code_to_chars = cache_frame_frame_colorama$ansi$$$function__1_code_to_chars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__1_code_to_chars);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__1_code_to_chars) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_unicode_arg_1 = par_code;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_m;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__1_code_to_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__1_code_to_chars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__1_code_to_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__1_code_to_chars,
    type_description_1,
    par_code
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__1_code_to_chars == cache_frame_frame_colorama$ansi$$$function__1_code_to_chars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__1_code_to_chars);
    cache_frame_frame_colorama$ansi$$$function__1_code_to_chars = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__1_code_to_chars);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_code);
Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__2_set_title(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_title = python_pars[0];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__2_set_title;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__2_set_title = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__2_set_title)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__2_set_title);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__2_set_title == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__2_set_title = MAKE_FUNCTION_FRAME(tstate, code_objects_8e1fb749b210035242152e73187ebd7d, module_colorama$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__2_set_title->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__2_set_title = cache_frame_frame_colorama$ansi$$$function__2_set_title;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__2_set_title);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__2_set_title) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
tmp_add_expr_left_3 = module_var_accessor_colorama$ansi$OSC(tstate);
if (unlikely(tmp_add_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OSC);
}

if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_8af3020d8d75c369014ac4f4111b39e5;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_title);
tmp_add_expr_right_2 = par_title;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = module_var_accessor_colorama$ansi$BEL(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BEL);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 16;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__2_set_title, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__2_set_title->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__2_set_title, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__2_set_title,
    type_description_1,
    par_title
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__2_set_title == cache_frame_frame_colorama$ansi$$$function__2_set_title) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__2_set_title);
    cache_frame_frame_colorama$ansi$$$function__2_set_title = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__2_set_title);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_title);
Py_DECREF(par_title);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__3_clear_screen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_mode = python_pars[0];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__3_clear_screen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__3_clear_screen = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__3_clear_screen)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__3_clear_screen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__3_clear_screen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__3_clear_screen = MAKE_FUNCTION_FRAME(tstate, code_objects_105f332137d56677d0646091acd97562, module_colorama$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__3_clear_screen->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__3_clear_screen = cache_frame_frame_colorama$ansi$$$function__3_clear_screen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__3_clear_screen);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__3_clear_screen) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_unicode_arg_1 = par_mode;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_J;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__3_clear_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__3_clear_screen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__3_clear_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__3_clear_screen,
    type_description_1,
    par_mode
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__3_clear_screen == cache_frame_frame_colorama$ansi$$$function__3_clear_screen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__3_clear_screen);
    cache_frame_frame_colorama$ansi$$$function__3_clear_screen = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__3_clear_screen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__4_clear_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_mode = python_pars[0];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__4_clear_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__4_clear_line = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__4_clear_line)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__4_clear_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__4_clear_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__4_clear_line = MAKE_FUNCTION_FRAME(tstate, code_objects_57a9d6defaea07f64075298a586a5055, module_colorama$ansi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__4_clear_line->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__4_clear_line = cache_frame_frame_colorama$ansi$$$function__4_clear_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__4_clear_line);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__4_clear_line) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_unicode_arg_1 = par_mode;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_K;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__4_clear_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__4_clear_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__4_clear_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__4_clear_line,
    type_description_1,
    par_mode
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__4_clear_line == cache_frame_frame_colorama$ansi$$$function__4_clear_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__4_clear_line);
    cache_frame_frame_colorama$ansi$$$function__4_clear_line = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__4_clear_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_name = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3eb2170d2d6ce5e02bcdde8dbb50c124, module_colorama$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__5___init__->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__5___init__ = cache_frame_frame_colorama$ansi$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__5___init__);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dir_arg_1;
CHECK_OBJECT(par_self);
tmp_dir_arg_1 = par_self;
tmp_iter_arg_1 = PyObject_Dir(tmp_dir_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 30;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_3;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_name);
tmp_expression_value_1 = var_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_colorama$ansi$$$function__5___init__->m_frame.f_lineno = 31;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
CHECK_OBJECT(var_name);
tmp_name_value_1 = var_name;
tmp_assign_source_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, NULL);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_2;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
CHECK_OBJECT(var_name);
tmp_name_value_2 = var_name;
tmp_called_value_2 = module_var_accessor_colorama$ansi$code_to_chars(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_code_to_chars);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_value);
tmp_args_element_value_1 = var_value;
frame_frame_colorama$ansi$$$function__5___init__->m_frame.f_lineno = 33;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_3, tmp_name_value_2, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__5___init__,
    type_description_1,
    par_self,
    var_name,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__5___init__ == cache_frame_frame_colorama$ansi$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__5___init__);
    cache_frame_frame_colorama$ansi$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__5___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
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


static PyObject *impl_colorama$ansi$$$function__6_UP(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__6_UP;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__6_UP = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__6_UP)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__6_UP);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__6_UP == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__6_UP = MAKE_FUNCTION_FRAME(tstate, code_objects_fc164bfddd948a095f60adae26e533c1, module_colorama$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__6_UP->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__6_UP = cache_frame_frame_colorama$ansi$$$function__6_UP;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__6_UP);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__6_UP) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_unicode_arg_1 = par_n;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_A;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__6_UP, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__6_UP->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__6_UP, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__6_UP,
    type_description_1,
    par_self,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__6_UP == cache_frame_frame_colorama$ansi$$$function__6_UP) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__6_UP);
    cache_frame_frame_colorama$ansi$$$function__6_UP = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__6_UP);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__7_DOWN(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__7_DOWN;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__7_DOWN = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__7_DOWN)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__7_DOWN);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__7_DOWN == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__7_DOWN = MAKE_FUNCTION_FRAME(tstate, code_objects_185b3410cc280b323f692505721958ac, module_colorama$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__7_DOWN->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__7_DOWN = cache_frame_frame_colorama$ansi$$$function__7_DOWN;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__7_DOWN);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__7_DOWN) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_unicode_arg_1 = par_n;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_B;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__7_DOWN, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__7_DOWN->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__7_DOWN, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__7_DOWN,
    type_description_1,
    par_self,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__7_DOWN == cache_frame_frame_colorama$ansi$$$function__7_DOWN) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__7_DOWN);
    cache_frame_frame_colorama$ansi$$$function__7_DOWN = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__7_DOWN);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__8_FORWARD(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__8_FORWARD;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__8_FORWARD = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__8_FORWARD)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__8_FORWARD);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__8_FORWARD == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__8_FORWARD = MAKE_FUNCTION_FRAME(tstate, code_objects_1807c577acda5f439b61a97bf38cb89b, module_colorama$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__8_FORWARD->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__8_FORWARD = cache_frame_frame_colorama$ansi$$$function__8_FORWARD;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__8_FORWARD);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__8_FORWARD) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_unicode_arg_1 = par_n;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_C;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__8_FORWARD, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__8_FORWARD->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__8_FORWARD, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__8_FORWARD,
    type_description_1,
    par_self,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__8_FORWARD == cache_frame_frame_colorama$ansi$$$function__8_FORWARD) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__8_FORWARD);
    cache_frame_frame_colorama$ansi$$$function__8_FORWARD = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__8_FORWARD);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__9_BACK(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n = python_pars[1];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__9_BACK;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__9_BACK = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__9_BACK)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__9_BACK);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__9_BACK == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__9_BACK = MAKE_FUNCTION_FRAME(tstate, code_objects_3db5222d88097c662a6fe00c1eebe52e, module_colorama$ansi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__9_BACK->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__9_BACK = cache_frame_frame_colorama$ansi$$$function__9_BACK;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__9_BACK);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__9_BACK) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_unicode_arg_1;
tmp_add_expr_left_2 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_unicode_arg_1 = par_n;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_D;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__9_BACK, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__9_BACK->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__9_BACK, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__9_BACK,
    type_description_1,
    par_self,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__9_BACK == cache_frame_frame_colorama$ansi$$$function__9_BACK) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__9_BACK);
    cache_frame_frame_colorama$ansi$$$function__9_BACK = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__9_BACK);

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
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_colorama$ansi$$$function__10_POS(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$function__10_POS;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_colorama$ansi$$$function__10_POS = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_colorama$ansi$$$function__10_POS)) {
    Py_XDECREF(cache_frame_frame_colorama$ansi$$$function__10_POS);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_colorama$ansi$$$function__10_POS == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_colorama$ansi$$$function__10_POS = MAKE_FUNCTION_FRAME(tstate, code_objects_ff8e4a558bf9d2c2d9ff8dc6f1c51326, module_colorama$ansi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_colorama$ansi$$$function__10_POS->m_type_description == NULL);
frame_frame_colorama$ansi$$$function__10_POS = cache_frame_frame_colorama$ansi$$$function__10_POS;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$function__10_POS);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$function__10_POS) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_unicode_arg_2;
tmp_add_expr_left_4 = module_var_accessor_colorama$ansi$CSI(tstate);
if (unlikely(tmp_add_expr_left_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CSI);
}

if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_y);
tmp_unicode_arg_1 = par_y;
tmp_add_expr_right_4 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_chr_59;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_unicode_arg_2 = par_x;
tmp_add_expr_right_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 46;
type_description_1 = "ooo";
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


exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_H;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$function__10_POS, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$function__10_POS->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$function__10_POS, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$function__10_POS,
    type_description_1,
    par_self,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_colorama$ansi$$$function__10_POS == cache_frame_frame_colorama$ansi$$$function__10_POS) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_colorama$ansi$$$function__10_POS);
    cache_frame_frame_colorama$ansi$$$function__10_POS = NULL;
}

assertFrameObject(frame_frame_colorama$ansi$$$function__10_POS);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__10_POS(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__10_POS,
        mod_consts.const_str_plain_POS,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f93d7b2d5389563129c8d80dbe232372,
#endif
        code_objects_ff8e4a558bf9d2c2d9ff8dc6f1c51326,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__1_code_to_chars(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__1_code_to_chars,
        mod_consts.const_str_plain_code_to_chars,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2412b78d311610ba958095c6cd11855d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__2_set_title(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__2_set_title,
        mod_consts.const_str_plain_set_title,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8e1fb749b210035242152e73187ebd7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__3_clear_screen(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__3_clear_screen,
        mod_consts.const_str_plain_clear_screen,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_105f332137d56677d0646091acd97562,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__4_clear_line(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__4_clear_line,
        mod_consts.const_str_plain_clear_line,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_57a9d6defaea07f64075298a586a5055,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__5___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_75ec10f8dc33b92f07e8cf699ecea8b0,
#endif
        code_objects_3eb2170d2d6ce5e02bcdde8dbb50c124,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__6_UP(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__6_UP,
        mod_consts.const_str_plain_UP,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44d01b2866fa43fb83797aa505558b36,
#endif
        code_objects_fc164bfddd948a095f60adae26e533c1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__7_DOWN(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__7_DOWN,
        mod_consts.const_str_plain_DOWN,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d4a9874c187a2691dcd4103fb0194e6,
#endif
        code_objects_185b3410cc280b323f692505721958ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__8_FORWARD(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__8_FORWARD,
        mod_consts.const_str_plain_FORWARD,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6eb062ac3ca58d13ee2d2bb8d847344d,
#endif
        code_objects_1807c577acda5f439b61a97bf38cb89b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$ansi$$$function__9_BACK(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$ansi$$$function__9_BACK,
        mod_consts.const_str_plain_BACK,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f30f8fbbe35db6ba6c95dee770dc4dad,
#endif
        code_objects_3db5222d88097c662a6fe00c1eebe52e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_colorama$ansi,
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

static function_impl_code const function_table_colorama$ansi[] = {
impl_colorama$ansi$$$function__1_code_to_chars,
impl_colorama$ansi$$$function__2_set_title,
impl_colorama$ansi$$$function__3_clear_screen,
impl_colorama$ansi$$$function__4_clear_line,
impl_colorama$ansi$$$function__5___init__,
impl_colorama$ansi$$$function__6_UP,
impl_colorama$ansi$$$function__7_DOWN,
impl_colorama$ansi$$$function__8_FORWARD,
impl_colorama$ansi$$$function__9_BACK,
impl_colorama$ansi$$$function__10_POS,
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

    return Nuitka_Function_GetFunctionState(function, function_table_colorama$ansi);
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
        module_colorama$ansi,
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
        function_table_colorama$ansi,
        sizeof(function_table_colorama$ansi) / sizeof(function_impl_code)
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
static char const *module_full_name = "colorama.ansi";
#endif

// Internal entry point for module code.
PyObject *module_code_colorama$ansi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("colorama$ansi");

    // Store the module for future use.
    module_colorama$ansi = module;

    moduledict_colorama$ansi = MODULE_DICT(module_colorama$ansi);

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
        PRINT_STRING("colorama$ansi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("colorama$ansi: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("colorama$ansi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "colorama.ansi" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcolorama$ansi\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_colorama$ansi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_colorama$ansi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_colorama$ansi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$ansi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_colorama$ansi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_colorama$ansi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_colorama$ansi);
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

        UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
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
struct Nuitka_FrameObject *frame_frame_colorama$ansi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_colorama$ansi$$$class__1_AnsiCodes_25 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$class__1_AnsiCodes_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_colorama$ansi$$$class__2_AnsiCursor_36 = NULL;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$class__2_AnsiCursor_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_colorama$ansi$$$class__3_AnsiFore_49 = NULL;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$class__3_AnsiFore_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_colorama$ansi$$$class__4_AnsiBack_71 = NULL;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$class__4_AnsiBack_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_colorama$ansi$$$class__5_AnsiStyle_93 = NULL;
struct Nuitka_FrameObject *frame_frame_colorama$ansi$$$class__5_AnsiStyle_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_c3e96bcf28c33479865ac8afd649ee24;
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_colorama$ansi = MAKE_MODULE_FRAME(code_objects_6bbebea326cc87a1d5744cb3b0470fdc, module_colorama$ansi);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi);
assert(Py_REFCNT(frame_frame_colorama$ansi) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_colorama$ansi$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_colorama$ansi$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_digest_52eb4f81ebdca710bdf151533294a7ec;
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_CSI, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_c9b902e026a28619980a8e7af93913c0;
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_OSC, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_chr_7;
UPDATE_STRING_DICT0(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_BEL, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;

tmp_assign_source_7 = MAKE_FUNCTION_colorama$ansi$$$function__1_code_to_chars(tstate);

UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_code_to_chars, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;

tmp_assign_source_8 = MAKE_FUNCTION_colorama$ansi$$$function__2_set_title(tstate);

UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_set_title, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_2_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_9 = MAKE_FUNCTION_colorama$ansi$$$function__3_clear_screen(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_clear_screen, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_2_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_10 = MAKE_FUNCTION_colorama$ansi$$$function__4_clear_line(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_clear_line, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
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


exception_lineno = 25;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
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


exception_lineno = 25;

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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_AnsiCodes;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 25;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
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


exception_lineno = 25;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 25;

    goto try_except_handler_1;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 25;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 25;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_colorama$ansi$$$class__1_AnsiCodes_25 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_AnsiCodes;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_25;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
frame_frame_colorama$ansi$$$class__1_AnsiCodes_2 = MAKE_CLASS_FRAME(tstate, code_objects_ed444f9ff1e527351038b0176695ef7a, module_colorama$ansi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$class__1_AnsiCodes_2);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$class__1_AnsiCodes_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__5___init__(tstate);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$class__1_AnsiCodes_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$class__1_AnsiCodes_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$class__1_AnsiCodes_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$class__1_AnsiCodes_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_colorama$ansi$$$class__1_AnsiCodes_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__1_AnsiCodes_25, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_AnsiCodes;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_colorama$ansi$$$class__1_AnsiCodes_25;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 25;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_colorama$ansi$$$class__1_AnsiCodes_25);
locals_colorama$ansi$$$class__1_AnsiCodes_25 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_colorama$ansi$$$class__1_AnsiCodes_25);
locals_colorama$ansi$$$class__1_AnsiCodes_25 = NULL;
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
exception_lineno = 25;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCodes, tmp_assign_source_16);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_2;
tmp_direct_call_arg1_2 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_18 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
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


exception_lineno = 36;

    goto try_except_handler_4;
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


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_20;
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


exception_lineno = 36;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_AnsiCursor;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 36;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
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


exception_lineno = 36;

    goto try_except_handler_4;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_4;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 36;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
branch_end_4:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_colorama$ansi$$$class__2_AnsiCursor_36 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_AnsiCursor;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
frame_frame_colorama$ansi$$$class__2_AnsiCursor_3 = MAKE_CLASS_FRAME(tstate, code_objects_15179c51952bc5c1b0d7267cb1be2fdf, module_colorama$ansi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$class__2_AnsiCursor_3);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$class__2_AnsiCursor_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_int_pos_1_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__6_UP(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain_UP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_int_pos_1_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__7_DOWN(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain_DOWN, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_int_pos_1_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__8_FORWARD(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain_FORWARD, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_int_pos_1_tuple;
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__9_BACK(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain_BACK, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_int_pos_1_int_pos_1_tuple;
Py_INCREF(tmp_defaults_7);

tmp_dictset_value = MAKE_FUNCTION_colorama$ansi$$$function__10_POS(tstate, tmp_defaults_7);

tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain_POS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$class__2_AnsiCursor_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$class__2_AnsiCursor_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$class__2_AnsiCursor_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$class__2_AnsiCursor_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_colorama$ansi$$$class__2_AnsiCursor_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__2_AnsiCursor_36, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_AnsiCursor;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_colorama$ansi$$$class__2_AnsiCursor_36;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 36;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_23 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_colorama$ansi$$$class__2_AnsiCursor_36);
locals_colorama$ansi$$$class__2_AnsiCursor_36 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_colorama$ansi$$$class__2_AnsiCursor_36);
locals_colorama$ansi$$$class__2_AnsiCursor_36 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 36;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiCursor, tmp_assign_source_23);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_colorama$ansi$AnsiCodes(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiCodes);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto try_except_handler_7;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_AnsiFore;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 49;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_3, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_7;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 49;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
branch_end_7:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_colorama$ansi$$$class__3_AnsiFore_49 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_AnsiFore;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
frame_frame_colorama$ansi$$$class__3_AnsiFore_4 = MAKE_CLASS_FRAME(tstate, code_objects_556616b16649286fea62b1257aee41c1, module_colorama$ansi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$class__3_AnsiFore_4);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$class__3_AnsiFore_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_BLACK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_RED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_GREEN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_YELLOW, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_34;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_BLUE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_35;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_MAGENTA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_36;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_CYAN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_37;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_WHITE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_39;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_RESET, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_90;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTBLACK_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTRED_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTGREEN_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_93;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTYELLOW_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_94;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTBLUE_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_95;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTMAGENTA_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_96;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTCYAN_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_97;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain_LIGHTWHITE_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$class__3_AnsiFore_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$class__3_AnsiFore_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$class__3_AnsiFore_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$class__3_AnsiFore_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_colorama$ansi$$$class__3_AnsiFore_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__3_AnsiFore_49, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_AnsiFore;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_colorama$ansi$$$class__3_AnsiFore_49;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 49;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_32;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_31 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_colorama$ansi$$$class__3_AnsiFore_49);
locals_colorama$ansi$$$class__3_AnsiFore_49 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_colorama$ansi$$$class__3_AnsiFore_49);
locals_colorama$ansi$$$class__3_AnsiFore_49 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 49;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiFore, tmp_assign_source_31);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_colorama$ansi$AnsiCodes(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiCodes);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_AnsiBack;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 71;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_4, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_10;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 71;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 71;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
branch_end_10:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_colorama$ansi$$$class__4_AnsiBack_71 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_AnsiBack;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_71;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
frame_frame_colorama$ansi$$$class__4_AnsiBack_5 = MAKE_CLASS_FRAME(tstate, code_objects_bdabe61952685b69bfcc76bc0fdda6fb, module_colorama$ansi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$class__4_AnsiBack_5);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$class__4_AnsiBack_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_40;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_BLACK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_RED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_42;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_GREEN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_43;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_YELLOW, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_BLUE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_MAGENTA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_46;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_CYAN, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_WHITE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_RESET, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_100;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTBLACK_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_101;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTRED_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_102;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTGREEN_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTYELLOW_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_104;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTBLUE_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_105;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTMAGENTA_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_106;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTCYAN_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_107;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain_LIGHTWHITE_EX, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$class__4_AnsiBack_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$class__4_AnsiBack_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$class__4_AnsiBack_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$class__4_AnsiBack_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_colorama$ansi$$$class__4_AnsiBack_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__4_AnsiBack_71, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_AnsiBack;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_colorama$ansi$$$class__4_AnsiBack_71;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 71;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_39 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_colorama$ansi$$$class__4_AnsiBack_71);
locals_colorama$ansi$$$class__4_AnsiBack_71 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_colorama$ansi$$$class__4_AnsiBack_71);
locals_colorama$ansi$$$class__4_AnsiBack_71 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 71;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiBack, tmp_assign_source_39);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_colorama$ansi$AnsiCodes(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiCodes);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_AnsiStyle;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 93;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_5, tmp_default_value_5);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_13;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 93;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 93;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_46;
}
branch_end_13:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_colorama$ansi$$$class__5_AnsiStyle_93 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9c6211c0728b4cf5098346ea5b8aeecc;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_AnsiStyle;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_93;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
frame_frame_colorama$ansi$$$class__5_AnsiStyle_6 = MAKE_CLASS_FRAME(tstate, code_objects_483acc5b407b56d8f1290a9d04220d13, module_colorama$ansi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_colorama$ansi$$$class__5_AnsiStyle_6);
assert(Py_REFCNT(frame_frame_colorama$ansi$$$class__5_AnsiStyle_6) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain_BRIGHT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain_DIM, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain_NORMAL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain_RESET_ALL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi$$$class__5_AnsiStyle_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi$$$class__5_AnsiStyle_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi$$$class__5_AnsiStyle_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_colorama$ansi$$$class__5_AnsiStyle_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_colorama$ansi$$$class__5_AnsiStyle_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_colorama$ansi$$$class__5_AnsiStyle_93, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_AnsiStyle;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_colorama$ansi$$$class__5_AnsiStyle_93;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_colorama$ansi->m_frame.f_lineno = 93;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_47 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_colorama$ansi$$$class__5_AnsiStyle_93);
locals_colorama$ansi$$$class__5_AnsiStyle_93 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_colorama$ansi$$$class__5_AnsiStyle_93);
locals_colorama$ansi$$$class__5_AnsiStyle_93 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 93;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_AnsiStyle, tmp_assign_source_47);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_11;
tmp_called_value_11 = module_var_accessor_colorama$ansi$AnsiFore(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiFore);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto frame_exception_exit_1;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 99;
tmp_assign_source_49 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_Fore, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_12;
tmp_called_value_12 = module_var_accessor_colorama$ansi$AnsiBack(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiBack);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 100;
tmp_assign_source_50 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_Back, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_13;
tmp_called_value_13 = module_var_accessor_colorama$ansi$AnsiStyle(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiStyle);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto frame_exception_exit_1;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 101;
tmp_assign_source_51 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_colorama$ansi$AnsiCursor(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnsiCursor);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto frame_exception_exit_1;
}
frame_frame_colorama$ansi->m_frame.f_lineno = 102;
tmp_assign_source_52 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_colorama$ansi, (Nuitka_StringObject *)mod_consts.const_str_plain_Cursor, tmp_assign_source_52);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_colorama$ansi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_colorama$ansi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_colorama$ansi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_colorama$ansi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("colorama$ansi", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "colorama.ansi" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_colorama$ansi);
    return module_colorama$ansi;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$ansi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("colorama$ansi", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

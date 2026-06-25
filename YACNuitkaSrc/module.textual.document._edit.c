/* Generated code for Python module 'textual$document$_edit'
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



/* The "module_textual$document$_edit" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$document$_edit;
PyDictObject *moduledict_textual$document$_edit;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_selection;
PyObject *const_str_plain__original_selection;
PyObject *const_str_plain_text;
PyObject *const_str_plain_bottom;
PyObject *const_str_plain_document;
PyObject *const_str_plain_replace_range;
PyObject *const_str_plain_top;
PyObject *const_str_plain_end_location;
PyObject *const_str_plain_maintain_selection_offset;
PyObject *const_str_plain_Selection;
PyObject *const_tuple_str_plain_start_str_plain_end_tuple;
PyObject *const_str_plain__updated_selection;
PyObject *const_str_plain_cursor;
PyObject *const_str_plain__edit_result;
PyObject *const_str_digest_537e0b99a3be3931f5c77175894bd9dc;
PyObject *const_str_plain_replaced_text;
PyObject *const_str_digest_56445718fe75c2d44c68a13410d91a9b;
PyObject *const_str_plain_record_cursor_width;
PyObject *const_str_digest_29a730118c1ef7cf32432372f7ffe642;
PyObject *const_str_plain_min;
PyObject *const_str_plain_from_location;
PyObject *const_str_plain_to_location;
PyObject *const_str_digest_96bef38b7c42f0490c5d61fa3d5fc424;
PyObject *const_str_plain_max;
PyObject *const_str_digest_5a529cf812e1d39aaa8c212ca53685e4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_str_plain_field_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_field;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_06456d3866d4bda79400bc5f48d066e8;
PyObject *const_tuple_str_plain_EditResult_str_plain_Location_str_plain_Selection_tuple;
PyObject *const_str_plain_EditResult;
PyObject *const_str_plain_Location;
PyObject *const_str_digest_ed6d297ebbb8d86eb6a409f588a36371;
PyObject *const_str_digest_f3bb5585ccc1c27f40018c10bf8a59c8;
PyObject *const_str_plain_Edit;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_13;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_str;
PyObject *const_str_plain_bool;
PyObject *const_tuple_false_none_tuple;
PyObject *const_tuple_str_plain_init_str_plain_default_tuple;
PyObject *const_str_digest_d0eaec629046899d3546f7bbb08d5d27;
PyObject *const_str_digest_615068d1d8fd7d5a563c7018e429b202;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_7e1a439de6d65356cac1e95a49d14c9c;
PyObject *const_str_plain_do;
PyObject *const_str_digest_bc21220ec61d20c211c90e34840ca0fd;
PyObject *const_dict_73d2e07ba830e395ff0df018cb109cd2;
PyObject *const_str_plain_undo;
PyObject *const_str_digest_95311c632c8663009d6040d6c245e2de;
PyObject *const_dict_1d57bfdbe562019d757afabc23530a10;
PyObject *const_str_plain_after;
PyObject *const_str_digest_dcad4aef76172d2365ae2f7a02507e2e;
PyObject *const_dict_b31f22cdd72d7be4c31ec26b376317f7;
PyObject *const_str_digest_31c7590f9a788da93f683ae9de250502;
PyObject *const_str_digest_cc01f00342542a81f265e448f08e80ed;
PyObject *const_tuple_28ceff322c4b3e6984f798b79b753e6a_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_2df541e2e05f542d61c3370d50c30e41;
PyObject *const_str_digest_c238468e45609c1980fa19fd93c653e0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_area_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_270b97dd7437aab4163095e7f9e3e93f_tuple;
PyObject *const_tuple_89ac5cc8c30e2290dcee28341c3b273e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[71];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.document._edit"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_selection);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__original_selection);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_bottom);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_document);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace_range);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_top);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_end_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_maintain_selection_offset);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Selection);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_end_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__updated_selection);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_cursor);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__edit_result);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_537e0b99a3be3931f5c77175894bd9dc);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_replaced_text);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_56445718fe75c2d44c68a13410d91a9b);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_record_cursor_width);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_29a730118c1ef7cf32432372f7ffe642);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_location);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_96bef38b7c42f0490c5d61fa3d5fc424);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a529cf812e1d39aaa8c212ca53685e4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_field);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_06456d3866d4bda79400bc5f48d066e8);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EditResult_str_plain_Location_str_plain_Selection_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_EditResult);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Location);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed6d297ebbb8d86eb6a409f588a36371);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3bb5585ccc1c27f40018c10bf8a59c8);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Edit);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_str_plain_default_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0eaec629046899d3546f7bbb08d5d27);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_615068d1d8fd7d5a563c7018e429b202);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_7e1a439de6d65356cac1e95a49d14c9c);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_do);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc21220ec61d20c211c90e34840ca0fd);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_73d2e07ba830e395ff0df018cb109cd2);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_undo);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_95311c632c8663009d6040d6c245e2de);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_dict_1d57bfdbe562019d757afabc23530a10);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_after);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcad4aef76172d2365ae2f7a02507e2e);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_b31f22cdd72d7be4c31ec26b376317f7);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_31c7590f9a788da93f683ae9de250502);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc01f00342542a81f265e448f08e80ed);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_28ceff322c4b3e6984f798b79b753e6a_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_2df541e2e05f542d61c3370d50c30e41);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_c238468e45609c1980fa19fd93c653e0);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_area_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_270b97dd7437aab4163095e7f9e3e93f_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_89ac5cc8c30e2290dcee28341c3b273e_tuple);
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
void checkModuleConstants_textual$document$_edit(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selection);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__original_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__original_selection);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_bottom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bottom);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_document));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_document);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace_range));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace_range);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_top));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_end_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_end_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_maintain_selection_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maintain_selection_offset);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Selection);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_end_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_start_str_plain_end_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__updated_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__updated_selection);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_cursor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cursor);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__edit_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__edit_result);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_537e0b99a3be3931f5c77175894bd9dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_537e0b99a3be3931f5c77175894bd9dc);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_replaced_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replaced_text);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_56445718fe75c2d44c68a13410d91a9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56445718fe75c2d44c68a13410d91a9b);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_record_cursor_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_record_cursor_width);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_29a730118c1ef7cf32432372f7ffe642));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29a730118c1ef7cf32432372f7ffe642);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_location);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_96bef38b7c42f0490c5d61fa3d5fc424));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96bef38b7c42f0490c5d61fa3d5fc424);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a529cf812e1d39aaa8c212ca53685e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a529cf812e1d39aaa8c212ca53685e4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_06456d3866d4bda79400bc5f48d066e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06456d3866d4bda79400bc5f48d066e8);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EditResult_str_plain_Location_str_plain_Selection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EditResult_str_plain_Location_str_plain_Selection_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_EditResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EditResult);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Location);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed6d297ebbb8d86eb6a409f588a36371));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed6d297ebbb8d86eb6a409f588a36371);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3bb5585ccc1c27f40018c10bf8a59c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3bb5585ccc1c27f40018c10bf8a59c8);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Edit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Edit);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_13));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_13);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_init_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_init_str_plain_default_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0eaec629046899d3546f7bbb08d5d27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0eaec629046899d3546f7bbb08d5d27);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_615068d1d8fd7d5a563c7018e429b202));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_615068d1d8fd7d5a563c7018e429b202);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_7e1a439de6d65356cac1e95a49d14c9c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7e1a439de6d65356cac1e95a49d14c9c);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_do));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_do);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc21220ec61d20c211c90e34840ca0fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc21220ec61d20c211c90e34840ca0fd);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_73d2e07ba830e395ff0df018cb109cd2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73d2e07ba830e395ff0df018cb109cd2);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_undo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_undo);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_95311c632c8663009d6040d6c245e2de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95311c632c8663009d6040d6c245e2de);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_dict_1d57bfdbe562019d757afabc23530a10));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1d57bfdbe562019d757afabc23530a10);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcad4aef76172d2365ae2f7a02507e2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcad4aef76172d2365ae2f7a02507e2e);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_b31f22cdd72d7be4c31ec26b376317f7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b31f22cdd72d7be4c31ec26b376317f7);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_31c7590f9a788da93f683ae9de250502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31c7590f9a788da93f683ae9de250502);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc01f00342542a81f265e448f08e80ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc01f00342542a81f265e448f08e80ed);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_28ceff322c4b3e6984f798b79b753e6a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_28ceff322c4b3e6984f798b79b753e6a_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_2df541e2e05f542d61c3370d50c30e41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2df541e2e05f542d61c3370d50c30e41);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_c238468e45609c1980fa19fd93c653e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c238468e45609c1980fa19fd93c653e0);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_area_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_area_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_270b97dd7437aab4163095e7f9e3e93f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_270b97dd7437aab4163095e7f9e3e93f_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_89ac5cc8c30e2290dcee28341c3b273e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_89ac5cc8c30e2290dcee28341c3b273e_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_textual$document$_edit$Selection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$document$_edit->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$document$_edit->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$document$_edit->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
    }

    return result;
}

static PyObject *module_var_accessor_textual$document$_edit$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$document$_edit->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$document$_edit->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$document$_edit->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$document$_edit$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$document$_edit->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$document$_edit->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$document$_edit->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_textual$document$_edit$field(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$document$_edit->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$document$_edit->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$document$_edit->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_field);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_field, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_field);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_field, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_field);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_870baa912b3a27d5b41b253b5b57e19f;
static PyCodeObject *code_objects_77819de8a0550b40bae1ccd0c4986db9;
static PyCodeObject *code_objects_6aa6bbc5cb106ef5e68d9dcb750305e5;
static PyCodeObject *code_objects_a9e2be4b663934610d982390cc496099;
static PyCodeObject *code_objects_3ba52b89eaf05830db19e5c8186f7302;
static PyCodeObject *code_objects_883ac85332bb56b0e2fcb5293728d05e;
static PyCodeObject *code_objects_f676d17fea72fd1846190a35a735e139;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2df541e2e05f542d61c3370d50c30e41); CHECK_OBJECT(module_filename_obj);
code_objects_870baa912b3a27d5b41b253b5b57e19f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c238468e45609c1980fa19fd93c653e0, mod_consts.const_str_digest_c238468e45609c1980fa19fd93c653e0, NULL, NULL, 0, 0, 0);
code_objects_77819de8a0550b40bae1ccd0c4986db9 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Edit, mod_consts.const_str_plain_Edit, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6aa6bbc5cb106ef5e68d9dcb750305e5 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_after, mod_consts.const_str_digest_dcad4aef76172d2365ae2f7a02507e2e, mod_consts.const_tuple_str_plain_self_str_plain_text_area_tuple, NULL, 2, 0, 0);
code_objects_a9e2be4b663934610d982390cc496099 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_bottom, mod_consts.const_str_digest_cc01f00342542a81f265e448f08e80ed, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3ba52b89eaf05830db19e5c8186f7302 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_do, mod_consts.const_str_digest_bc21220ec61d20c211c90e34840ca0fd, mod_consts.const_tuple_270b97dd7437aab4163095e7f9e3e93f_tuple, NULL, 3, 0, 0);
code_objects_883ac85332bb56b0e2fcb5293728d05e = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_top, mod_consts.const_str_digest_31c7590f9a788da93f683ae9de250502, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f676d17fea72fd1846190a35a735e139 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_undo, mod_consts.const_str_digest_95311c632c8663009d6040d6c245e2de, mod_consts.const_tuple_89ac5cc8c30e2290dcee28341c3b273e_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__1_do(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__2_undo(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__3_after(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__4_top(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__5_bottom(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$document$_edit$$$function__1_do(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text_area = python_pars[1];
PyObject *par_record_selection = python_pars[2];
PyObject *var_text = NULL;
PyObject *var_edit_bottom_row = NULL;
PyObject *var_edit_bottom_column = NULL;
PyObject *var_selection_start = NULL;
PyObject *var_selection_end = NULL;
PyObject *var_selection_start_row = NULL;
PyObject *var_selection_start_column = NULL;
PyObject *var_selection_end_row = NULL;
PyObject *var_selection_end_column = NULL;
PyObject *var_edit_result = NULL;
PyObject *var_new_edit_to_row = NULL;
PyObject *var_new_edit_to_column = NULL;
PyObject *var_column_offset = NULL;
PyObject *var_target_selection_start_column = NULL;
PyObject *var_target_selection_end_column = NULL;
PyObject *var_row_offset = NULL;
PyObject *var_target_selection_start_row = NULL;
PyObject *var_target_selection_end_row = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$function__1_do;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$document$_edit$$$function__1_do = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$document$_edit$$$function__1_do)) {
    Py_XDECREF(cache_frame_frame_textual$document$_edit$$$function__1_do);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$document$_edit$$$function__1_do == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$document$_edit$$$function__1_do = MAKE_FUNCTION_FRAME(tstate, code_objects_3ba52b89eaf05830db19e5c8186f7302, module_textual$document$_edit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$document$_edit$$$function__1_do->m_type_description == NULL);
frame_frame_textual$document$_edit$$$function__1_do = cache_frame_frame_textual$document$_edit$$$function__1_do;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$function__1_do);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$function__1_do) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_record_selection);
tmp_truth_name_1 = CHECK_IF_TRUE(par_record_selection);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooooooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_text_area);
tmp_expression_value_1 = par_text_area;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_selection);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__original_selection, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_text);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_text == NULL);
var_text = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_bottom);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooooooooooooooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_edit_bottom_row == NULL);
Py_INCREF(tmp_assign_source_5);
var_edit_bottom_row = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_edit_bottom_column == NULL);
Py_INCREF(tmp_assign_source_6);
var_edit_bottom_column = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_text_area);
tmp_expression_value_4 = par_text_area;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_selection);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "ooooooooooooooooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
assert(var_selection_start == NULL);
Py_INCREF(tmp_assign_source_10);
var_selection_start = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
assert(var_selection_end == NULL);
Py_INCREF(tmp_assign_source_11);
var_selection_end = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_selection_start);
tmp_iter_arg_3 = var_selection_start;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_3__element_1;
assert(var_selection_start_row == NULL);
Py_INCREF(tmp_assign_source_15);
var_selection_start_row = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_3__element_2;
assert(var_selection_start_column == NULL);
Py_INCREF(tmp_assign_source_16);
var_selection_start_column = tmp_assign_source_16;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_selection_end);
tmp_iter_arg_4 = var_selection_end;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_tuple_unpack_4__source_iter == NULL);
tmp_tuple_unpack_4__source_iter = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_1 == NULL);
tmp_tuple_unpack_4__element_1 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_tuple_unpack_4__element_2 == NULL);
tmp_tuple_unpack_4__element_2 = tmp_assign_source_19;
}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_4__element_1;
assert(var_selection_end_row == NULL);
Py_INCREF(tmp_assign_source_20);
var_selection_end_row = tmp_assign_source_20;
}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_4__element_2;
assert(var_selection_end_column == NULL);
Py_INCREF(tmp_assign_source_21);
var_selection_end_column = tmp_assign_source_21;
}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_text_area);
tmp_expression_value_6 = par_text_area;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_document);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_replace_range);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_top);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 65;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_bottom);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 65;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_3 = var_text;
frame_frame_textual$document$_edit$$$function__1_do->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_edit_result == NULL);
var_edit_result = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_edit_result);
tmp_expression_value_9 = var_edit_result;
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_end_location);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_tuple_unpack_5__source_iter == NULL);
tmp_tuple_unpack_5__source_iter = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_1 == NULL);
tmp_tuple_unpack_5__element_1 = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_5__element_2 == NULL);
tmp_tuple_unpack_5__element_2 = tmp_assign_source_25;
}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_26 = tmp_tuple_unpack_5__element_1;
assert(var_new_edit_to_row == NULL);
Py_INCREF(tmp_assign_source_26);
var_new_edit_to_row = tmp_assign_source_26;
}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_27 = tmp_tuple_unpack_5__element_2;
assert(var_new_edit_to_column == NULL);
Py_INCREF(tmp_assign_source_27);
var_new_edit_to_column = tmp_assign_source_27;
}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_28;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_new_edit_to_column);
tmp_sub_expr_left_1 = var_new_edit_to_column;
CHECK_OBJECT(var_edit_bottom_column);
tmp_sub_expr_right_1 = var_edit_bottom_column;
tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_column_offset == NULL);
var_column_offset = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_edit_bottom_row);
tmp_cmp_expr_left_1 = var_edit_bottom_row;
CHECK_OBJECT(var_selection_start_row);
tmp_cmp_expr_right_1 = var_selection_start_row;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_edit_bottom_column);
tmp_cmp_expr_left_2 = var_edit_bottom_column;
CHECK_OBJECT(var_selection_start_column);
tmp_cmp_expr_right_2 = var_selection_start_column;
tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_selection_start_column);
tmp_add_expr_left_1 = var_selection_start_column;
CHECK_OBJECT(var_column_offset);
tmp_add_expr_right_1 = var_column_offset;
tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_selection_start_column);
tmp_assign_source_29 = var_selection_start_column;
Py_INCREF(tmp_assign_source_29);
condexpr_end_1:;
assert(var_target_selection_start_column == NULL);
var_target_selection_start_column = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_edit_bottom_row);
tmp_cmp_expr_left_3 = var_edit_bottom_row;
CHECK_OBJECT(var_selection_end_row);
tmp_cmp_expr_right_3 = var_selection_end_row;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_edit_bottom_column);
tmp_cmp_expr_left_4 = var_edit_bottom_column;
CHECK_OBJECT(var_selection_end_column);
tmp_cmp_expr_right_4 = var_selection_end_column;
tmp_and_right_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_selection_end_column);
tmp_add_expr_left_2 = var_selection_end_column;
CHECK_OBJECT(var_column_offset);
tmp_add_expr_right_2 = var_column_offset;
tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_selection_end_column);
tmp_assign_source_30 = var_selection_end_column;
Py_INCREF(tmp_assign_source_30);
condexpr_end_2:;
assert(var_target_selection_end_column == NULL);
var_target_selection_end_column = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_new_edit_to_row);
tmp_sub_expr_left_2 = var_new_edit_to_row;
CHECK_OBJECT(var_edit_bottom_row);
tmp_sub_expr_right_2 = var_edit_bottom_row;
tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_row_offset == NULL);
var_row_offset = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(var_edit_bottom_row);
tmp_cmp_expr_left_5 = var_edit_bottom_row;
CHECK_OBJECT(var_selection_start_row);
tmp_cmp_expr_right_5 = var_selection_start_row;
tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(var_selection_start_row);
tmp_add_expr_left_3 = var_selection_start_row;
CHECK_OBJECT(var_row_offset);
tmp_add_expr_right_3 = var_row_offset;
tmp_assign_source_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(var_selection_start_row);
tmp_assign_source_32 = var_selection_start_row;
Py_INCREF(tmp_assign_source_32);
condexpr_end_3:;
assert(var_target_selection_start_row == NULL);
var_target_selection_start_row = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(var_edit_bottom_row);
tmp_cmp_expr_left_6 = var_edit_bottom_row;
CHECK_OBJECT(var_selection_end_row);
tmp_cmp_expr_right_6 = var_selection_end_row;
tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(var_selection_end_row);
tmp_add_expr_left_4 = var_selection_end_row;
CHECK_OBJECT(var_row_offset);
tmp_add_expr_right_4 = var_row_offset;
tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_4;
condexpr_false_4:;
CHECK_OBJECT(var_selection_end_row);
tmp_assign_source_33 = var_selection_end_row;
Py_INCREF(tmp_assign_source_33);
condexpr_end_4:;
assert(var_target_selection_end_row == NULL);
var_target_selection_end_row = tmp_assign_source_33;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_maintain_selection_offset);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_textual$document$_edit$Selection(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_target_selection_start_row);
tmp_tuple_element_1 = var_target_selection_start_row;
tmp_kw_call_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_target_selection_start_column);
tmp_tuple_element_1 = var_target_selection_start_column;
PyTuple_SET_ITEM0(tmp_kw_call_value_0_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_target_selection_end_row);
tmp_tuple_element_2 = var_target_selection_end_row;
tmp_kw_call_value_1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_value_1_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_target_selection_end_column);
tmp_tuple_element_2 = var_target_selection_end_column;
PyTuple_SET_ITEM0(tmp_kw_call_value_1_1, 1, tmp_tuple_element_2);
frame_frame_textual$document$_edit$$$function__1_do->m_frame.f_lineno = 96;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_start_str_plain_end_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__updated_selection, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_3;
tmp_expression_value_11 = module_var_accessor_textual$document$_edit$Selection(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_cursor);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_edit_result);
tmp_expression_value_12 = var_edit_result;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_end_location);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$document$_edit$$$function__1_do->m_frame.f_lineno = 101;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__updated_selection, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_2:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_edit_result);
tmp_assattr_value_4 = var_edit_result;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__edit_result, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$function__1_do, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$function__1_do->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$function__1_do, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$function__1_do,
    type_description_1,
    par_self,
    par_text_area,
    par_record_selection,
    var_text,
    var_edit_bottom_row,
    var_edit_bottom_column,
    var_selection_start,
    var_selection_end,
    var_selection_start_row,
    var_selection_start_column,
    var_selection_end_row,
    var_selection_end_column,
    var_edit_result,
    var_new_edit_to_row,
    var_new_edit_to_column,
    var_column_offset,
    var_target_selection_start_column,
    var_target_selection_end_column,
    var_row_offset,
    var_target_selection_start_row,
    var_target_selection_end_row
);


// Release cached frame if used for exception.
if (frame_frame_textual$document$_edit$$$function__1_do == cache_frame_frame_textual$document$_edit$$$function__1_do) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$document$_edit$$$function__1_do);
    cache_frame_frame_textual$document$_edit$$$function__1_do = NULL;
}

assertFrameObject(frame_frame_textual$document$_edit$$$function__1_do);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_edit_result);
tmp_return_value = var_edit_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_text);
CHECK_OBJECT(var_text);
Py_DECREF(var_text);
var_text = NULL;
CHECK_OBJECT(var_edit_bottom_row);
CHECK_OBJECT(var_edit_bottom_row);
Py_DECREF(var_edit_bottom_row);
var_edit_bottom_row = NULL;
CHECK_OBJECT(var_edit_bottom_column);
CHECK_OBJECT(var_edit_bottom_column);
Py_DECREF(var_edit_bottom_column);
var_edit_bottom_column = NULL;
CHECK_OBJECT(var_selection_start);
CHECK_OBJECT(var_selection_start);
Py_DECREF(var_selection_start);
var_selection_start = NULL;
CHECK_OBJECT(var_selection_end);
CHECK_OBJECT(var_selection_end);
Py_DECREF(var_selection_end);
var_selection_end = NULL;
CHECK_OBJECT(var_selection_start_row);
CHECK_OBJECT(var_selection_start_row);
Py_DECREF(var_selection_start_row);
var_selection_start_row = NULL;
CHECK_OBJECT(var_selection_start_column);
CHECK_OBJECT(var_selection_start_column);
Py_DECREF(var_selection_start_column);
var_selection_start_column = NULL;
CHECK_OBJECT(var_selection_end_row);
CHECK_OBJECT(var_selection_end_row);
Py_DECREF(var_selection_end_row);
var_selection_end_row = NULL;
CHECK_OBJECT(var_selection_end_column);
CHECK_OBJECT(var_selection_end_column);
Py_DECREF(var_selection_end_column);
var_selection_end_column = NULL;
CHECK_OBJECT(var_edit_result);
CHECK_OBJECT(var_edit_result);
Py_DECREF(var_edit_result);
var_edit_result = NULL;
CHECK_OBJECT(var_new_edit_to_row);
CHECK_OBJECT(var_new_edit_to_row);
Py_DECREF(var_new_edit_to_row);
var_new_edit_to_row = NULL;
CHECK_OBJECT(var_new_edit_to_column);
CHECK_OBJECT(var_new_edit_to_column);
Py_DECREF(var_new_edit_to_column);
var_new_edit_to_column = NULL;
CHECK_OBJECT(var_column_offset);
CHECK_OBJECT(var_column_offset);
Py_DECREF(var_column_offset);
var_column_offset = NULL;
CHECK_OBJECT(var_target_selection_start_column);
CHECK_OBJECT(var_target_selection_start_column);
Py_DECREF(var_target_selection_start_column);
var_target_selection_start_column = NULL;
CHECK_OBJECT(var_target_selection_end_column);
CHECK_OBJECT(var_target_selection_end_column);
Py_DECREF(var_target_selection_end_column);
var_target_selection_end_column = NULL;
CHECK_OBJECT(var_row_offset);
CHECK_OBJECT(var_row_offset);
Py_DECREF(var_row_offset);
var_row_offset = NULL;
CHECK_OBJECT(var_target_selection_start_row);
CHECK_OBJECT(var_target_selection_start_row);
Py_DECREF(var_target_selection_start_row);
var_target_selection_start_row = NULL;
CHECK_OBJECT(var_target_selection_end_row);
CHECK_OBJECT(var_target_selection_end_row);
Py_DECREF(var_target_selection_end_row);
var_target_selection_end_row = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_edit_bottom_row);
var_edit_bottom_row = NULL;
Py_XDECREF(var_edit_bottom_column);
var_edit_bottom_column = NULL;
Py_XDECREF(var_selection_start);
var_selection_start = NULL;
Py_XDECREF(var_selection_end);
var_selection_end = NULL;
Py_XDECREF(var_selection_start_row);
var_selection_start_row = NULL;
Py_XDECREF(var_selection_start_column);
var_selection_start_column = NULL;
Py_XDECREF(var_selection_end_row);
var_selection_end_row = NULL;
Py_XDECREF(var_selection_end_column);
var_selection_end_column = NULL;
Py_XDECREF(var_edit_result);
var_edit_result = NULL;
Py_XDECREF(var_new_edit_to_row);
var_new_edit_to_row = NULL;
Py_XDECREF(var_new_edit_to_column);
var_new_edit_to_column = NULL;
Py_XDECREF(var_column_offset);
var_column_offset = NULL;
Py_XDECREF(var_target_selection_start_column);
var_target_selection_start_column = NULL;
Py_XDECREF(var_target_selection_end_column);
var_target_selection_end_column = NULL;
Py_XDECREF(var_row_offset);
var_row_offset = NULL;
Py_XDECREF(var_target_selection_start_row);
var_target_selection_start_row = NULL;
Py_XDECREF(var_target_selection_end_row);
var_target_selection_end_row = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);
CHECK_OBJECT(par_record_selection);
Py_DECREF(par_record_selection);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);
CHECK_OBJECT(par_record_selection);
Py_DECREF(par_record_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$document$_edit$$$function__2_undo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text_area = python_pars[1];
PyObject *var_replaced_text = NULL;
PyObject *var_edit_end = NULL;
PyObject *var_undo_edit_result = NULL;
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$function__2_undo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$document$_edit$$$function__2_undo = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$document$_edit$$$function__2_undo)) {
    Py_XDECREF(cache_frame_frame_textual$document$_edit$$$function__2_undo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$document$_edit$$$function__2_undo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$document$_edit$$$function__2_undo = MAKE_FUNCTION_FRAME(tstate, code_objects_f676d17fea72fd1846190a35a735e139, module_textual$document$_edit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$document$_edit$$$function__2_undo->m_type_description == NULL);
frame_frame_textual$document$_edit$$$function__2_undo = cache_frame_frame_textual$document$_edit$$$function__2_undo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$function__2_undo);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$function__2_undo) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__edit_result);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replaced_text);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_replaced_text == NULL);
var_replaced_text = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__edit_result);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_end_location);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_edit_end == NULL);
var_edit_end = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_text_area);
tmp_expression_value_6 = par_text_area;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_document);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_replace_range);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_top);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 122;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_edit_end);
tmp_args_element_value_2 = var_edit_end;
CHECK_OBJECT(var_replaced_text);
tmp_args_element_value_3 = var_replaced_text;
frame_frame_textual$document$_edit$$$function__2_undo->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_undo_edit_result == NULL);
var_undo_edit_result = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__original_selection);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__updated_selection, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$function__2_undo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$function__2_undo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$function__2_undo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$function__2_undo,
    type_description_1,
    par_self,
    par_text_area,
    var_replaced_text,
    var_edit_end,
    var_undo_edit_result
);


// Release cached frame if used for exception.
if (frame_frame_textual$document$_edit$$$function__2_undo == cache_frame_frame_textual$document$_edit$$$function__2_undo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$document$_edit$$$function__2_undo);
    cache_frame_frame_textual$document$_edit$$$function__2_undo = NULL;
}

assertFrameObject(frame_frame_textual$document$_edit$$$function__2_undo);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_undo_edit_result);
tmp_return_value = var_undo_edit_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_replaced_text);
CHECK_OBJECT(var_replaced_text);
Py_DECREF(var_replaced_text);
var_replaced_text = NULL;
CHECK_OBJECT(var_edit_end);
CHECK_OBJECT(var_edit_end);
Py_DECREF(var_edit_end);
var_edit_end = NULL;
CHECK_OBJECT(var_undo_edit_result);
CHECK_OBJECT(var_undo_edit_result);
Py_DECREF(var_undo_edit_result);
var_undo_edit_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_replaced_text);
var_replaced_text = NULL;
Py_XDECREF(var_edit_end);
var_edit_end = NULL;
Py_XDECREF(var_undo_edit_result);
var_undo_edit_result = NULL;
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
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$document$_edit$$$function__3_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text_area = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$function__3_after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$document$_edit$$$function__3_after = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$document$_edit$$$function__3_after)) {
    Py_XDECREF(cache_frame_frame_textual$document$_edit$$$function__3_after);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$document$_edit$$$function__3_after == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$document$_edit$$$function__3_after = MAKE_FUNCTION_FRAME(tstate, code_objects_6aa6bbc5cb106ef5e68d9dcb750305e5, module_textual$document$_edit, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$document$_edit$$$function__3_after->m_type_description == NULL);
frame_frame_textual$document$_edit$$$function__3_after = cache_frame_frame_textual$document$_edit$$$function__3_after;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$function__3_after);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$function__3_after) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__updated_selection);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__updated_selection);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text_area);
tmp_assattr_target_1 = par_text_area;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_selection, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_text_area);
tmp_called_instance_1 = par_text_area;
frame_frame_textual$document$_edit$$$function__3_after->m_frame.f_lineno = 141;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_record_cursor_width);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$function__3_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$function__3_after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$function__3_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$function__3_after,
    type_description_1,
    par_self,
    par_text_area
);


// Release cached frame if used for exception.
if (frame_frame_textual$document$_edit$$$function__3_after == cache_frame_frame_textual$document$_edit$$$function__3_after) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$document$_edit$$$function__3_after);
    cache_frame_frame_textual$document$_edit$$$function__3_after = NULL;
}

assertFrameObject(frame_frame_textual$document$_edit$$$function__3_after);

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
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text_area);
Py_DECREF(par_text_area);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$document$_edit$$$function__4_top(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$function__4_top;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$document$_edit$$$function__4_top = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$document$_edit$$$function__4_top)) {
    Py_XDECREF(cache_frame_frame_textual$document$_edit$$$function__4_top);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$document$_edit$$$function__4_top == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$document$_edit$$$function__4_top = MAKE_FUNCTION_FRAME(tstate, code_objects_883ac85332bb56b0e2fcb5293728d05e, module_textual$document$_edit, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$document$_edit$$$function__4_top->m_type_description == NULL);
frame_frame_textual$document$_edit$$$function__4_top = cache_frame_frame_textual$document$_edit$$$function__4_top;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$function__4_top);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$function__4_top) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_location);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_to_location);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "o";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_textual$document$_edit$$$function__4_top->m_frame.f_lineno = 146;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$function__4_top, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$function__4_top->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$function__4_top, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$function__4_top,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$document$_edit$$$function__4_top == cache_frame_frame_textual$document$_edit$$$function__4_top) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$document$_edit$$$function__4_top);
    cache_frame_frame_textual$document$_edit$$$function__4_top = NULL;
}

assertFrameObject(frame_frame_textual$document$_edit$$$function__4_top);

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


static PyObject *impl_textual$document$_edit$$$function__5_bottom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$function__5_bottom;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$document$_edit$$$function__5_bottom = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$document$_edit$$$function__5_bottom)) {
    Py_XDECREF(cache_frame_frame_textual$document$_edit$$$function__5_bottom);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$document$_edit$$$function__5_bottom == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$document$_edit$$$function__5_bottom = MAKE_FUNCTION_FRAME(tstate, code_objects_a9e2be4b663934610d982390cc496099, module_textual$document$_edit, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$document$_edit$$$function__5_bottom->m_type_description == NULL);
frame_frame_textual$document$_edit$$$function__5_bottom = cache_frame_frame_textual$document$_edit$$$function__5_bottom;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$function__5_bottom);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$function__5_bottom) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_location);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_to_location);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "o";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_textual$document$_edit$$$function__5_bottom->m_frame.f_lineno = 151;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$function__5_bottom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$function__5_bottom->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$function__5_bottom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$function__5_bottom,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$document$_edit$$$function__5_bottom == cache_frame_frame_textual$document$_edit$$$function__5_bottom) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$document$_edit$$$function__5_bottom);
    cache_frame_frame_textual$document$_edit$$$function__5_bottom = NULL;
}

assertFrameObject(frame_frame_textual$document$_edit$$$function__5_bottom);

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



static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__1_do(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$document$_edit$$$function__1_do,
        mod_consts.const_str_plain_do,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc21220ec61d20c211c90e34840ca0fd,
#endif
        code_objects_3ba52b89eaf05830db19e5c8186f7302,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$document$_edit,
        mod_consts.const_str_digest_537e0b99a3be3931f5c77175894bd9dc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__2_undo(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$document$_edit$$$function__2_undo,
        mod_consts.const_str_plain_undo,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_95311c632c8663009d6040d6c245e2de,
#endif
        code_objects_f676d17fea72fd1846190a35a735e139,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$document$_edit,
        mod_consts.const_str_digest_56445718fe75c2d44c68a13410d91a9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__3_after(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$document$_edit$$$function__3_after,
        mod_consts.const_str_plain_after,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dcad4aef76172d2365ae2f7a02507e2e,
#endif
        code_objects_6aa6bbc5cb106ef5e68d9dcb750305e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$document$_edit,
        mod_consts.const_str_digest_29a730118c1ef7cf32432372f7ffe642,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__4_top(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$document$_edit$$$function__4_top,
        mod_consts.const_str_plain_top,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_31c7590f9a788da93f683ae9de250502,
#endif
        code_objects_883ac85332bb56b0e2fcb5293728d05e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$document$_edit,
        mod_consts.const_str_digest_96bef38b7c42f0490c5d61fa3d5fc424,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$document$_edit$$$function__5_bottom(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$document$_edit$$$function__5_bottom,
        mod_consts.const_str_plain_bottom,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cc01f00342542a81f265e448f08e80ed,
#endif
        code_objects_a9e2be4b663934610d982390cc496099,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$document$_edit,
        mod_consts.const_str_digest_5a529cf812e1d39aaa8c212ca53685e4,
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

static function_impl_code const function_table_textual$document$_edit[] = {
impl_textual$document$_edit$$$function__1_do,
impl_textual$document$_edit$$$function__2_undo,
impl_textual$document$_edit$$$function__3_after,
impl_textual$document$_edit$$$function__4_top,
impl_textual$document$_edit$$$function__5_bottom,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$document$_edit);
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
        module_textual$document$_edit,
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
        function_table_textual$document$_edit,
        sizeof(function_table_textual$document$_edit) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.document._edit";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$document$_edit(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$document$_edit");

    // Store the module for future use.
    module_textual$document$_edit = module;

    moduledict_textual$document$_edit = MODULE_DICT(module_textual$document$_edit);

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
        PRINT_STRING("textual$document$_edit: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$document$_edit: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$document$_edit: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.document._edit" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$document$_edit\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$document$_edit,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$document$_edit,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$document$_edit,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$document$_edit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$document$_edit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$document$_edit);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$document$_edit);
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

        UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$document$_edit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$document$_edit$$$class__1_Edit_13 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$document$_edit$$$class__1_Edit_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$document$_edit = MAKE_MODULE_FRAME(code_objects_870baa912b3a27d5b41b253b5b57e19f, module_textual$document$_edit);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit);
assert(Py_REFCNT(frame_frame_textual$document$_edit) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$document$_edit$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$document$_edit$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$document$_edit;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_dataclass_str_plain_field_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$document$_edit->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$document$_edit,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$document$_edit,
        mod_consts.const_str_plain_field,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_field);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_field, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_06456d3866d4bda79400bc5f48d066e8;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$document$_edit;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_EditResult_str_plain_Location_str_plain_Selection_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$document$_edit->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$document$_edit,
        mod_consts.const_str_plain_EditResult,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_EditResult);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_EditResult, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$document$_edit,
        mod_consts.const_str_plain_Location,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Location);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Location, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$document$_edit,
        mod_consts.const_str_plain_Selection,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Selection);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection, tmp_assign_source_12);
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
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$document$_edit$dataclass(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto try_except_handler_3;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$document$_edit$$$class__1_Edit_13 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_ed6d297ebbb8d86eb6a409f588a36371;
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_f3bb5585ccc1c27f40018c10bf8a59c8;
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Edit;
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_13;
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_textual$document$_edit$$$class__1_Edit_2 = MAKE_CLASS_FRAME(tstate, code_objects_77819de8a0550b40bae1ccd0c4986db9, module_textual$document$_edit, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$document$_edit$$$class__1_Edit_2);
assert(Py_REFCNT(frame_frame_textual$document$_edit$$$class__1_Edit_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 16;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_text;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_Location;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_from_location;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_Location;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_to_location;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_4 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_maintain_selection_offset;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$document$_edit$field(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame.f_lineno = 28;
tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_none_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_default_tuple);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain__original_selection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_d0eaec629046899d3546f7bbb08d5d27;
tmp_ass_subscribed_5 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain__original_selection;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_textual$document$_edit$field(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame.f_lineno = 31;
tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_none_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_default_tuple);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain__updated_selection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_d0eaec629046899d3546f7bbb08d5d27;
tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain__updated_selection;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_textual$document$_edit$field(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_field);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame.f_lineno = 34;
tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_none_tuple, 0), mod_consts.const_tuple_str_plain_init_str_plain_default_tuple);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain__edit_result, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_digest_615068d1d8fd7d5a563c7018e429b202;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_textual$document$_edit$$$class__1_Edit_13, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__edit_result;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7e1a439de6d65356cac1e95a49d14c9c);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$document$_edit$$$function__1_do(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain_do, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_73d2e07ba830e395ff0df018cb109cd2);

tmp_dictset_value = MAKE_FUNCTION_textual$document$_edit$$$function__2_undo(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain_undo, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_1d57bfdbe562019d757afabc23530a10);

tmp_dictset_value = MAKE_FUNCTION_textual$document$_edit$$$function__3_after(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain_after, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_4;
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b31f22cdd72d7be4c31ec26b376317f7);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$document$_edit$$$function__4_top(tstate, tmp_annotations_4);

frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame.f_lineno = 143;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain_top, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b31f22cdd72d7be4c31ec26b376317f7);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$document$_edit$$$function__5_bottom(tstate, tmp_annotations_5);

frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame.f_lineno = 148;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain_bottom, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit$$$class__1_Edit_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit$$$class__1_Edit_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit$$$class__1_Edit_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$document$_edit$$$class__1_Edit_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$document$_edit$$$class__1_Edit_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_28ceff322c4b3e6984f798b79b753e6a_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$document$_edit$$$class__1_Edit_13, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_Edit;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$document$_edit$$$class__1_Edit_13;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$document$_edit->m_frame.f_lineno = 13;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_16;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$document$_edit$$$class__1_Edit_13);
locals_textual$document$_edit$$$class__1_Edit_13 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$document$_edit$$$class__1_Edit_13);
locals_textual$document$_edit$$$class__1_Edit_13 = NULL;
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
exception_lineno = 13;
goto try_except_handler_3;
outline_result_2:;
frame_frame_textual$document$_edit->m_frame.f_lineno = 12;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$document$_edit, (Nuitka_StringObject *)mod_consts.const_str_plain_Edit, tmp_assign_source_15);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$document$_edit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$document$_edit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$document$_edit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$document$_edit);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$document$_edit", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.document._edit" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$document$_edit);
    return module_textual$document$_edit;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$document$_edit, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$document$_edit", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

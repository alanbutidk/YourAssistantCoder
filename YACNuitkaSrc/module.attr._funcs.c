/* Generated code for Python module 'attr$_funcs'
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



/* The "module_attr$_funcs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$_funcs;
PyDictObject *moduledict_attr$_funcs;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_fields;
PyObject *const_str_plain_inst;
PyObject *const_str_plain_filter;
PyObject *const_str_plain_value_serializer;
PyObject *const_str_plain_v;
PyObject *const_str_plain__ATOMIC_TYPES;
PyObject *const_str_plain_rv;
PyObject *const_str_plain_has;
PyObject *const_str_plain_asdict;
PyObject *const_str_plain_dict_factory;
PyObject *const_str_plain_retain_collection_types;
PyObject *const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple;
PyObject *const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple;
PyObject *const_str_plain__asdict_anything;
PyObject *const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple;
PyObject *const_str_plain_items;
PyObject *const_str_digest_e4e32e1075fb40f8937aac6a133af908;
PyObject *const_str_plain_df;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_d6b568f7768e3849583ee28edbc76902;
PyObject *const_str_plain___attrs_attrs__;
PyObject *const_str_digest_9ccc7618dba80e0e77533e822142884f;
PyObject *const_str_digest_bf193d080c27b70d5950ee1f3b1ee064;
PyObject *const_str_plain_astuple;
PyObject *const_str_plain_tuple_factory;
PyObject *const_str_plain_retain;
PyObject *const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple;
PyObject *const_str_digest_0047f8121abbd67f1f41ead05e3ac8db;
PyObject *const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple;
PyObject *const_str_digest_6419a49fb159320db882dce19dfd2cd9;
PyObject *const_str_plain_get_generic_base;
PyObject *const_str_digest_4d8d997d8c1581341ca861f404107d58;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_NOTHING;
PyObject *const_str_digest_aea61737182cd5ea35f967633b8bf0c7;
PyObject *const_str_plain_new;
PyObject *const_str_plain_AttrsAttributeNotFoundError;
PyObject *const_str_plain__OBJ_SETATTR;
PyObject *const_str_digest_5946a8781a490644d37eb438289e72f4;
PyObject *const_str_plain___attrs_types_resolved__;
PyObject *const_str_plain_globalns;
PyObject *const_str_plain_localns;
PyObject *const_str_plain_include_extras;
PyObject *const_str_plain_get_type_hints;
PyObject *const_str_digest_a0a0781397a6c05bff4ee1d9b4b8aebf;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_get_generic_base_tuple;
PyObject *const_str_plain__make;
PyObject *const_tuple_str_plain__OBJ_SETATTR_str_plain_NOTHING_str_plain_fields_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_AttrsAttributeNotFoundError_tuple;
PyObject *const_frozenset_503760712292348617886ccdb2d56ce5;
PyObject *const_tuple_true_none_type_dict_false_none_tuple;
PyObject *const_tuple_true_none_type_tuple_false_tuple;
PyObject *const_str_plain_assoc;
PyObject *const_tuple_none_none_none_true_tuple;
PyObject *const_str_plain_resolve_types;
PyObject *const_str_digest_485f83e288039300ea810b6f0b831509;
PyObject *const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple;
PyObject *const_tuple_6fdaec00a661f1d0b18610153ca4364b_tuple;
PyObject *const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3;
PyObject *const_tuple_599843c1b2d6de4737c67173f3ad115f_tuple;
PyObject *const_tuple_6d01ace6422243a5f3fdd2ef27364fa0_tuple;
PyObject *const_tuple_38c941ddf9655c1b34d163efb4aaa1a4_tuple;
PyObject *const_tuple_6152dae44122f9c7f0d7810b43a475cc_tuple;
PyObject *const_tuple_fd070b304d4394c90e645c27380349a9_tuple;
PyObject *const_tuple_9ce9972442da0e4bb8c148907cb3b000_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("attr._funcs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_inst);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_filter);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_value_serializer);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__ATOMIC_TYPES);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_rv);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_has);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_asdict);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_dict_factory);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_retain_collection_types);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__asdict_anything);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4e32e1075fb40f8937aac6a133af908);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_df);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6b568f7768e3849583ee28edbc76902);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___attrs_attrs__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ccc7618dba80e0e77533e822142884f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf193d080c27b70d5950ee1f3b1ee064);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_astuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_tuple_factory);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_retain);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_0047f8121abbd67f1f41ead05e3ac8db);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_6419a49fb159320db882dce19dfd2cd9);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_generic_base);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d8d997d8c1581341ca861f404107d58);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOTHING);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_aea61737182cd5ea35f967633b8bf0c7);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_AttrsAttributeNotFoundError);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__OBJ_SETATTR);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_5946a8781a490644d37eb438289e72f4);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___attrs_types_resolved__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_globalns);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_localns);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_include_extras);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_type_hints);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0a0781397a6c05bff4ee1d9b4b8aebf);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_generic_base_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__make);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__OBJ_SETATTR_str_plain_NOTHING_str_plain_fields_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AttrsAttributeNotFoundError_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_frozenset_503760712292348617886ccdb2d56ce5);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_true_none_type_dict_false_none_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_true_none_type_tuple_false_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_assoc);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_types);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_485f83e288039300ea810b6f0b831509);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_6fdaec00a661f1d0b18610153ca4364b_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_599843c1b2d6de4737c67173f3ad115f_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_6d01ace6422243a5f3fdd2ef27364fa0_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_38c941ddf9655c1b34d163efb4aaa1a4_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_6152dae44122f9c7f0d7810b43a475cc_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_fd070b304d4394c90e645c27380349a9_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_9ce9972442da0e4bb8c148907cb3b000_tuple);
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
void checkModuleConstants_attr$_funcs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_inst));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inst);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filter);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_value_serializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value_serializer);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__ATOMIC_TYPES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ATOMIC_TYPES);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_rv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rv);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_has));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_asdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asdict);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_dict_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dict_factory);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_retain_collection_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retain_collection_types);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__asdict_anything));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__asdict_anything);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4e32e1075fb40f8937aac6a133af908));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4e32e1075fb40f8937aac6a133af908);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_df));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_df);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6b568f7768e3849583ee28edbc76902));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6b568f7768e3849583ee28edbc76902);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___attrs_attrs__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___attrs_attrs__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ccc7618dba80e0e77533e822142884f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ccc7618dba80e0e77533e822142884f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf193d080c27b70d5950ee1f3b1ee064));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf193d080c27b70d5950ee1f3b1ee064);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_astuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_tuple_factory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tuple_factory);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_retain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retain);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_0047f8121abbd67f1f41ead05e3ac8db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0047f8121abbd67f1f41ead05e3ac8db);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_6419a49fb159320db882dce19dfd2cd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6419a49fb159320db882dce19dfd2cd9);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_generic_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_generic_base);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d8d997d8c1581341ca861f404107d58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d8d997d8c1581341ca861f404107d58);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOTHING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOTHING);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_aea61737182cd5ea35f967633b8bf0c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aea61737182cd5ea35f967633b8bf0c7);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_AttrsAttributeNotFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AttrsAttributeNotFoundError);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__OBJ_SETATTR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__OBJ_SETATTR);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_5946a8781a490644d37eb438289e72f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5946a8781a490644d37eb438289e72f4);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___attrs_types_resolved__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___attrs_types_resolved__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_globalns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_globalns);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_localns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_localns);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_include_extras));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_include_extras);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_type_hints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_type_hints);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0a0781397a6c05bff4ee1d9b4b8aebf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0a0781397a6c05bff4ee1d9b4b8aebf);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_generic_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_generic_base_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__make));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__OBJ_SETATTR_str_plain_NOTHING_str_plain_fields_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__OBJ_SETATTR_str_plain_NOTHING_str_plain_fields_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AttrsAttributeNotFoundError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AttrsAttributeNotFoundError_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_frozenset_503760712292348617886ccdb2d56ce5));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_503760712292348617886ccdb2d56ce5);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_true_none_type_dict_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_none_type_dict_false_none_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_true_none_type_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_none_type_tuple_false_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_assoc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assoc);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_true_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_types);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_485f83e288039300ea810b6f0b831509));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_485f83e288039300ea810b6f0b831509);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_6fdaec00a661f1d0b18610153ca4364b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6fdaec00a661f1d0b18610153ca4364b_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_599843c1b2d6de4737c67173f3ad115f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_599843c1b2d6de4737c67173f3ad115f_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_6d01ace6422243a5f3fdd2ef27364fa0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6d01ace6422243a5f3fdd2ef27364fa0_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_38c941ddf9655c1b34d163efb4aaa1a4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38c941ddf9655c1b34d163efb4aaa1a4_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_6152dae44122f9c7f0d7810b43a475cc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6152dae44122f9c7f0d7810b43a475cc_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_fd070b304d4394c90e645c27380349a9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fd070b304d4394c90e645c27380349a9_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_9ce9972442da0e4bb8c148907cb3b000_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9ce9972442da0e4bb8c148907cb3b000_tuple);
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
static PyObject *module_var_accessor_attr$_funcs$AttrsAttributeNotFoundError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_AttrsAttributeNotFoundError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AttrsAttributeNotFoundError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AttrsAttributeNotFoundError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AttrsAttributeNotFoundError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AttrsAttributeNotFoundError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_AttrsAttributeNotFoundError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_AttrsAttributeNotFoundError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AttrsAttributeNotFoundError);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$NOTHING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_NOTHING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOTHING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOTHING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOTHING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOTHING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_NOTHING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_NOTHING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOTHING);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$_ATOMIC_TYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__ATOMIC_TYPES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ATOMIC_TYPES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ATOMIC_TYPES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ATOMIC_TYPES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ATOMIC_TYPES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__ATOMIC_TYPES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__ATOMIC_TYPES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ATOMIC_TYPES);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$_OBJ_SETATTR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__OBJ_SETATTR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__OBJ_SETATTR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__OBJ_SETATTR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__OBJ_SETATTR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__OBJ_SETATTR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__OBJ_SETATTR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__OBJ_SETATTR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__OBJ_SETATTR);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$_asdict_anything(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__asdict_anything);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__asdict_anything);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__asdict_anything, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__asdict_anything);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__asdict_anything, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__asdict_anything);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__asdict_anything);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__asdict_anything);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$asdict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_asdict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asdict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asdict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asdict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asdict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_asdict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_asdict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asdict);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$astuple(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_astuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_astuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_astuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_astuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_astuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_astuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_astuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_astuple);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$fields(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_fields);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fields);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fields, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fields);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fields, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_fields);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_fields);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fields);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$get_generic_base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_generic_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_generic_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_generic_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_generic_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_funcs$has(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_funcs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_funcs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_has);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_funcs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_has);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_has, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_has);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_has);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_has);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5c5e46ee07202c191c4542eb79f7972d;
static PyCodeObject *code_objects_c0a64f5a2e10e5779a99c85474ba5cbc;
static PyCodeObject *code_objects_3f60d2c1edac0a7e805b6af05b04ab5b;
static PyCodeObject *code_objects_91264b4e2ea1af4d60667916119593e2;
static PyCodeObject *code_objects_bef04fc74254c331d71a984685c53562;
static PyCodeObject *code_objects_2f591892bfdf22ab160273a76bd53436;
static PyCodeObject *code_objects_0666fc491c16854f791aa4349fb89364;
static PyCodeObject *code_objects_0e161028db4496fcdc10421e37a46a4a;
static PyCodeObject *code_objects_8a7118e6c5bdd1423175fc0de6fccc15;
static PyCodeObject *code_objects_97ff08ddc27b51c47e4564f46414e4c0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_485f83e288039300ea810b6f0b831509); CHECK_OBJECT(module_filename_obj);
code_objects_5c5e46ee07202c191c4542eb79f7972d = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_bf193d080c27b70d5950ee1f3b1ee064, mod_consts.const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple, NULL, 1, 0, 0);
code_objects_c0a64f5a2e10e5779a99c85474ba5cbc = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_d6b568f7768e3849583ee28edbc76902, mod_consts.const_tuple_79de2be5960f8a2446301abbf6343ef2_tuple, NULL, 1, 0, 0);
code_objects_3f60d2c1edac0a7e805b6af05b04ab5b = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_6419a49fb159320db882dce19dfd2cd9, mod_consts.const_tuple_6fdaec00a661f1d0b18610153ca4364b_tuple, NULL, 1, 0, 0);
code_objects_91264b4e2ea1af4d60667916119593e2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3, mod_consts.const_str_digest_f5cf11b1cb8b0d9853e12ab86322a6b3, NULL, NULL, 0, 0, 0);
code_objects_bef04fc74254c331d71a984685c53562 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__asdict_anything, mod_consts.const_str_plain__asdict_anything, mod_consts.const_tuple_599843c1b2d6de4737c67173f3ad115f_tuple, NULL, 6, 0, 0);
code_objects_2f591892bfdf22ab160273a76bd53436 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_asdict, mod_consts.const_str_plain_asdict, mod_consts.const_tuple_6d01ace6422243a5f3fdd2ef27364fa0_tuple, NULL, 6, 0, 0);
code_objects_0666fc491c16854f791aa4349fb89364 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_assoc, mod_consts.const_str_plain_assoc, mod_consts.const_tuple_38c941ddf9655c1b34d163efb4aaa1a4_tuple, NULL, 1, 0, 0);
code_objects_0e161028db4496fcdc10421e37a46a4a = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_astuple, mod_consts.const_str_plain_astuple, mod_consts.const_tuple_6152dae44122f9c7f0d7810b43a475cc_tuple, NULL, 5, 0, 0);
code_objects_8a7118e6c5bdd1423175fc0de6fccc15 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_has, mod_consts.const_str_plain_has, mod_consts.const_tuple_fd070b304d4394c90e645c27380349a9_tuple, NULL, 1, 0, 0);
code_objects_97ff08ddc27b51c47e4564f46414e4c0 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_resolve_types, mod_consts.const_str_plain_resolve_types, mod_consts.const_tuple_9ce9972442da0e4bb8c148907cb3b000_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__1_asdict(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__2__asdict_anything(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__3_astuple(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__4_has(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__5_assoc(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__6_resolve_types(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_attr$_funcs$$$function__1_asdict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inst = python_pars[0];
PyObject *par_recurse = python_pars[1];
struct Nuitka_CellObject *par_filter = Nuitka_Cell_New1(python_pars[2]);
PyObject *par_dict_factory = python_pars[3];
struct Nuitka_CellObject *par_retain_collection_types = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_value_serializer = Nuitka_Cell_New1(python_pars[5]);
PyObject *var_attrs = NULL;
PyObject *var_rv = NULL;
PyObject *var_a = NULL;
PyObject *var_v = NULL;
PyObject *var_value_type = NULL;
PyObject *var_cf = NULL;
PyObject *var_items = NULL;
struct Nuitka_CellObject *var_df = Nuitka_Cell_NewEmpty();
PyObject *outline_0_var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__1_asdict;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__1_asdict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__1_asdict)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__1_asdict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__1_asdict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__1_asdict = MAKE_FUNCTION_FRAME(tstate, code_objects_2f591892bfdf22ab160273a76bd53436, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__1_asdict->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__1_asdict = cache_frame_frame_attr$_funcs$$$function__1_asdict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__1_asdict);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__1_asdict) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$fields(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oococcoooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_inst);
tmp_expression_value_1 = par_inst;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oococcoooooooc";
    goto frame_exception_exit_1;
}
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 80;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oococcoooooooc";
    goto frame_exception_exit_1;
}
assert(var_attrs == NULL);
var_attrs = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
CHECK_OBJECT(par_dict_factory);
tmp_called_value_2 = par_dict_factory;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 81;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oococcoooooooc";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_attrs);
tmp_iter_arg_1 = var_attrs;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oococcoooooooc";
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
type_description_1 = "oococcoooooooc";
exception_lineno = 82;
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
    PyObject *old = var_a;
    var_a = tmp_assign_source_5;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_3;
if (par_inst == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inst);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_inst;
CHECK_OBJECT(var_a);
tmp_expression_value_3 = var_a;
tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_name_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_assign_source_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, NULL);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(par_filter) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_filter);
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(par_filter) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_called_value_3 = Nuitka_Cell_GET(par_filter);
CHECK_OBJECT(var_a);
tmp_args_element_value_2 = var_a;
CHECK_OBJECT(var_v);
tmp_args_element_value_3 = var_v;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(par_value_serializer) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_value_serializer);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
if (Nuitka_Cell_GET(par_value_serializer) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_called_value_4 = Nuitka_Cell_GET(par_value_serializer);
if (par_inst == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inst);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = par_inst;
CHECK_OBJECT(var_a);
tmp_args_element_value_5 = var_a;
CHECK_OBJECT(var_v);
tmp_args_element_value_6 = var_v;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
{
    PyObject *old = var_v;
    assert(old != NULL);
    var_v = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_recurse);
tmp_cmp_expr_left_3 = par_recurse;
tmp_cmp_expr_right_3 = Py_True;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_type_arg_1;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_type_arg_1 = var_v;
tmp_assign_source_8 = BUILTIN_TYPE1(tmp_type_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
{
    PyObject *old = var_value_type;
    var_value_type = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_value_type);
tmp_cmp_expr_left_4 = var_value_type;
tmp_cmp_expr_right_4 = module_var_accessor_attr$_funcs$_ATOMIC_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ATOMIC_TYPES);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_4;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subvalue_1 = var_v;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_4 = var_a;
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_name);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
int tmp_truth_name_1;
tmp_called_value_5 = module_var_accessor_attr$_funcs$has(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_value_type);
tmp_args_element_value_7 = var_value_type;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 94;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 94;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_expression_value_5;
tmp_called_value_6 = module_var_accessor_attr$_funcs$asdict(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asdict);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = var_v;
tmp_kw_call_dict_value_0_1 = Py_True;
if (Nuitka_Cell_GET(par_filter) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(par_filter);
if (par_dict_factory == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dict_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = par_dict_factory;
if (Nuitka_Cell_GET(par_retain_collection_types) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(par_retain_collection_types);
if (Nuitka_Cell_GET(par_value_serializer) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(par_value_serializer);
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 95;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
if (var_rv == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_2 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_5 = var_a;
tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 95;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_1 = var_value_type;
tmp_issubclass_classes_1 = mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (Nuitka_Cell_GET(par_retain_collection_types) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_retain_collection_types);
tmp_cmp_expr_right_5 = Py_True;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_value_type);
tmp_assign_source_9 = var_value_type;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_9 = (PyObject *)&PyList_Type;
condexpr_end_1:;
{
    PyObject *old = var_cf;
    var_cf = tmp_assign_source_9;
    Py_INCREF(var_cf);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
if (var_v == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_3;
}

tmp_iter_arg_2 = var_v;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_3;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oococcoooooooc";
exception_lineno = 105;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_14;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
PyObject *tmp_kw_call_dict_value_4_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_7 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}
CHECK_OBJECT(outline_0_var_i);
tmp_kw_call_arg_value_0_2 = outline_0_var_i;
tmp_kw_call_dict_value_0_2 = Py_False;
if (Nuitka_Cell_GET(par_filter) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(par_filter);
if (par_dict_factory == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dict_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_2_2 = par_dict_factory;
if (Nuitka_Cell_GET(par_retain_collection_types) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(par_retain_collection_types);
if (Nuitka_Cell_GET(par_value_serializer) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_4_2 = Nuitka_Cell_GET(par_value_serializer);
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 106;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_10 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 105;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_items;
    var_items = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_cf);
tmp_called_value_8 = var_cf;
CHECK_OBJECT(var_items);
tmp_args_element_value_8 = var_items;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 117;
tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_5;
}
if (var_rv == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_5;
}

tmp_ass_subscribed_3 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_6 = var_a;
tmp_ass_subscript_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_name);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 117;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_5;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscript_3);
Py_DECREF(tmp_ass_subscript_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__1_asdict, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__1_asdict, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
CHECK_OBJECT(var_cf);
tmp_issubclass_cls_2 = var_cf;
tmp_issubclass_classes_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 120;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_attr$_funcs$$$function__1_asdict->m_frame)) {
        frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oococcoooooooc";
goto try_except_handler_6;
branch_no_8:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_cf);
tmp_direct_call_arg1_1 = var_cf;
CHECK_OBJECT(var_items);
tmp_direct_call_arg2_1 = var_items;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_ass_subvalue_4 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}
if (var_rv == NULL) {
Py_DECREF(tmp_ass_subvalue_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}

tmp_ass_subscribed_4 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_7 = var_a;
tmp_ass_subscript_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_name);
if (tmp_ass_subscript_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 123;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscript_4);
Py_DECREF(tmp_ass_subscript_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_6;
}
}
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 116;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_attr$_funcs$$$function__1_asdict->m_frame)) {
        frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oococcoooooooc";
goto try_except_handler_6;
branch_end_7:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_issubclass_cls_3;
PyObject *tmp_issubclass_classes_3;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_3 = var_value_type;
tmp_issubclass_classes_3 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_15;
if (par_dict_factory == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dict_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_assign_source_15 = par_dict_factory;
{
    PyObject *old = Nuitka_Cell_GET(var_df);
    Nuitka_Cell_SET(var_df, tmp_assign_source_15);
    Py_INCREF(tmp_assign_source_15);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(Nuitka_Cell_GET(var_df));
tmp_called_value_9 = Nuitka_Cell_GET(var_df);
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_expression_value_8 = var_v;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_items);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 145;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = var_df;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_filter;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[3] = par_retain_collection_types;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_value_serializer;
Py_INCREF(tmp_closure_1[4]);
tmp_args_element_value_9 = MAKE_GENERATOR_attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
frame_frame_attr$_funcs$$$function__1_asdict->m_frame.f_lineno = 126;
tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
if (var_rv == NULL) {
Py_DECREF(tmp_ass_subvalue_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_5 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_9 = var_a;
tmp_ass_subscript_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_name);
if (tmp_ass_subscript_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 126;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscript_5);
Py_DECREF(tmp_ass_subscript_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
PyObject *tmp_expression_value_10;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subvalue_6 = var_v;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_6 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_10 = var_a;
tmp_ass_subscript_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_name);
if (tmp_ass_subscript_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscript_6);
Py_DECREF(tmp_ass_subscript_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
}
branch_end_9:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
PyObject *tmp_expression_value_11;
if (var_v == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subvalue_7 = var_v;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 150;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}

tmp_ass_subscribed_7 = var_rv;
CHECK_OBJECT(var_a);
tmp_expression_value_11 = var_a;
tmp_ass_subscript_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_name);
if (tmp_ass_subscript_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscript_7);
Py_DECREF(tmp_ass_subscript_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oococcoooooooc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 151;
type_description_1 = "oococcoooooooc";
    goto frame_exception_exit_1;
}

tmp_return_value = var_rv;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__1_asdict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__1_asdict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__1_asdict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__1_asdict,
    type_description_1,
    par_inst,
    par_recurse,
    par_filter,
    par_dict_factory,
    par_retain_collection_types,
    par_value_serializer,
    var_attrs,
    var_rv,
    var_a,
    var_v,
    var_value_type,
    var_cf,
    var_items,
    var_df
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__1_asdict == cache_frame_frame_attr$_funcs$$$function__1_asdict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__1_asdict);
    cache_frame_frame_attr$_funcs$$$function__1_asdict = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__1_asdict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_filter);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
par_filter = NULL;
CHECK_OBJECT(par_retain_collection_types);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);
par_retain_collection_types = NULL;
CHECK_OBJECT(par_value_serializer);
CHECK_OBJECT(par_value_serializer);
Py_DECREF(par_value_serializer);
par_value_serializer = NULL;
CHECK_OBJECT(var_attrs);
CHECK_OBJECT(var_attrs);
Py_DECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_value_type);
var_value_type = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
Py_XDECREF(var_items);
var_items = NULL;
CHECK_OBJECT(var_df);
CHECK_OBJECT(var_df);
Py_DECREF(var_df);
var_df = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_filter);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
par_filter = NULL;
CHECK_OBJECT(par_retain_collection_types);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);
par_retain_collection_types = NULL;
CHECK_OBJECT(par_value_serializer);
CHECK_OBJECT(par_value_serializer);
Py_DECREF(par_value_serializer);
par_value_serializer = NULL;
Py_XDECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_value_type);
var_value_type = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
Py_XDECREF(var_items);
var_items = NULL;
CHECK_OBJECT(var_df);
CHECK_OBJECT(var_df);
Py_DECREF(var_df);
var_df = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_recurse);
Py_DECREF(par_recurse);
CHECK_OBJECT(par_dict_factory);
Py_DECREF(par_dict_factory);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_recurse);
Py_DECREF(par_recurse);
CHECK_OBJECT(par_dict_factory);
Py_DECREF(par_dict_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_locals {
PyObject *var_kk;
PyObject *var_vv;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_locals *generator_heap = (struct attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_kk = NULL;
generator_heap->var_vv = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c0a64f5a2e10e5779a99c85474ba5cbc, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[2]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noocccc";
generator_heap->exception_lineno = 126;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 145;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_kk;
    generator_heap->var_kk = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_kk);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_vv;
    generator_heap->var_vv = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_vv);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_kk);
tmp_kw_call_arg_value_0_1 = generator_heap->var_kk;
tmp_kw_call_dict_value_0_1 = Py_True;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 131;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_df);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 132;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 134;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 128;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
PyObject *tmp_kw_call_dict_value_4_2;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(generator_heap->var_vv);
tmp_kw_call_arg_value_0_2 = generator_heap->var_vv;
tmp_kw_call_dict_value_0_2 = Py_False;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_df);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 140;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_2_2 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 141;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 142;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_4_2 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 136;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 136;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    NULL,
    generator_heap->var_kk,
    generator_heap->var_vv,
    generator->m_closure[1],
    generator->m_closure[0],
    generator->m_closure[3],
    generator->m_closure[4]
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_context,
        module_attr$_funcs,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_d6b568f7768e3849583ee28edbc76902,
#endif
        code_objects_c0a64f5a2e10e5779a99c85474ba5cbc,
        closure,
        5,
#if 1
        sizeof(struct attr$_funcs$$$function__1_asdict$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_attr$_funcs$$$function__2__asdict_anything(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_val = python_pars[0];
PyObject *par_is_key = python_pars[1];
struct Nuitka_CellObject *par_filter = Nuitka_Cell_New1(python_pars[2]);
PyObject *par_dict_factory = python_pars[3];
struct Nuitka_CellObject *par_retain_collection_types = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_value_serializer = Nuitka_Cell_New1(python_pars[5]);
PyObject *var_val_type = NULL;
PyObject *var_rv = NULL;
PyObject *var_cf = NULL;
struct Nuitka_CellObject *var_df = Nuitka_Cell_NewEmpty();
PyObject *outline_0_var_i = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__2__asdict_anything;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__2__asdict_anything = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_val);
tmp_type_arg_1 = par_val;
tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_val_type == NULL);
var_val_type = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__2__asdict_anything)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__2__asdict_anything);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__2__asdict_anything == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__2__asdict_anything = MAKE_FUNCTION_FRAME(tstate, code_objects_bef04fc74254c331d71a984685c53562, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__2__asdict_anything->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__2__asdict_anything = cache_frame_frame_attr$_funcs$$$function__2__asdict_anything;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__2__asdict_anything);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__2__asdict_anything) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_val_type);
tmp_cmp_expr_left_1 = var_val_type;
tmp_cmp_expr_right_1 = module_var_accessor_attr$_funcs$_ATOMIC_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ATOMIC_TYPES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oococcoooc";
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
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_val);
tmp_assign_source_2 = par_val;
assert(var_rv == NULL);
Py_INCREF(tmp_assign_source_2);
var_rv = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_value_serializer));
tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_value_serializer);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_value_serializer));
tmp_called_value_1 = Nuitka_Cell_GET(par_value_serializer);
tmp_args_element_value_1 = Py_None;
tmp_args_element_value_2 = Py_None;
CHECK_OBJECT(var_rv);
tmp_args_element_value_3 = var_rv;
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 169;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rv;
    assert(old != NULL);
    var_rv = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_val_type);
tmp_expression_value_1 = var_val_type;
tmp_name_value_1 = mod_consts.const_str_plain___attrs_attrs__;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_called_value_2 = module_var_accessor_attr$_funcs$asdict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asdict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_kw_call_arg_value_0_1 = par_val;
tmp_kw_call_dict_value_0_1 = Py_True;
CHECK_OBJECT(Nuitka_Cell_GET(par_filter));
tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(par_filter);
CHECK_OBJECT(par_dict_factory);
tmp_kw_call_dict_value_2_1 = par_dict_factory;
CHECK_OBJECT(Nuitka_Cell_GET(par_retain_collection_types));
tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(par_retain_collection_types);
CHECK_OBJECT(Nuitka_Cell_GET(par_value_serializer));
tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(par_value_serializer);
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 172;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_efae7b3cd1e0e626fff16b1b5c065407_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_4;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
CHECK_OBJECT(var_val_type);
tmp_issubclass_cls_1 = var_val_type;
tmp_issubclass_classes_1 = mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_retain_collection_types));
tmp_cmp_expr_left_4 = Nuitka_Cell_GET(par_retain_collection_types);
tmp_cmp_expr_right_4 = Py_True;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_val);
tmp_expression_value_2 = par_val;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
assert(var_cf == NULL);
var_cf = tmp_assign_source_5;
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_1;
CHECK_OBJECT(par_is_key);
tmp_truth_name_1 = CHECK_IF_TRUE(par_is_key);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = (PyObject *)&PyTuple_Type;
assert(var_cf == NULL);
Py_INCREF(tmp_assign_source_6);
var_cf = tmp_assign_source_6;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = (PyObject *)&PyList_Type;
assert(var_cf == NULL);
Py_INCREF(tmp_assign_source_7);
var_cf = tmp_assign_source_7;
}
branch_end_6:;
branch_end_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_cf);
tmp_called_value_3 = var_cf;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_val);
tmp_iter_arg_1 = par_val;
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oococcoooc";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_10;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oococcoooc";
exception_lineno = 189;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_12;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
PyObject *tmp_kw_call_dict_value_4_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_4 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_i);
tmp_kw_call_arg_value_0_2 = outline_0_var_i;
tmp_kw_call_dict_value_0_2 = Py_False;
if (Nuitka_Cell_GET(par_filter) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(par_filter);
if (par_dict_factory == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dict_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_2_2 = par_dict_factory;
if (Nuitka_Cell_GET(par_retain_collection_types) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(par_retain_collection_types);
if (Nuitka_Cell_GET(par_value_serializer) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_4_2 = Nuitka_Cell_GET(par_value_serializer);
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 190;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oococcoooc";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 189;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 188;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_8;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
CHECK_OBJECT(var_val_type);
tmp_issubclass_cls_2 = var_val_type;
tmp_issubclass_classes_2 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(par_dict_factory);
tmp_assign_source_13 = par_dict_factory;
assert(Nuitka_Cell_GET(var_df) == NULL);
Py_INCREF(tmp_assign_source_13);
Nuitka_Cell_SET(var_df, tmp_assign_source_13);

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(Nuitka_Cell_GET(var_df));
tmp_called_value_5 = Nuitka_Cell_GET(var_df);
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_val);
tmp_expression_value_3 = par_val;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 222;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_15;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = var_df;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_filter;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[3] = par_retain_collection_types;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_value_serializer;
Py_INCREF(tmp_closure_1[4]);
tmp_args_element_value_5 = MAKE_GENERATOR_attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 203;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_14;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(par_val);
tmp_assign_source_16 = par_val;
assert(var_rv == NULL);
Py_INCREF(tmp_assign_source_16);
var_rv = tmp_assign_source_16;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_value_serializer));
tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_value_serializer);
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(Nuitka_Cell_GET(par_value_serializer));
tmp_called_value_7 = Nuitka_Cell_GET(par_value_serializer);
tmp_args_element_value_6 = Py_None;
tmp_args_element_value_7 = Py_None;
CHECK_OBJECT(var_rv);
tmp_args_element_value_8 = var_rv;
frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oococcoooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rv;
    assert(old != NULL);
    var_rv = tmp_assign_source_17;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_end_7:;
branch_end_4:;
branch_end_3:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__2__asdict_anything, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__2__asdict_anything->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__2__asdict_anything, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__2__asdict_anything,
    type_description_1,
    par_val,
    par_is_key,
    par_filter,
    par_dict_factory,
    par_retain_collection_types,
    par_value_serializer,
    var_val_type,
    var_rv,
    var_cf,
    var_df
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__2__asdict_anything == cache_frame_frame_attr$_funcs$$$function__2__asdict_anything) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__2__asdict_anything);
    cache_frame_frame_attr$_funcs$$$function__2__asdict_anything = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__2__asdict_anything);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_rv);
tmp_return_value = var_rv;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_filter);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
par_filter = NULL;
CHECK_OBJECT(par_retain_collection_types);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);
par_retain_collection_types = NULL;
CHECK_OBJECT(par_value_serializer);
CHECK_OBJECT(par_value_serializer);
Py_DECREF(par_value_serializer);
par_value_serializer = NULL;
CHECK_OBJECT(var_val_type);
CHECK_OBJECT(var_val_type);
Py_DECREF(var_val_type);
var_val_type = NULL;
CHECK_OBJECT(var_rv);
CHECK_OBJECT(var_rv);
Py_DECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
CHECK_OBJECT(var_df);
CHECK_OBJECT(var_df);
Py_DECREF(var_df);
var_df = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_filter);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
par_filter = NULL;
CHECK_OBJECT(par_retain_collection_types);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);
par_retain_collection_types = NULL;
CHECK_OBJECT(par_value_serializer);
CHECK_OBJECT(par_value_serializer);
Py_DECREF(par_value_serializer);
par_value_serializer = NULL;
CHECK_OBJECT(var_val_type);
CHECK_OBJECT(var_val_type);
Py_DECREF(var_val_type);
var_val_type = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
CHECK_OBJECT(var_df);
CHECK_OBJECT(var_df);
Py_DECREF(var_df);
var_df = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_is_key);
Py_DECREF(par_is_key);
CHECK_OBJECT(par_dict_factory);
Py_DECREF(par_dict_factory);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
CHECK_OBJECT(par_is_key);
Py_DECREF(par_is_key);
CHECK_OBJECT(par_dict_factory);
Py_DECREF(par_dict_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_locals {
PyObject *var_kk;
PyObject *var_vv;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_locals *generator_heap = (struct attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_kk = NULL;
generator_heap->var_vv = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5c5e46ee07202c191c4542eb79f7972d, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[2]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noocccc";
generator_heap->exception_lineno = 203;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_kk;
    generator_heap->var_kk = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_kk);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_vv;
    generator_heap->var_vv = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_vv);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 205;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_kk);
tmp_kw_call_arg_value_0_1 = generator_heap->var_kk;
tmp_kw_call_dict_value_0_1 = Py_True;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_df);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 209;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 205;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 205;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
PyObject *tmp_kw_call_dict_value_4_2;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_attr$_funcs$_asdict_anything(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__asdict_anything);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 213;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(generator_heap->var_vv);
tmp_kw_call_arg_value_0_2 = generator_heap->var_vv;
tmp_kw_call_dict_value_0_2 = Py_False;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_df);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 217;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_2_2 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain_collection_types);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_serializer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_4_2 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 213;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_d33ead77377a5ae5b8acd8357207430a_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 213;
generator_heap->type_description_1 = "Noocccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 204;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 203;
generator_heap->type_description_1 = "Noocccc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    NULL,
    generator_heap->var_kk,
    generator_heap->var_vv,
    generator->m_closure[1],
    generator->m_closure[0],
    generator->m_closure[3],
    generator->m_closure[4]
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_context,
        module_attr$_funcs,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_bf193d080c27b70d5950ee1f3b1ee064,
#endif
        code_objects_5c5e46ee07202c191c4542eb79f7972d,
        closure,
        5,
#if 1
        sizeof(struct attr$_funcs$$$function__2__asdict_anything$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_attr$_funcs$$$function__3_astuple(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inst = python_pars[0];
PyObject *par_recurse = python_pars[1];
PyObject *par_filter = python_pars[2];
struct Nuitka_CellObject *par_tuple_factory = Nuitka_Cell_New1(python_pars[3]);
PyObject *par_retain_collection_types = python_pars[4];
PyObject *var_attrs = NULL;
PyObject *var_rv = NULL;
struct Nuitka_CellObject *var_retain = Nuitka_Cell_NewEmpty();
PyObject *var_a = NULL;
PyObject *var_v = NULL;
PyObject *var_value_type = NULL;
PyObject *var_cf = NULL;
PyObject *var_items = NULL;
PyObject *var_df = NULL;
PyObject *outline_0_var_j = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__3_astuple;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__3_astuple = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__3_astuple)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__3_astuple);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__3_astuple == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__3_astuple = MAKE_FUNCTION_FRAME(tstate, code_objects_0e161028db4496fcdc10421e37a46a4a, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__3_astuple->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__3_astuple = cache_frame_frame_attr$_funcs$$$function__3_astuple;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__3_astuple);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__3_astuple) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$fields(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_inst);
tmp_expression_value_1 = par_inst;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 274;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}
assert(var_attrs == NULL);
var_attrs = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_rv == NULL);
var_rv = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_retain_collection_types);
tmp_assign_source_3 = par_retain_collection_types;
assert(Nuitka_Cell_GET(var_retain) == NULL);
Py_INCREF(tmp_assign_source_3);
Nuitka_Cell_SET(var_retain, tmp_assign_source_3);

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_attrs);
tmp_iter_arg_1 = var_attrs;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocooocoooooo";
exception_lineno = 277;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_6;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_inst);
tmp_expression_value_2 = par_inst;
CHECK_OBJECT(var_a);
tmp_expression_value_3 = var_a;
tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_name_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, NULL);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (par_filter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = par_filter;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_filter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = par_filter;
CHECK_OBJECT(var_a);
tmp_args_element_value_2 = var_a;
CHECK_OBJECT(var_v);
tmp_args_element_value_3 = var_v;
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 279;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(var_v);
tmp_type_arg_1 = var_v;
tmp_assign_source_8 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_assign_source_8 == NULL));
{
    PyObject *old = var_value_type;
    var_value_type = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_recurse);
tmp_cmp_expr_left_2 = par_recurse;
tmp_cmp_expr_right_2 = Py_True;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_value_type);
tmp_cmp_expr_left_3 = var_value_type;
tmp_cmp_expr_right_3 = module_var_accessor_attr$_funcs$_ATOMIC_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ATOMIC_TYPES);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_rv;
CHECK_OBJECT(var_v);
tmp_item_value_1 = var_v;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_1;
tmp_called_value_3 = module_var_accessor_attr$_funcs$has(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_value_type);
tmp_args_element_value_4 = var_value_type;
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 285;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 285;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 286;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_rv;
tmp_called_value_4 = module_var_accessor_attr$_funcs$astuple(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_astuple);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_v);
tmp_kw_call_arg_value_0_1 = var_v;
tmp_kw_call_dict_value_0_1 = Py_True;
if (par_filter == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = par_filter;
if (Nuitka_Cell_GET(par_tuple_factory) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(par_tuple_factory);
if (Nuitka_Cell_GET(var_retain) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(var_retain);
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 287;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_item_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple);
}

if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_1 = var_value_type;
tmp_issubclass_classes_1 = mod_consts.const_tuple_type_tuple_type_list_type_set_type_frozenset_tuple;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooocooocoooooo";
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
PyObject *tmp_assign_source_9;
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(var_retain) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_4 = Nuitka_Cell_GET(var_retain);
tmp_cmp_expr_right_4 = Py_True;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_v);
tmp_expression_value_4 = var_v;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_9 = (PyObject *)&PyList_Type;
Py_INCREF(tmp_assign_source_9);
condexpr_end_1:;
{
    PyObject *old = var_cf;
    var_cf = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_v);
tmp_iter_arg_2 = var_v;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocooocoooooo";
exception_lineno = 297;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_j;
    outline_0_var_j = tmp_assign_source_14;
    Py_INCREF(outline_0_var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
int tmp_truth_name_2;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_5 = module_var_accessor_attr$_funcs$has(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_has);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(outline_0_var_j);
tmp_expression_value_5 = outline_0_var_j;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 306;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 306;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_value_6 = module_var_accessor_attr$_funcs$astuple(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_astuple);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(outline_0_var_j);
tmp_kw_call_arg_value_0_2 = outline_0_var_j;
tmp_kw_call_dict_value_0_2 = Py_True;
if (par_filter == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_1_2 = par_filter;
if (Nuitka_Cell_GET(par_tuple_factory) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_2_2 = Nuitka_Cell_GET(par_tuple_factory);
if (Nuitka_Cell_GET(var_retain) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 304;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}

tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(var_retain);
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 299;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_1581a998afeaac4a85a2b84b76848cc4_tuple);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(outline_0_var_j);
tmp_append_value_1 = outline_0_var_j;
Py_INCREF(tmp_append_value_1);
condexpr_end_2:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_10 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_j);
outline_0_var_j = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_j);
outline_0_var_j = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 297;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_items;
    var_items = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 312;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_3 = var_rv;
CHECK_OBJECT(var_cf);
tmp_called_value_7 = var_cf;
CHECK_OBJECT(var_items);
tmp_args_element_value_6 = var_items;
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 312;
tmp_item_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__3_astuple, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__3_astuple, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
CHECK_OBJECT(var_cf);
tmp_issubclass_cls_2 = var_cf;
tmp_issubclass_classes_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_6;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 315;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_attr$_funcs$$$function__3_astuple->m_frame)) {
        frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooocooocoooooo";
goto try_except_handler_6;
branch_no_7:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_4 = var_rv;
CHECK_OBJECT(var_cf);
tmp_direct_call_arg1_1 = var_cf;
CHECK_OBJECT(var_items);
tmp_direct_call_arg2_1 = var_items;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_item_value_4 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 311;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_attr$_funcs$$$function__3_astuple->m_frame)) {
        frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooocooocoooooo";
goto try_except_handler_6;
branch_end_6:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_issubclass_cls_3;
PyObject *tmp_issubclass_classes_3;
CHECK_OBJECT(var_value_type);
tmp_issubclass_cls_3 = var_value_type;
tmp_issubclass_classes_3 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_15;
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (Nuitka_Cell_GET(var_retain) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 320;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = Nuitka_Cell_GET(var_retain);
tmp_cmp_expr_right_6 = Py_True;
tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_11 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(var_value_type);
tmp_assign_source_15 = var_value_type;
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_15 = (PyObject *)&PyDict_Type;
condexpr_end_3:;
{
    PyObject *old = var_df;
    var_df = tmp_assign_source_15;
    Py_INCREF(var_df);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 321;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_5 = var_rv;
CHECK_OBJECT(var_df);
tmp_called_value_8 = var_df;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_v);
tmp_expression_value_6 = var_v;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_items);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 343;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_retain;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_tuple_factory;
Py_INCREF(tmp_closure_1[2]);
tmp_args_element_value_7 = MAKE_GENERATOR_attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 322;
tmp_item_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_item_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_6 = var_rv;
CHECK_OBJECT(var_v);
tmp_item_value_6 = var_v;
tmp_result = LIST_APPEND0(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
branch_end_8:;
branch_end_5:;
branch_end_4:;
branch_end_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_7;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_7 = var_rv;
CHECK_OBJECT(var_v);
tmp_item_value_7 = var_v;
tmp_result = LIST_APPEND0(tmp_list_arg_value_7, tmp_item_value_7);
assert(!(tmp_result == false));
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooocooocoooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_8;
if (Nuitka_Cell_GET(par_tuple_factory) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_7 = Nuitka_Cell_GET(par_tuple_factory);
tmp_cmp_expr_right_7 = (PyObject *)&PyList_Type;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_rv;
Py_INCREF(tmp_return_value);
goto condexpr_end_4;
condexpr_false_4:;
if (Nuitka_Cell_GET(par_tuple_factory) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_10 = Nuitka_Cell_GET(par_tuple_factory);
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = var_rv;
frame_frame_attr$_funcs$$$function__3_astuple->m_frame.f_lineno = 351;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "ooocooocoooooo";
    goto frame_exception_exit_1;
}
condexpr_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__3_astuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__3_astuple->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__3_astuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__3_astuple,
    type_description_1,
    par_inst,
    par_recurse,
    par_filter,
    par_tuple_factory,
    par_retain_collection_types,
    var_attrs,
    var_rv,
    var_retain,
    var_a,
    var_v,
    var_value_type,
    var_cf,
    var_items,
    var_df
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__3_astuple == cache_frame_frame_attr$_funcs$$$function__3_astuple) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__3_astuple);
    cache_frame_frame_attr$_funcs$$$function__3_astuple = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__3_astuple);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_tuple_factory);
CHECK_OBJECT(par_tuple_factory);
Py_DECREF(par_tuple_factory);
par_tuple_factory = NULL;
CHECK_OBJECT(var_attrs);
CHECK_OBJECT(var_attrs);
Py_DECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
CHECK_OBJECT(var_retain);
CHECK_OBJECT(var_retain);
Py_DECREF(var_retain);
var_retain = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_value_type);
var_value_type = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
Py_XDECREF(var_items);
var_items = NULL;
Py_XDECREF(var_df);
var_df = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_tuple_factory);
CHECK_OBJECT(par_tuple_factory);
Py_DECREF(par_tuple_factory);
par_tuple_factory = NULL;
Py_XDECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
CHECK_OBJECT(var_retain);
CHECK_OBJECT(var_retain);
Py_DECREF(var_retain);
var_retain = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_value_type);
var_value_type = NULL;
Py_XDECREF(var_cf);
var_cf = NULL;
Py_XDECREF(var_items);
var_items = NULL;
Py_XDECREF(var_df);
var_df = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_recurse);
Py_DECREF(par_recurse);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_recurse);
Py_DECREF(par_recurse);
CHECK_OBJECT(par_filter);
Py_DECREF(par_filter);
CHECK_OBJECT(par_retain_collection_types);
Py_DECREF(par_retain_collection_types);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_locals {
PyObject *var_kk;
PyObject *var_vv;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_locals *generator_heap = (struct attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_kk = NULL;
generator_heap->var_vv = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3f60d2c1edac0a7e805b6af05b04ab5b, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noocc";
generator_heap->exception_lineno = 322;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



generator_heap->exception_lineno = 343;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_kk;
    generator_heap->var_kk = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_kk);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_vv;
    generator_heap->var_vv = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_vv);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$has(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_kk);
tmp_expression_value_2 = generator_heap->var_kk;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 330;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_2 = module_var_accessor_attr$_funcs$astuple(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_astuple);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 325;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_kk);
tmp_kw_call_arg_value_0_1 = generator_heap->var_kk;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 327;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 328;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 325;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 325;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(generator_heap->var_kk);
tmp_tuple_element_1 = generator_heap->var_kk;
Py_INCREF(tmp_tuple_element_1);
condexpr_end_1:;
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
int tmp_truth_name_2;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_attr$_funcs$has(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_has);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(generator_heap->var_vv);
tmp_expression_value_3 = generator_heap->var_vv;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
generator->m_frame->m_frame.f_lineno = 339;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_2);

generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_value_4 = module_var_accessor_attr$_funcs$astuple(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_astuple);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(generator_heap->var_vv);
tmp_kw_call_arg_value_0_2 = generator_heap->var_vv;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_tuple_factory);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 336;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retain);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 337;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 334;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_tuple_factory_str_plain_retain_collection_types_tuple);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "Noocc";
    goto tuple_build_exception_1;
}
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(generator_heap->var_vv);
tmp_tuple_element_1 = generator_heap->var_vv;
Py_INCREF(tmp_tuple_element_1);
condexpr_end_2:;
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_value_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_value_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 323;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 322;
generator_heap->type_description_1 = "Noocc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    NULL,
    generator_heap->var_kk,
    generator_heap->var_vv,
    generator->m_closure[2],
    generator->m_closure[1]
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_kk);
generator_heap->var_kk = NULL;
Py_XDECREF(generator_heap->var_vv);
generator_heap->var_vv = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_context,
        module_attr$_funcs,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_6419a49fb159320db882dce19dfd2cd9,
#endif
        code_objects_3f60d2c1edac0a7e805b6af05b04ab5b,
        closure,
        3,
#if 1
        sizeof(struct attr$_funcs$$$function__3_astuple$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_attr$_funcs$$$function__4_has(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_attrs = NULL;
PyObject *var_generic_base = NULL;
PyObject *var_generic_attrs = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__4_has;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__4_has = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__4_has)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__4_has);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__4_has == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__4_has = MAKE_FUNCTION_FRAME(tstate, code_objects_8a7118e6c5bdd1423175fc0de6fccc15, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__4_has->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__4_has = cache_frame_frame_attr$_funcs$$$function__4_has;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__4_has);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__4_has) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_name_value_1 = mod_consts.const_str_plain___attrs_attrs__;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_attrs == NULL);
var_attrs = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_attrs);
tmp_cmp_expr_left_1 = var_attrs;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_attr$_funcs$get_generic_base(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_generic_base);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_attr$_funcs$$$function__4_has->m_frame.f_lineno = 372;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_generic_base == NULL);
var_generic_base = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_generic_base);
tmp_cmp_expr_left_2 = var_generic_base;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(var_generic_base);
tmp_expression_value_2 = var_generic_base;
tmp_name_value_2 = mod_consts.const_str_plain___attrs_attrs__;
tmp_default_value_2 = Py_None;
tmp_assign_source_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_generic_attrs == NULL);
var_generic_attrs = tmp_assign_source_3;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_generic_attrs);
tmp_cmp_expr_left_3 = var_generic_attrs;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_generic_attrs);
tmp_assattr_value_1 = var_generic_attrs;
CHECK_OBJECT(par_cls);
tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___attrs_attrs__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_generic_attrs);
tmp_cmp_expr_left_4 = var_generic_attrs;
tmp_cmp_expr_right_4 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__4_has, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__4_has->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__4_has, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__4_has,
    type_description_1,
    par_cls,
    var_attrs,
    var_generic_base,
    var_generic_attrs
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__4_has == cache_frame_frame_attr$_funcs$$$function__4_has) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__4_has);
    cache_frame_frame_attr$_funcs$$$function__4_has = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__4_has);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_attrs);
CHECK_OBJECT(var_attrs);
Py_DECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_generic_base);
var_generic_base = NULL;
Py_XDECREF(var_generic_attrs);
var_generic_attrs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_generic_base);
var_generic_base = NULL;
Py_XDECREF(var_generic_attrs);
var_generic_attrs = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_attr$_funcs$$$function__5_assoc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inst = python_pars[0];
PyObject *par_changes = python_pars[1];
PyObject *var_new = NULL;
PyObject *var_attrs = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_a = NULL;
PyObject *var_msg = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__5_assoc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__5_assoc = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__5_assoc)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__5_assoc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__5_assoc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__5_assoc = MAKE_FUNCTION_FRAME(tstate, code_objects_0666fc491c16854f791aa4349fb89364, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__5_assoc->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__5_assoc = cache_frame_frame_attr$_funcs$$$function__5_assoc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__5_assoc);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__5_assoc) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_attr$_funcs$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_inst);
tmp_args_element_value_1 = par_inst;
frame_frame_attr$_funcs$$$function__5_assoc->m_frame.f_lineno = 414;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_new == NULL);
var_new = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = module_var_accessor_attr$_funcs$fields(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 415;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_inst);
tmp_expression_value_2 = par_inst;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_attr$_funcs$$$function__5_assoc->m_frame.f_lineno = 415;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_attrs == NULL);
var_attrs = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(par_changes);
tmp_dict_arg_1 = par_changes;
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 416;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 416;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_8;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_9;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_attrs);
tmp_expression_value_3 = var_attrs;
CHECK_OBJECT(var_k);
tmp_name_value_1 = var_k;
tmp_default_value_1 = module_var_accessor_attr$_funcs$NOTHING(tstate);
if (unlikely(tmp_default_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOTHING);
}

if (tmp_default_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_a);
tmp_cmp_expr_left_1 = var_a;
tmp_cmp_expr_right_1 = module_var_accessor_attr$_funcs$NOTHING(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOTHING);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_k);
tmp_format_value_1 = var_k;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_aea61737182cd5ea35f967633b8bf0c7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 419;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_4 = var_new;
tmp_format_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_11 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_11;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_attr$_funcs$AttrsAttributeNotFoundError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AttrsAttributeNotFoundError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_3 = var_msg;
frame_frame_attr$_funcs$$$function__5_assoc->m_frame.f_lineno = 420;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 420;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_attr$_funcs$_OBJ_SETATTR(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__OBJ_SETATTR);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 421;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = var_new;
CHECK_OBJECT(var_k);
tmp_args_element_value_5 = var_k;
CHECK_OBJECT(var_v);
tmp_args_element_value_6 = var_v;
frame_frame_attr$_funcs$$$function__5_assoc->m_frame.f_lineno = 421;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
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
if (var_new == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 422;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_new;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__5_assoc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__5_assoc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__5_assoc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__5_assoc,
    type_description_1,
    par_inst,
    par_changes,
    var_new,
    var_attrs,
    var_k,
    var_v,
    var_a,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__5_assoc == cache_frame_frame_attr$_funcs$$$function__5_assoc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__5_assoc);
    cache_frame_frame_attr$_funcs$$$function__5_assoc = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__5_assoc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_new);
var_new = NULL;
CHECK_OBJECT(var_attrs);
CHECK_OBJECT(var_attrs);
Py_DECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_a);
var_a = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new);
var_new = NULL;
Py_XDECREF(var_attrs);
var_attrs = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_changes);
Py_DECREF(par_changes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inst);
Py_DECREF(par_inst);
CHECK_OBJECT(par_changes);
Py_DECREF(par_changes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$_funcs$$$function__6_resolve_types(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_globalns = python_pars[1];
PyObject *par_localns = python_pars[2];
PyObject *par_attribs = python_pars[3];
PyObject *par_include_extras = python_pars[4];
PyObject *var_typing = NULL;
PyObject *var_kwargs = NULL;
PyObject *var_hints = NULL;
PyObject *var_field = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs$$$function__6_resolve_types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_funcs$$$function__6_resolve_types = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_funcs$$$function__6_resolve_types)) {
    Py_XDECREF(cache_frame_frame_attr$_funcs$$$function__6_resolve_types);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_funcs$$$function__6_resolve_types == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_funcs$$$function__6_resolve_types = MAKE_FUNCTION_FRAME(tstate, code_objects_97ff08ddc27b51c47e4564f46414e4c0, module_attr$_funcs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_funcs$$$function__6_resolve_types->m_type_description == NULL);
frame_frame_attr$_funcs$$$function__6_resolve_types = cache_frame_frame_attr$_funcs$$$function__6_resolve_types;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs$$$function__6_resolve_types);
assert(Py_REFCNT(frame_frame_attr$_funcs$$$function__6_resolve_types) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_name_value_1 = mod_consts.const_str_plain___attrs_types_resolved__;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_cmp_expr_right_1 = par_cls;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_1 == NULL));
assert(var_typing == NULL);
Py_INCREF(tmp_assign_source_1);
var_typing = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_globalns;
CHECK_OBJECT(par_globalns);
tmp_dict_value_1 = par_globalns;
tmp_assign_source_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_localns;
CHECK_OBJECT(par_localns);
tmp_dict_value_1 = par_localns;
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_include_extras;
CHECK_OBJECT(par_include_extras);
tmp_dict_value_1 = par_include_extras;
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_kwargs == NULL);
var_kwargs = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_type_hints);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_tuple_element_1 = par_cls;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_kwargs);
tmp_direct_call_arg3_1 = var_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_hints == NULL);
var_hints = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_attribs);
tmp_cmp_expr_left_2 = par_attribs;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_attr$_funcs$fields(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 488;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_attr$_funcs$$$function__6_resolve_types->m_frame.f_lineno = 488;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_attribs);
tmp_iter_arg_1 = par_attribs;
Py_INCREF(tmp_iter_arg_1);
condexpr_end_1:;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 488;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_field;
    var_field = tmp_assign_source_6;
    Py_INCREF(var_field);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_field);
tmp_expression_value_3 = var_field;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_hints);
tmp_cmp_expr_right_3 = var_hints;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
tmp_called_value_2 = module_var_accessor_attr$_funcs$_OBJ_SETATTR(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__OBJ_SETATTR);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_field);
tmp_args_element_value_2 = var_field;
tmp_args_element_value_3 = const_str_plain_type;
CHECK_OBJECT(var_hints);
tmp_expression_value_4 = var_hints;
CHECK_OBJECT(var_field);
tmp_expression_value_5 = var_field;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_attr$_funcs$$$function__6_resolve_types->m_frame.f_lineno = 491;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_cls);
tmp_assattr_value_1 = par_cls;
CHECK_OBJECT(par_cls);
tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___attrs_types_resolved__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs$$$function__6_resolve_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs$$$function__6_resolve_types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs$$$function__6_resolve_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_funcs$$$function__6_resolve_types,
    type_description_1,
    par_cls,
    par_globalns,
    par_localns,
    par_attribs,
    par_include_extras,
    var_typing,
    var_kwargs,
    var_hints,
    var_field
);


// Release cached frame if used for exception.
if (frame_frame_attr$_funcs$$$function__6_resolve_types == cache_frame_frame_attr$_funcs$$$function__6_resolve_types) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_funcs$$$function__6_resolve_types);
    cache_frame_frame_attr$_funcs$$$function__6_resolve_types = NULL;
}

assertFrameObject(frame_frame_attr$_funcs$$$function__6_resolve_types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_cls);
tmp_return_value = par_cls;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_typing);
var_typing = NULL;
Py_XDECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_hints);
var_hints = NULL;
Py_XDECREF(var_field);
var_field = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_typing);
var_typing = NULL;
Py_XDECREF(var_kwargs);
var_kwargs = NULL;
Py_XDECREF(var_hints);
var_hints = NULL;
Py_XDECREF(var_field);
var_field = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_globalns);
Py_DECREF(par_globalns);
CHECK_OBJECT(par_localns);
Py_DECREF(par_localns);
CHECK_OBJECT(par_attribs);
Py_DECREF(par_attribs);
CHECK_OBJECT(par_include_extras);
Py_DECREF(par_include_extras);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_globalns);
Py_DECREF(par_globalns);
CHECK_OBJECT(par_localns);
Py_DECREF(par_localns);
CHECK_OBJECT(par_attribs);
Py_DECREF(par_attribs);
CHECK_OBJECT(par_include_extras);
Py_DECREF(par_include_extras);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__1_asdict(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__1_asdict,
        mod_consts.const_str_plain_asdict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2f591892bfdf22ab160273a76bd53436,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_e4e32e1075fb40f8937aac6a133af908,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__2__asdict_anything(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__2__asdict_anything,
        mod_consts.const_str_plain__asdict_anything,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bef04fc74254c331d71a984685c53562,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_9ccc7618dba80e0e77533e822142884f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__3_astuple(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__3_astuple,
        mod_consts.const_str_plain_astuple,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0e161028db4496fcdc10421e37a46a4a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_0047f8121abbd67f1f41ead05e3ac8db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__4_has(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__4_has,
        mod_consts.const_str_plain_has,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8a7118e6c5bdd1423175fc0de6fccc15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_4d8d997d8c1581341ca861f404107d58,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__5_assoc(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__5_assoc,
        mod_consts.const_str_plain_assoc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0666fc491c16854f791aa4349fb89364,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_5946a8781a490644d37eb438289e72f4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_funcs$$$function__6_resolve_types(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_funcs$$$function__6_resolve_types,
        mod_consts.const_str_plain_resolve_types,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_97ff08ddc27b51c47e4564f46414e4c0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_funcs,
        mod_consts.const_str_digest_a0a0781397a6c05bff4ee1d9b4b8aebf,
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

static function_impl_code const function_table_attr$_funcs[] = {
impl_attr$_funcs$$$function__1_asdict,
impl_attr$_funcs$$$function__2__asdict_anything,
impl_attr$_funcs$$$function__3_astuple,
impl_attr$_funcs$$$function__4_has,
impl_attr$_funcs$$$function__5_assoc,
impl_attr$_funcs$$$function__6_resolve_types,
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

    return Nuitka_Function_GetFunctionState(function, function_table_attr$_funcs);
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
        module_attr$_funcs,
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
        function_table_attr$_funcs,
        sizeof(function_table_attr$_funcs) / sizeof(function_impl_code)
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
static char const *module_full_name = "attr._funcs";
#endif

// Internal entry point for module code.
PyObject *module_code_attr$_funcs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("attr$_funcs");

    // Store the module for future use.
    module_attr$_funcs = module;

    moduledict_attr$_funcs = MODULE_DICT(module_attr$_funcs);

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
        PRINT_STRING("attr$_funcs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("attr$_funcs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("attr$_funcs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "attr._funcs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initattr$_funcs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_attr$_funcs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_attr$_funcs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_attr$_funcs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_attr$_funcs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_attr$_funcs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_attr$_funcs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_attr$_funcs);
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

        UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_funcs;
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
UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_attr$_funcs = MAKE_MODULE_FRAME(code_objects_91264b4e2ea1af4d60667916119593e2, module_attr$_funcs);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_funcs);
assert(Py_REFCNT(frame_frame_attr$_funcs) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_attr$_funcs$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_attr$_funcs$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_attr$_funcs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_attr$_funcs->m_frame.f_lineno = 4;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_2 = (PyObject *)moduledict_attr$_funcs;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_get_generic_base_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_attr$_funcs->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_attr$_funcs,
        mod_consts.const_str_plain_get_generic_base,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_get_generic_base);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__make;
tmp_globals_arg_value_3 = (PyObject *)moduledict_attr$_funcs;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__OBJ_SETATTR_str_plain_NOTHING_str_plain_fields_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_attr$_funcs->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_attr$_funcs,
        mod_consts.const_str_plain__OBJ_SETATTR,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__OBJ_SETATTR);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__OBJ_SETATTR, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_attr$_funcs,
        mod_consts.const_str_plain_NOTHING,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NOTHING);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_NOTHING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_attr$_funcs,
        mod_consts.const_str_plain_fields,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_fields);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_fields, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_attr$_funcs;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AttrsAttributeNotFoundError_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_attr$_funcs->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_attr$_funcs,
        mod_consts.const_str_plain_AttrsAttributeNotFoundError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AttrsAttributeNotFoundError);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_AttrsAttributeNotFoundError, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_funcs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_funcs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_funcs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_attr$_funcs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_frozenset_503760712292348617886ccdb2d56ce5;
UPDATE_STRING_DICT0(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__ATOMIC_TYPES, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_true_none_type_dict_false_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_12 = MAKE_FUNCTION_attr$_funcs$$$function__1_asdict(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_asdict, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;

tmp_assign_source_13 = MAKE_FUNCTION_attr$_funcs$$$function__2__asdict_anything(tstate);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain__asdict_anything, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_true_none_type_tuple_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_14 = MAKE_FUNCTION_attr$_funcs$$$function__3_astuple(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_astuple, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_attr$_funcs$$$function__4_has(tstate);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_has, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_attr$_funcs$$$function__5_assoc(tstate);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_assoc, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_true_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_17 = MAKE_FUNCTION_attr$_funcs$$$function__6_resolve_types(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_attr$_funcs, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_types, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("attr$_funcs", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "attr._funcs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_attr$_funcs);
    return module_attr$_funcs;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_funcs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("attr$_funcs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

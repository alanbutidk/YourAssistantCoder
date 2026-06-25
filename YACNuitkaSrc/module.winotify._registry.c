/* Generated code for Python module 'winotify$_registry'
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



/* The "module_winotify$_registry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_winotify$_registry;
PyDictObject *moduledict_winotify$_registry;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_p;
PyObject *const_str_plain_s;
PyObject *const_str_plain_format_name;
PyObject *const_str_plain_app;
PyObject *const_str_plain_SUBKEY;
PyObject *const_str_plain__key;
PyObject *const_str_plain_executable;
PyObject *const_str_plain__override;
PyObject *const_str_plain_winreg;
PyObject *const_str_plain_ConnectRegistry;
PyObject *const_str_plain_HKEY_CURRENT_USER;
PyObject *const_str_plain_reg;
PyObject *const_str_plain__register;
PyObject *const_str_digest_6151acdf900def370d50f524e6af7912;
PyObject *const_str_plain_OpenKey;
PyObject *const_str_plain_SHELLKEY;
PyObject *const_str_plain_Close;
PyObject *const_str_plain_InvalidKeyStructure;
PyObject *const_str_digest_06d089e1e4cea98ccdb04b02c4bd1f7d;
PyObject *const_str_digest_e0baf394c8de7b445cfd96f65d79d84e;
PyObject *const_str_plain_HKEY;
PyObject *const_str_plain__key_exist;
PyObject *const_str_plain__validate_structure;
PyObject *const_str_plain_CreateKey;
PyObject *const_str_plain_SetValueEx;
PyObject *const_str_plain_REG_SZ;
PyObject *const_str_digest_98c822c6903c9d93fbcb1f05d0f9dfd3;
PyObject *const_str_digest_43b43903652d601277e7cc950ef9b5f5;
PyObject *const_str_space;
PyObject *const_str_digest_b042b3ec03d96ae0cbd0f0d447c16ca0;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_space_str_chr_45_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_2e818e213e1e87fc3fd35ca82ef78945;
PyObject *const_str_digest_44ba3a76cb833dac43b052e6c5b4c323;
PyObject *const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
PyObject *const_str_plain_P;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_10;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_b3afe367f7b28d50890da7c6795e9528;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964;
PyObject *const_tuple_str_plain_p_str_plain_s_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_join;
PyObject *const_str_digest_98b458befafbea31eda6ada840dd9047;
PyObject *const_str_plain_PY_EXE;
PyObject *const_str_digest_50bd9189c156b5539c462ddc680b0a93;
PyObject *const_str_plain_PYW_EXE;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_25;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Registry;
PyObject *const_int_pos_28;
PyObject *const_dict_1e6289381f639601158822fc00a98061;
PyObject *const_dict_59eaad5f29bd9b59a75102c80f4e23f9;
PyObject *const_str_digest_af846fae6abf099cef7a417eeeee6d4f;
PyObject *const_str_digest_07894438f5d0c975aab76422bab5622f;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_digest_964527e00c84f2bdc30e52689ee50713;
PyObject *const_str_digest_1a41e89ed79511ea56659f0819de18d0;
PyObject *const_tuple_6972d861aebe03aff1d183d85ed94fff_tuple;
PyObject *const_dict_4101fcd5b3c3f42eab4dc2441d17709d;
PyObject *const_str_digest_89a6aa0efc6e99bcf8a5a4cdd19f0d60;
PyObject *const_str_digest_ed9668981702e16338d0415b19c98926;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_s_tuple;
PyObject *const_tuple_62e7a2b9edd6520918dfd83bd7a5f187_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_subkey_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
PyObject *const_tuple_str_plain_name_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("winotify._registry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_p);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_name);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUBKEY);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__key);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_executable);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__override);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_winreg);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectRegistry);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_CURRENT_USER);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_reg);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__register);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_6151acdf900def370d50f524e6af7912);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHELLKEY);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Close);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidKeyStructure);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d089e1e4cea98ccdb04b02c4bd1f7d);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0baf394c8de7b445cfd96f65d79d84e);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__key_exist);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_structure);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateKey);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetValueEx);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_REG_SZ);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_98c822c6903c9d93fbcb1f05d0f9dfd3);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_43b43903652d601277e7cc950ef9b5f5);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_b042b3ec03d96ae0cbd0f0d447c16ca0);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_str_chr_45_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e818e213e1e87fc3fd35ca82ef78945);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_44ba3a76cb833dac43b052e6c5b4c323);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3afe367f7b28d50890da7c6795e9528);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_s_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_98b458befafbea31eda6ada840dd9047);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_EXE);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_50bd9189c156b5539c462ddc680b0a93);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYW_EXE);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Registry);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_1e6289381f639601158822fc00a98061);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_59eaad5f29bd9b59a75102c80f4e23f9);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_af846fae6abf099cef7a417eeeee6d4f);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_07894438f5d0c975aab76422bab5622f);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_964527e00c84f2bdc30e52689ee50713);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a41e89ed79511ea56659f0819de18d0);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_6972d861aebe03aff1d183d85ed94fff_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_4101fcd5b3c3f42eab4dc2441d17709d);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_89a6aa0efc6e99bcf8a5a4cdd19f0d60);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed9668981702e16338d0415b19c98926);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_p_str_plain_s_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_62e7a2b9edd6520918dfd83bd7a5f187_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_subkey_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
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
void checkModuleConstants_winotify$_registry(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_p);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_name);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUBKEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUBKEY);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_executable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_executable);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__override);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_winreg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winreg);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectRegistry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectRegistry);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_CURRENT_USER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HKEY_CURRENT_USER);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_reg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reg);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__register));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__register);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_6151acdf900def370d50f524e6af7912));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6151acdf900def370d50f524e6af7912);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenKey);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHELLKEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHELLKEY);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Close);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidKeyStructure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidKeyStructure);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d089e1e4cea98ccdb04b02c4bd1f7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06d089e1e4cea98ccdb04b02c4bd1f7d);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0baf394c8de7b445cfd96f65d79d84e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0baf394c8de7b445cfd96f65d79d84e);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HKEY);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__key_exist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key_exist);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_structure);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateKey);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetValueEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetValueEx);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_REG_SZ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REG_SZ);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_98c822c6903c9d93fbcb1f05d0f9dfd3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98c822c6903c9d93fbcb1f05d0f9dfd3);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_43b43903652d601277e7cc950ef9b5f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43b43903652d601277e7cc950ef9b5f5);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_b042b3ec03d96ae0cbd0f0d447c16ca0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b042b3ec03d96ae0cbd0f0d447c16ca0);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_str_chr_45_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_str_chr_45_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e818e213e1e87fc3fd35ca82ef78945));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e818e213e1e87fc3fd35ca82ef78945);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_44ba3a76cb833dac43b052e6c5b4c323));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44ba3a76cb833dac43b052e6c5b4c323);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_P));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_P);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3afe367f7b28d50890da7c6795e9528));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3afe367f7b28d50890da7c6795e9528);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_p_str_plain_s_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_98b458befafbea31eda6ada840dd9047));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98b458befafbea31eda6ada840dd9047);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_EXE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_EXE);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_50bd9189c156b5539c462ddc680b0a93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50bd9189c156b5539c462ddc680b0a93);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYW_EXE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYW_EXE);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_25));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_25);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Registry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Registry);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_28));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_28);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_1e6289381f639601158822fc00a98061));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1e6289381f639601158822fc00a98061);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_59eaad5f29bd9b59a75102c80f4e23f9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_59eaad5f29bd9b59a75102c80f4e23f9);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_af846fae6abf099cef7a417eeeee6d4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af846fae6abf099cef7a417eeeee6d4f);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_07894438f5d0c975aab76422bab5622f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07894438f5d0c975aab76422bab5622f);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_964527e00c84f2bdc30e52689ee50713));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_964527e00c84f2bdc30e52689ee50713);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a41e89ed79511ea56659f0819de18d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a41e89ed79511ea56659f0819de18d0);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_6972d861aebe03aff1d183d85ed94fff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6972d861aebe03aff1d183d85ed94fff_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_4101fcd5b3c3f42eab4dc2441d17709d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4101fcd5b3c3f42eab4dc2441d17709d);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_89a6aa0efc6e99bcf8a5a4cdd19f0d60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89a6aa0efc6e99bcf8a5a4cdd19f0d60);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed9668981702e16338d0415b19c98926));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed9668981702e16338d0415b19c98926);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_p_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_p_str_plain_s_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_62e7a2b9edd6520918dfd83bd7a5f187_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_62e7a2b9edd6520918dfd83bd7a5f187_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_subkey_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_subkey_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
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
static PyObject *module_var_accessor_winotify$_registry$HKEY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_HKEY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HKEY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HKEY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HKEY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HKEY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_HKEY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_HKEY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HKEY);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$InvalidKeyStructure(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidKeyStructure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidKeyStructure);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidKeyStructure, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidKeyStructure);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidKeyStructure, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidKeyStructure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidKeyStructure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidKeyStructure);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$P(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_P);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_P);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_P, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_P);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_P, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_P);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_P);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_P);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$PY_EXE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PY_EXE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PY_EXE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PY_EXE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PY_EXE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$SHELLKEY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SHELLKEY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHELLKEY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHELLKEY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHELLKEY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHELLKEY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SHELLKEY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SHELLKEY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SHELLKEY);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$SUBKEY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBKEY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUBKEY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUBKEY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUBKEY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUBKEY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBKEY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBKEY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBKEY);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$format_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_format_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_format_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_format_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_format_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_registry$winreg(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify$_registry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify$_registry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify$_registry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_winreg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_winreg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_winreg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_winreg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_db51f849805f3aa1d74ca3f8a5517e63;
static PyCodeObject *code_objects_58e6c8564a930a55ed3740d94938269c;
static PyCodeObject *code_objects_2651d9bb5d87e5f8c777c33bf2f2f372;
static PyCodeObject *code_objects_864a48b87ba97ab4367d87845ceb1321;
static PyCodeObject *code_objects_8fed1929571a549f7bad485fd61a0352;
static PyCodeObject *code_objects_8a4bba0481245f42ab7c9d92e4f8c481;
static PyCodeObject *code_objects_0e1f1c0ada7cdd1d92d6bd7e9f7438c8;
static PyCodeObject *code_objects_500dea41650ddeacfd5303fa4489cf0f;
static PyCodeObject *code_objects_52b62c450b34d79272741ad2f0575195;
static PyCodeObject *code_objects_c36d61096283f09ba90752fcfcd37944;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_89a6aa0efc6e99bcf8a5a4cdd19f0d60); CHECK_OBJECT(module_filename_obj);
code_objects_db51f849805f3aa1d74ca3f8a5517e63 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_ed9668981702e16338d0415b19c98926, mod_consts.const_str_digest_ed9668981702e16338d0415b19c98926, NULL, NULL, 0, 0, 0);
code_objects_58e6c8564a930a55ed3740d94938269c = MAKE_CODE_OBJECT(module_filename_obj, 28, 0, mod_consts.const_str_plain_Registry, mod_consts.const_str_plain_Registry, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2651d9bb5d87e5f8c777c33bf2f2f372 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4, mod_consts.const_tuple_str_plain_self_str_plain_p_str_plain_s_tuple, NULL, 3, 0, 0);
code_objects_864a48b87ba97ab4367d87845ceb1321 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_af846fae6abf099cef7a417eeeee6d4f, mod_consts.const_tuple_62e7a2b9edd6520918dfd83bd7a5f187_tuple, NULL, 4, 1, 0);
code_objects_8fed1929571a549f7bad485fd61a0352 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_b3afe367f7b28d50890da7c6795e9528, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8a4bba0481245f42ab7c9d92e4f8c481 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0e1f1c0ada7cdd1d92d6bd7e9f7438c8 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__key_exist, mod_consts.const_str_digest_964527e00c84f2bdc30e52689ee50713, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_500dea41650ddeacfd5303fa4489cf0f = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__register, mod_consts.const_str_digest_1a41e89ed79511ea56659f0819de18d0, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_subkey_tuple, NULL, 1, 0, 0);
code_objects_52b62c450b34d79272741ad2f0575195 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_structure, mod_consts.const_str_digest_07894438f5d0c975aab76422bab5622f, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 1, 0, 0);
code_objects_c36d61096283f09ba90752fcfcd37944 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_format_name, mod_consts.const_str_plain_format_name, mod_consts.const_tuple_str_plain_name_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__2___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__3___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__5__validate_structure(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__6__key_exist(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__7__register(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__8_format_name(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_winotify$_registry$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_p = python_pars[1];
PyObject *par_s = python_pars[2];
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_p);
tmp_tuple_element_1 = par_p;
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_s);
tmp_tuple_element_1 = par_s;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2651d9bb5d87e5f8c777c33bf2f2f372, module_winotify$_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__1___init__->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__1___init__ = cache_frame_frame_winotify$_registry$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__1___init__);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__1___init__) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;
type_description_1 = "ooo";
    goto try_except_handler_2;
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



exception_lineno = 12;
type_description_1 = "ooo";
    goto try_except_handler_2;
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



exception_lineno = 12;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_p, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_s, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__1___init__,
    type_description_1,
    par_self,
    par_p,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__1___init__ == cache_frame_frame_winotify$_registry$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__1___init__);
    cache_frame_frame_winotify$_registry$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__1___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$_registry$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8fed1929571a549f7bad485fd61a0352, module_winotify$_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__2___repr__->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__2___repr__ = cache_frame_frame_winotify$_registry$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__2___repr__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_s);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__2___repr__ == cache_frame_frame_winotify$_registry$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__2___repr__);
    cache_frame_frame_winotify$_registry$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__2___repr__);

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


static PyObject *impl_winotify$_registry$$$function__3___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__3___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__3___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__3___str__)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__3___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__3___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__3___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8a4bba0481245f42ab7c9d92e4f8c481, module_winotify$_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__3___str__->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__3___str__ = cache_frame_frame_winotify$_registry$$$function__3___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__3___str__);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__3___str__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_p);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__3___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__3___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__3___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__3___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__3___str__ == cache_frame_frame_winotify$_registry$$$function__3___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__3___str__);
    cache_frame_frame_winotify$_registry$$$function__3___str__ = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__3___str__);

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


static PyObject *impl_winotify$_registry$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_app_id = python_pars[1];
PyObject *par_executable = python_pars[2];
PyObject *par_script_path = python_pars[3];
PyObject *par_force_override = python_pars[4];
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_864a48b87ba97ab4367d87845ceb1321, module_winotify$_registry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__4___init__->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__4___init__ = cache_frame_frame_winotify$_registry$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__4___init__);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_winotify$_registry$format_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_format_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_app_id);
tmp_args_element_value_1 = par_app_id;
frame_frame_winotify$_registry$$$function__4___init__->m_frame.f_lineno = 50;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_app, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_winotify$_registry$SUBKEY(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUBKEY);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_app);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 51;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$_registry$$$function__4___init__->m_frame.f_lineno = 51;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__key, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_executable);
tmp_assattr_value_3 = par_executable;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_executable, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_script_path);
tmp_assattr_value_4 = par_script_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, const_str_plain_path, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_force_override);
tmp_assattr_value_5 = par_force_override;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__override, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_6;
tmp_expression_value_3 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ConnectRegistry);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = Py_None;
tmp_expression_value_4 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_HKEY_CURRENT_USER);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$_registry$$$function__4___init__->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assattr_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_reg, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_winotify$_registry$$$function__4___init__->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__register);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__4___init__,
    type_description_1,
    par_self,
    par_app_id,
    par_executable,
    par_script_path,
    par_force_override
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__4___init__ == cache_frame_frame_winotify$_registry$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__4___init__);
    cache_frame_frame_winotify$_registry$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__4___init__);

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
CHECK_OBJECT(par_app_id);
Py_DECREF(par_app_id);
CHECK_OBJECT(par_executable);
Py_DECREF(par_executable);
CHECK_OBJECT(par_script_path);
Py_DECREF(par_script_path);
CHECK_OBJECT(par_force_override);
Py_DECREF(par_force_override);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_app_id);
Py_DECREF(par_app_id);
CHECK_OBJECT(par_executable);
Py_DECREF(par_executable);
CHECK_OBJECT(par_script_path);
Py_DECREF(par_script_path);
CHECK_OBJECT(par_force_override);
Py_DECREF(par_force_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$_registry$$$function__5__validate_structure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__5__validate_structure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__5__validate_structure = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__5__validate_structure)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__5__validate_structure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__5__validate_structure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__5__validate_structure = MAKE_FUNCTION_FRAME(tstate, code_objects_52b62c450b34d79272741ad2f0575195, module_winotify$_registry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__5__validate_structure->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__5__validate_structure = cache_frame_frame_winotify$_registry$$$function__5__validate_structure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__5__validate_structure);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__5__validate_structure) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_OpenKey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_reg);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 60;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__key);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 60;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame.f_lineno = 60;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_key == NULL);
var_key = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_call_result_1;
tmp_expression_value_4 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_OpenKey);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_3 = var_key;
tmp_args_element_value_4 = module_var_accessor_winotify$_registry$SHELLKEY(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SHELLKEY);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 62;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame.f_lineno = 62;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__5__validate_structure, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__5__validate_structure, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_WindowsError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_3 = module_var_accessor_winotify$_registry$InvalidKeyStructure(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidKeyStructure);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_06d089e1e4cea98ccdb04b02c4bd1f7d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_app);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e0baf394c8de7b445cfd96f65d79d84e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_5 == NULL));
frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame.f_lineno = 64;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 61;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame)) {
        frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_1:;
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
// End of try:
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__5__validate_structure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__5__validate_structure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__5__validate_structure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__5__validate_structure,
    type_description_1,
    par_self,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__5__validate_structure == cache_frame_frame_winotify$_registry$$$function__5__validate_structure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__5__validate_structure);
    cache_frame_frame_winotify$_registry$$$function__5__validate_structure = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__5__validate_structure);

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
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_winotify$_registry$$$function__6__key_exist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__6__key_exist;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__6__key_exist = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__6__key_exist)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__6__key_exist);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__6__key_exist == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__6__key_exist = MAKE_FUNCTION_FRAME(tstate, code_objects_0e1f1c0ada7cdd1d92d6bd7e9f7438c8, module_winotify$_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__6__key_exist->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__6__key_exist = cache_frame_frame_winotify$_registry$$$function__6__key_exist;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__6__key_exist);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__6__key_exist) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_OpenKey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = module_var_accessor_winotify$_registry$HKEY(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HKEY);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__key);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_winotify$_registry$$$function__6__key_exist->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_winotify$_registry$$$function__6__key_exist->m_frame.f_lineno = 69;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__6__key_exist, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__6__key_exist, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_WindowsError;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 68;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__6__key_exist->m_frame)) {
        frame_frame_winotify$_registry$$$function__6__key_exist->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
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
// End of try:
try_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__6__key_exist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__6__key_exist->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__6__key_exist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__6__key_exist,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__6__key_exist == cache_frame_frame_winotify$_registry$$$function__6__key_exist) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__6__key_exist);
    cache_frame_frame_winotify$_registry$$$function__6__key_exist = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__6__key_exist);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
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


static PyObject *impl_winotify$_registry$$$function__7__register(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_key = NULL;
PyObject *var_subkey = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__7__register;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__7__register = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__7__register)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__7__register);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__7__register == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__7__register = MAKE_FUNCTION_FRAME(tstate, code_objects_500dea41650ddeacfd5303fa4489cf0f, module_winotify$_registry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__7__register->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__7__register = cache_frame_frame_winotify$_registry$$$function__7__register;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__7__register);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__7__register) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 76;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__key_exist);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__override);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 76;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 77;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__validate_structure);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CreateKey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reg);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__key);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_key == NULL);
var_key = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_key);
tmp_assign_source_2 = var_key;
assert(tmp_with_2__source == NULL);
Py_INCREF(tmp_assign_source_2);
tmp_with_2__source = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_5 = tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 80;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_6 = tmp_with_2__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_7 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SetValueEx);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_3 = var_key;
tmp_args_element_value_4 = const_str_empty;
tmp_args_element_value_5 = const_int_0;
tmp_expression_value_8 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_REG_SZ);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_98c822c6903c9d93fbcb1f05d0f9dfd3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_app);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_10 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_SetValueEx);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_8 = var_key;
tmp_args_element_value_9 = mod_consts.const_str_digest_43b43903652d601277e7cc950ef9b5f5;
tmp_args_element_value_10 = const_int_0;
tmp_expression_value_11 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 82;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_REG_SZ);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 82;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_args_element_value_12 = const_str_empty;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_12 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_CreateKey);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_13 = var_key;
tmp_args_element_value_14 = module_var_accessor_winotify$_registry$SHELLKEY(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SHELLKEY);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 83;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(var_subkey == NULL);
var_subkey = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_subkey);
tmp_assign_source_7 = var_subkey;
assert(tmp_with_1__source == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_with_1__source = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_13 = tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_13, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 84;
tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_14 = tmp_with_1__source;
tmp_assign_source_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_14, const_str_plain___exit__);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_9;
}
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_19;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_format_spec_2;
tmp_expression_value_15 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_SetValueEx);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_subkey);
tmp_args_element_value_15 = var_subkey;
tmp_args_element_value_16 = const_str_empty;
tmp_args_element_value_17 = const_int_0;
tmp_expression_value_16 = module_var_accessor_winotify$_registry$winreg(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_REG_SZ);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_executable);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_path);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_b042b3ec03d96ae0cbd0f0d447c16ca0;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_18);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_19 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_19 == NULL));
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__7__register, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__7__register, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
tmp_args_element_value_20 = EXC_TYPE(tstate);
tmp_args_element_value_21 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_21); 
tmp_args_element_value_22 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_22 == NULL) {
    tmp_args_element_value_22 = Py_None;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_8;
}
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
    exception_lineno = 84;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__7__register->m_frame)) {
        frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_8;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 84;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__7__register->m_frame)) {
        frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_8;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_6;
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
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 84;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 84;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
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
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__7__register, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__7__register, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_12;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
tmp_args_element_value_23 = EXC_TYPE(tstate);
tmp_args_element_value_24 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_24); 
tmp_args_element_value_25 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_25 == NULL) {
    tmp_args_element_value_25 = Py_None;
}
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 80;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_9;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 80;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__7__register->m_frame)) {
        frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_9;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 80;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$_registry$$$function__7__register->m_frame)) {
        frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_9;
branch_end_6:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_8;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 80;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_8:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_9;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
frame_frame_winotify$_registry$$$function__7__register->m_frame.f_lineno = 80;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_9:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__7__register, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__7__register->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__7__register, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__7__register,
    type_description_1,
    par_self,
    var_key,
    var_subkey
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__7__register == cache_frame_frame_winotify$_registry$$$function__7__register) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__7__register);
    cache_frame_frame_winotify$_registry$$$function__7__register = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__7__register);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
Py_XDECREF(var_subkey);
var_subkey = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_subkey);
var_subkey = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_winotify$_registry$$$function__8_format_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$function__8_format_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$_registry$$$function__8_format_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$_registry$$$function__8_format_name)) {
    Py_XDECREF(cache_frame_frame_winotify$_registry$$$function__8_format_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$_registry$$$function__8_format_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$_registry$$$function__8_format_name = MAKE_FUNCTION_FRAME(tstate, code_objects_c36d61096283f09ba90752fcfcd37944, module_winotify$_registry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$_registry$$$function__8_format_name->m_type_description == NULL);
frame_frame_winotify$_registry$$$function__8_format_name = cache_frame_frame_winotify$_registry$$$function__8_format_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$function__8_format_name);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$function__8_format_name) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_name);
tmp_expression_value_1 = par_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$_registry$$$function__8_format_name->m_frame.f_lineno = 89;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_space_str_chr_45_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$function__8_format_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$function__8_format_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$function__8_format_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$function__8_format_name,
    type_description_1,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_winotify$_registry$$$function__8_format_name == cache_frame_frame_winotify$_registry$$$function__8_format_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$_registry$$$function__8_format_name);
    cache_frame_frame_winotify$_registry$$$function__8_format_name = NULL;
}

assertFrameObject(frame_frame_winotify$_registry$$$function__8_format_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_15e55ae1a87d3705bf513e82eb39e5b4,
#endif
        code_objects_2651d9bb5d87e5f8c777c33bf2f2f372,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__2___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b3afe367f7b28d50890da7c6795e9528,
#endif
        code_objects_8fed1929571a549f7bad485fd61a0352,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__3___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__3___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67c5a83e422c3bfd5f8bbd2486bd8964,
#endif
        code_objects_8a4bba0481245f42ab7c9d92e4f8c481,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af846fae6abf099cef7a417eeeee6d4f,
#endif
        code_objects_864a48b87ba97ab4367d87845ceb1321,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_winotify$_registry,
        mod_consts.const_str_digest_6151acdf900def370d50f524e6af7912,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__5__validate_structure(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__5__validate_structure,
        mod_consts.const_str_plain__validate_structure,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_07894438f5d0c975aab76422bab5622f,
#endif
        code_objects_52b62c450b34d79272741ad2f0575195,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__6__key_exist(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__6__key_exist,
        mod_consts.const_str_plain__key_exist,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_964527e00c84f2bdc30e52689ee50713,
#endif
        code_objects_0e1f1c0ada7cdd1d92d6bd7e9f7438c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__7__register(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__7__register,
        mod_consts.const_str_plain__register,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1a41e89ed79511ea56659f0819de18d0,
#endif
        code_objects_500dea41650ddeacfd5303fa4489cf0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify$_registry,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$_registry$$$function__8_format_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$_registry$$$function__8_format_name,
        mod_consts.const_str_plain_format_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c36d61096283f09ba90752fcfcd37944,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify$_registry,
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

static function_impl_code const function_table_winotify$_registry[] = {
impl_winotify$_registry$$$function__1___init__,
impl_winotify$_registry$$$function__2___repr__,
impl_winotify$_registry$$$function__3___str__,
impl_winotify$_registry$$$function__4___init__,
impl_winotify$_registry$$$function__5__validate_structure,
impl_winotify$_registry$$$function__6__key_exist,
impl_winotify$_registry$$$function__7__register,
impl_winotify$_registry$$$function__8_format_name,
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

    return Nuitka_Function_GetFunctionState(function, function_table_winotify$_registry);
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
        module_winotify$_registry,
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
        function_table_winotify$_registry,
        sizeof(function_table_winotify$_registry) / sizeof(function_impl_code)
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
static char const *module_full_name = "winotify._registry";
#endif

// Internal entry point for module code.
PyObject *module_code_winotify$_registry(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("winotify$_registry");

    // Store the module for future use.
    module_winotify$_registry = module;

    moduledict_winotify$_registry = MODULE_DICT(module_winotify$_registry);

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
        PRINT_STRING("winotify$_registry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("winotify$_registry: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("winotify$_registry: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify._registry" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwinotify$_registry\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_winotify$_registry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_winotify$_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_winotify$_registry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_winotify$_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_winotify$_registry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_winotify$_registry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_winotify$_registry);
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

        UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$_registry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_winotify$_registry$$$class__1_P_10 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
int tmp_res;
PyObject *locals_winotify$_registry$$$class__2_InvalidKeyStructure_25 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_winotify$_registry$$$class__3_Registry_28 = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$_registry$$$class__3_Registry_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_winotify$_registry = MAKE_MODULE_FRAME(code_objects_db51f849805f3aa1d74ca3f8a5517e63, module_winotify$_registry);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry);
assert(Py_REFCNT(frame_frame_winotify$_registry) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_winotify$_registry$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_winotify$_registry$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain_path, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_winreg;
tmp_globals_arg_value_1 = (PyObject *)moduledict_winotify$_registry;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_winotify$_registry->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_winotify$_registry$winreg(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HKEY_CURRENT_USER);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_HKEY, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_digest_2e818e213e1e87fc3fd35ca82ef78945;
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SUBKEY, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_44ba3a76cb833dac43b052e6c5b4c323;
UPDATE_STRING_DICT0(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_SHELLKEY, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_winotify$_registry$$$class__1_P_10 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_P;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_10;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__2___repr__(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__3___str__(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_p_str_plain_s_tuple;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__1_P_10, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_P;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_winotify$_registry$$$class__1_P_10;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_winotify$_registry->m_frame.f_lineno = 10;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_13;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_12 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_12);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_winotify$_registry$$$class__1_P_10);
locals_winotify$_registry$$$class__1_P_10 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$_registry$$$class__1_P_10);
locals_winotify$_registry$$$class__1_P_10 = NULL;
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
exception_lineno = 10;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_P, tmp_assign_source_12);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_winotify$_registry$P(tstate);
assert(!(tmp_called_value_2 == NULL));
tmp_expression_value_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_path_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_executable);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_98b458befafbea31eda6ada840dd9047;
frame_frame_winotify$_registry->m_frame.f_lineno = 19;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_PY_EXE;
frame_frame_winotify$_registry->m_frame.f_lineno = 19;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_path_arg_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_winotify$_registry$P(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_P);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_5 == NULL));
tmp_path_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_executable);
if (tmp_path_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
CHECK_OBJECT(tmp_path_arg_2);
Py_DECREF(tmp_path_arg_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_50bd9189c156b5539c462ddc680b0a93;
frame_frame_winotify$_registry->m_frame.f_lineno = 21;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_PYW_EXE;
frame_frame_winotify$_registry->m_frame.f_lineno = 21;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_8};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_PYW_EXE, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_16 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_6 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_18 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_18;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_InvalidKeyStructure;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_winotify$_registry->m_frame.f_lineno = 25;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_9 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_10, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_11 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
frame_frame_winotify$_registry->m_frame.f_lineno = 25;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 25;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_20;
}
branch_end_1:;
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_winotify$_registry$$$class__2_InvalidKeyStructure_25 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
tmp_res = PyObject_SetItem(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidKeyStructure;
tmp_res = PyObject_SetItem(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_25;
tmp_res = PyObject_SetItem(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_InvalidKeyStructure;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_winotify$_registry$$$class__2_InvalidKeyStructure_25;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_winotify$_registry->m_frame.f_lineno = 25;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_21 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25);
locals_winotify$_registry$$$class__2_InvalidKeyStructure_25 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$_registry$$$class__2_InvalidKeyStructure_25);
locals_winotify$_registry$$$class__2_InvalidKeyStructure_25 = NULL;
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
exception_lineno = 25;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidKeyStructure, tmp_assign_source_21);
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
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_winotify$_registry$$$class__3_Registry_28 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Registry;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_winotify$_registry$$$class__3_Registry_2 = MAKE_CLASS_FRAME(tstate, code_objects_58e6c8564a930a55ed3740d94938269c, module_winotify$_registry, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$_registry$$$class__3_Registry_2);
assert(Py_REFCNT(frame_frame_winotify$_registry$$$class__3_Registry_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_tuple_element_5 = module_var_accessor_winotify$_registry$PY_EXE(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PY_EXE);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_str_empty;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_5);
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_1e6289381f639601158822fc00a98061);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_59eaad5f29bd9b59a75102c80f4e23f9);

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__4___init__(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry$$$class__3_Registry_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry$$$class__3_Registry_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry$$$class__3_Registry_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$_registry$$$class__3_Registry_2,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_winotify$_registry$$$class__3_Registry_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__5__validate_structure(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain__validate_structure, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__6__key_exist(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain__key_exist, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_winotify$_registry$$$function__7__register(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain__register, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_6972d861aebe03aff1d183d85ed94fff_tuple;
tmp_result = DICT_SET_ITEM(locals_winotify$_registry$$$class__3_Registry_28, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
tmp_called_value_8 = (PyObject *)&PyType_Type;
tmp_tuple_element_6 = mod_consts.const_str_plain_Registry;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_winotify$_registry$$$class__3_Registry_28;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_winotify$_registry->m_frame.f_lineno = 28;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_25 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_25);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_winotify$_registry$$$class__3_Registry_28);
locals_winotify$_registry$$$class__3_Registry_28 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$_registry$$$class__3_Registry_28);
locals_winotify$_registry$$$class__3_Registry_28 = NULL;
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
exception_lineno = 28;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$_registry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$_registry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$_registry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_winotify$_registry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_4101fcd5b3c3f42eab4dc2441d17709d);

tmp_assign_source_27 = MAKE_FUNCTION_winotify$_registry$$$function__8_format_name(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_winotify$_registry, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name, tmp_assign_source_27);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("winotify$_registry", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify._registry" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_winotify$_registry);
    return module_winotify$_registry;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify$_registry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("winotify$_registry", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

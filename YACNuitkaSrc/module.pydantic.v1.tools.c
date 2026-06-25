/* Generated code for Python module 'pydantic$v1$tools'
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



/* The "module_pydantic$v1$tools" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$v1$tools;
PyDictObject *moduledict_pydantic$v1$tools;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_956becde59a4306e69900d3df0b4df91;
PyObject *const_str_plain_display_as_type;
PyObject *const_str_chr_93;
PyObject *const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
PyObject *const_tuple_str_plain_create_model_tuple;
PyObject *const_str_plain_create_model;
PyObject *const_str_plain__generate_parsing_type_name;
PyObject *const_tuple_str_plain___root___tuple;
PyObject *const_str_plain__get_parsing_type;
PyObject *const_tuple_str_plain_type_name_tuple;
PyObject *const_str_plain___root__;
PyObject *const_str_plain_load_file;
PyObject *const_tuple_72e38144c74c122bf004d8ef314eba56_tuple;
PyObject *const_str_plain_parse_obj_as;
PyObject *const_str_plain_load_str_bytes;
PyObject *const_str_plain_schema;
PyObject *const_str_digest_0693c5b68a7cafba31c75d38a40a35ed;
PyObject *const_str_plain_schema_json;
PyObject *const_str_digest_c11c181cfe55547b54235abf93bd3b52;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_json;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_digest_b84ed0c2a72c57c7ed4f3e151060bbdc;
PyObject *const_tuple_c9c4cb9d4fa54dad28629ca57b37eefa_tuple;
PyObject *const_str_plain_Protocol;
PyObject *const_str_digest_7f086381f71e2e8db83ada4d56c09400;
PyObject *const_tuple_str_plain_StrBytes_tuple;
PyObject *const_str_plain_StrBytes;
PyObject *const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
PyObject *const_tuple_str_plain_display_as_type_tuple;
PyObject *const_tuple_533d51359b5086d829bd5a4b5c4e8cf8_tuple;
PyObject *const_str_plain_NameFactory;
PyObject *const_str_plain_type_;
PyObject *const_str_plain_return;
PyObject *const_tuple_int_pos_2048_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b;
PyObject *const_str_plain_type_name;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_str_plain_obj;
PyObject *const_str_plain_content_type;
PyObject *const_str_plain_utf8;
PyObject *const_str_plain_proto;
PyObject *const_str_plain_allow_pickle;
PyObject *const_str_plain_json_loads;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_parse_file_as;
PyObject *const_str_plain_parse_raw_as;
PyObject *const_dict_f605d330d86c5c657fb09dde7db605ae;
PyObject *const_str_plain_title;
PyObject *const_str_plain_schema_kwargs;
PyObject *const_str_plain_DictStrAny;
PyObject *const_str_plain_schema_of;
PyObject *const_str_plain_schema_json_kwargs;
PyObject *const_str_plain_schema_json_of;
PyObject *const_str_digest_fe8d71bca3070344cb65ef26d31d1a43;
PyObject *const_str_digest_1516763e9019ede513ceaba3f5e62bc7;
PyObject *const_tuple_str_plain_type__tuple;
PyObject *const_tuple_str_plain_type__str_plain_type_name_str_plain_create_model_tuple;
PyObject *const_tuple_510f1d75bf4fb6314dc8ef5abd685382_tuple;
PyObject *const_tuple_2dd443470477d69b2287daec1f4f315e_tuple;
PyObject *const_tuple_01308b79f8dfcf61cc770ca3c0e21e6a_tuple;
PyObject *const_tuple_str_plain_type__str_plain_title_str_plain_schema_json_kwargs_tuple;
PyObject *const_tuple_str_plain_type__str_plain_title_str_plain_schema_kwargs_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.v1.tools"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_956becde59a4306e69900d3df0b4df91);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_model_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_parsing_type_name);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___root___tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_parsing_type);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_name_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___root__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_file);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_72e38144c74c122bf004d8ef314eba56_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj_as);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_str_bytes);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_0693c5b68a7cafba31c75d38a40a35ed);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_c11c181cfe55547b54235abf93bd3b52);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_b84ed0c2a72c57c7ed4f3e151060bbdc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_c9c4cb9d4fa54dad28629ca57b37eefa_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f086381f71e2e8db83ada4d56c09400);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StrBytes_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrBytes);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_display_as_type_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_533d51359b5086d829bd5a4b5c4e8cf8_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameFactory);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2048_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_name);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_type);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf8);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_proto);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_pickle);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_loads);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_file_as);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_raw_as);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_f605d330d86c5c657fb09dde7db605ae);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_kwargs);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_DictStrAny);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_of);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_kwargs);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_of);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe8d71bca3070344cb65ef26d31d1a43);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_1516763e9019ede513ceaba3f5e62bc7);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_type_name_str_plain_create_model_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_510f1d75bf4fb6314dc8ef5abd685382_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_2dd443470477d69b2287daec1f4f315e_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_01308b79f8dfcf61cc770ca3c0e21e6a_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_json_kwargs_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_kwargs_tuple);
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
void checkModuleConstants_pydantic$v1$tools(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_956becde59a4306e69900d3df0b4df91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_956becde59a4306e69900d3df0b4df91);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_display_as_type);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_model_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_parsing_type_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generate_parsing_type_name);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___root___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___root___tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_parsing_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_parsing_type);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_name_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___root__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___root__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_file);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_72e38144c74c122bf004d8ef314eba56_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_72e38144c74c122bf004d8ef314eba56_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj_as));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_obj_as);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_str_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_str_bytes);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_0693c5b68a7cafba31c75d38a40a35ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0693c5b68a7cafba31c75d38a40a35ed);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_json);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_c11c181cfe55547b54235abf93bd3b52));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c11c181cfe55547b54235abf93bd3b52);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_b84ed0c2a72c57c7ed4f3e151060bbdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b84ed0c2a72c57c7ed4f3e151060bbdc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_c9c4cb9d4fa54dad28629ca57b37eefa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c9c4cb9d4fa54dad28629ca57b37eefa_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f086381f71e2e8db83ada4d56c09400));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f086381f71e2e8db83ada4d56c09400);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StrBytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StrBytes_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrBytes);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_display_as_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_display_as_type_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_533d51359b5086d829bd5a4b5c4e8cf8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_533d51359b5086d829bd5a4b5c4e8cf8_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameFactory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NameFactory);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2048_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_2048_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_name);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content_type);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utf8);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_proto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proto);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_pickle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow_pickle);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_loads);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_file_as));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_file_as);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_raw_as));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_raw_as);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_f605d330d86c5c657fb09dde7db605ae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f605d330d86c5c657fb09dde7db605ae);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_kwargs);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_DictStrAny));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DictStrAny);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_of);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_json_kwargs);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_json_of);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe8d71bca3070344cb65ef26d31d1a43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe8d71bca3070344cb65ef26d31d1a43);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_1516763e9019ede513ceaba3f5e62bc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1516763e9019ede513ceaba3f5e62bc7);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_type_name_str_plain_create_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__str_plain_type_name_str_plain_create_model_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_510f1d75bf4fb6314dc8ef5abd685382_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_510f1d75bf4fb6314dc8ef5abd685382_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_2dd443470477d69b2287daec1f4f315e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2dd443470477d69b2287daec1f4f315e_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_01308b79f8dfcf61cc770ca3c0e21e6a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_01308b79f8dfcf61cc770ca3c0e21e6a_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_json_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_json_kwargs_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_kwargs_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_pydantic$v1$tools$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$NameFactory(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_NameFactory);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameFactory);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameFactory, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NameFactory);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NameFactory, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_NameFactory);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_NameFactory);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NameFactory);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Path(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$StrBytes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StrBytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StrBytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StrBytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StrBytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytes);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$_generate_parsing_type_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_parsing_type_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_parsing_type_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_parsing_type_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_parsing_type_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_parsing_type_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_parsing_type_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_parsing_type_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_parsing_type_name);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$_get_parsing_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__get_parsing_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_parsing_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_parsing_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_parsing_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_parsing_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__get_parsing_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__get_parsing_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_parsing_type);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$display_as_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_display_as_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_display_as_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_display_as_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_display_as_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_display_as_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_display_as_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_display_as_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_display_as_type);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$json(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$load_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_file);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$load_str_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_str_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_str_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_str_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_load_str_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_load_str_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_str_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_str_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_load_str_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$tools$parse_obj_as(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$tools->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$tools->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj_as);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$tools->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_obj_as);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_obj_as, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_parse_obj_as);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_parse_obj_as, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj_as);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj_as);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj_as);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4849bf2774ab0fba8129414c6a2d82a9;
static PyCodeObject *code_objects_d7f6a9054b5e75f77c6b66bc209a002c;
static PyCodeObject *code_objects_a7354b053b982a00f61a9d0959daac70;
static PyCodeObject *code_objects_6a29ff16a416d4769aecdb642033ec28;
static PyCodeObject *code_objects_aae6df964bec85a05c5a5cb481ef69c0;
static PyCodeObject *code_objects_3f12efa24a9a4cefa96e5dfd85e6b152;
static PyCodeObject *code_objects_bb0da8b2bf232d078e12c2054c9bc539;
static PyCodeObject *code_objects_290b6fbfd2788a4f983857b1ceb28bce;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_fe8d71bca3070344cb65ef26d31d1a43); CHECK_OBJECT(module_filename_obj);
code_objects_4849bf2774ab0fba8129414c6a2d82a9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_1516763e9019ede513ceaba3f5e62bc7, mod_consts.const_str_digest_1516763e9019ede513ceaba3f5e62bc7, NULL, NULL, 0, 0, 0);
code_objects_d7f6a9054b5e75f77c6b66bc209a002c = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__generate_parsing_type_name, mod_consts.const_str_plain__generate_parsing_type_name, mod_consts.const_tuple_str_plain_type__tuple, NULL, 1, 0, 0);
code_objects_a7354b053b982a00f61a9d0959daac70 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_parsing_type, mod_consts.const_str_plain__get_parsing_type, mod_consts.const_tuple_str_plain_type__str_plain_type_name_str_plain_create_model_tuple, NULL, 1, 1, 0);
code_objects_6a29ff16a416d4769aecdb642033ec28 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse_file_as, mod_consts.const_str_plain_parse_file_as, mod_consts.const_tuple_510f1d75bf4fb6314dc8ef5abd685382_tuple, NULL, 2, 6, 0);
code_objects_aae6df964bec85a05c5a5cb481ef69c0 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse_obj_as, mod_consts.const_str_plain_parse_obj_as, mod_consts.const_tuple_2dd443470477d69b2287daec1f4f315e_tuple, NULL, 2, 1, 0);
code_objects_3f12efa24a9a4cefa96e5dfd85e6b152 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_parse_raw_as, mod_consts.const_str_plain_parse_raw_as, mod_consts.const_tuple_01308b79f8dfcf61cc770ca3c0e21e6a_tuple, NULL, 2, 6, 0);
code_objects_bb0da8b2bf232d078e12c2054c9bc539 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_schema_json_of, mod_consts.const_str_plain_schema_json_of, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_json_kwargs_tuple, NULL, 1, 1, 0);
code_objects_290b6fbfd2788a4f983857b1ceb28bce = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_schema_of, mod_consts.const_str_plain_schema_of, mod_consts.const_tuple_str_plain_type__str_plain_title_str_plain_schema_kwargs_tuple, NULL, 1, 1, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__1__generate_parsing_type_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__2__get_parsing_type(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__3_parse_obj_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__4_parse_file_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__5_parse_raw_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__6_schema_of(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__7_schema_json_of(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$v1$tools$$$function__1__generate_parsing_type_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name = MAKE_FUNCTION_FRAME(tstate, code_objects_d7f6a9054b5e75f77c6b66bc209a002c, module_pydantic$v1$tools, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name = cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_956becde59a4306e69900d3df0b4df91;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$display_as_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_display_as_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_1 = par_type_;
frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name->m_frame.f_lineno = 19;
tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name,
    type_description_1,
    par_type_
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name == cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name);
    cache_frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__1__generate_parsing_type_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__2__get_parsing_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_type_name = python_pars[1];
PyObject *var_create_model = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type = MAKE_FUNCTION_FRAME(tstate, code_objects_a7354b053b982a00f61a9d0959daac70, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type = cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_create_model_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type->m_frame.f_lineno = 24;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_create_model,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_create_model);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_create_model == NULL);
var_create_model = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_type_name);
tmp_cmp_expr_left_1 = par_type_name;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_pydantic$v1$tools$_generate_parsing_type_name(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__generate_parsing_type_name);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_type_name;
    assert(old != NULL);
    par_type_name = tmp_assign_source_2;
    Py_INCREF(par_type_name);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_type_name);
tmp_isinstance_inst_1 = par_type_name;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
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
CHECK_OBJECT(par_type_name);
tmp_called_value_1 = par_type_name;
CHECK_OBJECT(par_type_);
tmp_args_element_value_1 = par_type_;
frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type->m_frame.f_lineno = 29;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_type_name;
    assert(old != NULL);
    par_type_name = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_create_model);
tmp_called_value_2 = var_create_model;
CHECK_OBJECT(par_type_name);
tmp_kw_call_arg_value_0_1 = par_type_name;
CHECK_OBJECT(par_type_);
tmp_tuple_element_1 = par_type_;
tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_Ellipsis;
PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 1, tmp_tuple_element_1);
frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type->m_frame.f_lineno = 30;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain___root___tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type,
    type_description_1,
    par_type_,
    par_type_name,
    var_create_model
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type == cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type);
    cache_frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__2__get_parsing_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_type_name);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
par_type_name = NULL;
CHECK_OBJECT(var_create_model);
CHECK_OBJECT(var_create_model);
Py_DECREF(var_create_model);
var_create_model = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_type_name);
par_type_name = NULL;
Py_XDECREF(var_create_model);
var_create_model = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__3_parse_obj_as(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *par_type_name = python_pars[2];
PyObject *var_model_type = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as = MAKE_FUNCTION_FRAME(tstate, code_objects_aae6df964bec85a05c5a5cb481ef69c0, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as = cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$_get_parsing_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_parsing_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_kw_call_arg_value_0_1 = par_type_;
CHECK_OBJECT(par_type_name);
tmp_kw_call_dict_value_0_1 = par_type_name;
frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as->m_frame.f_lineno = 37;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_type_name_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_model_type == NULL);
var_model_type = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_model_type);
tmp_called_value_2 = var_model_type;
CHECK_OBJECT(par_obj);
tmp_kw_call_value_0_1 = par_obj;
frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as->m_frame.f_lineno = 38;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain___root___tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___root__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as,
    type_description_1,
    par_type_,
    par_obj,
    par_type_name,
    var_model_type
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as == cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as);
    cache_frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__3_parse_obj_as);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_model_type);
CHECK_OBJECT(var_model_type);
Py_DECREF(var_model_type);
var_model_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_model_type);
var_model_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__4_parse_file_as(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_content_type = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_proto = python_pars[4];
PyObject *par_allow_pickle = python_pars[5];
PyObject *par_json_loads = python_pars[6];
PyObject *par_type_name = python_pars[7];
PyObject *var_obj = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__4_parse_file_as;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as = MAKE_FUNCTION_FRAME(tstate, code_objects_6a29ff16a416d4769aecdb642033ec28, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__4_parse_file_as = cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__4_parse_file_as);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__4_parse_file_as) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$load_file(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_file);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_kw_call_arg_value_0_1 = par_path;
CHECK_OBJECT(par_proto);
tmp_kw_call_dict_value_0_1 = par_proto;
CHECK_OBJECT(par_content_type);
tmp_kw_call_dict_value_1_1 = par_content_type;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_2_1 = par_encoding;
CHECK_OBJECT(par_allow_pickle);
tmp_kw_call_dict_value_3_1 = par_allow_pickle;
CHECK_OBJECT(par_json_loads);
tmp_kw_call_dict_value_4_1 = par_json_loads;
frame_frame_pydantic$v1$tools$$$function__4_parse_file_as->m_frame.f_lineno = 52;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_72e38144c74c122bf004d8ef314eba56_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_2 = module_var_accessor_pydantic$v1$tools$parse_obj_as(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_obj_as);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_kw_call_arg_value_0_2 = par_type_;
CHECK_OBJECT(var_obj);
tmp_kw_call_arg_value_1_1 = var_obj;
CHECK_OBJECT(par_type_name);
tmp_kw_call_dict_value_0_2 = par_type_name;
frame_frame_pydantic$v1$tools$$$function__4_parse_file_as->m_frame.f_lineno = 60;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_type_name_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__4_parse_file_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__4_parse_file_as->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__4_parse_file_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__4_parse_file_as,
    type_description_1,
    par_type_,
    par_path,
    par_content_type,
    par_encoding,
    par_proto,
    par_allow_pickle,
    par_json_loads,
    par_type_name,
    var_obj
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__4_parse_file_as == cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as);
    cache_frame_frame_pydantic$v1$tools$$$function__4_parse_file_as = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__4_parse_file_as);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_obj);
CHECK_OBJECT(var_obj);
Py_DECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_obj);
var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_content_type);
Py_DECREF(par_content_type);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_proto);
Py_DECREF(par_proto);
CHECK_OBJECT(par_allow_pickle);
Py_DECREF(par_allow_pickle);
CHECK_OBJECT(par_json_loads);
Py_DECREF(par_json_loads);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_content_type);
Py_DECREF(par_content_type);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_proto);
Py_DECREF(par_proto);
CHECK_OBJECT(par_allow_pickle);
Py_DECREF(par_allow_pickle);
CHECK_OBJECT(par_json_loads);
Py_DECREF(par_json_loads);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__5_parse_raw_as(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *par_content_type = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_proto = python_pars[4];
PyObject *par_allow_pickle = python_pars[5];
PyObject *par_json_loads = python_pars[6];
PyObject *par_type_name = python_pars[7];
PyObject *var_obj = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as = MAKE_FUNCTION_FRAME(tstate, code_objects_3f12efa24a9a4cefa96e5dfd85e6b152, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as = cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$load_str_bytes(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_load_str_bytes);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_b);
tmp_kw_call_arg_value_0_1 = par_b;
CHECK_OBJECT(par_proto);
tmp_kw_call_dict_value_0_1 = par_proto;
CHECK_OBJECT(par_content_type);
tmp_kw_call_dict_value_1_1 = par_content_type;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_2_1 = par_encoding;
CHECK_OBJECT(par_allow_pickle);
tmp_kw_call_dict_value_3_1 = par_allow_pickle;
CHECK_OBJECT(par_json_loads);
tmp_kw_call_dict_value_4_1 = par_json_loads;
frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as->m_frame.f_lineno = 74;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_72e38144c74c122bf004d8ef314eba56_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_2 = module_var_accessor_pydantic$v1$tools$parse_obj_as(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parse_obj_as);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_kw_call_arg_value_0_2 = par_type_;
CHECK_OBJECT(var_obj);
tmp_kw_call_arg_value_1_1 = var_obj;
CHECK_OBJECT(par_type_name);
tmp_kw_call_dict_value_0_2 = par_type_name;
frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as->m_frame.f_lineno = 82;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_type_name_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as,
    type_description_1,
    par_type_,
    par_b,
    par_content_type,
    par_encoding,
    par_proto,
    par_allow_pickle,
    par_json_loads,
    par_type_name,
    var_obj
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as == cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as);
    cache_frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__5_parse_raw_as);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_obj);
CHECK_OBJECT(var_obj);
Py_DECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_obj);
var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
CHECK_OBJECT(par_content_type);
Py_DECREF(par_content_type);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_proto);
Py_DECREF(par_proto);
CHECK_OBJECT(par_allow_pickle);
Py_DECREF(par_allow_pickle);
CHECK_OBJECT(par_json_loads);
Py_DECREF(par_json_loads);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
CHECK_OBJECT(par_content_type);
Py_DECREF(par_content_type);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_proto);
Py_DECREF(par_proto);
CHECK_OBJECT(par_allow_pickle);
Py_DECREF(par_allow_pickle);
CHECK_OBJECT(par_json_loads);
Py_DECREF(par_json_loads);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__6_schema_of(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_title = python_pars[1];
PyObject *par_schema_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__6_schema_of;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of = MAKE_FUNCTION_FRAME(tstate, code_objects_290b6fbfd2788a4f983857b1ceb28bce, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__6_schema_of = cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__6_schema_of);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__6_schema_of) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_direct_call_arg2_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$_get_parsing_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_parsing_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_kw_call_arg_value_0_1 = par_type_;
CHECK_OBJECT(par_title);
tmp_kw_call_dict_value_0_1 = par_title;
frame_frame_pydantic$v1$tools$$$function__6_schema_of->m_frame.f_lineno = 87;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_type_name_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_schema);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_schema_kwargs);
tmp_direct_call_arg2_1 = par_schema_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__6_schema_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__6_schema_of->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__6_schema_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__6_schema_of,
    type_description_1,
    par_type_,
    par_title,
    par_schema_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__6_schema_of == cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of);
    cache_frame_frame_pydantic$v1$tools$$$function__6_schema_of = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__6_schema_of);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_schema_kwargs);
Py_DECREF(par_schema_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_schema_kwargs);
Py_DECREF(par_schema_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$v1$tools$$$function__7_schema_json_of(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_title = python_pars[1];
PyObject *par_schema_json_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools$$$function__7_schema_json_of;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of = MAKE_FUNCTION_FRAME(tstate, code_objects_bb0da8b2bf232d078e12c2054c9bc539, module_pydantic$v1$tools, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of->m_type_description == NULL);
frame_frame_pydantic$v1$tools$$$function__7_schema_json_of = cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools$$$function__7_schema_json_of);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools$$$function__7_schema_json_of) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_direct_call_arg2_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$tools$_get_parsing_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_parsing_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_kw_call_arg_value_0_1 = par_type_;
CHECK_OBJECT(par_title);
tmp_kw_call_dict_value_0_1 = par_title;
frame_frame_pydantic$v1$tools$$$function__7_schema_json_of->m_frame.f_lineno = 92;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_type_name_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_schema_json);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_schema_json_kwargs);
tmp_direct_call_arg2_1 = par_schema_json_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools$$$function__7_schema_json_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools$$$function__7_schema_json_of->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools$$$function__7_schema_json_of, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$tools$$$function__7_schema_json_of,
    type_description_1,
    par_type_,
    par_title,
    par_schema_json_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$tools$$$function__7_schema_json_of == cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of);
    cache_frame_frame_pydantic$v1$tools$$$function__7_schema_json_of = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$tools$$$function__7_schema_json_of);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_schema_json_kwargs);
Py_DECREF(par_schema_json_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_schema_json_kwargs);
Py_DECREF(par_schema_json_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__1__generate_parsing_type_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__1__generate_parsing_type_name,
        mod_consts.const_str_plain__generate_parsing_type_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d7f6a9054b5e75f77c6b66bc209a002c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$tools,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__2__get_parsing_type(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__2__get_parsing_type,
        mod_consts.const_str_plain__get_parsing_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7354b053b982a00f61a9d0959daac70,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__3_parse_obj_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__3_parse_obj_as,
        mod_consts.const_str_plain_parse_obj_as,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aae6df964bec85a05c5a5cb481ef69c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__4_parse_file_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__4_parse_file_as,
        mod_consts.const_str_plain_parse_file_as,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6a29ff16a416d4769aecdb642033ec28,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__5_parse_raw_as(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__5_parse_raw_as,
        mod_consts.const_str_plain_parse_raw_as,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3f12efa24a9a4cefa96e5dfd85e6b152,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__6_schema_of(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__6_schema_of,
        mod_consts.const_str_plain_schema_of,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_290b6fbfd2788a4f983857b1ceb28bce,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        mod_consts.const_str_digest_0693c5b68a7cafba31c75d38a40a35ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$tools$$$function__7_schema_json_of(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$tools$$$function__7_schema_json_of,
        mod_consts.const_str_plain_schema_json_of,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bb0da8b2bf232d078e12c2054c9bc539,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$v1$tools,
        mod_consts.const_str_digest_c11c181cfe55547b54235abf93bd3b52,
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

static function_impl_code const function_table_pydantic$v1$tools[] = {
impl_pydantic$v1$tools$$$function__1__generate_parsing_type_name,
impl_pydantic$v1$tools$$$function__2__get_parsing_type,
impl_pydantic$v1$tools$$$function__3_parse_obj_as,
impl_pydantic$v1$tools$$$function__4_parse_file_as,
impl_pydantic$v1$tools$$$function__5_parse_raw_as,
impl_pydantic$v1$tools$$$function__6_schema_of,
impl_pydantic$v1$tools$$$function__7_schema_json_of,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$v1$tools);
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
        module_pydantic$v1$tools,
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
        function_table_pydantic$v1$tools,
        sizeof(function_table_pydantic$v1$tools) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.v1.tools";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$v1$tools(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$v1$tools");

    // Store the module for future use.
    module_pydantic$v1$tools = module;

    moduledict_pydantic$v1$tools = MODULE_DICT(module_pydantic$v1$tools);

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
        PRINT_STRING("pydantic$v1$tools: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$v1$tools: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$v1$tools: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.tools" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$v1$tools\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$v1$tools,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$tools,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$tools,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$tools,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$tools,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$v1$tools);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$v1$tools);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$tools;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$v1$tools = MAKE_MODULE_FRAME(code_objects_4849bf2774ab0fba8129414c6a2d82a9, module_pydantic$v1$tools);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$tools);
assert(Py_REFCNT(frame_frame_pydantic$v1$tools) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$v1$tools$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$v1$tools$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 1;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 3;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Type,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Type);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Type, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b84ed0c2a72c57c7ed4f3e151060bbdc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_c9c4cb9d4fa54dad28629ca57b37eefa_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 6;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_load_file,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_load_file);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_file, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_load_str_bytes,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_load_str_bytes);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_load_str_bytes, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_7f086381f71e2e8db83ada4d56c09400;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_StrBytes_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 7;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_StrBytes,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_StrBytes);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytes, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$v1$tools;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_display_as_type_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 8;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$v1$tools,
        mod_consts.const_str_plain_display_as_type,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_display_as_type);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_display_as_type, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_tuple_533d51359b5086d829bd5a4b5c4e8cf8_tuple;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_pydantic$v1$tools$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_pydantic$v1$tools$Callable(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto tuple_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_pydantic$v1$tools$Type(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto tuple_build_exception_1;
}
tmp_subscript_value_3 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto tuple_build_exception_1;
}
tmp_list_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_2, 0, tmp_list_element_1);
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_NameFactory, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_type_;
tmp_dict_value_1 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_23 = MAKE_FUNCTION_pydantic$v1$tools$$$function__1__generate_parsing_type_name(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_parsing_type_name, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$v1$tools$lru_cache(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 22;
tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2048_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b);
tmp_dict_key_2 = mod_consts.const_str_plain_type_;
tmp_dict_value_2 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_defaults_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_type_name;
tmp_expression_value_4 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto dict_build_exception_1;
}
tmp_subscript_value_4 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto dict_build_exception_1;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_defaults_1);
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_args_element_value_1 = MAKE_FUNCTION_pydantic$v1$tools$$$function__2__get_parsing_type(tstate, tmp_kw_defaults_1, tmp_annotations_2);

frame_frame_pydantic$v1$tools->m_frame.f_lineno = 22;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain__get_parsing_type, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$v1$tools$TypeVar(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$tools->m_frame.f_lineno = 33;
tmp_assign_source_25 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_6b22bebbcf9a4d2ba7fc97febee0e77b);
tmp_dict_key_3 = mod_consts.const_str_plain_type_;
tmp_expression_value_5 = module_var_accessor_pydantic$v1$tools$Type(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = module_var_accessor_pydantic$v1$tools$T(tstate);
assert(!(tmp_subscript_value_5 == NULL));
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_2);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_obj;
tmp_dict_value_3 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_type_name;
tmp_expression_value_6 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_subscript_value_6 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = module_var_accessor_pydantic$v1$tools$T(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_assign_source_26 = MAKE_FUNCTION_pydantic$v1$tools$$$function__3_parse_obj_as(tstate, tmp_kw_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj_as, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_7;
tmp_dict_key_4 = mod_consts.const_str_plain_content_type;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_7;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = const_str_plain_encoding;
tmp_dict_value_4 = mod_consts.const_str_plain_utf8;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_proto;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_allow_pickle;
tmp_dict_value_4 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_json_loads;
tmp_expression_value_7 = module_var_accessor_pydantic$v1$tools$json(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto dict_build_exception_3;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_loads);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_type_name;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_dict_key_5 = mod_consts.const_str_plain_type_;
tmp_expression_value_8 = module_var_accessor_pydantic$v1$tools$Type(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = module_var_accessor_pydantic$v1$tools$T(tstate);
if (unlikely(tmp_subscript_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_7);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_3);

exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 9 );
{
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_10;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = const_str_plain_path;
tmp_expression_value_9 = module_var_accessor_pydantic$v1$tools$Union(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto dict_build_exception_4;
}
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_pydantic$v1$tools$Path(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_8);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_content_type;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = const_str_plain_encoding;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_proto;
tmp_dict_value_5 = module_var_accessor_pydantic$v1$tools$Protocol(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_allow_pickle;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_json_loads;
tmp_expression_value_10 = module_var_accessor_pydantic$v1$tools$Callable(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto dict_build_exception_4;
}
tmp_tuple_element_4 = MAKE_LIST1(tstate, (PyObject *)&PyUnicode_Type);
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_9);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_type_name;
tmp_expression_value_11 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto dict_build_exception_4;
}
tmp_subscript_value_10 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto dict_build_exception_4;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_10);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = module_var_accessor_pydantic$v1$tools$T(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_3);
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_assign_source_27 = MAKE_FUNCTION_pydantic$v1$tools$$$function__4_parse_file_as(tstate, tmp_kw_defaults_3, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_file_as, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_11;
tmp_dict_key_6 = mod_consts.const_str_plain_content_type;
tmp_dict_value_6 = Py_None;
tmp_kw_defaults_4 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = const_str_plain_encoding;
tmp_dict_value_6 = mod_consts.const_str_plain_utf8;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_proto;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_allow_pickle;
tmp_dict_value_6 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_json_loads;
tmp_expression_value_12 = module_var_accessor_pydantic$v1$tools$json(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto dict_build_exception_5;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_loads);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_type_name;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_dict_key_7 = mod_consts.const_str_plain_type_;
tmp_expression_value_13 = module_var_accessor_pydantic$v1$tools$Type(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_4);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = module_var_accessor_pydantic$v1$tools$T(tstate);
if (unlikely(tmp_subscript_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_4);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_defaults_4);

exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 9 );
{
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_13;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = const_str_plain_b;
tmp_dict_value_7 = module_var_accessor_pydantic$v1$tools$StrBytes(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StrBytes);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_content_type;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = const_str_plain_encoding;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_proto;
tmp_dict_value_7 = module_var_accessor_pydantic$v1$tools$Protocol(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_allow_pickle;
tmp_dict_value_7 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_json_loads;
tmp_expression_value_14 = module_var_accessor_pydantic$v1$tools$Callable(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto dict_build_exception_6;
}
tmp_tuple_element_5 = MAKE_LIST1(tstate, (PyObject *)&PyUnicode_Type);
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_12);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_type_name;
tmp_expression_value_15 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto dict_build_exception_6;
}
tmp_subscript_value_13 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto dict_build_exception_6;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_13);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = module_var_accessor_pydantic$v1$tools$T(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_kw_defaults_4);
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_assign_source_28 = MAKE_FUNCTION_pydantic$v1$tools$$$function__5_parse_raw_as(tstate, tmp_kw_defaults_4, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_raw_as, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_kw_defaults_5;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_f605d330d86c5c657fb09dde7db605ae);
tmp_dict_key_8 = mod_consts.const_str_plain_type_;
tmp_dict_value_8 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_5);

exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_annotations_6 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_14;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_title;
tmp_expression_value_16 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto dict_build_exception_7;
}
tmp_subscript_value_14 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto dict_build_exception_7;
}
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_14);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_schema_kwargs;
tmp_dict_value_8 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = mod_consts.const_str_plain_DictStrAny;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_kw_defaults_5);
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_assign_source_29 = MAKE_FUNCTION_pydantic$v1$tools$$$function__6_schema_of(tstate, tmp_kw_defaults_5, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_schema_of, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
tmp_kw_defaults_6 = DICT_COPY(tstate, mod_consts.const_dict_f605d330d86c5c657fb09dde7db605ae);
tmp_dict_key_9 = mod_consts.const_str_plain_type_;
tmp_dict_value_9 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_kw_defaults_6);

exception_lineno = 90;

    goto frame_exception_exit_1;
}
tmp_annotations_7 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_15;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_title;
tmp_expression_value_17 = module_var_accessor_pydantic$v1$tools$Optional(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto dict_build_exception_8;
}
tmp_subscript_value_15 = module_var_accessor_pydantic$v1$tools$NameFactory(tstate);
if (unlikely(tmp_subscript_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NameFactory);
}

if (tmp_subscript_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto dict_build_exception_8;
}
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_15);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_schema_json_kwargs;
tmp_dict_value_9 = module_var_accessor_pydantic$v1$tools$Any(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_kw_defaults_6);
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;

tmp_assign_source_30 = MAKE_FUNCTION_pydantic$v1$tools$$$function__7_schema_json_of(tstate, tmp_kw_defaults_6, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)mod_consts.const_str_plain_schema_json_of, tmp_assign_source_30);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$tools->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$tools, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$v1$tools);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$v1$tools", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.tools" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$v1$tools);
    return module_pydantic$v1$tools;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$tools, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$v1$tools", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

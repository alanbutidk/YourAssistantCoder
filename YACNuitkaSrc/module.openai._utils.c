/* Generated code for Python module 'openai$_utils'
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



/* The "module_openai$_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$_utils;
PyDictObject *moduledict_openai$_utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_plain__utils;
PyObject *const_tuple_9b2c301576d84f2662a0b85474df9620_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain__logs;
PyObject *const_tuple_str_plain_SensitiveHeadersFilter_tuple;
PyObject *const_str_plain_SensitiveHeadersFilter;
PyObject *const_str_plain__sync;
PyObject *const_tuple_str_plain_asyncify_tuple;
PyObject *const_str_plain_asyncify;
PyObject *const_str_plain__proxy;
PyObject *const_tuple_str_plain_LazyProxy_tuple;
PyObject *const_str_plain_LazyProxy;
PyObject *const_tuple_5c6f895aa3c4aee3d59a168fe1f5e0bc_tuple;
PyObject *const_str_plain_flatten;
PyObject *const_str_plain_is_dict;
PyObject *const_str_plain_is_list;
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_is_tuple;
PyObject *const_str_plain_json_safe;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_is_mapping;
PyObject *const_str_plain_is_tuple_t;
PyObject *const_str_plain_parse_date;
PyObject *const_str_plain_is_iterable;
PyObject *const_str_plain_is_sequence;
PyObject *const_str_plain_coerce_float;
PyObject *const_str_plain_is_mapping_t;
PyObject *const_str_plain_removeprefix;
PyObject *const_str_plain_removesuffix;
PyObject *const_str_plain_extract_files;
PyObject *const_str_plain_is_sequence_t;
PyObject *const_str_plain_required_args;
PyObject *const_str_plain_coerce_boolean;
PyObject *const_str_plain_coerce_integer;
PyObject *const_str_plain_file_from_path;
PyObject *const_str_plain_parse_datetime;
PyObject *const_str_plain_is_azure_client;
PyObject *const_str_plain_strip_not_given;
PyObject *const_str_plain_deepcopy_minimal;
PyObject *const_str_plain_get_async_library;
PyObject *const_str_plain_maybe_coerce_float;
PyObject *const_str_plain_get_required_header;
PyObject *const_str_plain_maybe_coerce_boolean;
PyObject *const_str_plain_maybe_coerce_integer;
PyObject *const_str_plain_is_async_azure_client;
PyObject *const_str_plain__typing;
PyObject *const_tuple_1a0540c45aafc68182653e6d3d04b4e1_tuple;
PyObject *const_str_plain_is_list_type;
PyObject *const_str_plain_is_union_type;
PyObject *const_str_plain_extract_type_arg;
PyObject *const_str_plain_is_iterable_type;
PyObject *const_str_plain_is_required_type;
PyObject *const_str_plain_is_annotated_type;
PyObject *const_str_plain_is_type_alias_type;
PyObject *const_str_plain_strip_annotated_type;
PyObject *const_str_plain_extract_type_var_from_base;
PyObject *const_str_plain__streams;
PyObject *const_tuple_887b373ba301dd711da8f383937c15fc_tuple;
PyObject *const_str_plain_consume_sync_iterator;
PyObject *const_str_plain_consume_async_iterator;
PyObject *const_str_plain__transform;
PyObject *const_tuple_afd3478619cb93ce37602a8fbf660745_tuple;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_transform;
PyObject *const_str_plain_async_transform;
PyObject *const_str_plain_maybe_transform;
PyObject *const_str_plain_async_maybe_transform;
PyObject *const_str_plain__reflection;
PyObject *const_tuple_b3236a3c574fa64c7247640745d74bb8_tuple;
PyObject *const_str_plain_function_has_argument;
PyObject *const_str_plain_assert_signatures_in_sync;
PyObject *const_str_digest_5bd6d5e9d7503a51f9067f32a1bcc018;
PyObject *const_str_digest_952c697254b226a9d74960318a8eebe5;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[78];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai._utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9b2c301576d84f2662a0b85474df9620_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__logs);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SensitiveHeadersFilter_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_SensitiveHeadersFilter);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__sync);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asyncify_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncify);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__proxy);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyProxy_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_LazyProxy);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_5c6f895aa3c4aee3d59a168fe1f5e0bc_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_flatten);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dict);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_list);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_safe);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_tuple_t);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_date);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_iterable);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_sequence);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_float);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping_t);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_removeprefix);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_removesuffix);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_files);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_sequence_t);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_required_args);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_boolean);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_integer);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_from_path);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_datetime);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_azure_client);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_not_given);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy_minimal);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_library);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_float);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_required_header);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_boolean);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_integer);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_async_azure_client);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_1a0540c45aafc68182653e6d3d04b4e1_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_list_type);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_union_type);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_arg);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_iterable_type);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_required_type);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated_type);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_type_alias_type);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_annotated_type);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_var_from_base);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__streams);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_887b373ba301dd711da8f383937c15fc_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_consume_sync_iterator);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_consume_async_iterator);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__transform);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_afd3478619cb93ce37602a8fbf660745_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_transform);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__reflection);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_b3236a3c574fa64c7247640745d74bb8_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_has_argument);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_signatures_in_sync);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bd6d5e9d7503a51f9067f32a1bcc018);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_952c697254b226a9d74960318a8eebe5);
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
void checkModuleConstants_openai$_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9b2c301576d84f2662a0b85474df9620_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9b2c301576d84f2662a0b85474df9620_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__logs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__logs);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SensitiveHeadersFilter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SensitiveHeadersFilter_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_SensitiveHeadersFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SensitiveHeadersFilter);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sync);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_asyncify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_asyncify_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncify);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__proxy);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyProxy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LazyProxy_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_LazyProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LazyProxy);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_5c6f895aa3c4aee3d59a168fe1f5e0bc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5c6f895aa3c4aee3d59a168fe1f5e0bc_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_flatten));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flatten);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dict);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_list);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_safe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_safe);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mapping);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_tuple_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_tuple_t);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_date);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_iterable);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_sequence);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coerce_float);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mapping_t);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_removeprefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_removeprefix);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_removesuffix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_removesuffix);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_files);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_sequence_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_sequence_t);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_required_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_required_args);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_boolean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coerce_boolean);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_coerce_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coerce_integer);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_from_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_from_path);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_datetime);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_azure_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_azure_client);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_not_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_not_given);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy_minimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy_minimal);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_async_library);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_coerce_float);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_required_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_required_header);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_boolean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_coerce_boolean);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_coerce_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_coerce_integer);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_async_azure_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_async_azure_client);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typing);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_1a0540c45aafc68182653e6d3d04b4e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1a0540c45aafc68182653e6d3d04b4e1_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_list_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_list_type);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_union_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_union_type);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_arg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_type_arg);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_iterable_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_iterable_type);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_required_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_required_type);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotated_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_annotated_type);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_type_alias_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_type_alias_type);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_annotated_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_annotated_type);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_type_var_from_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extract_type_var_from_base);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__streams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streams);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_887b373ba301dd711da8f383937c15fc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_887b373ba301dd711da8f383937c15fc_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_consume_sync_iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_consume_sync_iterator);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_consume_async_iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_consume_async_iterator);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__transform);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_afd3478619cb93ce37602a8fbf660745_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afd3478619cb93ce37602a8fbf660745_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transform);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_transform);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maybe_transform);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_maybe_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_maybe_transform);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__reflection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reflection);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_b3236a3c574fa64c7247640745d74bb8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b3236a3c574fa64c7247640745d74bb8_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_has_argument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_has_argument);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_signatures_in_sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_signatures_in_sync);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bd6d5e9d7503a51f9067f32a1bcc018));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bd6d5e9d7503a51f9067f32a1bcc018);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_952c697254b226a9d74960318a8eebe5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_952c697254b226a9d74960318a8eebe5);
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
static PyObject *module_var_accessor_openai$_utils$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f8fa640b949236eeca53d7a3b3c5eb12;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5bd6d5e9d7503a51f9067f32a1bcc018); CHECK_OBJECT(module_filename_obj);
code_objects_f8fa640b949236eeca53d7a3b3c5eb12 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_952c697254b226a9d74960318a8eebe5, mod_consts.const_str_digest_952c697254b226a9d74960318a8eebe5, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$_utils[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$_utils);
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
        module_openai$_utils,
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
        function_table_openai$_utils,
        sizeof(function_table_openai$_utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai._utils";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$_utils");

    // Store the module for future use.
    module_openai$_utils = module;

    moduledict_openai$_utils = MODULE_DICT(module_openai$_utils);

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
        PRINT_STRING("openai$_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$_utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$_utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$_utils);
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

        UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_utils;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$_utils = MAKE_MODULE_FRAME(code_objects_f8fa640b949236eeca53d7a3b3c5eb12, module_openai$_utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_utils);
assert(Py_REFCNT(frame_frame_openai$_utils) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$_utils->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_openai$_utils->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$_utils->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$_utils->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$_utils->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain__utils;
frame_frame_openai$_utils->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_openai$_utils->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$_utils->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_9b2c301576d84f2662a0b85474df9620_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$_utils$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$_utils$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_openai$_utils$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$_utils$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__logs;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_SensitiveHeadersFilter_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 1;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_SensitiveHeadersFilter,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_SensitiveHeadersFilter);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_SensitiveHeadersFilter, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__sync;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_asyncify_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 2;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_asyncify,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_asyncify);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncify, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__proxy;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_LazyProxy_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 3;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_LazyProxy,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_LazyProxy);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_5c6f895aa3c4aee3d59a168fe1f5e0bc_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 4;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_flatten,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_flatten);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_flatten, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_dict,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_is_dict);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dict, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_list,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_is_list);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_tuple,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_is_tuple);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_tuple, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_json_safe,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_json_safe);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_json_safe, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_mapping,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_is_mapping);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_tuple_t,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_is_tuple_t);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_tuple_t, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_parse_date,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_parse_date);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_date, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_iterable,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_is_iterable);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_iterable, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_sequence,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_is_sequence);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_sequence, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_16 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_coerce_float,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_coerce_float);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_coerce_float, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_17 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_mapping_t,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_is_mapping_t);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping_t, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_18 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_removeprefix,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_removeprefix);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_removeprefix, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_19 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_removesuffix,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_removesuffix);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_removesuffix, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_20 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_extract_files,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_extract_files);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_files, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_21 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_sequence_t,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_is_sequence_t);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_sequence_t, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_22 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_required_args,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_required_args);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_required_args, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_23 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_coerce_boolean,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_coerce_boolean);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_coerce_boolean, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_24 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_coerce_integer,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_coerce_integer);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_coerce_integer, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_25 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_file_from_path,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_file_from_path);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_file_from_path, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_26 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_parse_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_parse_datetime);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_datetime, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_27 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_azure_client,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_is_azure_client);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_azure_client, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_28 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_strip_not_given,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_strip_not_given);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_not_given, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_29 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_deepcopy_minimal,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_deepcopy_minimal);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy_minimal, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_30 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_get_async_library,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_get_async_library);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_library, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_31 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_maybe_coerce_float,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_maybe_coerce_float);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_coerce_float, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_32 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_get_required_header,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_get_required_header);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_required_header, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_33 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_maybe_coerce_boolean,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_maybe_coerce_boolean);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_coerce_boolean, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_34 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_maybe_coerce_integer,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_maybe_coerce_integer);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_coerce_integer, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_35 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_async_azure_client,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_is_async_azure_client);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_async_azure_client, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__typing;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_1a0540c45aafc68182653e6d3d04b4e1_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 38;
tmp_assign_source_41 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_36 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_list_type,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_is_list_type);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list_type, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_37 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_union_type,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_is_union_type);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_union_type, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_38 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_extract_type_arg,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_extract_type_arg);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_arg, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_39 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_iterable_type,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_is_iterable_type);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_iterable_type, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_40 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_required_type,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_is_required_type);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_required_type, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_41 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_annotated_type,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_is_annotated_type);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_annotated_type, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_42 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_is_type_alias_type,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_is_type_alias_type);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_type_alias_type, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_43 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_strip_annotated_type,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_strip_annotated_type);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_annotated_type, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_44 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_extract_type_var_from_base,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_extract_type_var_from_base);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_extract_type_var_from_base, tmp_assign_source_50);
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
PyObject *tmp_assign_source_51;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_887b373ba301dd711da8f383937c15fc_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 49;
tmp_assign_source_51 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_51;
}
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_45 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_consume_sync_iterator,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_consume_sync_iterator);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_consume_sync_iterator, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_46 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_consume_async_iterator,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_consume_async_iterator);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_consume_async_iterator, tmp_assign_source_53);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__transform;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_afd3478619cb93ce37602a8fbf660745_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 50;
tmp_assign_source_54 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_54;
}
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_47 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_48;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_48 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_transform,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_transform);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_transform, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_49 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_async_transform,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_async_transform);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_async_transform, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_50 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_maybe_transform);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_maybe_transform, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_51 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_async_maybe_transform,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_async_maybe_transform);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_async_maybe_transform, tmp_assign_source_59);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__reflection;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$_utils;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_b3236a3c574fa64c7247640745d74bb8_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$_utils->m_frame.f_lineno = 57;
tmp_assign_source_60 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_60;
}
// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_52;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_52 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_function_has_argument,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_function_has_argument);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_function_has_argument, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_53 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$_utils,
        mod_consts.const_str_plain_assert_signatures_in_sync,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_assert_signatures_in_sync);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_signatures_in_sync, tmp_assign_source_62);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$_utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$_utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$_utils);
    return module_openai$_utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$_utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

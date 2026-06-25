/* Generated code for Python module 'pydantic$version'
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



/* The "module_pydantic$version" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$version;
PyDictObject *moduledict_pydantic$version;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_VERSION;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_str_digest_5c7e143f2ab119bdbe8e7d740c51a4ed;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_digest_907d5366b2af807fa07d12233a5c2457;
PyObject *const_str_plain__pydantic_core;
PyObject *const_str_plain__internal;
PyObject *const_tuple_str_plain__git_tuple;
PyObject *const_str_plain__git;
PyObject *const_set_05d538fd76222b8e17b6f77d4d10825b;
PyObject *const_str_plain_distributions;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_Name;
PyObject *const_str_plain_related_packages;
PyObject *const_str_chr_45;
PyObject *const_str_plain_version;
PyObject *const_str_plain_parents;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain_is_git_repo;
PyObject *const_str_plain_have_git;
PyObject *const_str_plain_git_revision;
PyObject *const_str_plain_unknown;
PyObject *const_str_digest_928442bca24f999c6868a1cd09b6646d;
PyObject *const_str_digest_ac2fb74d077971ab6776eba6d974a861;
PyObject *const_str_plain___version__;
PyObject *const_str_digest_621b617c0ee22d5d4ba4a3f3a118e350;
PyObject *const_str_plain_build_info;
PyObject *const_str_plain_build_profile;
PyObject *const_str_digest_2f025ee709ba91be83190bed385025bb;
PyObject *const_str_digest_b3836178c5086d1da4353bc34793fa77;
PyObject *const_str_digest_764b7941e2af2cec19890d8b14be6975;
PyObject *const_str_space;
PyObject *const_str_plain_commit;
PyObject *const_str_newline;
PyObject *const_str_digest_306f9166cc7babd6b94a743434db8ddb;
PyObject *const_str_digest_3eea1e45485fdedf65c9013d9418b4ca;
PyObject *const_str_chr_58;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_newline_str_space_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_f3dbbac5873432c5b9df5e3c1da74149;
PyObject *const_str_plain___pydantic_core_version__;
PyObject *const_str_digest_ffcc481aae92205f051bf0a848f1e338;
PyObject *const_str_digest_3a1a31aaecdfde3a37e4ab7d9ee73b06;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_chr_43_tuple;
PyObject *const_str_digest_e1eb33ef7beb8ccc96f87e6c1172e019;
PyObject *const_str_digest_438e852210be7be9574ae9ea25f06593;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__annotations;
PyObject *const_str_plain_pydantic_core;
PyObject *const_tuple_str_plain_VERSION_str_plain_version_info_tuple;
PyObject *const_str_digest_763483adb453f1fc1ed3da597b9d68ac;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain_version_short;
PyObject *const_str_plain_version_info;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_check_pydantic_core_version;
PyObject *const_dict_70208165940d53b166c004ee4aae5b1d;
PyObject *const_str_plain_parse_mypy_version;
PyObject *const_str_digest_bf7cccd695582eae1deee4166e5994e7;
PyObject *const_tuple_b0c00933e83a0151953f3a00c2178204_tuple;
PyObject *const_str_digest_861b6e26d3b9122db47f041396eecce7;
PyObject *const_tuple_str_plain_version_tuple;
PyObject *const_tuple_c1049de030a71bc1f027a6051206af41_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.version"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c7e143f2ab119bdbe8e7d740c51a4ed);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__pydantic_core);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__git_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__git);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_set_05d538fd76222b8e17b6f77d4d10825b);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_distributions);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Name);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_related_packages);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_chr_45);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_parents);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_git_repo);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_have_git);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_git_revision);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_928442bca24f999c6868a1cd09b6646d);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac2fb74d077971ab6776eba6d974a861);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_621b617c0ee22d5d4ba4a3f3a118e350);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_info);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_profile);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f025ee709ba91be83190bed385025bb);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_764b7941e2af2cec19890d8b14be6975);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_commit);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_306f9166cc7babd6b94a743434db8ddb);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_3eea1e45485fdedf65c9013d9418b4ca);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_str_space_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3dbbac5873432c5b9df5e3c1da74149);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_version__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffcc481aae92205f051bf0a848f1e338);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a1a31aaecdfde3a37e4ab7d9ee73b06);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1eb33ef7beb8ccc96f87e6c1172e019);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_438e852210be7be9574ae9ea25f06593);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__annotations);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain_version_info_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_763483adb453f1fc1ed3da597b9d68ac);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_version_short);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_version_info);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_pydantic_core_version);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_70208165940d53b166c004ee4aae5b1d);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_mypy_version);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf7cccd695582eae1deee4166e5994e7);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_b0c00933e83a0151953f3a00c2178204_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_861b6e26d3b9122db47f041396eecce7);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_c1049de030a71bc1f027a6051206af41_tuple);
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
void checkModuleConstants_pydantic$version(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c7e143f2ab119bdbe8e7d740c51a4ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c7e143f2ab119bdbe8e7d740c51a4ed);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pydantic_core);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__internal);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__git_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__git_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__git));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__git);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_set_05d538fd76222b8e17b6f77d4d10825b));
CHECK_OBJECT_DEEP(mod_consts.const_set_05d538fd76222b8e17b6f77d4d10825b);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_distributions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_distributions);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Name);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_related_packages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_related_packages);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_chr_45));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_45);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_parents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parents);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_git_repo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_git_repo);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_have_git));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_have_git);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_git_revision));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_git_revision);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_928442bca24f999c6868a1cd09b6646d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_928442bca24f999c6868a1cd09b6646d);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac2fb74d077971ab6776eba6d974a861));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac2fb74d077971ab6776eba6d974a861);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_621b617c0ee22d5d4ba4a3f3a118e350));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_621b617c0ee22d5d4ba4a3f3a118e350);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_info);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_profile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build_profile);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f025ee709ba91be83190bed385025bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f025ee709ba91be83190bed385025bb);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_764b7941e2af2cec19890d8b14be6975));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_764b7941e2af2cec19890d8b14be6975);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_commit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_commit);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_306f9166cc7babd6b94a743434db8ddb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_306f9166cc7babd6b94a743434db8ddb);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_3eea1e45485fdedf65c9013d9418b4ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3eea1e45485fdedf65c9013d9418b4ca);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_str_space_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3dbbac5873432c5b9df5e3c1da74149));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3dbbac5873432c5b9df5e3c1da74149);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_core_version__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffcc481aae92205f051bf0a848f1e338));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffcc481aae92205f051bf0a848f1e338);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a1a31aaecdfde3a37e4ab7d9ee73b06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a1a31aaecdfde3a37e4ab7d9ee73b06);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_43_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1eb33ef7beb8ccc96f87e6c1172e019));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1eb33ef7beb8ccc96f87e6c1172e019);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_438e852210be7be9574ae9ea25f06593));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_438e852210be7be9574ae9ea25f06593);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__annotations);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_str_plain_version_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VERSION_str_plain_version_info_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_763483adb453f1fc1ed3da597b9d68ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_763483adb453f1fc1ed3da597b9d68ac);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_version_short));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version_short);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_version_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version_info);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_pydantic_core_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_pydantic_core_version);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_70208165940d53b166c004ee4aae5b1d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_70208165940d53b166c004ee4aae5b1d);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_mypy_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_mypy_version);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf7cccd695582eae1deee4166e5994e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf7cccd695582eae1deee4166e5994e7);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_b0c00933e83a0151953f3a00c2178204_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b0c00933e83a0151953f3a00c2178204_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_861b6e26d3b9122db47f041396eecce7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_861b6e26d3b9122db47f041396eecce7);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_c1049de030a71bc1f027a6051206af41_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c1049de030a71bc1f027a6051206af41_tuple);
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
static PyObject *module_var_accessor_pydantic$version$VERSION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$version->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$version->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$version->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERSION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERSION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERSION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERSION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$version$__file__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$version->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$version->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___file__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$version->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___file__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___file__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___file__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$version$__pydantic_core_version__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$version->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$version->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain___pydantic_core_version__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$version->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___pydantic_core_version__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___pydantic_core_version__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___pydantic_core_version__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___pydantic_core_version__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain___pydantic_core_version__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain___pydantic_core_version__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___pydantic_core_version__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$version$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$version->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$version->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$version->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_689e351e267f4ee22fa52ba8a63fa153;
static PyCodeObject *code_objects_4943adfc6de670536403fa44c9f524f5;
static PyCodeObject *code_objects_0d5a00255ccd17d24bf7ede873ab76b4;
static PyCodeObject *code_objects_a98745694f26fa049705652449f77b62;
static PyCodeObject *code_objects_9fe369a1064109ad5cedeb693bbc8900;
static PyCodeObject *code_objects_714aff35777734230a2cccf13f164084;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_bf7cccd695582eae1deee4166e5994e7); CHECK_OBJECT(module_filename_obj);
code_objects_689e351e267f4ee22fa52ba8a63fa153 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_f3dbbac5873432c5b9df5e3c1da74149, mod_consts.const_tuple_b0c00933e83a0151953f3a00c2178204_tuple, NULL, 1, 0, 0);
code_objects_4943adfc6de670536403fa44c9f524f5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_861b6e26d3b9122db47f041396eecce7, mod_consts.const_str_digest_861b6e26d3b9122db47f041396eecce7, NULL, NULL, 0, 0, 0);
code_objects_0d5a00255ccd17d24bf7ede873ab76b4 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_check_pydantic_core_version, mod_consts.const_str_plain_check_pydantic_core_version, NULL, NULL, 0, 0, 0);
code_objects_a98745694f26fa049705652449f77b62 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_mypy_version, mod_consts.const_str_plain_parse_mypy_version, mod_consts.const_tuple_str_plain_version_tuple, NULL, 1, 0, 0);
code_objects_9fe369a1064109ad5cedeb693bbc8900 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_version_info, mod_consts.const_str_plain_version_info, mod_consts.const_tuple_c1049de030a71bc1f027a6051206af41_tuple, NULL, 0, 0, 0);
code_objects_714aff35777734230a2cccf13f164084 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_version_short, mod_consts.const_str_plain_version_short, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$version$$$function__1_version_short(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$version$$$function__2_version_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$version$$$function__3_check_pydantic_core_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$version$$$function__4_parse_mypy_version(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$version$$$function__1_version_short(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pydantic$version$$$function__1_version_short;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$version$$$function__1_version_short = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$version$$$function__1_version_short)) {
    Py_XDECREF(cache_frame_frame_pydantic$version$$$function__1_version_short);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$version$$$function__1_version_short == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$version$$$function__1_version_short = MAKE_FUNCTION_FRAME(tstate, code_objects_714aff35777734230a2cccf13f164084, module_pydantic$version, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$version$$$function__1_version_short->m_type_description == NULL);
frame_frame_pydantic$version$$$function__1_version_short = cache_frame_frame_pydantic$version$$$function__1_version_short;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$version$$$function__1_version_short);
assert(Py_REFCNT(frame_frame_pydantic$version$$$function__1_version_short) == 2);

// Framed code:
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_str_arg_value_1 = const_str_dot;
tmp_expression_value_2 = module_var_accessor_pydantic$version$VERSION(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VERSION);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__1_version_short->m_frame.f_lineno = 18;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2_none;
tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$version$$$function__1_version_short, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$version$$$function__1_version_short->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$version$$$function__1_version_short, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$version$$$function__1_version_short,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$version$$$function__1_version_short == cache_frame_frame_pydantic$version$$$function__1_version_short) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$version$$$function__1_version_short);
    cache_frame_frame_pydantic$version$$$function__1_version_short = NULL;
}

assertFrameObject(frame_frame_pydantic$version$$$function__1_version_short);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$version$$$function__2_version_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_importlib = NULL;
PyObject *var_platform = NULL;
PyObject *var_sys = NULL;
PyObject *var_Path = NULL;
PyObject *var_pdc = NULL;
PyObject *var_git = NULL;
PyObject *var_package_names = NULL;
PyObject *var_related_packages = NULL;
PyObject *var_dist = NULL;
PyObject *var_name = NULL;
PyObject *var_pydantic_dir = NULL;
PyObject *var_most_recent_commit = NULL;
PyObject *var_info = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$version$$$function__2_version_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$version$$$function__2_version_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
IMPORT_HARD_IMPORTLIB__METADATA();
tmp_assign_source_1 = IMPORT_HARD_IMPORTLIB();
assert(!(tmp_assign_source_1 == NULL));
assert(var_importlib == NULL);
Py_INCREF(tmp_assign_source_1);
var_importlib = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$version$$$function__2_version_info)) {
    Py_XDECREF(cache_frame_frame_pydantic$version$$$function__2_version_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$version$$$function__2_version_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$version$$$function__2_version_info = MAKE_FUNCTION_FRAME(tstate, code_objects_9fe369a1064109ad5cedeb693bbc8900, module_pydantic$version, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$version$$$function__2_version_info->m_type_description == NULL);
frame_frame_pydantic$version$$$function__2_version_info = cache_frame_frame_pydantic$version$$$function__2_version_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$version$$$function__2_version_info);
assert(Py_REFCNT(frame_frame_pydantic$version$$$function__2_version_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$version;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 24;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_platform == NULL);
var_platform = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_3 == NULL));
assert(var_sys == NULL);
Py_INCREF(tmp_assign_source_3);
var_sys = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$version;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 26;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$version,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_Path == NULL);
var_Path = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_907d5366b2af807fa07d12233a5c2457;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$version;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 28;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$version,
        mod_consts.const_str_plain__pydantic_core,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__pydantic_core);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pdc == NULL);
var_pdc = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__internal;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$version;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain__git_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 30;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$version,
        mod_consts.const_str_plain__git,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__git);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_git == NULL);
var_git = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = PySet_New(mod_consts.const_set_05d538fd76222b8e17b6f77d4d10825b);
assert(var_package_names == NULL);
var_package_names = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_related_packages == NULL);
var_related_packages = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_IMPORTLIB__METADATA();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 44;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_distributions);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 44;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_11 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_dist;
    var_dist = tmp_assign_source_11;
    Py_INCREF(var_dist);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_dist);
tmp_expression_value_2 = var_dist;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_metadata);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_Name;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
CHECK_OBJECT(var_package_names);
tmp_cmp_expr_right_1 = var_package_names;
tmp_res = PySet_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
if (var_related_packages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_related_packages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 47;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_related_packages;
CHECK_OBJECT(var_name);
tmp_format_value_1 = var_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_45;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_dist);
tmp_expression_value_3 = var_dist;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_version);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_item_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_item_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_Path);
tmp_called_value_1 = var_Path;
tmp_args_element_value_1 = module_var_accessor_pydantic$version$__file__(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 49;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_parents);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 49;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pydantic_dir == NULL);
var_pydantic_dir = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_git);
tmp_called_instance_3 = var_git;
CHECK_OBJECT(var_pydantic_dir);
tmp_args_element_value_2 = var_pydantic_dir;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 51;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_is_git_repo, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_git);
tmp_called_instance_4 = var_git;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 51;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_have_git);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
CHECK_OBJECT(var_git);
tmp_called_instance_5 = var_git;
CHECK_OBJECT(var_pydantic_dir);
tmp_args_element_value_3 = var_pydantic_dir;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 51;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_git_revision, tmp_args_element_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_14 = mod_consts.const_str_plain_unknown;
Py_INCREF(tmp_assign_source_14);
condexpr_end_1:;
assert(var_most_recent_commit == NULL);
var_most_recent_commit = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_928442bca24f999c6868a1cd09b6646d;
tmp_dict_value_1 = module_var_accessor_pydantic$version$VERSION(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VERSION);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_6;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_6;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_ac2fb74d077971ab6776eba6d974a861;
CHECK_OBJECT(var_pdc);
tmp_expression_value_6 = var_pdc;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___version__);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_621b617c0ee22d5d4ba4a3f3a118e350;
CHECK_OBJECT(var_pdc);
tmp_expression_value_7 = var_pdc;
tmp_name_value_5 = mod_consts.const_str_plain_build_info;
tmp_default_value_1 = Py_None;
tmp_or_left_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_5, tmp_default_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 57;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(var_pdc);
tmp_expression_value_8 = var_pdc;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_build_profile);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_dict_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_2f025ee709ba91be83190bed385025bb;
tmp_dict_value_1 = mod_consts.const_str_digest_b3836178c5086d1da4353bc34793fa77;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_platform;
CHECK_OBJECT(var_platform);
tmp_called_instance_6 = var_platform;
frame_frame_pydantic$version$$$function__2_version_info->m_frame.f_lineno = 59;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_platform);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_digest_764b7941e2af2cec19890d8b14be6975;
tmp_str_arg_value_1 = mod_consts.const_str_space;
if (var_related_packages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_related_packages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}

tmp_iterable_value_1 = var_related_packages;
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_commit;
CHECK_OBJECT(var_most_recent_commit);
tmp_dict_value_1 = var_most_recent_commit;
tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_info == NULL);
var_info = tmp_assign_source_15;
}
{
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_2 = mod_consts.const_str_newline;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
CHECK_OBJECT(var_info);
tmp_dict_arg_1 = var_info;
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_2 == NULL));
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_16;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_2 = MAKE_GENERATOR_pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$version$$$function__2_version_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$version$$$function__2_version_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$version$$$function__2_version_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$version$$$function__2_version_info,
    type_description_1,
    var_importlib,
    var_platform,
    var_sys,
    var_Path,
    var_pdc,
    var_git,
    var_package_names,
    var_related_packages,
    var_dist,
    var_name,
    var_pydantic_dir,
    var_most_recent_commit,
    var_info
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$version$$$function__2_version_info == cache_frame_frame_pydantic$version$$$function__2_version_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$version$$$function__2_version_info);
    cache_frame_frame_pydantic$version$$$function__2_version_info = NULL;
}

assertFrameObject(frame_frame_pydantic$version$$$function__2_version_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_importlib);
CHECK_OBJECT(var_importlib);
Py_DECREF(var_importlib);
var_importlib = NULL;
CHECK_OBJECT(var_platform);
CHECK_OBJECT(var_platform);
Py_DECREF(var_platform);
var_platform = NULL;
CHECK_OBJECT(var_sys);
CHECK_OBJECT(var_sys);
Py_DECREF(var_sys);
var_sys = NULL;
CHECK_OBJECT(var_Path);
CHECK_OBJECT(var_Path);
Py_DECREF(var_Path);
var_Path = NULL;
CHECK_OBJECT(var_pdc);
CHECK_OBJECT(var_pdc);
Py_DECREF(var_pdc);
var_pdc = NULL;
CHECK_OBJECT(var_git);
CHECK_OBJECT(var_git);
Py_DECREF(var_git);
var_git = NULL;
CHECK_OBJECT(var_package_names);
CHECK_OBJECT(var_package_names);
Py_DECREF(var_package_names);
var_package_names = NULL;
Py_XDECREF(var_related_packages);
var_related_packages = NULL;
Py_XDECREF(var_dist);
var_dist = NULL;
Py_XDECREF(var_name);
var_name = NULL;
CHECK_OBJECT(var_pydantic_dir);
CHECK_OBJECT(var_pydantic_dir);
Py_DECREF(var_pydantic_dir);
var_pydantic_dir = NULL;
CHECK_OBJECT(var_most_recent_commit);
CHECK_OBJECT(var_most_recent_commit);
Py_DECREF(var_most_recent_commit);
var_most_recent_commit = NULL;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_importlib);
CHECK_OBJECT(var_importlib);
Py_DECREF(var_importlib);
var_importlib = NULL;
Py_XDECREF(var_platform);
var_platform = NULL;
Py_XDECREF(var_sys);
var_sys = NULL;
Py_XDECREF(var_Path);
var_Path = NULL;
Py_XDECREF(var_pdc);
var_pdc = NULL;
Py_XDECREF(var_git);
var_git = NULL;
Py_XDECREF(var_package_names);
var_package_names = NULL;
Py_XDECREF(var_related_packages);
var_related_packages = NULL;
Py_XDECREF(var_dist);
var_dist = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_pydantic_dir);
var_pydantic_dir = NULL;
Py_XDECREF(var_most_recent_commit);
var_most_recent_commit = NULL;
Py_XDECREF(var_info);
var_info = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_locals {
PyObject *var_k;
PyObject *var_v;
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

static PyObject *pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_locals *generator_heap = (struct pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_k = NULL;
generator_heap->var_v = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_689e351e267f4ee22fa52ba8a63fa153, module_pydantic$version, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 63;
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


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
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
    PyObject *old = generator_heap->var_k;
    generator_heap->var_k = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_k);
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
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_3eea1e45485fdedf65c9013d9418b4ca;
CHECK_OBJECT(generator_heap->var_k);
tmp_add_expr_left_1 = generator_heap->var_k;
tmp_add_expr_right_1 = mod_consts.const_str_chr_58;
tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_v);
tmp_unicode_arg_1 = generator_heap->var_v;
tmp_expression_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 63;
tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_newline_str_space_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "Noo";
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
    generator_heap->var_k,
    generator_heap->var_v
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

Py_XDECREF(generator_heap->var_k);
generator_heap->var_k = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_k);
generator_heap->var_k = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_context,
        module_pydantic$version,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f3dbbac5873432c5b9df5e3c1da74149,
#endif
        code_objects_689e351e267f4ee22fa52ba8a63fa153,
        closure,
        1,
#if 1
        sizeof(struct pydantic$version$$$function__2_version_info$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$version$$$function__3_check_pydantic_core_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pydantic$version$$$function__3_check_pydantic_core_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version)) {
    Py_XDECREF(cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version = MAKE_FUNCTION_FRAME(tstate, code_objects_0d5a00255ccd17d24bf7ede873ab76b4, module_pydantic$version, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version->m_type_description == NULL);
frame_frame_pydantic$version$$$function__3_check_pydantic_core_version = cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$version$$$function__3_check_pydantic_core_version);
assert(Py_REFCNT(frame_frame_pydantic$version$$$function__3_check_pydantic_core_version) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_pydantic$version$__pydantic_core_version__(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___pydantic_core_version__);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_ffcc481aae92205f051bf0a848f1e338;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$version$$$function__3_check_pydantic_core_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$version$$$function__3_check_pydantic_core_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$version$$$function__3_check_pydantic_core_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$version$$$function__3_check_pydantic_core_version,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$version$$$function__3_check_pydantic_core_version == cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version);
    cache_frame_frame_pydantic$version$$$function__3_check_pydantic_core_version = NULL;
}

assertFrameObject(frame_frame_pydantic$version$$$function__3_check_pydantic_core_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$version$$$function__4_parse_mypy_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_version = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$version$$$function__4_parse_mypy_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version)) {
    Py_XDECREF(cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version = MAKE_FUNCTION_FRAME(tstate, code_objects_a98745694f26fa049705652449f77b62, module_pydantic$version, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version->m_type_description == NULL);
frame_frame_pydantic$version$$$function__4_parse_mypy_version = cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$version$$$function__4_parse_mypy_version);
assert(Py_REFCNT(frame_frame_pydantic$version$$$function__4_parse_mypy_version) == 2);

// Framed code:
{
PyObject *tmp_tuple_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = (PyObject *)&PyMap_Type;
tmp_args_element_value_1 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(par_version);
tmp_expression_value_3 = par_version;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_partition);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__4_parse_mypy_version->m_frame.f_lineno = 84;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_chr_43_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__4_parse_mypy_version->m_frame.f_lineno = 84;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$version$$$function__4_parse_mypy_version->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$version$$$function__4_parse_mypy_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$version$$$function__4_parse_mypy_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$version$$$function__4_parse_mypy_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$version$$$function__4_parse_mypy_version,
    type_description_1,
    par_version
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$version$$$function__4_parse_mypy_version == cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version);
    cache_frame_frame_pydantic$version$$$function__4_parse_mypy_version = NULL;
}

assertFrameObject(frame_frame_pydantic$version$$$function__4_parse_mypy_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_version);
Py_DECREF(par_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$version$$$function__1_version_short(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$version$$$function__1_version_short,
        mod_consts.const_str_plain_version_short,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_714aff35777734230a2cccf13f164084,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$version,
        mod_consts.const_str_digest_5c7e143f2ab119bdbe8e7d740c51a4ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$version$$$function__2_version_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$version$$$function__2_version_info,
        mod_consts.const_str_plain_version_info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9fe369a1064109ad5cedeb693bbc8900,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$version,
        mod_consts.const_str_digest_306f9166cc7babd6b94a743434db8ddb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$version$$$function__3_check_pydantic_core_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$version$$$function__3_check_pydantic_core_version,
        mod_consts.const_str_plain_check_pydantic_core_version,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0d5a00255ccd17d24bf7ede873ab76b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$version,
        mod_consts.const_str_digest_3a1a31aaecdfde3a37e4ab7d9ee73b06,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$version$$$function__4_parse_mypy_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$version$$$function__4_parse_mypy_version,
        mod_consts.const_str_plain_parse_mypy_version,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a98745694f26fa049705652449f77b62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$version,
        mod_consts.const_str_digest_e1eb33ef7beb8ccc96f87e6c1172e019,
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

static function_impl_code const function_table_pydantic$version[] = {
impl_pydantic$version$$$function__1_version_short,
impl_pydantic$version$$$function__2_version_info,
impl_pydantic$version$$$function__3_check_pydantic_core_version,
impl_pydantic$version$$$function__4_parse_mypy_version,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$version);
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
        module_pydantic$version,
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
        function_table_pydantic$version,
        sizeof(function_table_pydantic$version) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.version";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$version(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$version");

    // Store the module for future use.
    module_pydantic$version = module;

    moduledict_pydantic$version = MODULE_DICT(module_pydantic$version);

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
        PRINT_STRING("pydantic$version: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$version: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$version: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.version" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$version\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$version,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$version);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$version);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_pydantic$version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_438e852210be7be9574ae9ea25f06593;
UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$version = MAKE_MODULE_FRAME(code_objects_4943adfc6de670536403fa44c9f524f5, module_pydantic$version);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$version);
assert(Py_REFCNT(frame_frame_pydantic$version) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$version$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$version$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain__annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
frame_frame_pydantic$version->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$version,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain___pydantic_core_version__, tmp_assign_source_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_tuple_str_plain_VERSION_str_plain_version_info_tuple;
UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_digest_763483adb453f1fc1ed3da597b9d68ac;
UPDATE_STRING_DICT0(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_8 = MAKE_FUNCTION_pydantic$version$$$function__1_version_short(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_9 = MAKE_FUNCTION_pydantic$version$$$function__2_version_info(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_version_info, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_10 = MAKE_FUNCTION_pydantic$version$$$function__3_check_pydantic_core_version(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_check_pydantic_core_version, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_70208165940d53b166c004ee4aae5b1d);

tmp_assign_source_11 = MAKE_FUNCTION_pydantic$version$$$function__4_parse_mypy_version(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_pydantic$version, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_mypy_version, tmp_assign_source_11);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$version", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.version" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$version);
    return module_pydantic$version;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$version, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$version", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

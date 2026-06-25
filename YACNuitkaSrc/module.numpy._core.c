/* Generated code for Python module 'numpy$_core'
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



/* The "module_numpy$_core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core;
PyDictObject *moduledict_numpy$_core;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_dtype;
PyObject *const_str_plain__legacy;
PyObject *const_str_digest_6a55961dd89fa4dc7b6a0934280d1340;
PyObject *const_str_plain__DType_reconstruct;
PyObject *const_str_digest_82c6817613fba94ef73770e56ab5e28d;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple;
PyObject *const_str_plain__core;
PyObject *const_tuple_4f79c91e4fdb002b2f93ceac87cab328_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_os;
PyObject *const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
PyObject *const_tuple_str_plain_version_tuple;
PyObject *const_str_plain_version;
PyObject *const_str_plain___version__;
PyObject *const_str_plain_env_added;
PyObject *const_tuple_str_plain_OPENBLAS_MAIN_FREE_tuple;
PyObject *const_str_plain_envkey;
PyObject *const_str_plain_putenv;
PyObject *const_str_plain_1;
PyObject *const_str_plain_append;
PyObject *const_tuple_str_plain_multiarray_tuple;
PyObject *const_str_plain_multiarray;
PyObject *const_str_plain_ImportError;
PyObject *const_str_plain_exc;
PyObject *const_str_plain_unsetenv;
PyObject *const_tuple_str_plain_umath_tuple;
PyObject *const_str_plain_umath;
PyObject *const_str_plain_hasattr;
PyObject *const_str_plain__multiarray_umath;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_modules;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_fdc1af7784de125a5703f3d4c59f2c10;
PyObject *const_str_plain_msg;
PyObject *const_tuple_str_plain_numerictypes_tuple;
PyObject *const_str_plain_numerictypes;
PyObject *const_str_plain_nt;
PyObject *const_tuple_str_plain_sctypeDict_str_plain_sctypes_tuple;
PyObject *const_str_plain_sctypeDict;
PyObject *const_str_plain_sctypes;
PyObject *const_str_plain_set_typeDict;
PyObject *const_tuple_1bb50a3217baacdd45f5b1894b58c364_tuple;
PyObject *const_str_plain_einsumfunc;
PyObject *const_str_plain_fromnumeric;
PyObject *const_str_plain_function_base;
PyObject *const_str_plain_getlimits;
PyObject *const_str_plain_numeric;
PyObject *const_str_plain_shape_base;
PyObject *const_tuple_str_chr_42_tuple;
PyObject *const_str_plain_memmap;
PyObject *const_str_plain_records;
PyObject *const_tuple_str_plain_recarray_str_plain_record_tuple;
PyObject *const_str_plain_recarray;
PyObject *const_str_plain_record;
PyObject *const_tuple_304ac062bba35eb1fd9a148cfd7a3267_tuple;
PyObject *const_str_plain__add_newdocs;
PyObject *const_str_plain__add_newdocs_scalars;
PyObject *const_str_plain__dtype;
PyObject *const_str_plain__dtype_ctypes;
PyObject *const_str_plain__internal;
PyObject *const_str_plain__methods;
PyObject *const_tuple_str_plain_absolute_tuple;
PyObject *const_str_plain_absolute;
PyObject *const_str_plain_abs;
PyObject *const_str_plain_arccos;
PyObject *const_str_plain_acos;
PyObject *const_str_plain_arccosh;
PyObject *const_str_plain_acosh;
PyObject *const_str_plain_arcsin;
PyObject *const_str_plain_asin;
PyObject *const_str_plain_arcsinh;
PyObject *const_str_plain_asinh;
PyObject *const_str_plain_arctan;
PyObject *const_str_plain_atan;
PyObject *const_str_plain_arctanh;
PyObject *const_str_plain_atanh;
PyObject *const_str_plain_arctan2;
PyObject *const_str_plain_atan2;
PyObject *const_str_plain_concatenate;
PyObject *const_str_plain_concat;
PyObject *const_str_plain_left_shift;
PyObject *const_str_plain_bitwise_left_shift;
PyObject *const_str_plain_invert;
PyObject *const_str_plain_bitwise_invert;
PyObject *const_str_plain_right_shift;
PyObject *const_str_plain_bitwise_right_shift;
PyObject *const_str_plain_transpose;
PyObject *const_str_plain_permute_dims;
PyObject *const_str_plain_power;
PyObject *const_str_plain_pow;
PyObject *const_list_aaf4e7871f7bef0daf38ea6a1f478b99_list;
PyObject *const_str_plain__ufunc_reduce;
PyObject *const_str_plain__DType_reduce;
PyObject *const_str_plain_copyreg;
PyObject *const_str_plain_pickle;
PyObject *const_str_plain_ufunc;
PyObject *const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff;
PyObject *const_tuple_str_plain_PytestTester_tuple;
PyObject *const_str_plain_PytestTester;
PyObject *const_tuple_str_digest_218a55714e76c818c59b93d99676c0b2_tuple;
PyObject *const_str_plain_test;
PyObject *const_str_digest_53f15cb966b51b37eae95c914f9eb8fa;
PyObject *const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7;
PyObject *const_tuple_str_plain_scalar_type_tuple;
PyObject *const_tuple_str_plain_DType_str_plain_scalar_type_tuple;
PyObject *const_tuple_str_plain_func_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[110];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a55961dd89fa4dc7b6a0934280d1340);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__DType_reconstruct);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_82c6817613fba94ef73770e56ab5e28d);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_4f79c91e4fdb002b2f93ceac87cab328_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_cad1fcb236d0fed73a31a019d414de2f);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_env_added);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENBLAS_MAIN_FREE_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_envkey);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_putenv);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multiarray_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsetenv);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_umath_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_umath);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_hasattr);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdc1af7784de125a5703f3d4c59f2c10);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numerictypes_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_nt);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sctypeDict_str_plain_sctypes_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctypeDict);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctypes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_typeDict);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_1bb50a3217baacdd45f5b1894b58c364_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_einsumfunc);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromnumeric);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_base);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_getlimits);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape_base);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_memmap);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_records);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recarray_str_plain_record_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_recarray);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_record);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_304ac062bba35eb1fd9a148cfd7a3267_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__add_newdocs);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__add_newdocs_scalars);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__dtype);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__dtype_ctypes);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__methods);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_absolute_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_arccos);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_acos);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_arccosh);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_acosh);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_arcsin);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_asin);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_arcsinh);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_asinh);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_arctan);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_atan);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_arctanh);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_atanh);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_arctan2);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_atan2);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_concat);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_left_shift);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_left_shift);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_invert);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_right_shift);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_right_shift);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_transpose);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_permute_dims);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_power);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_list_aaf4e7871f7bef0daf38ea6a1f478b99_list);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__ufunc_reduce);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__DType_reduce);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyreg);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_pickle);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_ufunc);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PytestTester_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_PytestTester);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_218a55714e76c818c59b93d99676c0b2_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_test);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_53f15cb966b51b37eae95c914f9eb8fa);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scalar_type_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DType_str_plain_scalar_type_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple);
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
void checkModuleConstants_numpy$_core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a55961dd89fa4dc7b6a0934280d1340));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a55961dd89fa4dc7b6a0934280d1340);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__DType_reconstruct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DType_reconstruct);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_82c6817613fba94ef73770e56ab5e28d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82c6817613fba94ef73770e56ab5e28d);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_4f79c91e4fdb002b2f93ceac87cab328_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f79c91e4fdb002b2f93ceac87cab328_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_cad1fcb236d0fed73a31a019d414de2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cad1fcb236d0fed73a31a019d414de2f);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_env_added));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_env_added);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENBLAS_MAIN_FREE_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OPENBLAS_MAIN_FREE_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_envkey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_envkey);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_putenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_putenv);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_1);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multiarray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_multiarray_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiarray);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImportError);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsetenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsetenv);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_umath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_umath_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_umath);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_hasattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hasattr);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__multiarray_umath);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdc1af7784de125a5703f3d4c59f2c10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fdc1af7784de125a5703f3d4c59f2c10);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msg);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numerictypes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numerictypes_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numerictypes);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_nt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nt);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sctypeDict_str_plain_sctypes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sctypeDict_str_plain_sctypes_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctypeDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctypeDict);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctypes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_typeDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_typeDict);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_1bb50a3217baacdd45f5b1894b58c364_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1bb50a3217baacdd45f5b1894b58c364_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_einsumfunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_einsumfunc);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromnumeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromnumeric);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_base);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_getlimits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getlimits);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numeric);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape_base);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_42_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_memmap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memmap);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_records));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_records);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recarray_str_plain_record_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_recarray_str_plain_record_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_recarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recarray);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_record));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_record);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_304ac062bba35eb1fd9a148cfd7a3267_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_304ac062bba35eb1fd9a148cfd7a3267_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__add_newdocs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add_newdocs);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__add_newdocs_scalars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add_newdocs_scalars);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dtype);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__dtype_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dtype_ctypes);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__internal);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__methods));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__methods);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_absolute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_absolute_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abs);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_arccos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arccos);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_acos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_acos);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_arccosh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arccosh);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_acosh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_acosh);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_arcsin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arcsin);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_asin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asin);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_arcsinh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arcsinh);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_asinh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asinh);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_arctan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arctan);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_atan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atan);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_arctanh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arctanh);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_atanh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atanh);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_arctan2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arctan2);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_atan2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atan2);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concatenate);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_concat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concat);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_left_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left_shift);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_left_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_left_shift);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invert);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_invert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_invert);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_right_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right_shift);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_bitwise_right_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bitwise_right_shift);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_transpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transpose);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_permute_dims));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permute_dims);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_power));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_power);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pow);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_list_aaf4e7871f7bef0daf38ea6a1f478b99_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_aaf4e7871f7bef0daf38ea6a1f478b99_list);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__ufunc_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ufunc_reduce);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__DType_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DType_reduce);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyreg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copyreg);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_pickle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pickle);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_ufunc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ufunc);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PytestTester_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PytestTester_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_PytestTester));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PytestTester);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_218a55714e76c818c59b93d99676c0b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_218a55714e76c818c59b93d99676c0b2_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_test);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_53f15cb966b51b37eae95c914f9eb8fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53f15cb966b51b37eae95c914f9eb8fa);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scalar_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scalar_type_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DType_str_plain_scalar_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DType_str_plain_scalar_type_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_numpy$_core$ImportError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImportError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImportError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImportError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImportError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImportError);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$PytestTester(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_PytestTester);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PytestTester);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PytestTester, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PytestTester);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PytestTester, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_PytestTester);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_PytestTester);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PytestTester);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_DType_reconstruct(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reconstruct);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DType_reconstruct);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DType_reconstruct, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DType_reconstruct);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DType_reconstruct, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reconstruct);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reconstruct);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reconstruct);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_DType_reduce(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reduce);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DType_reduce);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DType_reduce, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DType_reduce);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DType_reduce, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reduce);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reduce);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reduce);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$__all__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_ufunc_reduce(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__ufunc_reduce);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ufunc_reduce);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ufunc_reduce, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ufunc_reduce);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ufunc_reduce, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__ufunc_reduce);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__ufunc_reduce);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ufunc_reduce);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$copyreg(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_copyreg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copyreg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copyreg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copyreg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copyreg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_copyreg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_copyreg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copyreg);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$dtype(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$einsumfunc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_einsumfunc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_einsumfunc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_einsumfunc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_einsumfunc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_einsumfunc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_einsumfunc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_einsumfunc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_einsumfunc);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$env_added(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_env_added);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_env_added);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_env_added, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_env_added);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_env_added, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_env_added);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_env_added);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_env_added);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$envkey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_envkey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_envkey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_envkey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_envkey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$function_base(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_function_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_function_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_function_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_function_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_function_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_function_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_function_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_function_base);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_getlimits);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getlimits);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getlimits, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getlimits);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getlimits, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_getlimits);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_getlimits);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getlimits);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$hasattr(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hasattr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hasattr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hasattr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hasattr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hasattr);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$msg(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_msg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_msg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_msg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_msg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_msg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_msg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_msg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_msg);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$multiarray(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_multiarray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiarray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiarray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiarray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiarray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_multiarray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_multiarray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_multiarray);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$nt(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_nt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_nt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_nt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$numeric(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numeric);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numeric, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numeric);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numeric, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$path(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_path);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$shape_base(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_shape_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shape_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shape_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shape_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shape_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_shape_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_shape_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_shape_base);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$ufunc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ufunc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ufunc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ufunc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ufunc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ufunc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ufunc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_ufunc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ufunc);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$umath(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_umath);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umath);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umath, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_umath);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_umath, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_umath);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_umath);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_umath);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8d77767df04f12b229fd60887cd630d5;
static PyCodeObject *code_objects_29dc0e3c7cd0343389f585b099e8efff;
static PyCodeObject *code_objects_19c8d2908ceec7634325125f7a3542a2;
static PyCodeObject *code_objects_86c4dc97474aa5d55b5009028be1ac79;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_53f15cb966b51b37eae95c914f9eb8fa); CHECK_OBJECT(module_filename_obj);
code_objects_8d77767df04f12b229fd60887cd630d5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7, mod_consts.const_str_digest_bc786c5227e1d13bc84a71e1479f9ff7, NULL, NULL, 0, 0, 0);
code_objects_29dc0e3c7cd0343389f585b099e8efff = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__DType_reconstruct, mod_consts.const_str_plain__DType_reconstruct, mod_consts.const_tuple_str_plain_scalar_type_tuple, NULL, 1, 0, 0);
code_objects_19c8d2908ceec7634325125f7a3542a2 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__DType_reduce, mod_consts.const_str_plain__DType_reduce, mod_consts.const_tuple_str_plain_DType_str_plain_scalar_type_tuple, NULL, 1, 0, 0);
code_objects_86c4dc97474aa5d55b5009028be1ac79 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ufunc_reduce, mod_consts.const_str_plain__ufunc_reduce, mod_consts.const_tuple_str_plain_func_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_core$$$function__1__ufunc_reduce(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$$$function__2__DType_reconstruct(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$$$function__3__DType_reduce(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$_core$$$function__1__ufunc_reduce(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$$$function__1__ufunc_reduce;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce = MAKE_FUNCTION_FRAME(tstate, code_objects_86c4dc97474aa5d55b5009028be1ac79, module_numpy$_core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce->m_type_description == NULL);
frame_frame_numpy$_core$$$function__1__ufunc_reduce = cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$$$function__1__ufunc_reduce);
assert(Py_REFCNT(frame_frame_numpy$_core$$$function__1__ufunc_reduce) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_func);
tmp_expression_value_1 = par_func;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$$$function__1__ufunc_reduce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$$$function__1__ufunc_reduce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$$$function__1__ufunc_reduce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$$$function__1__ufunc_reduce,
    type_description_1,
    par_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$$$function__1__ufunc_reduce == cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce);
    cache_frame_frame_numpy$_core$$$function__1__ufunc_reduce = NULL;
}

assertFrameObject(frame_frame_numpy$_core$$$function__1__ufunc_reduce);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$$$function__2__DType_reconstruct(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_scalar_type = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$$$function__2__DType_reconstruct;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct = MAKE_FUNCTION_FRAME(tstate, code_objects_29dc0e3c7cd0343389f585b099e8efff, module_numpy$_core, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct->m_type_description == NULL);
frame_frame_numpy$_core$$$function__2__DType_reconstruct = cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$$$function__2__DType_reconstruct);
assert(Py_REFCNT(frame_frame_numpy$_core$$$function__2__DType_reconstruct) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$_core$type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$_core$dtype(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scalar_type);
tmp_args_element_value_2 = par_scalar_type;
frame_frame_numpy$_core$$$function__2__DType_reconstruct->m_frame.f_lineno = 179;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$$$function__2__DType_reconstruct->m_frame.f_lineno = 179;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$$$function__2__DType_reconstruct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$$$function__2__DType_reconstruct->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$$$function__2__DType_reconstruct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$$$function__2__DType_reconstruct,
    type_description_1,
    par_scalar_type
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$$$function__2__DType_reconstruct == cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct);
    cache_frame_frame_numpy$_core$$$function__2__DType_reconstruct = NULL;
}

assertFrameObject(frame_frame_numpy$_core$$$function__2__DType_reconstruct);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_scalar_type);
Py_DECREF(par_scalar_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_scalar_type);
Py_DECREF(par_scalar_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$$$function__3__DType_reduce(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_DType = python_pars[0];
PyObject *var_scalar_type = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$$$function__3__DType_reduce;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$$$function__3__DType_reduce = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$$$function__3__DType_reduce)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$$$function__3__DType_reduce);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$$$function__3__DType_reduce == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$$$function__3__DType_reduce = MAKE_FUNCTION_FRAME(tstate, code_objects_19c8d2908ceec7634325125f7a3542a2, module_numpy$_core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$$$function__3__DType_reduce->m_type_description == NULL);
frame_frame_numpy$_core$$$function__3__DType_reduce = cache_frame_frame_numpy$_core$$$function__3__DType_reduce;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$$$function__3__DType_reduce);
assert(Py_REFCNT(frame_frame_numpy$_core$$$function__3__DType_reduce) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_DType);
tmp_expression_value_1 = par_DType;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__legacy);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_DType);
tmp_expression_value_2 = par_DType;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___module__);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_6a55961dd89fa4dc7b6a0934280d1340;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_DType);
tmp_expression_value_3 = par_DType;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_DType);
tmp_expression_value_4 = par_DType;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_type);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_scalar_type == NULL);
var_scalar_type = tmp_assign_source_1;
}
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_numpy$_core$_DType_reconstruct(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DType_reconstruct);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_scalar_type);
tmp_tuple_element_2 = var_scalar_type;
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$$$function__3__DType_reduce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$$$function__3__DType_reduce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$$$function__3__DType_reduce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$$$function__3__DType_reduce,
    type_description_1,
    par_DType,
    var_scalar_type
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$$$function__3__DType_reduce == cache_frame_frame_numpy$_core$$$function__3__DType_reduce) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$$$function__3__DType_reduce);
    cache_frame_frame_numpy$_core$$$function__3__DType_reduce = NULL;
}

assertFrameObject(frame_frame_numpy$_core$$$function__3__DType_reduce);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_scalar_type);
var_scalar_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scalar_type);
var_scalar_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_DType);
Py_DECREF(par_DType);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_DType);
Py_DECREF(par_DType);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$$$function__1__ufunc_reduce(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$$$function__1__ufunc_reduce,
        mod_consts.const_str_plain__ufunc_reduce,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86c4dc97474aa5d55b5009028be1ac79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$$$function__2__DType_reconstruct(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$$$function__2__DType_reconstruct,
        mod_consts.const_str_plain__DType_reconstruct,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_29dc0e3c7cd0343389f585b099e8efff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$$$function__3__DType_reduce(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$$$function__3__DType_reduce,
        mod_consts.const_str_plain__DType_reduce,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_19c8d2908ceec7634325125f7a3542a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core,
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

static function_impl_code const function_table_numpy$_core[] = {
impl_numpy$_core$$$function__1__ufunc_reduce,
impl_numpy$_core$$$function__2__DType_reconstruct,
impl_numpy$_core$$$function__3__DType_reduce,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core);
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
        module_numpy$_core,
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
        function_table_numpy$_core,
        sizeof(function_table_numpy$_core) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core");

    // Store the module for future use.
    module_numpy$_core = module;

    moduledict_numpy$_core = MODULE_DICT(module_numpy$_core);

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
        PRINT_STRING("numpy$_core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *tmp_inplace_orig;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_82c6817613fba94ef73770e56ab5e28d;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core = MAKE_MODULE_FRAME(code_objects_8d77767df04f12b229fd60887cd630d5, module_numpy$_core);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core);
assert(Py_REFCNT(frame_frame_numpy$_core) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_fa3a28a416a76dcd3ce61a187389e54e_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain__core;
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
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
frame_frame_numpy$_core->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_4f79c91e4fdb002b2f93ceac87cab328_tuple);

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
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_numpy$_core$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_numpy$_core$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_version_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_version,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_version);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_env_added, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_OPENBLAS_MAIN_FREE_tuple;
tmp_assign_source_8 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 16;
        goto try_except_handler_1;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey, tmp_assign_source_10);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
tmp_cmp_expr_left_1 = module_var_accessor_numpy$_core$envkey(tstate);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_environ);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_putenv);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
tmp_args_element_value_4 = module_var_accessor_numpy$_core$envkey(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_envkey);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 20;

    goto try_except_handler_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_1;
frame_frame_numpy$_core->m_frame.f_lineno = 20;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
tmp_expression_value_7 = module_var_accessor_numpy$_core$env_added(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env_added);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto try_except_handler_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
tmp_args_element_value_6 = module_var_accessor_numpy$_core$envkey(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_envkey);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 21;

    goto try_except_handler_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 21;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
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
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_multiarray_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 24;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_multiarray,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_multiarray);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_multiarray, tmp_assign_source_11);
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_numpy$_core$ImportError(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_exc, tmp_assign_source_12);
}
// Tried code:
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core->m_frame)) {
        frame_frame_numpy$_core->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_exc) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 23;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core->m_frame)) {
        frame_frame_numpy$_core->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_numpy$_core$env_added(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env_added);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto try_except_handler_6;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_6;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_2 = tmp_for_loop_3__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 89;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_15 = tmp_for_loop_3__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey, tmp_assign_source_15);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
tmp_args_element_value_7 = module_var_accessor_numpy$_core$envkey(tstate);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_numpy$_core->m_frame.f_lineno = 90;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_unsetenv, tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 23;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core->m_frame)) {
        frame_frame_numpy$_core->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = module_var_accessor_numpy$_core$env_added(tstate);
if (unlikely(tmp_iter_arg_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env_added);
}

if (tmp_iter_arg_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 89;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_18 = tmp_for_loop_3__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_envkey, tmp_assign_source_18);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
tmp_args_element_value_8 = module_var_accessor_numpy$_core$envkey(tstate);
assert(!(tmp_args_element_value_8 == NULL));
frame_frame_numpy$_core->m_frame.f_lineno = 90;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_unsetenv, tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_envkey);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_envkey);

exception_lineno = 91;

    goto frame_exception_exit_1;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_env_added);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env_added);

exception_lineno = 92;

    goto frame_exception_exit_1;
}

if (DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_os) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_umath_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 95;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_umath,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_umath);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_umath, tmp_assign_source_19);
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_7 = module_var_accessor_numpy$_core$hasattr(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasattr);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_numpy$_core$multiarray(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_multiarray);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain__multiarray_umath;
frame_frame_numpy$_core->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 99;

    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
tmp_called_value_8 = module_var_accessor_numpy$_core$hasattr(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hasattr);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_numpy$_core$umath(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_umath);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = mod_consts.const_str_plain__multiarray_umath;
frame_frame_numpy$_core->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_20 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
tmp_expression_value_10 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_modules);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_numpy;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___path__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain_path, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_digest_fdc1af7784de125a5703f3d4c59f2c10;
UPDATE_STRING_DICT0(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_msg, tmp_assign_source_22);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_called_value_9 = module_var_accessor_numpy$_core$ImportError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImportError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = module_var_accessor_numpy$_core$msg(tstate);
assert(!(tmp_kw_call_arg_value_0_1 == NULL));
tmp_kw_call_arg_value_1_1 = module_var_accessor_numpy$_core$path(tstate);
assert(!(tmp_kw_call_arg_value_1_1 == NULL));
frame_frame_numpy$_core->m_frame.f_lineno = 107;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_13 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 107;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_numerictypes_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 109;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_numerictypes,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_numerictypes);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_nt, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_numerictypes;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_sctypeDict_str_plain_sctypes_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 110;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_sctypeDict,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_sctypeDict);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_sctypes,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_sctypes);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes, tmp_assign_source_26);
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_12;
tmp_expression_value_11 = module_var_accessor_numpy$_core$multiarray(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_multiarray);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_set_typeDict);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_numpy$_core$nt(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 112;

    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_sctypeDict);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 112;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 112;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_1bb50a3217baacdd45f5b1894b58c364_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 113;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_einsumfunc,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_einsumfunc);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_einsumfunc, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_fromnumeric,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_fromnumeric);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_fromnumeric, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_function_base,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_function_base);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_function_base, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_getlimits,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_getlimits);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_getlimits, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_numeric,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_numeric);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_shape_base,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_shape_base);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_shape_base, tmp_assign_source_33);
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_star_imported_1;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_einsumfunc;
tmp_globals_arg_value_7 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_7 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 114;
tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_star_imported_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_1);
CHECK_OBJECT(tmp_star_imported_1);
Py_DECREF(tmp_star_imported_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_2;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_fromnumeric;
tmp_globals_arg_value_8 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_8 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 115;
tmp_star_imported_2 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_star_imported_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_2);
CHECK_OBJECT(tmp_star_imported_2);
Py_DECREF(tmp_star_imported_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_3;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_function_base;
tmp_globals_arg_value_9 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_9 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 116;
tmp_star_imported_3 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_star_imported_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_3);
CHECK_OBJECT(tmp_star_imported_3);
Py_DECREF(tmp_star_imported_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_4;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_getlimits;
tmp_globals_arg_value_10 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_10 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 117;
tmp_star_imported_4 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_star_imported_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_4);
CHECK_OBJECT(tmp_star_imported_4);
Py_DECREF(tmp_star_imported_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_5;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_memmap;
tmp_globals_arg_value_11 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_11 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 120;
tmp_star_imported_5 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_star_imported_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_5);
CHECK_OBJECT(tmp_star_imported_5);
Py_DECREF(tmp_star_imported_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_star_imported_6;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_numeric;
tmp_globals_arg_value_12 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_12 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 121;
tmp_star_imported_6 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_star_imported_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_6);
CHECK_OBJECT(tmp_star_imported_6);
Py_DECREF(tmp_star_imported_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_records;
tmp_globals_arg_value_13 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_recarray_str_plain_record_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 122;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_recarray,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_recarray);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_recarray, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_record,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_record);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_record, tmp_assign_source_36);
}
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_star_imported_7;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_shape_base;
tmp_globals_arg_value_14 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_14 = (PyObject *)moduledict_numpy$_core;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 123;
tmp_star_imported_7 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_star_imported_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_numpy$_core, true, tmp_star_imported_7);
CHECK_OBJECT(tmp_star_imported_7);
Py_DECREF(tmp_star_imported_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_nt);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_nt);

exception_lineno = 125;

    goto frame_exception_exit_1;
}

{
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = const_str_empty;
tmp_globals_arg_value_15 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_304ac062bba35eb1fd9a148cfd7a3267_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 130;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__add_newdocs,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain__add_newdocs);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__add_newdocs, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__add_newdocs_scalars,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain__add_newdocs_scalars);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__add_newdocs_scalars, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__dtype,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain__dtype);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__dtype, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__dtype_ctypes,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain__dtype_ctypes);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__dtype_ctypes, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__internal,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain__internal);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__internal, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain__methods,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain__methods);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__methods, tmp_assign_source_43);
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_numeric;
tmp_globals_arg_value_16 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_absolute_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_numpy$_core->m_frame.f_lineno = 138;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_absolute,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_absolute);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_abs, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;

    goto frame_exception_exit_1;
}
tmp_assign_source_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_arccos);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_acos, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_assign_source_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_arccosh);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_acosh, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_assign_source_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_arcsin);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_asin, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;

    goto frame_exception_exit_1;
}
tmp_assign_source_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_arcsinh);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_asinh, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;

    goto frame_exception_exit_1;
}
tmp_assign_source_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_arctan);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_atan, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_assign_source_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_arctanh);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_atanh, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_expression_value_19;
tmp_expression_value_19 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_assign_source_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_arctan2);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_atan2, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_assign_source_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_concatenate);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_concat, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto frame_exception_exit_1;
}
tmp_assign_source_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_left_shift);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_bitwise_left_shift, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;

    goto frame_exception_exit_1;
}
tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_invert);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_bitwise_invert, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_expression_value_23;
tmp_expression_value_23 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;

    goto frame_exception_exit_1;
}
tmp_assign_source_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_right_shift);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_bitwise_right_shift, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_expression_value_24;
tmp_expression_value_24 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;

    goto frame_exception_exit_1;
}
tmp_assign_source_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_transpose);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_permute_dims, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_expression_value_25;
tmp_expression_value_25 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto frame_exception_exit_1;
}
tmp_assign_source_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_power);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_pow, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = LIST_COPY(tstate, mod_consts.const_list_aaf4e7871f7bef0daf38ea6a1f478b99_list);
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_26;
tmp_iadd_expr_left_1 = module_var_accessor_numpy$_core$__all__(tstate);
assert(!(tmp_iadd_expr_left_1 == NULL));
tmp_expression_value_26 = module_var_accessor_numpy$_core$numeric(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___all__);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_inplace_orig = tmp_iadd_expr_left_1;
tmp_result = INPLACE_OPERATION_ADD_LIST_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;

    goto frame_exception_exit_1;
}
tmp_assign_source_59 = tmp_iadd_expr_left_1;
if (tmp_inplace_orig != tmp_assign_source_59) {
    UPDATE_STRING_DICT_INPLACE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_59);
}
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_expression_value_27;
tmp_iadd_expr_left_2 = module_var_accessor_numpy$_core$__all__(tstate);
assert(!(tmp_iadd_expr_left_2 == NULL));
tmp_expression_value_27 = module_var_accessor_numpy$_core$function_base(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_function_base);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___all__);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_inplace_orig = tmp_iadd_expr_left_2;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_assign_source_60 = tmp_iadd_expr_left_2;
if (tmp_inplace_orig != tmp_assign_source_60) {
    UPDATE_STRING_DICT_INPLACE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_60);
}
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_expression_value_28;
tmp_iadd_expr_left_3 = module_var_accessor_numpy$_core$__all__(tstate);
assert(!(tmp_iadd_expr_left_3 == NULL));
tmp_expression_value_28 = module_var_accessor_numpy$_core$getlimits(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getlimits);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___all__);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_inplace_orig = tmp_iadd_expr_left_3;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_assign_source_61 = tmp_iadd_expr_left_3;
if (tmp_inplace_orig != tmp_assign_source_61) {
    UPDATE_STRING_DICT_INPLACE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_61);
}
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_expression_value_29;
tmp_iadd_expr_left_4 = module_var_accessor_numpy$_core$__all__(tstate);
assert(!(tmp_iadd_expr_left_4 == NULL));
tmp_expression_value_29 = module_var_accessor_numpy$_core$shape_base(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shape_base);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain___all__);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_inplace_orig = tmp_iadd_expr_left_4;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_assign_source_62 = tmp_iadd_expr_left_4;
if (tmp_inplace_orig != tmp_assign_source_62) {
    UPDATE_STRING_DICT_INPLACE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_62);
}
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
PyObject *tmp_expression_value_30;
tmp_iadd_expr_left_5 = module_var_accessor_numpy$_core$__all__(tstate);
assert(!(tmp_iadd_expr_left_5 == NULL));
tmp_expression_value_30 = module_var_accessor_numpy$_core$einsumfunc(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_einsumfunc);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___all__);
if (tmp_iadd_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_inplace_orig = tmp_iadd_expr_left_5;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
CHECK_OBJECT(tmp_iadd_expr_right_5);
Py_DECREF(tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_assign_source_63 = tmp_iadd_expr_left_5;
if (tmp_inplace_orig != tmp_assign_source_63) {
    UPDATE_STRING_DICT_INPLACE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_63);
}
}
{
PyObject *tmp_assign_source_64;

tmp_assign_source_64 = MAKE_FUNCTION_numpy$_core$$$function__1__ufunc_reduce(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__ufunc_reduce, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;

tmp_assign_source_65 = MAKE_FUNCTION_numpy$_core$$$function__2__DType_reconstruct(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reconstruct, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;

tmp_assign_source_66 = MAKE_FUNCTION_numpy$_core$$$function__3__DType_reduce(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain__DType_reduce, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_copyreg;
tmp_globals_arg_value_17 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = Py_None;
tmp_level_value_17 = const_int_0;
frame_frame_numpy$_core->m_frame.f_lineno = 194;
tmp_assign_source_67 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_copyreg, tmp_assign_source_67);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_expression_value_31 = module_var_accessor_numpy$_core$copyreg(tstate);
assert(!(tmp_expression_value_31 == NULL));
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_pickle);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = module_var_accessor_numpy$_core$ufunc(tstate);
if (unlikely(tmp_args_element_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ufunc);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 196;

    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = module_var_accessor_numpy$_core$_ufunc_reduce(tstate);
if (unlikely(tmp_args_element_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ufunc_reduce);
}

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 196;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 196;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_expression_value_32 = module_var_accessor_numpy$_core$copyreg(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copyreg);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;

    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_pickle);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_numpy$_core$type(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_type);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 197;

    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = module_var_accessor_numpy$_core$dtype(tstate);
if (unlikely(tmp_args_element_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
}

if (tmp_args_element_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 197;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 197;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 197;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = module_var_accessor_numpy$_core$_DType_reduce(tstate);
if (unlikely(tmp_args_element_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DType_reduce);
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 197;

    goto frame_exception_exit_1;
}
tmp_args_element_value_20 = module_var_accessor_numpy$_core$_DType_reconstruct(tstate);
if (unlikely(tmp_args_element_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DType_reconstruct);
}

if (tmp_args_element_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 197;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_copyreg);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copyreg);

exception_lineno = 200;

    goto frame_exception_exit_1;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain__ufunc_reduce);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ufunc_reduce);

exception_lineno = 200;

    goto frame_exception_exit_1;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain__DType_reduce);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DType_reduce);

exception_lineno = 200;

    goto frame_exception_exit_1;
}

{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_f74a7c6ee6aee8f36dfe16199595cbff;
tmp_globals_arg_value_18 = (PyObject *)moduledict_numpy$_core;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_PytestTester_tuple;
tmp_level_value_18 = const_int_0;
frame_frame_numpy$_core->m_frame.f_lineno = 202;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_numpy$_core,
        mod_consts.const_str_plain_PytestTester,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_PytestTester);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_PytestTester, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_numpy$_core$PytestTester(tstate);
assert(!(tmp_called_value_14 == NULL));
frame_frame_numpy$_core->m_frame.f_lineno = 204;
tmp_assign_source_69 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_digest_218a55714e76c818c59b93d99676c0b2_tuple);

if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core, (Nuitka_StringObject *)mod_consts.const_str_plain_test, tmp_assign_source_69);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core, mod_consts.const_str_plain_PytestTester);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PytestTester);

exception_lineno = 205;

    goto frame_exception_exit_1;
}



// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core);
    return module_numpy$_core;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

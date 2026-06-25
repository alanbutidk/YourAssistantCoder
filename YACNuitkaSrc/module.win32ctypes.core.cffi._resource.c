/* Generated code for Python module 'win32ctypes$core$cffi$_resource'
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



/* The "module_win32ctypes$core$cffi$_resource" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_win32ctypes$core$cffi$_resource;
PyDictObject *moduledict_win32ctypes$core$cffi$_resource;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_wrapped;
PyObject *const_str_digest_54f3d381f79c2a29afd1d53e90ae399a;
PyObject *const_str_plain_callback;
PyObject *const_str_plain_resource;
PyObject *const_str_digest_8124e2de20b15c887830e988e57da44e;
PyObject *const_str_plain_ffi;
PyObject *const_str_plain_NULL;
PyObject *const_str_digest_63b8eee9066bc5626a2d1d6de8083114;
PyObject *const_str_plain_ENUMRESTYPEPROC;
PyObject *const_str_plain_check_false;
PyObject *const_str_plain_dlls;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_EnumResourceTypesW;
PyObject *const_str_plain_PVOID;
PyObject *const_dict_94d9482eb8694ffa2b0fd68fb6d0c15e;
PyObject *const_str_plain_ENUMRESNAMEPROC;
PyObject *const_str_plain_EnumResourceNamesW;
PyObject *const_str_plain_RESOURCE;
PyObject *const_dict_f86086ce7d7296b67b7fcf5500e5e4fd;
PyObject *const_str_plain_ENUMRESLANGPROC;
PyObject *const_str_plain_EnumResourceLanguagesW;
PyObject *const_dict_baba2eab12090be898e704598ac3e33f;
PyObject *const_str_plain_check_null;
PyObject *const_str_plain_FindResourceExW;
PyObject *const_dict_d08f1b2d4a208d02e1793be80bfef773;
PyObject *const_str_plain_check_zero;
PyObject *const_str_plain_SizeofResource;
PyObject *const_dict_9f7b45d3cd0191e6747ab67133c3c6a0;
PyObject *const_str_plain_LoadResource;
PyObject *const_dict_f3da0122cb821e4097c618ce9af5e0c9;
PyObject *const_str_plain_LockResource;
PyObject *const_dict_42b8a30e9b2d577f4a7c70548b0434e2;
PyObject *const_str_plain_BeginUpdateResourceW;
PyObject *const_str_plain_HMODULE;
PyObject *const_str_plain_EndUpdateResourceW;
PyObject *const_dict_b84a857f8b57a6aaf03d4c18a6df1ca3;
PyObject *const_str_plain_from_buffer;
PyObject *const_str_plain_UpdateResourceW;
PyObject *const_dict_968442f3937f9c1e4d8e91ba420e04ba;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain__util;
PyObject *const_tuple_310b2444806be153c56597d5f22c4e83_tuple;
PyObject *const_str_plain_cdef;
PyObject *const_tuple_str_digest_a1b99fb61f22c001235099f6cf50be47_tuple;
PyObject *const_str_plain__EnumResourceTypes;
PyObject *const_str_plain__EnumResourceNames;
PyObject *const_str_plain__EnumResourceLanguages;
PyObject *const_str_plain__FindResourceEx;
PyObject *const_str_plain__SizeofResource;
PyObject *const_str_plain__LoadResource;
PyObject *const_str_plain__LockResource;
PyObject *const_str_plain__BeginUpdateResource;
PyObject *const_str_plain__EndUpdateResource;
PyObject *const_str_plain__UpdateResource;
PyObject *const_str_digest_a4ca7a8399ef060f26e4f1d83496165e;
PyObject *const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3;
PyObject *const_tuple_str_plain_callback_str_plain_wrapped_tuple;
PyObject *const_tuple_69bb77f1b404389562394f272afb412a_tuple;
PyObject *const_tuple_str_plain_hUpdate_str_plain_fDiscard_tuple;
PyObject *const_tuple_cd0de9e59c3009ada1c50b5ab75376a3_tuple;
PyObject *const_tuple_ce1cf83a1caba8e95ce84873d7647ed7_tuple;
PyObject *const_tuple_763f1b154d4240651c6b76fdb2563238_tuple;
PyObject *const_tuple_9c4afb32c3a8569c23d81c8a499aa537_tuple;
PyObject *const_tuple_str_plain_hModule_str_plain_hResInfo_tuple;
PyObject *const_tuple_str_plain_hResData_tuple;
PyObject *const_tuple_dae2441e26da88033bfbb7eae73b5d2a_tuple;
PyObject *const_tuple_a5a579999537476a6deb5638ab28900a_tuple;
PyObject *const_tuple_str_plain_callback_tuple;
PyObject *const_tuple_ade14dd7135f0634110ab898de058fbd_tuple;
PyObject *const_tuple_c9dcdc1e78a2d538e997bf9183b4ebca_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("win32ctypes.core.cffi._resource"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_54f3d381f79c2a29afd1d53e90ae399a);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_callback);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_8124e2de20b15c887830e988e57da44e);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_63b8eee9066bc5626a2d1d6de8083114);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESTYPEPROC);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_false);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_dlls);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceTypesW);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_PVOID);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_94d9482eb8694ffa2b0fd68fb6d0c15e);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESNAMEPROC);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceNamesW);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESOURCE);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_dict_f86086ce7d7296b67b7fcf5500e5e4fd);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESLANGPROC);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceLanguagesW);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_dict_baba2eab12090be898e704598ac3e33f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_null);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_FindResourceExW);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_d08f1b2d4a208d02e1793be80bfef773);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_zero);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_SizeofResource);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_dict_9f7b45d3cd0191e6747ab67133c3c6a0);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadResource);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_f3da0122cb821e4097c618ce9af5e0c9);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_LockResource);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_42b8a30e9b2d577f4a7c70548b0434e2);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_BeginUpdateResourceW);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_HMODULE);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndUpdateResourceW);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_b84a857f8b57a6aaf03d4c18a6df1ca3);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_buffer);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_UpdateResourceW);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_968442f3937f9c1e4d8e91ba420e04ba);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_310b2444806be153c56597d5f22c4e83_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdef);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a1b99fb61f22c001235099f6cf50be47_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceTypes);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceNames);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceLanguages);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__FindResourceEx);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__SizeofResource);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__LoadResource);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__LockResource);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__BeginUpdateResource);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__EndUpdateResource);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__UpdateResource);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4ca7a8399ef060f26e4f1d83496165e);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_69bb77f1b404389562394f272afb412a_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hUpdate_str_plain_fDiscard_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_cd0de9e59c3009ada1c50b5ab75376a3_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_ce1cf83a1caba8e95ce84873d7647ed7_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_763f1b154d4240651c6b76fdb2563238_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_9c4afb32c3a8569c23d81c8a499aa537_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_str_plain_hResInfo_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hResData_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_dae2441e26da88033bfbb7eae73b5d2a_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_a5a579999537476a6deb5638ab28900a_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_ade14dd7135f0634110ab898de058fbd_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_c9dcdc1e78a2d538e997bf9183b4ebca_tuple);
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
void checkModuleConstants_win32ctypes$core$cffi$_resource(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapped);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_54f3d381f79c2a29afd1d53e90ae399a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54f3d381f79c2a29afd1d53e90ae399a);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callback);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_8124e2de20b15c887830e988e57da44e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8124e2de20b15c887830e988e57da44e);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NULL);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_63b8eee9066bc5626a2d1d6de8083114));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63b8eee9066bc5626a2d1d6de8083114);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESTYPEPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESTYPEPROC);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_false));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_false);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_dlls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dlls);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceTypesW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceTypesW);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_PVOID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PVOID);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_94d9482eb8694ffa2b0fd68fb6d0c15e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_94d9482eb8694ffa2b0fd68fb6d0c15e);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESNAMEPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESNAMEPROC);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceNamesW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceNamesW);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESOURCE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESOURCE);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_dict_f86086ce7d7296b67b7fcf5500e5e4fd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f86086ce7d7296b67b7fcf5500e5e4fd);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESLANGPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESLANGPROC);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceLanguagesW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceLanguagesW);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_dict_baba2eab12090be898e704598ac3e33f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_baba2eab12090be898e704598ac3e33f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_null);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_FindResourceExW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FindResourceExW);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_d08f1b2d4a208d02e1793be80bfef773));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d08f1b2d4a208d02e1793be80bfef773);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_zero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_zero);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_SizeofResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SizeofResource);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_dict_9f7b45d3cd0191e6747ab67133c3c6a0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f7b45d3cd0191e6747ab67133c3c6a0);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadResource);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_f3da0122cb821e4097c618ce9af5e0c9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3da0122cb821e4097c618ce9af5e0c9);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_LockResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LockResource);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_42b8a30e9b2d577f4a7c70548b0434e2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_42b8a30e9b2d577f4a7c70548b0434e2);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_BeginUpdateResourceW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BeginUpdateResourceW);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_HMODULE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HMODULE);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndUpdateResourceW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndUpdateResourceW);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_b84a857f8b57a6aaf03d4c18a6df1ca3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b84a857f8b57a6aaf03d4c18a6df1ca3);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_buffer);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_UpdateResourceW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UpdateResourceW);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_968442f3937f9c1e4d8e91ba420e04ba));
CHECK_OBJECT_DEEP(mod_consts.const_dict_968442f3937f9c1e4d8e91ba420e04ba);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_310b2444806be153c56597d5f22c4e83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_310b2444806be153c56597d5f22c4e83_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdef);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a1b99fb61f22c001235099f6cf50be47_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a1b99fb61f22c001235099f6cf50be47_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceTypes);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceNames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceNames);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceLanguages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceLanguages);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__FindResourceEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FindResourceEx);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__SizeofResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SizeofResource);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__LoadResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LoadResource);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__LockResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LockResource);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__BeginUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BeginUpdateResource);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__EndUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EndUpdateResource);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__UpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UpdateResource);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4ca7a8399ef060f26e4f1d83496165e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4ca7a8399ef060f26e4f1d83496165e);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_69bb77f1b404389562394f272afb412a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_69bb77f1b404389562394f272afb412a_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hUpdate_str_plain_fDiscard_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hUpdate_str_plain_fDiscard_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_cd0de9e59c3009ada1c50b5ab75376a3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cd0de9e59c3009ada1c50b5ab75376a3_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_ce1cf83a1caba8e95ce84873d7647ed7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce1cf83a1caba8e95ce84873d7647ed7_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_763f1b154d4240651c6b76fdb2563238_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_763f1b154d4240651c6b76fdb2563238_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_9c4afb32c3a8569c23d81c8a499aa537_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c4afb32c3a8569c23d81c8a499aa537_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_str_plain_hResInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hModule_str_plain_hResInfo_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hResData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hResData_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_dae2441e26da88033bfbb7eae73b5d2a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dae2441e26da88033bfbb7eae73b5d2a_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_a5a579999537476a6deb5638ab28900a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a5a579999537476a6deb5638ab28900a_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_callback_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_ade14dd7135f0634110ab898de058fbd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ade14dd7135f0634110ab898de058fbd_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_c9dcdc1e78a2d538e997bf9183b4ebca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c9dcdc1e78a2d538e997bf9183b4ebca_tuple);
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
static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$HMODULE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HMODULE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HMODULE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HMODULE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HMODULE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PVOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PVOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PVOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PVOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_RESOURCE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RESOURCE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RESOURCE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RESOURCE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RESOURCE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_RESOURCE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_RESOURCE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RESOURCE);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$check_false(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_false);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_false, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_false);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_false, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$check_null(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_null);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_null, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_null);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_null, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$check_zero(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_zero);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_zero);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_zero, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_check_zero);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_check_zero, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_zero);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_zero);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_zero);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$dlls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dlls);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dlls, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dlls);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dlls, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$ffi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_resource$resource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_resource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_resource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_resource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_resource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_resource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_resource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_resource);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d3eeb3f9b60b80eccd83f495602136d0;
static PyCodeObject *code_objects_f771acacdcead5703dfb61ce005d2590;
static PyCodeObject *code_objects_796c6f6070214571671b1500412f9353;
static PyCodeObject *code_objects_dd56cff917c8d4a1610cf61ca0faa0bb;
static PyCodeObject *code_objects_c98ef0c4e0b465cd7dff3d2baad687d6;
static PyCodeObject *code_objects_960284b2d096f94f33f47eea829542c4;
static PyCodeObject *code_objects_82b59565b8797f6d3cd63a4e7e03c892;
static PyCodeObject *code_objects_1f0ff446f85118cbef3e4b080dc53739;
static PyCodeObject *code_objects_aa42a3c969a75e9a6c91dfe86cc2272c;
static PyCodeObject *code_objects_41de110fecc390c1a7c3df1e8dc927f2;
static PyCodeObject *code_objects_b3d63c371f6b018a6a61d9226c8cdd21;
static PyCodeObject *code_objects_8e12f9f96f8a7b66fa34f3ef50d0eb7f;
static PyCodeObject *code_objects_1017c7076b1d067763c1f54a5266083a;
static PyCodeObject *code_objects_ee9d8959d14bb2578dd45ecf803e53cd;
static PyCodeObject *code_objects_a6371dec8a24940894eb05435e1476aa;
static PyCodeObject *code_objects_a4ac5bd7727b1a221add350fee16149a;
static PyCodeObject *code_objects_42b243688800824c83675e18a3eca22c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a4ca7a8399ef060f26e4f1d83496165e); CHECK_OBJECT(module_filename_obj);
code_objects_d3eeb3f9b60b80eccd83f495602136d0 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3, mod_consts.const_str_digest_21e26e0306d7ee636b5eeb7eaee7a4c3, NULL, NULL, 0, 0, 0);
code_objects_f771acacdcead5703dfb61ce005d2590 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ENUMRESLANGPROC, mod_consts.const_str_plain_ENUMRESLANGPROC, mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple, NULL, 1, 0, 0);
code_objects_796c6f6070214571671b1500412f9353 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ENUMRESNAMEPROC, mod_consts.const_str_plain_ENUMRESNAMEPROC, mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple, NULL, 1, 0, 0);
code_objects_dd56cff917c8d4a1610cf61ca0faa0bb = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ENUMRESTYPEPROC, mod_consts.const_str_plain_ENUMRESTYPEPROC, mod_consts.const_tuple_str_plain_callback_str_plain_wrapped_tuple, NULL, 1, 0, 0);
code_objects_c98ef0c4e0b465cd7dff3d2baad687d6 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__BeginUpdateResource, mod_consts.const_str_plain__BeginUpdateResource, mod_consts.const_tuple_69bb77f1b404389562394f272afb412a_tuple, NULL, 2, 0, 0);
code_objects_960284b2d096f94f33f47eea829542c4 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__EndUpdateResource, mod_consts.const_str_plain__EndUpdateResource, mod_consts.const_tuple_str_plain_hUpdate_str_plain_fDiscard_tuple, NULL, 2, 0, 0);
code_objects_82b59565b8797f6d3cd63a4e7e03c892 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__EnumResourceLanguages, mod_consts.const_str_plain__EnumResourceLanguages, mod_consts.const_tuple_cd0de9e59c3009ada1c50b5ab75376a3_tuple, NULL, 5, 0, 0);
code_objects_1f0ff446f85118cbef3e4b080dc53739 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__EnumResourceNames, mod_consts.const_str_plain__EnumResourceNames, mod_consts.const_tuple_ce1cf83a1caba8e95ce84873d7647ed7_tuple, NULL, 4, 0, 0);
code_objects_aa42a3c969a75e9a6c91dfe86cc2272c = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__EnumResourceTypes, mod_consts.const_str_plain__EnumResourceTypes, mod_consts.const_tuple_763f1b154d4240651c6b76fdb2563238_tuple, NULL, 3, 0, 0);
code_objects_41de110fecc390c1a7c3df1e8dc927f2 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__FindResourceEx, mod_consts.const_str_plain__FindResourceEx, mod_consts.const_tuple_9c4afb32c3a8569c23d81c8a499aa537_tuple, NULL, 4, 0, 0);
code_objects_b3d63c371f6b018a6a61d9226c8cdd21 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__LoadResource, mod_consts.const_str_plain__LoadResource, mod_consts.const_tuple_str_plain_hModule_str_plain_hResInfo_tuple, NULL, 2, 0, 0);
code_objects_8e12f9f96f8a7b66fa34f3ef50d0eb7f = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__LockResource, mod_consts.const_str_plain__LockResource, mod_consts.const_tuple_str_plain_hResData_tuple, NULL, 1, 0, 0);
code_objects_1017c7076b1d067763c1f54a5266083a = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__SizeofResource, mod_consts.const_str_plain__SizeofResource, mod_consts.const_tuple_str_plain_hModule_str_plain_hResInfo_tuple, NULL, 2, 0, 0);
code_objects_ee9d8959d14bb2578dd45ecf803e53cd = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__UpdateResource, mod_consts.const_str_plain__UpdateResource, mod_consts.const_tuple_dae2441e26da88033bfbb7eae73b5d2a_tuple, NULL, 6, 0, 0);
code_objects_a6371dec8a24940894eb05435e1476aa = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_63b8eee9066bc5626a2d1d6de8083114, mod_consts.const_tuple_a5a579999537476a6deb5638ab28900a_tuple, mod_consts.const_tuple_str_plain_callback_tuple, 5, 0, 0);
code_objects_a4ac5bd7727b1a221add350fee16149a = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_8124e2de20b15c887830e988e57da44e, mod_consts.const_tuple_ade14dd7135f0634110ab898de058fbd_tuple, mod_consts.const_tuple_str_plain_callback_tuple, 4, 0, 0);
code_objects_42b243688800824c83675e18a3eca22c = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_54f3d381f79c2a29afd1d53e90ae399a, mod_consts.const_tuple_c9dcdc1e78a2d538e997bf9183b4ebca_tuple, mod_consts.const_tuple_str_plain_callback_tuple, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__10__LockResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__9__LoadResource(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_wrapped = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped(tstate, tmp_closure_1);

assert(var_wrapped == NULL);
var_wrapped = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_wrapped);
tmp_return_value = var_wrapped;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_callback);
CHECK_OBJECT(par_callback);
Py_DECREF(par_callback);
par_callback = NULL;
CHECK_OBJECT(var_wrapped);
CHECK_OBJECT(var_wrapped);
Py_DECREF(var_wrapped);
var_wrapped = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpszType = python_pars[1];
PyObject *par_lParam = python_pars[2];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_42b243688800824c83675e18a3eca22c, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
tmp_called_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$resource(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszType);
tmp_args_element_value_3 = par_lpszType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped->m_frame.f_lineno = 43;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lParam);
tmp_args_element_value_4 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped,
    type_description_1,
    par_hModule,
    par_lpszType,
    par_lParam,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_wrapped = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped(tstate, tmp_closure_1);

assert(var_wrapped == NULL);
var_wrapped = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_wrapped);
tmp_return_value = var_wrapped;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_callback);
CHECK_OBJECT(par_callback);
Py_DECREF(par_callback);
par_callback = NULL;
CHECK_OBJECT(var_wrapped);
CHECK_OBJECT(var_wrapped);
Py_DECREF(var_wrapped);
var_wrapped = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpszType = python_pars[1];
PyObject *par_lpszName = python_pars[2];
PyObject *par_lParam = python_pars[3];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_a4ac5bd7727b1a221add350fee16149a, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_lpszName);
tmp_cmp_expr_left_1 = par_lpszName;
tmp_expression_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NULL);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 51;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
tmp_called_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$resource(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszType);
tmp_args_element_value_3 = par_lpszType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped->m_frame.f_lineno = 52;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$resource(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);

exception_lineno = 52;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszName);
tmp_args_element_value_5 = par_lpszName;
frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped->m_frame.f_lineno = 52;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 52;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lParam);
tmp_args_element_value_6 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped->m_frame.f_lineno = 51;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped,
    type_description_1,
    par_hModule,
    par_lpszType,
    par_lpszName,
    par_lParam,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpszName);
Py_DECREF(par_lpszName);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpszName);
Py_DECREF(par_lpszName);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_wrapped = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped(tstate, tmp_closure_1);

assert(var_wrapped == NULL);
var_wrapped = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_wrapped);
tmp_return_value = var_wrapped;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_callback);
CHECK_OBJECT(par_callback);
Py_DECREF(par_callback);
par_callback = NULL;
CHECK_OBJECT(var_wrapped);
CHECK_OBJECT(var_wrapped);
Py_DECREF(var_wrapped);
var_wrapped = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpszType = python_pars[1];
PyObject *par_lpszName = python_pars[2];
PyObject *par_wIDLanguage = python_pars[3];
PyObject *par_lParam = python_pars[4];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_a6371dec8a24940894eb05435e1476aa, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
tmp_called_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$resource(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszType);
tmp_args_element_value_3 = par_lpszType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped->m_frame.f_lineno = 59;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$resource(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_2);

exception_lineno = 59;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszName);
tmp_args_element_value_5 = par_lpszName;
frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped->m_frame.f_lineno = 59;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 59;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_wIDLanguage);
tmp_args_element_value_6 = par_wIDLanguage;
CHECK_OBJECT(par_lParam);
tmp_args_element_value_7 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped,
    type_description_1,
    par_hModule,
    par_lpszType,
    par_lpszName,
    par_wIDLanguage,
    par_lParam,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpszName);
Py_DECREF(par_lpszName);
CHECK_OBJECT(par_wIDLanguage);
Py_DECREF(par_wIDLanguage);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpszName);
Py_DECREF(par_lpszName);
CHECK_OBJECT(par_wIDLanguage);
Py_DECREF(par_wIDLanguage);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpEnumFunc = python_pars[1];
PyObject *par_lParam = python_pars[2];
PyObject *var_callback = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes = MAKE_FUNCTION_FRAME(tstate, code_objects_aa42a3c969a75e9a6c91dfe86cc2272c, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_ENUMRESTYPEPROC;
CHECK_OBJECT(par_lpEnumFunc);
tmp_args_element_value_2 = par_lpEnumFunc;
frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_callback,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_callback == NULL);
var_callback = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EnumResourceTypesW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_4 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_frame.f_lineno = 67;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_5 = var_callback;
CHECK_OBJECT(par_lParam);
tmp_args_element_value_6 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_94d9482eb8694ffa2b0fd68fb6d0c15e);
frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_frame.f_lineno = 66;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes,
    type_description_1,
    par_hModule,
    par_lpEnumFunc,
    par_lParam,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes);

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
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpszType = python_pars[1];
PyObject *par_lpEnumFunc = python_pars[2];
PyObject *par_lParam = python_pars[3];
PyObject *var_callback = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames = MAKE_FUNCTION_FRAME(tstate, code_objects_1f0ff446f85118cbef3e4b080dc53739, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_ENUMRESNAMEPROC;
CHECK_OBJECT(par_lpEnumFunc);
tmp_args_element_value_2 = par_lpEnumFunc;
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_callback,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_callback == NULL);
var_callback = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EnumResourceNamesW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 75;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_4 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame.f_lineno = 75;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 75;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 75;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpszType);
tmp_args_element_value_6 = par_lpszType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame.f_lineno = 75;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 75;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_7 = var_callback;
CHECK_OBJECT(par_lParam);
tmp_args_element_value_8 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame.f_lineno = 74;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f86086ce7d7296b67b7fcf5500e5e4fd);
frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame.f_lineno = 73;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames,
    type_description_1,
    par_hModule,
    par_lpszType,
    par_lpEnumFunc,
    par_lParam,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames);

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
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpszType);
Py_DECREF(par_lpszType);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpType = python_pars[1];
PyObject *par_lpName = python_pars[2];
PyObject *par_lpEnumFunc = python_pars[3];
PyObject *par_lParam = python_pars[4];
PyObject *var_callback = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages = MAKE_FUNCTION_FRAME(tstate, code_objects_82b59565b8797f6d3cd63a4e7e03c892, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_ENUMRESLANGPROC;
CHECK_OBJECT(par_lpEnumFunc);
tmp_args_element_value_2 = par_lpEnumFunc;
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 80;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_callback,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_callback == NULL);
var_callback = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EnumResourceLanguagesW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_4 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 83;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpType);
tmp_args_element_value_6 = par_lpType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 83;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 84;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpName);
tmp_args_element_value_8 = par_lpName;
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 84;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 84;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_9 = var_callback;
CHECK_OBJECT(par_lParam);
tmp_args_element_value_10 = par_lParam;
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_baba2eab12090be898e704598ac3e33f);
frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages,
    type_description_1,
    par_hModule,
    par_lpType,
    par_lpName,
    par_lpEnumFunc,
    par_lParam,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages);

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
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_lpEnumFunc);
Py_DECREF(par_lpEnumFunc);
CHECK_OBJECT(par_lParam);
Py_DECREF(par_lParam);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpType = python_pars[1];
PyObject *par_lpName = python_pars[2];
PyObject *par_wLanguage = python_pars[3];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx = MAKE_FUNCTION_FRAME(tstate, code_objects_41de110fecc390c1a7c3df1e8dc927f2, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_null(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_null);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_FindResourceExW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_2 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame.f_lineno = 91;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpType);
tmp_args_element_value_4 = par_lpType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame.f_lineno = 91;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpName);
tmp_args_element_value_6 = par_lpName;
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame.f_lineno = 91;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_wLanguage);
tmp_args_element_value_7 = par_wLanguage;
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_7};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_d08f1b2d4a208d02e1793be80bfef773);
frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame.f_lineno = 89;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx,
    type_description_1,
    par_hModule,
    par_lpType,
    par_lpName,
    par_wLanguage
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_wLanguage);
Py_DECREF(par_wLanguage);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_wLanguage);
Py_DECREF(par_wLanguage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_hResInfo = python_pars[1];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource = MAKE_FUNCTION_FRAME(tstate, code_objects_1017c7076b1d067763c1f54a5266083a, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_zero(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_zero);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SizeofResource);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_2 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource->m_frame.f_lineno = 97;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hResInfo);
tmp_args_element_value_3 = par_hResInfo;
frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_9f7b45d3cd0191e6747ab67133c3c6a0);
frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource->m_frame.f_lineno = 96;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource,
    type_description_1,
    par_hModule,
    par_hResInfo
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_hResInfo);
Py_DECREF(par_hResInfo);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_hResInfo);
Py_DECREF(par_hResInfo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__9__LoadResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_hResInfo = python_pars[1];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource = MAKE_FUNCTION_FRAME(tstate, code_objects_b3d63c371f6b018a6a61d9226c8cdd21, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_null(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_null);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_LoadResource);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_2 = par_hModule;
frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource->m_frame.f_lineno = 103;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hResInfo);
tmp_args_element_value_3 = par_hResInfo;
frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource->m_frame.f_lineno = 103;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f3da0122cb821e4097c618ce9af5e0c9);
frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource->m_frame.f_lineno = 102;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource,
    type_description_1,
    par_hModule,
    par_hResInfo
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__9__LoadResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_hResInfo);
Py_DECREF(par_hResInfo);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_hResInfo);
Py_DECREF(par_hResInfo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__10__LockResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hResData = python_pars[0];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource = MAKE_FUNCTION_FRAME(tstate, code_objects_8e12f9f96f8a7b66fa34f3ef50d0eb7f, module_win32ctypes$core$cffi$_resource, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_null(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_null);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kernel32);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hResData);
tmp_args_element_value_1 = par_hResData;
frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource->m_frame.f_lineno = 109;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_LockResource, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_42b8a30e9b2d577f4a7c70548b0434e2);
frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource->m_frame.f_lineno = 108;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource,
    type_description_1,
    par_hResData
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__10__LockResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hResData);
Py_DECREF(par_hResData);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hResData);
Py_DECREF(par_hResData);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_pFileName = python_pars[0];
PyObject *par_bDeleteExistingResources = python_pars[1];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_c98ef0c4e0b465cd7dff3d2baad687d6, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_null(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_null);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BeginUpdateResourceW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pFileName);
tmp_unicode_arg_1 = par_pFileName;
tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 116;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_bDeleteExistingResources);
tmp_args_element_value_3 = par_bDeleteExistingResources;
frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource->m_frame.f_lineno = 114;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$HMODULE(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HMODULE);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_args_element_value_4 = var_result;
frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource->m_frame.f_lineno = 117;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource,
    type_description_1,
    par_pFileName,
    par_bDeleteExistingResources,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_pFileName);
Py_DECREF(par_pFileName);
CHECK_OBJECT(par_bDeleteExistingResources);
Py_DECREF(par_bDeleteExistingResources);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_pFileName);
Py_DECREF(par_pFileName);
CHECK_OBJECT(par_bDeleteExistingResources);
Py_DECREF(par_bDeleteExistingResources);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hUpdate = python_pars[0];
PyObject *par_fDiscard = python_pars[1];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_960284b2d096f94f33f47eea829542c4, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EndUpdateResourceW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hUpdate);
tmp_args_element_value_2 = par_hUpdate;
frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource->m_frame.f_lineno = 122;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fDiscard);
tmp_args_element_value_3 = par_fDiscard;
frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_b84a857f8b57a6aaf03d4c18a6df1ca3);
frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource->m_frame.f_lineno = 121;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource,
    type_description_1,
    par_hUpdate,
    par_fDiscard
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource);

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
CHECK_OBJECT(par_hUpdate);
Py_DECREF(par_hUpdate);
CHECK_OBJECT(par_fDiscard);
Py_DECREF(par_fDiscard);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hUpdate);
Py_DECREF(par_hUpdate);
CHECK_OBJECT(par_fDiscard);
Py_DECREF(par_fDiscard);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hUpdate = python_pars[0];
PyObject *par_lpType = python_pars[1];
PyObject *par_lpName = python_pars[2];
PyObject *par_wLanguage = python_pars[3];
PyObject *par_cData = python_pars[4];
PyObject *par_cbData = python_pars[5];
PyObject *var_lpData = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_ee9d8959d14bb2578dd45ecf803e53cd, module_win32ctypes$core$cffi$_resource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource = cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cData);
tmp_args_element_value_1 = par_cData;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 127;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_buffer, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_lpData == NULL);
var_lpData = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_resource$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_resource$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_UpdateResourceW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hUpdate);
tmp_args_element_value_3 = par_hUpdate;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 130;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpType);
tmp_args_element_value_5 = par_lpType;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 130;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_win32ctypes$core$cffi$_resource$RESOURCE(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpName);
tmp_args_element_value_7 = par_lpName;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 130;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_wLanguage);
tmp_args_element_value_8 = par_wLanguage;
tmp_called_value_6 = module_var_accessor_win32ctypes$core$cffi$_resource$PVOID(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lpData);
tmp_args_element_value_10 = var_lpData;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 131;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cbData);
tmp_args_element_value_11 = par_cbData;
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 129;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_11};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_968442f3937f9c1e4d8e91ba420e04ba);
frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame.f_lineno = 128;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource,
    type_description_1,
    par_hUpdate,
    par_lpType,
    par_lpName,
    par_wLanguage,
    par_cData,
    par_cbData,
    var_lpData
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource == cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource);
    cache_frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource);

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
CHECK_OBJECT(var_lpData);
CHECK_OBJECT(var_lpData);
Py_DECREF(var_lpData);
var_lpData = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lpData);
var_lpData = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hUpdate);
Py_DECREF(par_hUpdate);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_wLanguage);
Py_DECREF(par_wLanguage);
CHECK_OBJECT(par_cData);
Py_DECREF(par_cData);
CHECK_OBJECT(par_cbData);
Py_DECREF(par_cbData);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hUpdate);
Py_DECREF(par_hUpdate);
CHECK_OBJECT(par_lpType);
Py_DECREF(par_lpType);
CHECK_OBJECT(par_lpName);
Py_DECREF(par_lpName);
CHECK_OBJECT(par_wLanguage);
Py_DECREF(par_wLanguage);
CHECK_OBJECT(par_cData);
Py_DECREF(par_cData);
CHECK_OBJECT(par_cbData);
Py_DECREF(par_cbData);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__10__LockResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__10__LockResource,
        mod_consts.const_str_plain__LockResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8e12f9f96f8a7b66fa34f3ef50d0eb7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource,
        mod_consts.const_str_plain__BeginUpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c98ef0c4e0b465cd7dff3d2baad687d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource,
        mod_consts.const_str_plain__EndUpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_960284b2d096f94f33f47eea829542c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource,
        mod_consts.const_str_plain__UpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee9d8959d14bb2578dd45ecf803e53cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC,
        mod_consts.const_str_plain_ENUMRESTYPEPROC,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dd56cff917c8d4a1610cf61ca0faa0bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54f3d381f79c2a29afd1d53e90ae399a,
#endif
        code_objects_42b243688800824c83675e18a3eca22c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC,
        mod_consts.const_str_plain_ENUMRESNAMEPROC,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_796c6f6070214571671b1500412f9353,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8124e2de20b15c887830e988e57da44e,
#endif
        code_objects_a4ac5bd7727b1a221add350fee16149a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC,
        mod_consts.const_str_plain_ENUMRESLANGPROC,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f771acacdcead5703dfb61ce005d2590,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_63b8eee9066bc5626a2d1d6de8083114,
#endif
        code_objects_a6371dec8a24940894eb05435e1476aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes,
        mod_consts.const_str_plain__EnumResourceTypes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aa42a3c969a75e9a6c91dfe86cc2272c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames,
        mod_consts.const_str_plain__EnumResourceNames,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f0ff446f85118cbef3e4b080dc53739,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages,
        mod_consts.const_str_plain__EnumResourceLanguages,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82b59565b8797f6d3cd63a4e7e03c892,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx,
        mod_consts.const_str_plain__FindResourceEx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_41de110fecc390c1a7c3df1e8dc927f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource,
        mod_consts.const_str_plain__SizeofResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1017c7076b1d067763c1f54a5266083a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__9__LoadResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_resource$$$function__9__LoadResource,
        mod_consts.const_str_plain__LoadResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3d63c371f6b018a6a61d9226c8cdd21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_resource,
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

static function_impl_code const function_table_win32ctypes$core$cffi$_resource[] = {
impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC$$$function__1_wrapped,
impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC$$$function__1_wrapped,
impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC$$$function__1_wrapped,
impl_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC,
impl_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC,
impl_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC,
impl_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes,
impl_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames,
impl_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages,
impl_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx,
impl_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource,
impl_win32ctypes$core$cffi$_resource$$$function__9__LoadResource,
impl_win32ctypes$core$cffi$_resource$$$function__10__LockResource,
impl_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource,
impl_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource,
impl_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource,
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

    return Nuitka_Function_GetFunctionState(function, function_table_win32ctypes$core$cffi$_resource);
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
        module_win32ctypes$core$cffi$_resource,
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
        function_table_win32ctypes$core$cffi$_resource,
        sizeof(function_table_win32ctypes$core$cffi$_resource) / sizeof(function_impl_code)
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
static char const *module_full_name = "win32ctypes.core.cffi._resource";
#endif

// Internal entry point for module code.
PyObject *module_code_win32ctypes$core$cffi$_resource(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("win32ctypes$core$cffi$_resource");

    // Store the module for future use.
    module_win32ctypes$core$cffi$_resource = module;

    moduledict_win32ctypes$core$cffi$_resource = MODULE_DICT(module_win32ctypes$core$cffi$_resource);

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
        PRINT_STRING("win32ctypes$core$cffi$_resource: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("win32ctypes$core$cffi$_resource: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("win32ctypes$core$cffi$_resource: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._resource" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwin32ctypes$core$cffi$_resource\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_win32ctypes$core$cffi$_resource,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_resource,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_resource,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_resource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_resource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_win32ctypes$core$cffi$_resource);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_win32ctypes$core$cffi$_resource);
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

        UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_resource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_win32ctypes$core$cffi$_resource = MAKE_MODULE_FRAME(code_objects_d3eeb3f9b60b80eccd83f495602136d0, module_win32ctypes$core$cffi$_resource);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_resource);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_resource) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_win32ctypes$core$cffi$_resource$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_win32ctypes$core$cffi$_resource$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_1 = (PyObject *)moduledict_win32ctypes$core$cffi$_resource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_310b2444806be153c56597d5f22c4e83_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_win32ctypes$core$cffi$_resource->m_frame.f_lineno = 8;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_ffi,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ffi);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_check_null,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_check_null);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_check_zero,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_check_zero);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_zero, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_check_false,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_check_false);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_HMODULE,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_HMODULE);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_PVOID,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_PVOID);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_RESOURCE,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_RESOURCE);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_RESOURCE, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_resource,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_resource);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_resource, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_win32ctypes$core$cffi$_resource,
        mod_consts.const_str_plain_dlls,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_dlls);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls, tmp_assign_source_13);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_resource$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_resource->m_frame.f_lineno = 13;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_cdef,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a1b99fb61f22c001235099f6cf50be47_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_resource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_resource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_resource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_win32ctypes$core$cffi$_resource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__1_ENUMRESTYPEPROC(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ENUMRESTYPEPROC, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__2_ENUMRESNAMEPROC(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ENUMRESNAMEPROC, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__3_ENUMRESLANGPROC(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain_ENUMRESLANGPROC, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__4__EnumResourceTypes(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__EnumResourceTypes, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__5__EnumResourceNames(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__EnumResourceNames, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__6__EnumResourceLanguages(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__EnumResourceLanguages, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__7__FindResourceEx(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__FindResourceEx, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__8__SizeofResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__SizeofResource, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__9__LoadResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__LoadResource, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;

tmp_assign_source_23 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__10__LockResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__LockResource, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__11__BeginUpdateResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__BeginUpdateResource, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__12__EndUpdateResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__EndUpdateResource, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_win32ctypes$core$cffi$_resource$$$function__13__UpdateResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)mod_consts.const_str_plain__UpdateResource, tmp_assign_source_26);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("win32ctypes$core$cffi$_resource", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._resource" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_win32ctypes$core$cffi$_resource);
    return module_win32ctypes$core$cffi$_resource;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_resource, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("win32ctypes$core$cffi$_resource", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'win32ctypes$pywin32$win32api'
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



/* The "module_win32ctypes$pywin32$win32api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_win32ctypes$pywin32$win32api;
PyDictObject *moduledict_win32ctypes$pywin32$win32api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_9d6e11c37775c4607ad1a3e0950e5276;
PyObject *const_str_plain__pywin32error;
PyObject *const_str_plain__dll;
PyObject *const_str_plain__LoadLibraryEx;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_e852b34054fff27c7db709eb5c3f7f92;
PyObject *const_str_plain_callback;
PyObject *const_str_digest_39e4a9d2416260476cf8355041901111;
PyObject *const_str_plain__resource;
PyObject *const_str_plain__EnumResourceTypes;
PyObject *const_str_plain_ENUMRESTYPEPROC;
PyObject *const_str_digest_d199b30d290d4e7c19d2822ee80a2d10;
PyObject *const_str_plain_resource_types;
PyObject *const_str_plain_append;
PyObject *const_str_digest_312bb570fb132ef9ca0c3d14cf88f368;
PyObject *const_str_plain__EnumResourceNames;
PyObject *const_str_plain_ENUMRESNAMEPROC;
PyObject *const_str_digest_4dddd9522c14ae6062c219da61d6d180;
PyObject *const_str_plain_resource_names;
PyObject *const_str_digest_bd7a6027aaf6a190828d000636d8884d;
PyObject *const_str_plain__EnumResourceLanguages;
PyObject *const_str_plain_ENUMRESLANGPROC;
PyObject *const_str_digest_26106e78e2db66045020cbb289b9c8c2;
PyObject *const_str_plain_resource_languages;
PyObject *const_str_plain__FindResourceEx;
PyObject *const_str_plain__SizeofResource;
PyObject *const_str_plain__LoadResource;
PyObject *const_str_plain__backend;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain__common;
PyObject *const_str_plain_cast;
PyObject *const_str_plain__LockResource;
PyObject *const_str_plain_c_char_p;
PyObject *const_str_plain__PyBytes_FromStringAndSize;
PyObject *const_str_digest_acbe4da40f7651d94740d8c6f155e389;
PyObject *const_str_plain__FreeLibrary;
PyObject *const_str_digest_a2eb443bbeb620ec91168862bec34f49;
PyObject *const_str_plain__time;
PyObject *const_str_plain__GetTickCount;
PyObject *const_str_digest_af9706b6f3d49fd4cdb492dce62389f1;
PyObject *const_str_plain__BeginUpdateResource;
PyObject *const_str_digest_037f853683b9e493d53d6635215f6e9f;
PyObject *const_str_plain__EndUpdateResource;
PyObject *const_str_digest_4187120b0c723585e1ee85aacdf4aa54;
PyObject *const_str_digest_bd6eab3ffb239081e822126f685e12ab;
PyObject *const_str_plain__UpdateResource;
PyObject *const_str_digest_e6f15d844df2fbeb8a4da2a9963c5c7b;
PyObject *const_str_plain__system_information;
PyObject *const_str_plain__GetWindowsDirectory;
PyObject *const_str_digest_4f18df1aad79d5542ea9e0fa99b690ea;
PyObject *const_str_plain__GetSystemDirectory;
PyObject *const_str_digest_70e617c4243c7f9cfe7c2835a6d18d83;
PyObject *const_str_digest_a7df63d360b439aa7797ca3eb92cce6c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_258ce5f9efd6a32d70645dffdf6c448e;
PyObject *const_tuple_0774ecf174949b8fa582bc1dfd1724c2_tuple;
PyObject *const_str_digest_7d1ac83fc225d250ecab25e993e9c9c0;
PyObject *const_tuple_str_plain_pywin32error_tuple;
PyObject *const_str_plain_pywin32error;
PyObject *const_int_pos_2;
PyObject *const_str_plain_LOAD_LIBRARY_AS_DATAFILE;
PyObject *const_str_plain_LANG_NEUTRAL;
PyObject *const_str_plain_LoadLibraryEx;
PyObject *const_str_plain_EnumResourceTypes;
PyObject *const_str_plain_EnumResourceNames;
PyObject *const_str_plain_EnumResourceLanguages;
PyObject *const_str_plain_LoadResource;
PyObject *const_str_plain_FreeLibrary;
PyObject *const_str_plain_GetTickCount;
PyObject *const_str_plain_BeginUpdateResource;
PyObject *const_str_plain_EndUpdateResource;
PyObject *const_str_plain_UpdateResource;
PyObject *const_str_plain_GetWindowsDirectory;
PyObject *const_str_plain_GetSystemDirectory;
PyObject *const_str_digest_b3cb10f50f38fff7a73c3fe5f8abd8ef;
PyObject *const_str_digest_2b974e6865f20a2291150889a827c858;
PyObject *const_tuple_str_plain_filename_str_plain_delete_tuple;
PyObject *const_tuple_str_plain_handle_str_plain_discard_tuple;
PyObject *const_tuple_c68a4d4b5f41e31b078cda6656583e85_tuple;
PyObject *const_tuple_39e81cf4a29685b02dbf81b092ae3ae3_tuple;
PyObject *const_tuple_cf51e90646b7234941ad3e9e1b5592b1_tuple;
PyObject *const_tuple_str_plain_hModule_tuple;
PyObject *const_tuple_str_plain_fileName_str_plain_handle_str_plain_flags_tuple;
PyObject *const_tuple_e21b71066b88be8c243bb20aa205cae9_tuple;
PyObject *const_tuple_145b2ee4e6095a13b3c4471ec75ef739_tuple;
PyObject *const_tuple_cb8bc592305773f94e813400f8d668e1_tuple;
PyObject *const_tuple_str_plain_resource_languages_tuple;
PyObject *const_tuple_6368b803da8d709b69c7d6854b115288_tuple;
PyObject *const_tuple_str_plain_resource_names_tuple;
PyObject *const_tuple_0bb8ed629a4ae51314dbbb37b1cd9bcf_tuple;
PyObject *const_tuple_str_plain_resource_types_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[92];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("win32ctypes.pywin32.win32api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d6e11c37775c4607ad1a3e0950e5276);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__pywin32error);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__dll);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__LoadLibraryEx);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_e852b34054fff27c7db709eb5c3f7f92);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_callback);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_39e4a9d2416260476cf8355041901111);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__resource);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceTypes);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESTYPEPROC);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_d199b30d290d4e7c19d2822ee80a2d10);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource_types);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_312bb570fb132ef9ca0c3d14cf88f368);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceNames);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESNAMEPROC);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_4dddd9522c14ae6062c219da61d6d180);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource_names);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd7a6027aaf6a190828d000636d8884d);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceLanguages);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESLANGPROC);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_26106e78e2db66045020cbb289b9c8c2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource_languages);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__FindResourceEx);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__SizeofResource);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__LoadResource);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__backend);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__LockResource);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__PyBytes_FromStringAndSize);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_acbe4da40f7651d94740d8c6f155e389);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__FreeLibrary);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2eb443bbeb620ec91168862bec34f49);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__time);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetTickCount);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_af9706b6f3d49fd4cdb492dce62389f1);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__BeginUpdateResource);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_037f853683b9e493d53d6635215f6e9f);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__EndUpdateResource);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_4187120b0c723585e1ee85aacdf4aa54);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd6eab3ffb239081e822126f685e12ab);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__UpdateResource);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6f15d844df2fbeb8a4da2a9963c5c7b);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__system_information);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetWindowsDirectory);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f18df1aad79d5542ea9e0fa99b690ea);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetSystemDirectory);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e617c4243c7f9cfe7c2835a6d18d83);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7df63d360b439aa7797ca3eb92cce6c);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_258ce5f9efd6a32d70645dffdf6c448e);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_0774ecf174949b8fa582bc1dfd1724c2_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d1ac83fc225d250ecab25e993e9c9c0);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pywin32error_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_pywin32error);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOAD_LIBRARY_AS_DATAFILE);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_LANG_NEUTRAL);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadLibraryEx);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceTypes);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceNames);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceLanguages);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadResource);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeLibrary);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetTickCount);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_BeginUpdateResource);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndUpdateResource);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_UpdateResource);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowsDirectory);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemDirectory);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3cb10f50f38fff7a73c3fe5f8abd8ef);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b974e6865f20a2291150889a827c858);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_delete_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_discard_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_c68a4d4b5f41e31b078cda6656583e85_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_39e81cf4a29685b02dbf81b092ae3ae3_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_cf51e90646b7234941ad3e9e1b5592b1_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileName_str_plain_handle_str_plain_flags_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_e21b71066b88be8c243bb20aa205cae9_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_145b2ee4e6095a13b3c4471ec75ef739_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_cb8bc592305773f94e813400f8d668e1_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_languages_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_6368b803da8d709b69c7d6854b115288_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_names_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_0bb8ed629a4ae51314dbbb37b1cd9bcf_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_types_tuple);
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
void checkModuleConstants_win32ctypes$pywin32$win32api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d6e11c37775c4607ad1a3e0950e5276));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d6e11c37775c4607ad1a3e0950e5276);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__pywin32error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pywin32error);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__dll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dll);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__LoadLibraryEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LoadLibraryEx);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_e852b34054fff27c7db709eb5c3f7f92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e852b34054fff27c7db709eb5c3f7f92);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callback);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_39e4a9d2416260476cf8355041901111));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39e4a9d2416260476cf8355041901111);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resource);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceTypes);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESTYPEPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESTYPEPROC);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_d199b30d290d4e7c19d2822ee80a2d10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d199b30d290d4e7c19d2822ee80a2d10);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource_types);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_312bb570fb132ef9ca0c3d14cf88f368));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_312bb570fb132ef9ca0c3d14cf88f368);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceNames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceNames);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESNAMEPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESNAMEPROC);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_4dddd9522c14ae6062c219da61d6d180));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4dddd9522c14ae6062c219da61d6d180);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource_names);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd7a6027aaf6a190828d000636d8884d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd7a6027aaf6a190828d000636d8884d);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__EnumResourceLanguages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EnumResourceLanguages);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENUMRESLANGPROC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENUMRESLANGPROC);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_26106e78e2db66045020cbb289b9c8c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26106e78e2db66045020cbb289b9c8c2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource_languages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource_languages);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__FindResourceEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FindResourceEx);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__SizeofResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SizeofResource);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__LoadResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LoadResource);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__backend);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__LockResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LockResource);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char_p);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__PyBytes_FromStringAndSize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__PyBytes_FromStringAndSize);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_acbe4da40f7651d94740d8c6f155e389));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acbe4da40f7651d94740d8c6f155e389);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__FreeLibrary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FreeLibrary);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2eb443bbeb620ec91168862bec34f49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2eb443bbeb620ec91168862bec34f49);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__time);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetTickCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetTickCount);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_af9706b6f3d49fd4cdb492dce62389f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af9706b6f3d49fd4cdb492dce62389f1);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__BeginUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__BeginUpdateResource);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_037f853683b9e493d53d6635215f6e9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_037f853683b9e493d53d6635215f6e9f);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__EndUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__EndUpdateResource);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_4187120b0c723585e1ee85aacdf4aa54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4187120b0c723585e1ee85aacdf4aa54);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd6eab3ffb239081e822126f685e12ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd6eab3ffb239081e822126f685e12ab);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__UpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__UpdateResource);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6f15d844df2fbeb8a4da2a9963c5c7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6f15d844df2fbeb8a4da2a9963c5c7b);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__system_information));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__system_information);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetWindowsDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetWindowsDirectory);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f18df1aad79d5542ea9e0fa99b690ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f18df1aad79d5542ea9e0fa99b690ea);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetSystemDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetSystemDirectory);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e617c4243c7f9cfe7c2835a6d18d83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e617c4243c7f9cfe7c2835a6d18d83);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7df63d360b439aa7797ca3eb92cce6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7df63d360b439aa7797ca3eb92cce6c);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_258ce5f9efd6a32d70645dffdf6c448e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_258ce5f9efd6a32d70645dffdf6c448e);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_0774ecf174949b8fa582bc1dfd1724c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0774ecf174949b8fa582bc1dfd1724c2_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d1ac83fc225d250ecab25e993e9c9c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d1ac83fc225d250ecab25e993e9c9c0);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pywin32error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pywin32error_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_pywin32error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pywin32error);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOAD_LIBRARY_AS_DATAFILE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LOAD_LIBRARY_AS_DATAFILE);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_LANG_NEUTRAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LANG_NEUTRAL);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadLibraryEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadLibraryEx);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceTypes);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceNames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceNames);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnumResourceLanguages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnumResourceLanguages);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadResource);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeLibrary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FreeLibrary);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetTickCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetTickCount);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_BeginUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BeginUpdateResource);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndUpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndUpdateResource);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_UpdateResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UpdateResource);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowsDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetWindowsDirectory);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetSystemDirectory);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3cb10f50f38fff7a73c3fe5f8abd8ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3cb10f50f38fff7a73c3fe5f8abd8ef);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b974e6865f20a2291150889a827c858));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b974e6865f20a2291150889a827c858);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_delete_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_filename_str_plain_delete_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_discard_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handle_str_plain_discard_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_c68a4d4b5f41e31b078cda6656583e85_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c68a4d4b5f41e31b078cda6656583e85_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_39e81cf4a29685b02dbf81b092ae3ae3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_39e81cf4a29685b02dbf81b092ae3ae3_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_cf51e90646b7234941ad3e9e1b5592b1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cf51e90646b7234941ad3e9e1b5592b1_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hModule_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fileName_str_plain_handle_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fileName_str_plain_handle_str_plain_flags_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_e21b71066b88be8c243bb20aa205cae9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e21b71066b88be8c243bb20aa205cae9_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_145b2ee4e6095a13b3c4471ec75ef739_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_145b2ee4e6095a13b3c4471ec75ef739_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_cb8bc592305773f94e813400f8d668e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb8bc592305773f94e813400f8d668e1_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_languages_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resource_languages_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_6368b803da8d709b69c7d6854b115288_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6368b803da8d709b69c7d6854b115288_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_names_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resource_names_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_0bb8ed629a4ae51314dbbb37b1cd9bcf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0bb8ed629a4ae51314dbbb37b1cd9bcf_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resource_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resource_types_tuple);
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
static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$LANG_NEUTRAL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LANG_NEUTRAL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LANG_NEUTRAL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LANG_NEUTRAL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LANG_NEUTRAL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LANG_NEUTRAL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LANG_NEUTRAL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LANG_NEUTRAL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LANG_NEUTRAL);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__backend);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_common(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_dll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__dll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__dll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__dll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dll);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__pywin32error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pywin32error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pywin32error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pywin32error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pywin32error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__pywin32error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__pywin32error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pywin32error);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_resource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__resource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__resource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__resource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__resource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__resource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__resource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__resource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__resource);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_system_information(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__system_information);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__system_information);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__system_information, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__system_information);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__system_information, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__system_information);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__system_information);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__system_information);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$pywin32$win32api$_time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$pywin32$win32api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$pywin32$win32api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$pywin32$win32api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f6201085cfb1a30e0e89b2b7543d2d70;
static PyCodeObject *code_objects_5fdd14add068d5c4788ead0cc944dc43;
static PyCodeObject *code_objects_5800367d3351497193504a88a3a1fcea;
static PyCodeObject *code_objects_52674c6ca07fde0bd66475dbe1bd5a3e;
static PyCodeObject *code_objects_bfe1e7d8046f35113f9d263b41bdbe40;
static PyCodeObject *code_objects_a8fbb72070b8315d4962f405ce4ae14b;
static PyCodeObject *code_objects_ffd03cf3e1cb45760819581a0f31129a;
static PyCodeObject *code_objects_60825722e75c97de65e997bf6c9e50c9;
static PyCodeObject *code_objects_297a5797c3c15504af67149baa3fc240;
static PyCodeObject *code_objects_7dac8f0bb9d04f10821e9b5a451510a9;
static PyCodeObject *code_objects_0f5f7bd17d2a02d81dec5a47f5b1c689;
static PyCodeObject *code_objects_b1f465dfcae74ec2f8cc34b21635e156;
static PyCodeObject *code_objects_a1883c63360f59cb3f08c6d488e25a50;
static PyCodeObject *code_objects_830bf1f2dc55022a2e1badc9fb46efff;
static PyCodeObject *code_objects_b92e7e2a88e9c6b3134e615d3f17ff5c;
static PyCodeObject *code_objects_920d3f0b311570551d43753681872f3d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b3cb10f50f38fff7a73c3fe5f8abd8ef); CHECK_OBJECT(module_filename_obj);
code_objects_f6201085cfb1a30e0e89b2b7543d2d70 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_2b974e6865f20a2291150889a827c858, mod_consts.const_str_digest_2b974e6865f20a2291150889a827c858, NULL, NULL, 0, 0, 0);
code_objects_5fdd14add068d5c4788ead0cc944dc43 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_BeginUpdateResource, mod_consts.const_str_plain_BeginUpdateResource, mod_consts.const_tuple_str_plain_filename_str_plain_delete_tuple, NULL, 2, 0, 0);
code_objects_5800367d3351497193504a88a3a1fcea = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_EndUpdateResource, mod_consts.const_str_plain_EndUpdateResource, mod_consts.const_tuple_str_plain_handle_str_plain_discard_tuple, NULL, 2, 0, 0);
code_objects_52674c6ca07fde0bd66475dbe1bd5a3e = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_EnumResourceLanguages, mod_consts.const_str_plain_EnumResourceLanguages, mod_consts.const_tuple_c68a4d4b5f41e31b078cda6656583e85_tuple, NULL, 3, 0, 0);
code_objects_bfe1e7d8046f35113f9d263b41bdbe40 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_EnumResourceNames, mod_consts.const_str_plain_EnumResourceNames, mod_consts.const_tuple_39e81cf4a29685b02dbf81b092ae3ae3_tuple, NULL, 2, 0, 0);
code_objects_a8fbb72070b8315d4962f405ce4ae14b = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_EnumResourceTypes, mod_consts.const_str_plain_EnumResourceTypes, mod_consts.const_tuple_cf51e90646b7234941ad3e9e1b5592b1_tuple, NULL, 1, 0, 0);
code_objects_ffd03cf3e1cb45760819581a0f31129a = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_FreeLibrary, mod_consts.const_str_plain_FreeLibrary, mod_consts.const_tuple_str_plain_hModule_tuple, NULL, 1, 0, 0);
code_objects_60825722e75c97de65e997bf6c9e50c9 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_GetSystemDirectory, mod_consts.const_str_plain_GetSystemDirectory, NULL, NULL, 0, 0, 0);
code_objects_297a5797c3c15504af67149baa3fc240 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_GetTickCount, mod_consts.const_str_plain_GetTickCount, NULL, NULL, 0, 0, 0);
code_objects_7dac8f0bb9d04f10821e9b5a451510a9 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_GetWindowsDirectory, mod_consts.const_str_plain_GetWindowsDirectory, NULL, NULL, 0, 0, 0);
code_objects_0f5f7bd17d2a02d81dec5a47f5b1c689 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_LoadLibraryEx, mod_consts.const_str_plain_LoadLibraryEx, mod_consts.const_tuple_str_plain_fileName_str_plain_handle_str_plain_flags_tuple, NULL, 3, 0, 0);
code_objects_b1f465dfcae74ec2f8cc34b21635e156 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_LoadResource, mod_consts.const_str_plain_LoadResource, mod_consts.const_tuple_e21b71066b88be8c243bb20aa205cae9_tuple, NULL, 4, 0, 0);
code_objects_a1883c63360f59cb3f08c6d488e25a50 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_UpdateResource, mod_consts.const_str_plain_UpdateResource, mod_consts.const_tuple_145b2ee4e6095a13b3c4471ec75ef739_tuple, NULL, 5, 0, 0);
code_objects_830bf1f2dc55022a2e1badc9fb46efff = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callback, mod_consts.const_str_digest_bd7a6027aaf6a190828d000636d8884d, mod_consts.const_tuple_cb8bc592305773f94e813400f8d668e1_tuple, mod_consts.const_tuple_str_plain_resource_languages_tuple, 5, 0, 0);
code_objects_b92e7e2a88e9c6b3134e615d3f17ff5c = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callback, mod_consts.const_str_digest_312bb570fb132ef9ca0c3d14cf88f368, mod_consts.const_tuple_6368b803da8d709b69c7d6854b115288_tuple, mod_consts.const_tuple_str_plain_resource_names_tuple, 4, 0, 0);
code_objects_920d3f0b311570551d43753681872f3d = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callback, mod_consts.const_str_digest_39e4a9d2416260476cf8355041901111, mod_consts.const_tuple_0bb8ed629a4ae51314dbbb37b1cd9bcf_tuple, mod_consts.const_tuple_str_plain_resource_types_tuple, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__10_UpdateResource(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__5_LoadResource(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__7_GetTickCount(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fileName = python_pars[0];
PyObject *par_handle = python_pars[1];
PyObject *par_flags = python_pars[2];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx = MAKE_FUNCTION_FRAME(tstate, code_objects_0f5f7bd17d2a02d81dec5a47f5b1c689, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_handle);
tmp_cmp_expr_left_1 = par_handle;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9d6e11c37775c4607ad1a3e0950e5276;
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 38;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 38;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 39;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 39;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_dll(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dll);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_fileName);
tmp_args_element_value_1 = par_fileName;
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(par_flags);
tmp_args_element_value_3 = par_flags;
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 40;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__LoadLibraryEx,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_4;
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
    exception_lineno = 39;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 39;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 39;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame.f_lineno = 39;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 39;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx,
    type_description_1,
    par_fileName,
    par_handle,
    par_flags
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fileName);
Py_DECREF(par_fileName);
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fileName);
Py_DECREF(par_fileName);
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
struct Nuitka_CellObject *var_resource_types = Nuitka_Cell_NewEmpty();
PyObject *var_callback = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes;
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
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(Nuitka_Cell_GET(var_resource_types) == NULL);
Nuitka_Cell_SET(var_resource_types, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_resource_types;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback(tstate, tmp_closure_1);

assert(var_callback == NULL);
var_callback = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes = MAKE_FUNCTION_FRAME(tstate, code_objects_a8fbb72070b8315d4962f405ce4ae14b, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 63;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 63;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oco";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__EnumResourceTypes);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oco";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_1 = "oco";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_3 = var_callback;
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 65;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ENUMRESTYPEPROC, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_1 = "oco";
    goto try_except_handler_4;
}
tmp_args_element_value_4 = const_int_0;
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oco";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oco";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 63;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oco";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 63;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame.f_lineno = 63;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes,
    type_description_1,
    par_hModule,
    var_resource_types,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
CHECK_OBJECT(Nuitka_Cell_GET(var_resource_types));
tmp_return_value = Nuitka_Cell_GET(var_resource_types);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resource_types);
CHECK_OBJECT(var_resource_types);
Py_DECREF(var_resource_types);
var_resource_types = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_resource_types);
CHECK_OBJECT(var_resource_types);
Py_DECREF(var_resource_types);
var_resource_types = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_type_ = python_pars[1];
PyObject *par_param = python_pars[2];
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_920d3f0b311570551d43753681872f3d, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_1 = par_type_;
frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback->m_frame.f_lineno = 60;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback,
    type_description_1,
    par_hModule,
    par_type_,
    par_param,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback);

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
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_resType = python_pars[1];
struct Nuitka_CellObject *var_resource_names = Nuitka_Cell_NewEmpty();
PyObject *var_callback = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames;
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
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(Nuitka_Cell_GET(var_resource_names) == NULL);
Nuitka_Cell_SET(var_resource_names, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_resource_names;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback(tstate, tmp_closure_1);

assert(var_callback == NULL);
var_callback = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames = MAKE_FUNCTION_FRAME(tstate, code_objects_bfe1e7d8046f35113f9d263b41bdbe40, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 92;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 92;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_3 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooco";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__EnumResourceNames);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
CHECK_OBJECT(par_resType);
tmp_args_element_value_2 = par_resType;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 94;
type_description_1 = "ooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_4 = var_callback;
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 94;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ENUMRESNAMEPROC, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 94;
type_description_1 = "ooco";
    goto try_except_handler_4;
}
tmp_args_element_value_5 = const_int_0;
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 92;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooco";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 92;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooco";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 92;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame.f_lineno = 92;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames,
    type_description_1,
    par_hModule,
    par_resType,
    var_resource_names,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
CHECK_OBJECT(Nuitka_Cell_GET(var_resource_names));
tmp_return_value = Nuitka_Cell_GET(var_resource_names);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resource_names);
CHECK_OBJECT(var_resource_names);
Py_DECREF(var_resource_names);
var_resource_names = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_resource_names);
CHECK_OBJECT(var_resource_names);
Py_DECREF(var_resource_names);
var_resource_names = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_resType);
Py_DECREF(par_resType);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_resType);
Py_DECREF(par_resType);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_type_ = python_pars[1];
PyObject *par_type_name = python_pars[2];
PyObject *par_param = python_pars[3];
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_b92e7e2a88e9c6b3134e615d3f17ff5c, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_name);
tmp_args_element_value_1 = par_type_name;
frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback,
    type_description_1,
    par_hModule,
    par_type_,
    par_type_name,
    par_param,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback);

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
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_lpType = python_pars[1];
PyObject *par_lpName = python_pars[2];
struct Nuitka_CellObject *var_resource_languages = Nuitka_Cell_NewEmpty();
PyObject *var_callback = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages;
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
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(Nuitka_Cell_GET(var_resource_languages) == NULL);
Nuitka_Cell_SET(var_resource_languages, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_resource_languages;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_2 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback(tstate, tmp_closure_1);

assert(var_callback == NULL);
var_callback = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages = MAKE_FUNCTION_FRAME(tstate, code_objects_52674c6ca07fde0bd66475dbe1bd5a3e, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 124;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 124;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_6;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_3 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "oooco";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__EnumResourceLanguages);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
CHECK_OBJECT(par_lpType);
tmp_args_element_value_2 = par_lpType;
CHECK_OBJECT(par_lpName);
tmp_args_element_value_3 = par_lpName;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 126;
type_description_1 = "oooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_callback);
tmp_args_element_value_5 = var_callback;
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 126;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ENUMRESLANGPROC, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 126;
type_description_1 = "oooco";
    goto try_except_handler_4;
}
tmp_args_element_value_6 = const_int_0;
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 124;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooco";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 124;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooco";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
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
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 124;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame.f_lineno = 124;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages,
    type_description_1,
    par_hModule,
    par_lpType,
    par_lpName,
    var_resource_languages,
    var_callback
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
CHECK_OBJECT(Nuitka_Cell_GET(var_resource_languages));
tmp_return_value = Nuitka_Cell_GET(var_resource_languages);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resource_languages);
CHECK_OBJECT(var_resource_languages);
Py_DECREF(var_resource_languages);
var_resource_languages = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_resource_languages);
CHECK_OBJECT(var_resource_languages);
Py_DECREF(var_resource_languages);
var_resource_languages = NULL;
CHECK_OBJECT(var_callback);
CHECK_OBJECT(var_callback);
Py_DECREF(var_callback);
var_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_type_name = python_pars[1];
PyObject *par_res_name = python_pars[2];
PyObject *par_language_id = python_pars[3];
PyObject *par_param = python_pars[4];
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_830bf1f2dc55022a2e1badc9fb46efff, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resource_languages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_language_id);
tmp_args_element_value_1 = par_language_id;
frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback->m_frame.f_lineno = 121;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback,
    type_description_1,
    par_hModule,
    par_type_name,
    par_res_name,
    par_language_id,
    par_param,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback);

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
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
CHECK_OBJECT(par_res_name);
Py_DECREF(par_res_name);
CHECK_OBJECT(par_language_id);
Py_DECREF(par_language_id);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type_name);
Py_DECREF(par_type_name);
CHECK_OBJECT(par_res_name);
Py_DECREF(par_res_name);
CHECK_OBJECT(par_language_id);
Py_DECREF(par_language_id);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__5_LoadResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *par_type = python_pars[1];
PyObject *par_name = python_pars[2];
PyObject *par_language = python_pars[3];
PyObject *var_hrsrc = NULL;
PyObject *var_size = NULL;
PyObject *var_hglob = NULL;
PyObject *var_pointer = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource = MAKE_FUNCTION_FRAME(tstate, code_objects_b1f465dfcae74ec2f8cc34b21635e156, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 154;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 154;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
CHECK_OBJECT(par_type);
tmp_args_element_value_2 = par_type;
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
CHECK_OBJECT(par_language);
tmp_args_element_value_4 = par_language;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__FindResourceEx,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_hrsrc == NULL);
var_hrsrc = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_5 = par_hModule;
CHECK_OBJECT(var_hrsrc);
tmp_args_element_value_6 = var_hrsrc;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__SizeofResource,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_size == NULL);
var_size = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_instance_3 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_7 = par_hModule;
CHECK_OBJECT(var_hrsrc);
tmp_args_element_value_8 = var_hrsrc;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__LoadResource,
        call_args
    );
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_hglob == NULL);
var_hglob = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_win32ctypes$pywin32$win32api$_backend(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__backend);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_ctypes;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_win32ctypes$pywin32$win32api$_common(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_cast);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_called_instance_4 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 160;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_hglob);
tmp_args_element_value_10 = var_hglob;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 160;
tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__LockResource, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 160;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_4 = module_var_accessor_win32ctypes$pywin32$win32api$_common(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 160;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_c_char_p);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 160;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 159;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_11};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_pointer == NULL);
var_pointer = tmp_assign_source_8;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_12;
tmp_called_instance_5 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_hglob);
tmp_args_element_value_12 = var_hglob;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 162;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__LockResource, tmp_args_element_value_12);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_pointer == NULL);
var_pointer = tmp_assign_source_9;
}
branch_end_1:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_instance_6 = module_var_accessor_win32ctypes$pywin32$win32api$_common(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_pointer);
tmp_args_element_value_13 = var_pointer;
CHECK_OBJECT(var_size);
tmp_args_element_value_14 = var_size;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain__PyBytes_FromStringAndSize,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_15 = EXC_TYPE(tstate);
tmp_args_element_value_16 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_16); 
tmp_args_element_value_17 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_17 == NULL) {
    tmp_args_element_value_17 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
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
    exception_lineno = 154;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 154;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 154;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame.f_lineno = 154;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 154;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource,
    type_description_1,
    par_hModule,
    par_type,
    par_name,
    par_language,
    var_hrsrc,
    var_size,
    var_hglob,
    var_pointer
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__5_LoadResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_hrsrc);
var_hrsrc = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_hglob);
var_hglob = NULL;
Py_XDECREF(var_pointer);
var_pointer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_hrsrc);
var_hrsrc = NULL;
Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_hglob);
var_hglob = NULL;
Py_XDECREF(var_pointer);
var_pointer = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_language);
Py_DECREF(par_language);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_language);
Py_DECREF(par_language);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary = MAKE_FUNCTION_FRAME(tstate, code_objects_ffd03cf3e1cb45760819581a0f31129a, module_win32ctypes$pywin32$win32api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 177;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 177;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_dll(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dll);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_1 = par_hModule;
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 178;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__FreeLibrary, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 177;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 177;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 177;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame.f_lineno = 177;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 177;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary,
    type_description_1,
    par_hModule
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_hModule);
Py_DECREF(par_hModule);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__7_GetTickCount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount = MAKE_FUNCTION_FRAME(tstate, code_objects_297a5797c3c15504af67149baa3fc240, module_win32ctypes$pywin32$win32api, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount->m_frame.f_lineno = 189;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__GetTickCount);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__7_GetTickCount);

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


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_filename = python_pars[0];
PyObject *par_delete = python_pars[1];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_5fdd14add068d5c4788ead0cc944dc43, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 208;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 208;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_filename);
tmp_args_element_value_1 = par_filename;
CHECK_OBJECT(par_delete);
tmp_args_element_value_2 = par_delete;
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__BeginUpdateResource,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 208;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 208;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 208;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame.f_lineno = 208;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 208;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource,
    type_description_1,
    par_filename,
    par_delete
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *par_discard = python_pars[1];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource;
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
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_5800367d3351497193504a88a3a1fcea, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 225;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 225;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_1 = par_handle;
CHECK_OBJECT(par_discard);
tmp_args_element_value_2 = par_discard;
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__EndUpdateResource,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 225;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 225;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame.f_lineno = 225;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource,
    type_description_1,
    par_handle,
    par_discard
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_discard);
Py_DECREF(par_discard);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_discard);
Py_DECREF(par_discard);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__10_UpdateResource(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *par_type = python_pars[1];
PyObject *par_name = python_pars[2];
PyObject *par_data = python_pars[3];
PyObject *par_language = python_pars[4];
PyObject *var_lp_data = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource = MAKE_FUNCTION_FRAME(tstate, code_objects_a1883c63360f59cb3f08c6d488e25a50, module_win32ctypes$pywin32$win32api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 259;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 259;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_bytes_arg_1;
CHECK_OBJECT(par_data);
tmp_bytes_arg_1 = par_data;
tmp_assign_source_5 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(var_lp_data == NULL);
var_lp_data = tmp_assign_source_5;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_UnicodeEncodeError;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_bd6eab3ffb239081e822126f685e12ab;
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 263;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 263;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_6;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 260;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_6;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_len_arg_1;
tmp_expression_value_3 = module_var_accessor_win32ctypes$pywin32$win32api$_resource(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__resource);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__UpdateResource);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_1 = par_handle;
CHECK_OBJECT(par_type);
tmp_args_element_value_2 = par_type;
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
CHECK_OBJECT(par_language);
tmp_args_element_value_4 = par_language;
CHECK_OBJECT(var_lp_data);
tmp_args_element_value_5 = var_lp_data;
CHECK_OBJECT(var_lp_data);
tmp_len_arg_1 = var_lp_data;
tmp_args_element_value_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 266;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_7;
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
    exception_lineno = 259;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 259;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_7;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 259;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_4:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame.f_lineno = 259;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource,
    type_description_1,
    par_handle,
    par_type,
    par_name,
    par_data,
    par_language,
    var_lp_data
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__10_UpdateResource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_lp_data);
var_lp_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lp_data);
var_lp_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_language);
Py_DECREF(par_language);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_language);
Py_DECREF(par_language);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory = MAKE_FUNCTION_FRAME(tstate, code_objects_7dac8f0bb9d04f10821e9b5a451510a9, module_win32ctypes$pywin32$win32api, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;

    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 278;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 278;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_system_information(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__system_information);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;

    goto try_except_handler_3;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 280;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__GetWindowsDirectory);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_3;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 278;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 278;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 278;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 278;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame.f_lineno = 278;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 278;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

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


static PyObject *impl_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory = MAKE_FUNCTION_FRAME(tstate, code_objects_60825722e75c97de65e997bf6c9e50c9, module_win32ctypes$pywin32$win32api, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_type_description == NULL);
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory = cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$pywin32$win32api$_pywin32error(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pywin32error);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;

    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 292;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_1;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_1;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 292;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_1;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_1;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$pywin32$win32api$_system_information(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__system_information);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;

    goto try_except_handler_3;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 294;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__GetSystemDirectory);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;

    goto try_except_handler_3;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;

    goto try_except_handler_3;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 292;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 292;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 292;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame)) {
        frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 292;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame.f_lineno = 292;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 292;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_1:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory == cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory);
    cache_frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory = NULL;
}

assertFrameObject(frame_frame_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

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



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__10_UpdateResource(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__10_UpdateResource,
        mod_consts.const_str_plain_UpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a1883c63360f59cb3f08c6d488e25a50,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_e6f15d844df2fbeb8a4da2a9963c5c7b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory,
        mod_consts.const_str_plain_GetWindowsDirectory,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7dac8f0bb9d04f10821e9b5a451510a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_4f18df1aad79d5542ea9e0fa99b690ea,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory,
        mod_consts.const_str_plain_GetSystemDirectory,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60825722e75c97de65e997bf6c9e50c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_70e617c4243c7f9cfe7c2835a6d18d83,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx,
        mod_consts.const_str_plain_LoadLibraryEx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0f5f7bd17d2a02d81dec5a47f5b1c689,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_e852b34054fff27c7db709eb5c3f7f92,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes,
        mod_consts.const_str_plain_EnumResourceTypes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a8fbb72070b8315d4962f405ce4ae14b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_d199b30d290d4e7c19d2822ee80a2d10,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback,
        mod_consts.const_str_plain_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39e4a9d2416260476cf8355041901111,
#endif
        code_objects_920d3f0b311570551d43753681872f3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames,
        mod_consts.const_str_plain_EnumResourceNames,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bfe1e7d8046f35113f9d263b41bdbe40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_4dddd9522c14ae6062c219da61d6d180,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback,
        mod_consts.const_str_plain_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_312bb570fb132ef9ca0c3d14cf88f368,
#endif
        code_objects_b92e7e2a88e9c6b3134e615d3f17ff5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages,
        mod_consts.const_str_plain_EnumResourceLanguages,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_52674c6ca07fde0bd66475dbe1bd5a3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_26106e78e2db66045020cbb289b9c8c2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback,
        mod_consts.const_str_plain_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bd7a6027aaf6a190828d000636d8884d,
#endif
        code_objects_830bf1f2dc55022a2e1badc9fb46efff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__5_LoadResource(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__5_LoadResource,
        mod_consts.const_str_plain_LoadResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b1f465dfcae74ec2f8cc34b21635e156,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_acbe4da40f7651d94740d8c6f155e389,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary,
        mod_consts.const_str_plain_FreeLibrary,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ffd03cf3e1cb45760819581a0f31129a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_a2eb443bbeb620ec91168862bec34f49,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__7_GetTickCount(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__7_GetTickCount,
        mod_consts.const_str_plain_GetTickCount,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_297a5797c3c15504af67149baa3fc240,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_af9706b6f3d49fd4cdb492dce62389f1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource,
        mod_consts.const_str_plain_BeginUpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5fdd14add068d5c4788ead0cc944dc43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_037f853683b9e493d53d6635215f6e9f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource,
        mod_consts.const_str_plain_EndUpdateResource,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5800367d3351497193504a88a3a1fcea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$pywin32$win32api,
        mod_consts.const_str_digest_4187120b0c723585e1ee85aacdf4aa54,
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

static function_impl_code const function_table_win32ctypes$pywin32$win32api[] = {
impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes$$$function__1_callback,
impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames$$$function__1_callback,
impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages$$$function__1_callback,
impl_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx,
impl_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes,
impl_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames,
impl_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages,
impl_win32ctypes$pywin32$win32api$$$function__5_LoadResource,
impl_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary,
impl_win32ctypes$pywin32$win32api$$$function__7_GetTickCount,
impl_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource,
impl_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource,
impl_win32ctypes$pywin32$win32api$$$function__10_UpdateResource,
impl_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory,
impl_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory,
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

    return Nuitka_Function_GetFunctionState(function, function_table_win32ctypes$pywin32$win32api);
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
        module_win32ctypes$pywin32$win32api,
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
        function_table_win32ctypes$pywin32$win32api,
        sizeof(function_table_win32ctypes$pywin32$win32api) / sizeof(function_impl_code)
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
static char const *module_full_name = "win32ctypes.pywin32.win32api";
#endif

// Internal entry point for module code.
PyObject *module_code_win32ctypes$pywin32$win32api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("win32ctypes$pywin32$win32api");

    // Store the module for future use.
    module_win32ctypes$pywin32$win32api = module;

    moduledict_win32ctypes$pywin32$win32api = MODULE_DICT(module_win32ctypes$pywin32$win32api);

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
        PRINT_STRING("win32ctypes$pywin32$win32api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("win32ctypes$pywin32$win32api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("win32ctypes$pywin32$win32api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.pywin32.win32api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwin32ctypes$pywin32$win32api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_win32ctypes$pywin32$win32api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$pywin32$win32api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$pywin32$win32api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$pywin32$win32api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$pywin32$win32api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_win32ctypes$pywin32$win32api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_win32ctypes$pywin32$win32api);
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

        UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$pywin32$win32api;
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
tmp_assign_source_1 = mod_consts.const_str_digest_a7df63d360b439aa7797ca3eb92cce6c;
UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_win32ctypes$pywin32$win32api = MAKE_MODULE_FRAME(code_objects_f6201085cfb1a30e0e89b2b7543d2d70, module_win32ctypes$pywin32$win32api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$pywin32$win32api);
assert(Py_REFCNT(frame_frame_win32ctypes$pywin32$win32api) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_win32ctypes$pywin32$win32api$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_win32ctypes$pywin32$win32api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_258ce5f9efd6a32d70645dffdf6c448e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_win32ctypes$pywin32$win32api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_0774ecf174949b8fa582bc1dfd1724c2_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_win32ctypes$pywin32$win32api->m_frame.f_lineno = 9;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__common,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__common);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__common, tmp_assign_source_5);
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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__dll,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__dll);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__dll, tmp_assign_source_6);
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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__resource,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__resource);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__resource, tmp_assign_source_7);
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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__system_information,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__system_information);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__system_information, tmp_assign_source_8);
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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__backend,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__backend);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__backend, tmp_assign_source_9);
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
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain__time,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__time);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__time, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_7d1ac83fc225d250ecab25e993e9c9c0;
tmp_globals_arg_value_2 = (PyObject *)moduledict_win32ctypes$pywin32$win32api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_pywin32error_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_win32ctypes$pywin32$win32api->m_frame.f_lineno = 11;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_win32ctypes$pywin32$win32api,
        mod_consts.const_str_plain_pywin32error,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_pywin32error);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain__pywin32error, tmp_assign_source_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$pywin32$win32api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$pywin32$win32api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$pywin32$win32api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_win32ctypes$pywin32$win32api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LOAD_LIBRARY_AS_DATAFILE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = const_int_0;
UPDATE_STRING_DICT0(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LANG_NEUTRAL, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__1_LoadLibraryEx(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LoadLibraryEx, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__2_EnumResourceTypes(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_EnumResourceTypes, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__3_EnumResourceNames(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_EnumResourceNames, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;

tmp_assign_source_17 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__4_EnumResourceLanguages(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_EnumResourceLanguages, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_win32ctypes$pywin32$win32api$LANG_NEUTRAL(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);

tmp_assign_source_18 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__5_LoadResource(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_LoadResource, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__6_FreeLibrary(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_FreeLibrary, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__7_GetTickCount(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_GetTickCount, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__8_BeginUpdateResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_BeginUpdateResource, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__9_EndUpdateResource(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_EndUpdateResource, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_win32ctypes$pywin32$win32api$LANG_NEUTRAL(tstate);
assert(!(tmp_tuple_element_2 == NULL));
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);

tmp_assign_source_23 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__10_UpdateResource(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_UpdateResource, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__11_GetWindowsDirectory(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_GetWindowsDirectory, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_win32ctypes$pywin32$win32api$$$function__12_GetSystemDirectory(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)mod_consts.const_str_plain_GetSystemDirectory, tmp_assign_source_25);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("win32ctypes$pywin32$win32api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.pywin32.win32api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_win32ctypes$pywin32$win32api);
    return module_win32ctypes$pywin32$win32api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$pywin32$win32api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("win32ctypes$pywin32$win32api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

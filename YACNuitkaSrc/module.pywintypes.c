/* Generated code for Python module 'pywintypes'
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



/* The "module_pywintypes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pywintypes;
PyDictObject *moduledict_pywintypes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_240635e6463f2f2e48a8bb793ceef198;
PyObject *const_str_plain_importlib;
PyObject *const_str_plain_machinery;
PyObject *const_str_plain_EXTENSION_SUFFIXES;
PyObject *const_str_plain__d;
PyObject *const_str_digest_619b6f718e8d38781f796bca89ddb68a;
PyObject *const_int_pos_3;
PyObject *const_int_pos_13;
PyObject *const_str_plain_frozen;
PyObject *const_str_plain_join;
PyObject *const_str_plain_filename;
PyObject *const_str_digest_6199f8463e58a81238e85da500a3ebc6;
PyObject *const_str_digest_c1ff2593ca00f1b6b9dd8df343d0460a;
PyObject *const_str_plain__win32sysloader;
PyObject *const_str_plain_GetModuleFilename;
PyObject *const_str_plain_LoadModule;
PyObject *const_str_plain_prefix;
PyObject *const_str_plain_pywin32_system32;
PyObject *const_str_digest_b8b971fd8494a1461cae71bdbb29afb5;
PyObject *const_str_digest_cbcd63d30e8499a90dcadb5f58f69370;
PyObject *const_str_chr_41;
PyObject *const_str_plain_modules;
PyObject *const_str_plain_ExtensionFileLoader;
PyObject *const_str_plain_found;
PyObject *const_str_plain_ModuleSpec;
PyObject *const_tuple_str_plain_name_str_plain_loader_str_plain_origin_tuple;
PyObject *const_str_plain_util;
PyObject *const_str_plain_module_from_spec;
PyObject *const_str_plain_loader;
PyObject *const_str_plain_exec_module;
PyObject *const_str_plain_update;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
PyObject *const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain___import_pywin32_system_module__;
PyObject *const_str_plain_pywintypes;
PyObject *const_str_digest_b83995f4c387fe4ae08ad9ce40bc0716;
PyObject *const_str_digest_6086907ad6a1df9640023c3e49fc7bc7;
PyObject *const_tuple_eb23c68f9f916a2d856c8a962e3c199e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[42];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pywintypes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_240635e6463f2f2e48a8bb793ceef198);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_importlib);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_machinery);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENSION_SUFFIXES);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__d);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_619b6f718e8d38781f796bca89ddb68a);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_frozen);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_6199f8463e58a81238e85da500a3ebc6);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1ff2593ca00f1b6b9dd8df343d0460a);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__win32sysloader);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetModuleFilename);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadModule);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_prefix);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_pywin32_system32);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b971fd8494a1461cae71bdbb29afb5);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbcd63d30e8499a90dcadb5f58f69370);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionFileLoader);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_found);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleSpec);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_loader_str_plain_origin_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_module_from_spec);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_loader);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_exec_module);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___import_pywin32_system_module__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_pywintypes);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_b83995f4c387fe4ae08ad9ce40bc0716);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_6086907ad6a1df9640023c3e49fc7bc7);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_eb23c68f9f916a2d856c8a962e3c199e_tuple);
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
void checkModuleConstants_pywintypes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_240635e6463f2f2e48a8bb793ceef198));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_240635e6463f2f2e48a8bb793ceef198);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_importlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_importlib);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_machinery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_machinery);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_EXTENSION_SUFFIXES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EXTENSION_SUFFIXES);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__d);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_619b6f718e8d38781f796bca89ddb68a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_619b6f718e8d38781f796bca89ddb68a);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_13));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_13);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_frozen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frozen);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filename);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_6199f8463e58a81238e85da500a3ebc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6199f8463e58a81238e85da500a3ebc6);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1ff2593ca00f1b6b9dd8df343d0460a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1ff2593ca00f1b6b9dd8df343d0460a);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__win32sysloader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__win32sysloader);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetModuleFilename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetModuleFilename);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadModule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadModule);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_prefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prefix);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_pywin32_system32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pywin32_system32);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b971fd8494a1461cae71bdbb29afb5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b971fd8494a1461cae71bdbb29afb5);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbcd63d30e8499a90dcadb5f58f69370));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbcd63d30e8499a90dcadb5f58f69370);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExtensionFileLoader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExtensionFileLoader);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_found));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_found);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModuleSpec);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_loader_str_plain_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_str_plain_loader_str_plain_origin_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_util);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_module_from_spec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module_from_spec);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_loader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loader);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_exec_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exec_module);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___import_pywin32_system_module__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___import_pywin32_system_module__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_pywintypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pywintypes);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_b83995f4c387fe4ae08ad9ce40bc0716));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b83995f4c387fe4ae08ad9ce40bc0716);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_6086907ad6a1df9640023c3e49fc7bc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6086907ad6a1df9640023c3e49fc7bc7);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_eb23c68f9f916a2d856c8a962e3c199e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eb23c68f9f916a2d856c8a962e3c199e_tuple);
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
static PyObject *module_var_accessor_pywintypes$__file__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pywintypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pywintypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___file__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pywintypes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___file__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___file__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___file__);
    }

    return result;
}

static PyObject *module_var_accessor_pywintypes$__import_pywin32_system_module__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pywintypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pywintypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain___import_pywin32_system_module__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pywintypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___import_pywin32_system_module__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___import_pywin32_system_module__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___import_pywin32_system_module__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___import_pywin32_system_module__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain___import_pywin32_system_module__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain___import_pywin32_system_module__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___import_pywin32_system_module__);
    }

    return result;
}

static PyObject *module_var_accessor_pywintypes$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pywintypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pywintypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pywintypes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pywintypes$importlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pywintypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pywintypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pywintypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_importlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_importlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_importlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_importlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3e654dc82527c19f6c769f1979b56bcd;
static PyCodeObject *code_objects_7fccc2a73c756012b6a1d8b1878246a0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b83995f4c387fe4ae08ad9ce40bc0716); CHECK_OBJECT(module_filename_obj);
code_objects_3e654dc82527c19f6c769f1979b56bcd = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6086907ad6a1df9640023c3e49fc7bc7, mod_consts.const_str_digest_6086907ad6a1df9640023c3e49fc7bc7, NULL, NULL, 0, 0, 0);
code_objects_7fccc2a73c756012b6a1d8b1878246a0 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___import_pywin32_system_module__, mod_consts.const_str_plain___import_pywin32_system_module__, mod_consts.const_tuple_eb23c68f9f916a2d856c8a962e3c199e_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pywintypes$$$function__1___import_pywin32_system_module__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pywintypes$$$function__1___import_pywin32_system_module__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_modname = python_pars[0];
PyObject *par_globs = python_pars[1];
PyObject *var_suffix = NULL;
PyObject *var_filename = NULL;
PyObject *var_look = NULL;
PyObject *var_found = NULL;
PyObject *var__win32sysloader = NULL;
PyObject *var_pywin32_system32 = NULL;
PyObject *var_path = NULL;
PyObject *var_maybe = NULL;
PyObject *var_old_mod = NULL;
PyObject *var_loader = NULL;
PyObject *var_spec = NULL;
PyObject *var_mod = NULL;
nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pywintypes$$$function__1___import_pywin32_system_module__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__)) {
    Py_XDECREF(cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7fccc2a73c756012b6a1d8b1878246a0, module_pywintypes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_type_description == NULL);
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ = cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pywintypes$$$function__1___import_pywin32_system_module__);
assert(Py_REFCNT(frame_frame_pywintypes$$$function__1___import_pywin32_system_module__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_cmp_expr_left_1 = mod_consts.const_str_digest_240635e6463f2f2e48a8bb793ceef198;
tmp_expression_value_2 = module_var_accessor_pywintypes$importlib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_importlib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_machinery);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_EXTENSION_SUFFIXES);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain__d;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = const_str_empty;
condexpr_end_1:;
assert(var_suffix == NULL);
Py_INCREF(tmp_assign_source_1);
var_suffix = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_619b6f718e8d38781f796bca89ddb68a;
CHECK_OBJECT(par_modname);
tmp_tuple_element_1 = par_modname;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_13;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_suffix);
tmp_tuple_element_1 = var_suffix;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_filename == NULL);
var_filename = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_frozen);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
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
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_FALSE;
tmp_for_loop_1__break_indicator = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_4 == NULL));
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_value_value_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_5 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_2 = PyExc_StopIteration;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
tmp_for_loop_1__break_indicator = tmp_assign_source_6;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto loop_end_1;
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_look;
    var_look = tmp_assign_source_7;
    Py_INCREF(var_look);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isfile_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_look);
tmp_isfile_arg_1 = var_look;
tmp_capi_result_1 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 41;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(var_look);
tmp_path_arg_1 = var_look;
tmp_assign_source_8 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_look;
    assert(old != NULL);
    var_look = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_look);
tmp_args_element_value_1 = var_look;
if (var_filename == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_found;
    var_found = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isfile_arg_2;
PyObject *tmp_capi_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_found);
tmp_isfile_arg_2 = var_found;
tmp_capi_result_2 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_2);

exception_lineno = 44;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_1;
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_for_loop_1__break_indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_6199f8463e58a81238e85da500a3ebc6;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_modname);
tmp_format_value_1 = par_modname;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_c1ff2593ca00f1b6b9dd8df343d0460a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
tmp_expression_value_6 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_6 == NULL));
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_path);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 47;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 47;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__win32sysloader;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pywintypes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 50;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__win32sysloader == NULL);
var__win32sysloader = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var__win32sysloader);
tmp_called_instance_1 = var__win32sysloader;
CHECK_OBJECT(var_filename);
tmp_args_element_value_3 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 52;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_GetModuleFilename, tmp_args_element_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_found == NULL);
var_found = tmp_assign_source_11;
}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_found);
tmp_cmp_expr_left_4 = var_found;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var__win32sysloader);
tmp_called_instance_2 = var__win32sysloader;
CHECK_OBJECT(var_filename);
tmp_args_element_value_4 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 66;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_LoadModule, tmp_args_element_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_found;
    assert(old != NULL);
    var_found = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_6:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_found);
tmp_cmp_expr_left_5 = var_found;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isfile_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_capi_result_3;
int tmp_truth_name_3;
tmp_expression_value_7 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_8 == NULL));
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_prefix);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 76;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_filename);
tmp_args_element_value_6 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_isfile_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_isfile_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_3 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_3);
CHECK_OBJECT(tmp_isfile_arg_3);
Py_DECREF(tmp_isfile_arg_3);
if (tmp_capi_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_capi_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_3);

exception_lineno = 76;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_3);
Py_DECREF(tmp_capi_result_3);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
tmp_expression_value_9 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_9 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_10 == NULL));
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_prefix);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 77;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_filename);
tmp_args_element_value_8 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 77;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_found;
    assert(old != NULL);
    var_found = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_no_7:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_found);
tmp_cmp_expr_left_6 = var_found;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_isfile_arg_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_path_arg_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_capi_result_4;
int tmp_truth_name_4;
tmp_expression_value_11 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_11 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_join);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_path_arg_2 = module_var_accessor_pywintypes$__file__(tstate);
if (unlikely(tmp_path_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_path_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_filename);
tmp_args_element_value_10 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_isfile_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_isfile_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_4 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_4);
CHECK_OBJECT(tmp_isfile_arg_4);
Py_DECREF(tmp_isfile_arg_4);
if (tmp_capi_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_capi_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_4);

exception_lineno = 81;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_4);
Py_DECREF(tmp_capi_result_4);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_path_arg_3;
PyObject *tmp_args_element_value_12;
tmp_expression_value_12 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_12 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_join);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_path_arg_3 = module_var_accessor_pywintypes$__file__(tstate);
if (unlikely(tmp_path_arg_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_path_arg_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 82;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = OS_PATH_DIRNAME(tstate, tmp_path_arg_3);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 82;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_filename);
tmp_args_element_value_12 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_found;
    assert(old != NULL);
    var_found = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_no_10:;
branch_no_9:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_found);
tmp_cmp_expr_left_7 = var_found;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pywin32_system32;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pywintypes;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 96;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pywin32_system32 == NULL);
var_pywin32_system32 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_pywin32_system32);
tmp_expression_value_13 = var_pywin32_system32;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___path__);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_1 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 98;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_18 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_18;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_14 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_14 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_join);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_13 = var_path;
if (var_filename == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_14 = var_filename;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_maybe;
    var_maybe = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_isfile_arg_5;
PyObject *tmp_capi_result_5;
int tmp_truth_name_5;
CHECK_OBJECT(var_maybe);
tmp_isfile_arg_5 = var_maybe;
tmp_capi_result_5 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_5);
if (tmp_capi_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_capi_result_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_5);

exception_lineno = 100;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_13 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_5);
Py_DECREF(tmp_capi_result_5);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(var_maybe);
tmp_assign_source_20 = var_maybe;
{
    PyObject *old = var_found;
    assert(old != NULL);
    var_found = tmp_assign_source_20;
    Py_INCREF(var_found);
    Py_DECREF(old);
}

}
goto loop_end_2;
branch_no_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_11:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_found);
tmp_cmp_expr_left_8 = var_found;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_b8b971fd8494a1461cae71bdbb29afb5;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_modname);
tmp_format_value_3 = par_modname;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_cbcd63d30e8499a90dcadb5f58f69370;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
if (var_filename == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_4 = var_filename;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 106;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_input_2 == NULL));
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 106;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
branch_end_1:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_1;
tmp_expression_value_16 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_16 == NULL));
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_modules);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modname);
tmp_subscript_value_1 = par_modname;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_old_mod == NULL);
var_old_mod = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_expression_value_18 = module_var_accessor_pywintypes$importlib(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_importlib);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_machinery);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_ExtensionFileLoader);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modname);
tmp_args_element_value_15 = par_modname;
if (var_found == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_16 = var_found;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_loader == NULL);
var_loader = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
tmp_expression_value_20 = module_var_accessor_pywintypes$importlib(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_importlib);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_machinery);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ModuleSpec);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modname);
tmp_kw_call_value_0_1 = par_modname;
CHECK_OBJECT(var_loader);
tmp_kw_call_value_1_1 = var_loader;
if (var_found == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = var_found;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 113;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_23 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_name_str_plain_loader_str_plain_origin_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_spec == NULL);
var_spec = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_17;
tmp_expression_value_21 = module_var_accessor_pywintypes$importlib(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_importlib);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_util);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_spec);
tmp_args_element_value_17 = var_spec;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 114;
tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_module_from_spec, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mod == NULL);
var_mod = tmp_assign_source_24;
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(var_spec);
tmp_expression_value_22 = var_spec;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_loader);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mod);
tmp_args_element_value_18 = var_mod;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 115;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_exec_module, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_2;
tmp_expression_value_24 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_24 == NULL));
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_modules);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modname);
tmp_subscript_value_2 = par_modname;
tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mod);
tmp_cmp_expr_right_9 = var_mod;
tmp_condition_result_15 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_15 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 118;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_old_mod);
tmp_ass_subvalue_1 = var_old_mod;
tmp_expression_value_25 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_25 == NULL));
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_modules);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_modname);
tmp_ass_subscript_1 = par_modname;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(par_globs);
tmp_expression_value_26 = par_globs;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_update);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mod);
tmp_expression_value_27 = var_mod;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_27);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 121;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame.f_lineno = 121;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pywintypes$$$function__1___import_pywin32_system_module__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pywintypes$$$function__1___import_pywin32_system_module__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pywintypes$$$function__1___import_pywin32_system_module__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pywintypes$$$function__1___import_pywin32_system_module__,
    type_description_1,
    par_modname,
    par_globs,
    var_suffix,
    var_filename,
    var_look,
    var_found,
    var__win32sysloader,
    var_pywin32_system32,
    var_path,
    var_maybe,
    var_old_mod,
    var_loader,
    var_spec,
    var_mod
);


// Release cached frame if used for exception.
if (frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ == cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__);
    cache_frame_frame_pywintypes$$$function__1___import_pywin32_system_module__ = NULL;
}

assertFrameObject(frame_frame_pywintypes$$$function__1___import_pywin32_system_module__);

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
CHECK_OBJECT(var_suffix);
CHECK_OBJECT(var_suffix);
Py_DECREF(var_suffix);
var_suffix = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_look);
var_look = NULL;
Py_XDECREF(var_found);
var_found = NULL;
Py_XDECREF(var__win32sysloader);
var__win32sysloader = NULL;
Py_XDECREF(var_pywin32_system32);
var_pywin32_system32 = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_maybe);
var_maybe = NULL;
CHECK_OBJECT(var_old_mod);
CHECK_OBJECT(var_old_mod);
Py_DECREF(var_old_mod);
var_old_mod = NULL;
CHECK_OBJECT(var_loader);
CHECK_OBJECT(var_loader);
Py_DECREF(var_loader);
var_loader = NULL;
CHECK_OBJECT(var_spec);
CHECK_OBJECT(var_spec);
Py_DECREF(var_spec);
var_spec = NULL;
CHECK_OBJECT(var_mod);
CHECK_OBJECT(var_mod);
Py_DECREF(var_mod);
var_mod = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_suffix);
var_suffix = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_look);
var_look = NULL;
Py_XDECREF(var_found);
var_found = NULL;
Py_XDECREF(var__win32sysloader);
var__win32sysloader = NULL;
Py_XDECREF(var_pywin32_system32);
var_pywin32_system32 = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_maybe);
var_maybe = NULL;
Py_XDECREF(var_old_mod);
var_old_mod = NULL;
Py_XDECREF(var_loader);
var_loader = NULL;
Py_XDECREF(var_spec);
var_spec = NULL;
Py_XDECREF(var_mod);
var_mod = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_modname);
Py_DECREF(par_modname);
CHECK_OBJECT(par_globs);
Py_DECREF(par_globs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_modname);
Py_DECREF(par_modname);
CHECK_OBJECT(par_globs);
Py_DECREF(par_globs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pywintypes$$$function__1___import_pywin32_system_module__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pywintypes$$$function__1___import_pywin32_system_module__,
        mod_consts.const_str_plain___import_pywin32_system_module__,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7fccc2a73c756012b6a1d8b1878246a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pywintypes,
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

static function_impl_code const function_table_pywintypes[] = {
impl_pywintypes$$$function__1___import_pywin32_system_module__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pywintypes);
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
        module_pywintypes,
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
        function_table_pywintypes,
        sizeof(function_table_pywintypes) / sizeof(function_impl_code)
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
static char const *module_full_name = "pywintypes";
#endif

// Internal entry point for module code.
PyObject *module_code_pywintypes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pywintypes");

    // Store the module for future use.
    module_pywintypes = module;

    moduledict_pywintypes = MODULE_DICT(module_pywintypes);

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
        PRINT_STRING("pywintypes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pywintypes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pywintypes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pywintypes" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpywintypes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pywintypes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pywintypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pywintypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pywintypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pywintypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pywintypes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pywintypes);
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

        UPDATE_STRING_DICT1(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_pywintypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pywintypes = MAKE_MODULE_FRAME(code_objects_3e654dc82527c19f6c769f1979b56bcd, module_pywintypes);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pywintypes);
assert(Py_REFCNT(frame_frame_pywintypes) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pywintypes$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pywintypes$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pywintypes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pywintypes->m_frame.f_lineno = 2;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_2fd15ceffe1038f98bc8f46107ff0c3e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pywintypes;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pywintypes->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;

tmp_assign_source_8 = MAKE_FUNCTION_pywintypes$$$function__1___import_pywin32_system_module__(tstate);

UPDATE_STRING_DICT1(moduledict_pywintypes, (Nuitka_StringObject *)mod_consts.const_str_plain___import_pywin32_system_module__, tmp_assign_source_8);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_pywintypes$__import_pywin32_system_module__(tstate);
assert(!(tmp_called_value_1 == NULL));
tmp_args_element_value_1 = mod_consts.const_str_plain_pywintypes;
tmp_args_element_value_2 = (PyObject *)moduledict_pywintypes;
frame_frame_pywintypes->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pywintypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pywintypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pywintypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pywintypes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pywintypes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pywintypes" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pywintypes);
    return module_pywintypes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pywintypes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pywintypes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

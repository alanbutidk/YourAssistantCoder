/* Generated code for Python module 'win32ctypes$core$cffi$_dll'
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



/* The "module_win32ctypes$core$cffi$_dll" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_win32ctypes$core$cffi$_dll;
PyDictObject *moduledict_win32ctypes$core$cffi$_dll;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_check_null;
PyObject *const_str_plain_dlls;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_LoadLibraryExW;
PyObject *const_str_plain_ffi;
PyObject *const_str_plain_NULL;
PyObject *const_dict_1176a1ad2b2e53166a62d3ef15aec634;
PyObject *const_str_plain_HMODULE;
PyObject *const_str_plain_check_false;
PyObject *const_str_plain_FreeLibrary;
PyObject *const_str_plain_PVOID;
PyObject *const_dict_662b828084f567c268dae46dc2ae62e0;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain__util;
PyObject *const_tuple_38905fe36f686b32870f299c9387bf0e_tuple;
PyObject *const_str_plain_cdef;
PyObject *const_tuple_str_digest_f2a3225c7082d377ee912385d28c5774_tuple;
PyObject *const_str_plain__LoadLibraryEx;
PyObject *const_str_plain__FreeLibrary;
PyObject *const_str_digest_184fcbba41efde39b51933293ae2513d;
PyObject *const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f;
PyObject *const_tuple_str_plain_hModule_tuple;
PyObject *const_tuple_39f441eac982d91072efc0b5d3ef1f74_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[24];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("win32ctypes.core.cffi._dll"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_null);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_dlls);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoadLibraryExW);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_dict_1176a1ad2b2e53166a62d3ef15aec634);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_HMODULE);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_false);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_FreeLibrary);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PVOID);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_662b828084f567c268dae46dc2ae62e0);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_38905fe36f686b32870f299c9387bf0e_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdef);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2a3225c7082d377ee912385d28c5774_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__LoadLibraryEx);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__FreeLibrary);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_184fcbba41efde39b51933293ae2513d);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_39f441eac982d91072efc0b5d3ef1f74_tuple);
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
void checkModuleConstants_win32ctypes$core$cffi$_dll(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_null);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_dlls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dlls);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoadLibraryExW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoadLibraryExW);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NULL);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_dict_1176a1ad2b2e53166a62d3ef15aec634));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1176a1ad2b2e53166a62d3ef15aec634);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_HMODULE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HMODULE);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_false));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_false);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_FreeLibrary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FreeLibrary);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PVOID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PVOID);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_662b828084f567c268dae46dc2ae62e0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_662b828084f567c268dae46dc2ae62e0);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_38905fe36f686b32870f299c9387bf0e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38905fe36f686b32870f299c9387bf0e_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdef);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2a3225c7082d377ee912385d28c5774_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f2a3225c7082d377ee912385d28c5774_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__LoadLibraryEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LoadLibraryEx);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__FreeLibrary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FreeLibrary);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_184fcbba41efde39b51933293ae2513d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_184fcbba41efde39b51933293ae2513d);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hModule_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_hModule_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_39f441eac982d91072efc0b5d3ef1f74_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_39f441eac982d91072efc0b5d3ef1f74_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$HMODULE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$PVOID(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$check_false(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$check_null(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$dlls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_dll$ffi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_dll->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_dll->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_dll->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a470ec88f390b5b7ca8c932969bb4240;
static PyCodeObject *code_objects_07422c51531db19f1c79238a4bee8c8a;
static PyCodeObject *code_objects_37f20c17e8ae887af817f4b10c6871f5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_184fcbba41efde39b51933293ae2513d); CHECK_OBJECT(module_filename_obj);
code_objects_a470ec88f390b5b7ca8c932969bb4240 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f, mod_consts.const_str_digest_8ad41c9fcd3bff8b25c9a42fd0d0e41f, NULL, NULL, 0, 0, 0);
code_objects_07422c51531db19f1c79238a4bee8c8a = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__FreeLibrary, mod_consts.const_str_plain__FreeLibrary, mod_consts.const_tuple_str_plain_hModule_tuple, NULL, 1, 0, 0);
code_objects_37f20c17e8ae887af817f4b10c6871f5 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__LoadLibraryEx, mod_consts.const_str_plain__LoadLibraryEx, mod_consts.const_tuple_39f441eac982d91072efc0b5d3ef1f74_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_lpFilename = python_pars[0];
PyObject *par_hFile = python_pars[1];
PyObject *par_dwFlags = python_pars[2];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx = MAKE_FUNCTION_FRAME(tstate, code_objects_37f20c17e8ae887af817f4b10c6871f5, module_win32ctypes$core$cffi$_dll, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx = cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_dll$check_null(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_null);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_dll$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_LoadLibraryExW);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lpFilename);
tmp_unicode_arg_1 = par_lpFilename;
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 22;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_win32ctypes$core$cffi$_dll$ffi(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 22;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_NULL);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 22;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dwFlags);
tmp_args_element_value_3 = par_dwFlags;
frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx->m_frame.f_lineno = 21;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_1176a1ad2b2e53166a62d3ef15aec634);
frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx->m_frame.f_lineno = 20;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_dll$HMODULE(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HMODULE);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_result);
tmp_args_element_value_4 = var_result;
frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx->m_frame.f_lineno = 24;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx,
    type_description_1,
    par_lpFilename,
    par_hFile,
    par_dwFlags,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx == cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx);
    cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx);

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
CHECK_OBJECT(par_lpFilename);
Py_DECREF(par_lpFilename);
CHECK_OBJECT(par_hFile);
Py_DECREF(par_hFile);
CHECK_OBJECT(par_dwFlags);
Py_DECREF(par_dwFlags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_lpFilename);
Py_DECREF(par_lpFilename);
CHECK_OBJECT(par_hFile);
Py_DECREF(par_hFile);
CHECK_OBJECT(par_dwFlags);
Py_DECREF(par_dwFlags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_hModule = python_pars[0];
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary = MAKE_FUNCTION_FRAME(tstate, code_objects_07422c51531db19f1c79238a4bee8c8a, module_win32ctypes$core$cffi$_dll, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary = cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary) == 2);

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
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_win32ctypes$core$cffi$_dll$check_false(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_false);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_win32ctypes$core$cffi$_dll$dlls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_FreeLibrary);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_win32ctypes$core$cffi$_dll$PVOID(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PVOID);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_hModule);
tmp_args_element_value_2 = par_hModule;
frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary->m_frame.f_lineno = 29;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary->m_frame.f_lineno = 29;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_662b828084f567c268dae46dc2ae62e0);
frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary->m_frame.f_lineno = 28;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary,
    type_description_1,
    par_hModule
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary == cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary);
    cache_frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary);

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



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx,
        mod_consts.const_str_plain__LoadLibraryEx,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_37f20c17e8ae887af817f4b10c6871f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_dll,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary,
        mod_consts.const_str_plain__FreeLibrary,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_07422c51531db19f1c79238a4bee8c8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_dll,
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

static function_impl_code const function_table_win32ctypes$core$cffi$_dll[] = {
impl_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx,
impl_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary,
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

    return Nuitka_Function_GetFunctionState(function, function_table_win32ctypes$core$cffi$_dll);
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
        module_win32ctypes$core$cffi$_dll,
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
        function_table_win32ctypes$core$cffi$_dll,
        sizeof(function_table_win32ctypes$core$cffi$_dll) / sizeof(function_impl_code)
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
static char const *module_full_name = "win32ctypes.core.cffi._dll";
#endif

// Internal entry point for module code.
PyObject *module_code_win32ctypes$core$cffi$_dll(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("win32ctypes$core$cffi$_dll");

    // Store the module for future use.
    module_win32ctypes$core$cffi$_dll = module;

    moduledict_win32ctypes$core$cffi$_dll = MODULE_DICT(module_win32ctypes$core$cffi$_dll);

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
        PRINT_STRING("win32ctypes$core$cffi$_dll: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("win32ctypes$core$cffi$_dll: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("win32ctypes$core$cffi$_dll: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._dll" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwin32ctypes$core$cffi$_dll\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_win32ctypes$core$cffi$_dll,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_dll,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_dll,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_dll,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_dll,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_win32ctypes$core$cffi$_dll);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_win32ctypes$core$cffi$_dll);
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

        UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_dll;
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_win32ctypes$core$cffi$_dll = MAKE_MODULE_FRAME(code_objects_a470ec88f390b5b7ca8c932969bb4240, module_win32ctypes$core$cffi$_dll);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_dll);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_dll) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_win32ctypes$core$cffi$_dll$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_win32ctypes$core$cffi$_dll$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_1 = (PyObject *)moduledict_win32ctypes$core$cffi$_dll;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_38905fe36f686b32870f299c9387bf0e_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_win32ctypes$core$cffi$_dll->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
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
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi, tmp_assign_source_5);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
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
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_null, tmp_assign_source_6);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
        mod_consts.const_str_plain_check_false,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_check_false);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_check_false, tmp_assign_source_7);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
        mod_consts.const_str_plain_dlls,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_dlls);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls, tmp_assign_source_8);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
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
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_HMODULE, tmp_assign_source_9);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_dll,
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
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain_PVOID, tmp_assign_source_10);
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
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_dll$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_dll->m_frame.f_lineno = 11;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_cdef,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f2a3225c7082d377ee912385d28c5774_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_dll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_dll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_dll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_win32ctypes$core$cffi$_dll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_11;

tmp_assign_source_11 = MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__1__LoadLibraryEx(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain__LoadLibraryEx, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;

tmp_assign_source_12 = MAKE_FUNCTION_win32ctypes$core$cffi$_dll$$$function__2__FreeLibrary(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)mod_consts.const_str_plain__FreeLibrary, tmp_assign_source_12);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("win32ctypes$core$cffi$_dll", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._dll" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_win32ctypes$core$cffi$_dll);
    return module_win32ctypes$core$cffi$_dll;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_dll, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("win32ctypes$core$cffi$_dll", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

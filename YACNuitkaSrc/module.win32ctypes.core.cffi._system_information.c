/* Generated code for Python module 'win32ctypes$core$cffi$_system_information'
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



/* The "module_win32ctypes$core$cffi$_system_information" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_win32ctypes$core$cffi$_system_information;
PyDictObject *moduledict_win32ctypes$core$cffi$_system_information;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_ffi;
PyObject *const_str_plain_new;
PyObject *const_str_plain_MAX_PATH_BUF;
PyObject *const_str_plain_dlls;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_GetWindowsDirectoryW;
PyObject *const_str_plain_MAX_PATH;
PyObject *const_str_plain_unpack;
PyObject *const_str_plain_GetSystemDirectoryW;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_ffi_str_plain_dlls_tuple;
PyObject *const_int_pos_260;
PyObject *const_str_digest_07a45893e05a407d8bd36ff606d2eb41;
PyObject *const_str_plain_cdef;
PyObject *const_tuple_str_digest_07773e78cb2f5fb01e3102a33a5fd714_tuple;
PyObject *const_str_plain__GetWindowsDirectory;
PyObject *const_str_plain__GetSystemDirectory;
PyObject *const_str_digest_27f8fcb5286803a7519b17156a679940;
PyObject *const_str_digest_b104262a694a637feacadfdcbd6eb522;
PyObject *const_tuple_str_plain_buffer_str_plain_directory_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[22];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("win32ctypes.core.cffi._system_information"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_PATH_BUF);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_dlls);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowsDirectoryW);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_PATH);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpack);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemDirectoryW);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffi_str_plain_dlls_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_07a45893e05a407d8bd36ff606d2eb41);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdef);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_07773e78cb2f5fb01e3102a33a5fd714_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetWindowsDirectory);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__GetSystemDirectory);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_27f8fcb5286803a7519b17156a679940);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_b104262a694a637feacadfdcbd6eb522);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_str_plain_directory_tuple);
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
void checkModuleConstants_win32ctypes$core$cffi$_system_information(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_PATH_BUF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_PATH_BUF);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_dlls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dlls);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetWindowsDirectoryW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetWindowsDirectoryW);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_PATH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_PATH);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unpack);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetSystemDirectoryW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetSystemDirectoryW);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffi_str_plain_dlls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ffi_str_plain_dlls_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_int_pos_260));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_260);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_07a45893e05a407d8bd36ff606d2eb41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07a45893e05a407d8bd36ff606d2eb41);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdef);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_07773e78cb2f5fb01e3102a33a5fd714_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_07773e78cb2f5fb01e3102a33a5fd714_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetWindowsDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetWindowsDirectory);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__GetSystemDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GetSystemDirectory);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_27f8fcb5286803a7519b17156a679940));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27f8fcb5286803a7519b17156a679940);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_b104262a694a637feacadfdcbd6eb522));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b104262a694a637feacadfdcbd6eb522);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_str_plain_directory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_buffer_str_plain_directory_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_system_information->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_PATH);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_PATH, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_PATH);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_PATH, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH_BUF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH_BUF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_system_information->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_PATH_BUF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_PATH_BUF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_PATH_BUF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_PATH_BUF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH_BUF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH_BUF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH_BUF);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_system_information$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_system_information->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_system_information$dlls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_system_information->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls);
    }

    return result;
}

static PyObject *module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_win32ctypes$core$cffi$_system_information->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_win32ctypes$core$cffi$_system_information->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_11267e40567234114b5ddbb3b43ed6be;
static PyCodeObject *code_objects_d035dc031904583652cdff73e090f662;
static PyCodeObject *code_objects_7139e53dfb6017d3991ddf66dfc8a311;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_27f8fcb5286803a7519b17156a679940); CHECK_OBJECT(module_filename_obj);
code_objects_11267e40567234114b5ddbb3b43ed6be = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_b104262a694a637feacadfdcbd6eb522, mod_consts.const_str_digest_b104262a694a637feacadfdcbd6eb522, NULL, NULL, 0, 0, 0);
code_objects_d035dc031904583652cdff73e090f662 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GetSystemDirectory, mod_consts.const_str_plain__GetSystemDirectory, mod_consts.const_tuple_str_plain_buffer_str_plain_directory_tuple, NULL, 0, 0, 0);
code_objects_7139e53dfb6017d3991ddf66dfc8a311 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GetWindowsDirectory, mod_consts.const_str_plain__GetWindowsDirectory, mod_consts.const_tuple_str_plain_buffer_str_plain_directory_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_buffer = NULL;
PyObject *var_directory = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory = MAKE_FUNCTION_FRAME(tstate, code_objects_7139e53dfb6017d3991ddf66dfc8a311, module_win32ctypes$core$cffi$_system_information, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory = cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH_BUF(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_PATH_BUF);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory->m_frame.f_lineno = 24;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_buffer == NULL);
var_buffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = module_var_accessor_win32ctypes$core$cffi$_system_information$dlls(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GetWindowsDirectoryW);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_2 = var_buffer;
tmp_args_element_value_3 = module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_PATH);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory->m_frame.f_lineno = 25;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_directory == NULL);
var_directory = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_4 = var_buffer;
CHECK_OBJECT(var_directory);
tmp_args_element_value_5 = var_directory;
frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_unpack,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory,
    type_description_1,
    var_buffer,
    var_directory
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory == cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory);
    cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buffer);
CHECK_OBJECT(var_buffer);
Py_DECREF(var_buffer);
var_buffer = NULL;
CHECK_OBJECT(var_directory);
CHECK_OBJECT(var_directory);
Py_DECREF(var_directory);
var_directory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_directory);
var_directory = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_buffer = NULL;
PyObject *var_directory = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory)) {
    Py_XDECREF(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory = MAKE_FUNCTION_FRAME(tstate, code_objects_d035dc031904583652cdff73e090f662, module_win32ctypes$core$cffi$_system_information, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory->m_type_description == NULL);
frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory = cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH_BUF(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_PATH_BUF);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory->m_frame.f_lineno = 30;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_buffer == NULL);
var_buffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = module_var_accessor_win32ctypes$core$cffi$_system_information$dlls(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dlls);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GetSystemDirectoryW);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_2 = var_buffer;
tmp_args_element_value_3 = module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_PATH);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory->m_frame.f_lineno = 31;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_directory == NULL);
var_directory = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_4 = var_buffer;
CHECK_OBJECT(var_directory);
tmp_args_element_value_5 = var_directory;
frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory->m_frame.f_lineno = 32;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_unpack,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory,
    type_description_1,
    var_buffer,
    var_directory
);


// Release cached frame if used for exception.
if (frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory == cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory);
    cache_frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory = NULL;
}

assertFrameObject(frame_frame_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buffer);
CHECK_OBJECT(var_buffer);
Py_DECREF(var_buffer);
var_buffer = NULL;
CHECK_OBJECT(var_directory);
CHECK_OBJECT(var_directory);
Py_DECREF(var_directory);
var_directory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_directory);
var_directory = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory,
        mod_consts.const_str_plain__GetWindowsDirectory,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7139e53dfb6017d3991ddf66dfc8a311,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_system_information,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory,
        mod_consts.const_str_plain__GetSystemDirectory,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d035dc031904583652cdff73e090f662,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_win32ctypes$core$cffi$_system_information,
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

static function_impl_code const function_table_win32ctypes$core$cffi$_system_information[] = {
impl_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory,
impl_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory,
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

    return Nuitka_Function_GetFunctionState(function, function_table_win32ctypes$core$cffi$_system_information);
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
        module_win32ctypes$core$cffi$_system_information,
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
        function_table_win32ctypes$core$cffi$_system_information,
        sizeof(function_table_win32ctypes$core$cffi$_system_information) / sizeof(function_impl_code)
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
static char const *module_full_name = "win32ctypes.core.cffi._system_information";
#endif

// Internal entry point for module code.
PyObject *module_code_win32ctypes$core$cffi$_system_information(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("win32ctypes$core$cffi$_system_information");

    // Store the module for future use.
    module_win32ctypes$core$cffi$_system_information = module;

    moduledict_win32ctypes$core$cffi$_system_information = MODULE_DICT(module_win32ctypes$core$cffi$_system_information);

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
        PRINT_STRING("win32ctypes$core$cffi$_system_information: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("win32ctypes$core$cffi$_system_information: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("win32ctypes$core$cffi$_system_information: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._system_information" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwin32ctypes$core$cffi$_system_information\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_win32ctypes$core$cffi$_system_information,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_system_information,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_win32ctypes$core$cffi$_system_information,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_system_information,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_win32ctypes$core$cffi$_system_information,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_win32ctypes$core$cffi$_system_information);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_win32ctypes$core$cffi$_system_information);
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

        UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_win32ctypes$core$cffi$_system_information;
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_win32ctypes$core$cffi$_system_information = MAKE_MODULE_FRAME(code_objects_11267e40567234114b5ddbb3b43ed6be, module_win32ctypes$core$cffi$_system_information);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_win32ctypes$core$cffi$_system_information);
assert(Py_REFCNT(frame_frame_win32ctypes$core$cffi$_system_information) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_win32ctypes$core$cffi$_system_information$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_1 = (PyObject *)moduledict_win32ctypes$core$cffi$_system_information;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ffi_str_plain_dlls_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_win32ctypes$core$cffi$_system_information->m_frame.f_lineno = 8;
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_system_information,
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
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi, tmp_assign_source_5);
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
        (PyObject *)moduledict_win32ctypes$core$cffi$_system_information,
        mod_consts.const_str_plain_dlls,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_dlls);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_dlls, tmp_assign_source_6);
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
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_int_pos_260;
UPDATE_STRING_DICT0(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_07a45893e05a407d8bd36ff606d2eb41;
tmp_kw_call_arg_value_1_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$MAX_PATH(tstate);
assert(!(tmp_kw_call_arg_value_1_1 == NULL));
frame_frame_win32ctypes$core$cffi$_system_information->m_frame.f_lineno = 12;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_PATH_BUF, tmp_assign_source_8);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_win32ctypes$core$cffi$_system_information$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
frame_frame_win32ctypes$core$cffi$_system_information->m_frame.f_lineno = 14;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_cdef,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_07773e78cb2f5fb01e3102a33a5fd714_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_win32ctypes$core$cffi$_system_information, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_win32ctypes$core$cffi$_system_information->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_win32ctypes$core$cffi$_system_information, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_win32ctypes$core$cffi$_system_information);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__1__GetWindowsDirectory(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain__GetWindowsDirectory, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;

tmp_assign_source_10 = MAKE_FUNCTION_win32ctypes$core$cffi$_system_information$$$function__2__GetSystemDirectory(tstate);

UPDATE_STRING_DICT1(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)mod_consts.const_str_plain__GetSystemDirectory, tmp_assign_source_10);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("win32ctypes$core$cffi$_system_information", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "win32ctypes.core.cffi._system_information" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_win32ctypes$core$cffi$_system_information);
    return module_win32ctypes$core$cffi$_system_information;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_win32ctypes$core$cffi$_system_information, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("win32ctypes$core$cffi$_system_information", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

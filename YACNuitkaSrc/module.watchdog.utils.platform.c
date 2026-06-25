/* Generated code for Python module 'watchdog$utils$platform'
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



/* The "module_watchdog$utils$platform" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$utils$platform;
PyDictObject *moduledict_watchdog$utils$platform;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_PLATFORM_WINDOWS;
PyObject *const_str_plain___platform__;
PyObject *const_str_plain_PLATFORM_LINUX;
PyObject *const_str_plain_PLATFORM_BSD;
PyObject *const_str_plain_PLATFORM_DARWIN;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_windows;
PyObject *const_str_plain_linux;
PyObject *const_str_plain_bsd;
PyObject *const_str_plain_darwin;
PyObject *const_str_plain_unknown;
PyObject *const_str_plain_PLATFORM_UNKNOWN;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain_get_platform_name;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_is_linux;
PyObject *const_str_plain_is_bsd;
PyObject *const_str_plain_is_darwin;
PyObject *const_str_plain_is_windows;
PyObject *const_str_digest_e6fe804a4eeb8c89512b9c62f54986d2;
PyObject *const_str_digest_7853605cce9b59e6fb95fa994a1f3f85;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.utils.platform"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_WINDOWS);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain___platform__);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_LINUX);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_BSD);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_DARWIN);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_windows);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_linux);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_bsd);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_darwin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_unknown);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_UNKNOWN);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_platform_name);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_linux);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_bsd);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_darwin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_windows);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6fe804a4eeb8c89512b9c62f54986d2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_7853605cce9b59e6fb95fa994a1f3f85);
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
void checkModuleConstants_watchdog$utils$platform(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_WINDOWS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLATFORM_WINDOWS);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain___platform__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___platform__);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_LINUX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLATFORM_LINUX);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_BSD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLATFORM_BSD);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_DARWIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLATFORM_DARWIN);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_windows);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_linux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_linux);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_bsd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bsd);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_darwin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_darwin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_unknown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unknown);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLATFORM_UNKNOWN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLATFORM_UNKNOWN);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_platform_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_platform_name);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_linux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_linux);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_bsd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_bsd);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_darwin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_darwin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_windows);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6fe804a4eeb8c89512b9c62f54986d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6fe804a4eeb8c89512b9c62f54986d2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_7853605cce9b59e6fb95fa994a1f3f85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7853605cce9b59e6fb95fa994a1f3f85);
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
static PyObject *module_var_accessor_watchdog$utils$platform$PLATFORM_BSD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_BSD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_BSD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_BSD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_BSD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_BSD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_BSD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_BSD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_BSD);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$PLATFORM_DARWIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_DARWIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_DARWIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_DARWIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_DARWIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_DARWIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_DARWIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_DARWIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_DARWIN);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$PLATFORM_LINUX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_LINUX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_LINUX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_LINUX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_LINUX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_LINUX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_LINUX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_LINUX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_LINUX);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$PLATFORM_WINDOWS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_WINDOWS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_WINDOWS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_WINDOWS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PLATFORM_WINDOWS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PLATFORM_WINDOWS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_WINDOWS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_WINDOWS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_WINDOWS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$__platform__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain___platform__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___platform__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___platform__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___platform__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___platform__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain___platform__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain___platform__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___platform__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$platform$get_platform_name(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$platform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$platform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_get_platform_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$platform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_platform_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_platform_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_platform_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_platform_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_get_platform_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_get_platform_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_platform_name);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_28c679a046c3a73a506dc1e655cb9016;
static PyCodeObject *code_objects_4771129cf16443151af2071fad18e4a8;
static PyCodeObject *code_objects_0681826dd63ec77e5ff3fa4c2eebeeab;
static PyCodeObject *code_objects_215cc147c9b8027c4006cee49a857ae7;
static PyCodeObject *code_objects_041b153893a327eeb1d55482b6c3256f;
static PyCodeObject *code_objects_f7b1f2af721ba9df93c46ab5c0c28881;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e6fe804a4eeb8c89512b9c62f54986d2); CHECK_OBJECT(module_filename_obj);
code_objects_28c679a046c3a73a506dc1e655cb9016 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7853605cce9b59e6fb95fa994a1f3f85, mod_consts.const_str_digest_7853605cce9b59e6fb95fa994a1f3f85, NULL, NULL, 0, 0, 0);
code_objects_4771129cf16443151af2071fad18e4a8 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_platform_name, mod_consts.const_str_plain_get_platform_name, NULL, NULL, 0, 0, 0);
code_objects_0681826dd63ec77e5ff3fa4c2eebeeab = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_bsd, mod_consts.const_str_plain_is_bsd, NULL, NULL, 0, 0, 0);
code_objects_215cc147c9b8027c4006cee49a857ae7 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_darwin, mod_consts.const_str_plain_is_darwin, NULL, NULL, 0, 0, 0);
code_objects_041b153893a327eeb1d55482b6c3256f = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_linux, mod_consts.const_str_plain_is_linux, NULL, NULL, 0, 0, 0);
code_objects_f7b1f2af721ba9df93c46ab5c0c28881 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_windows, mod_consts.const_str_plain_is_windows, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__1_get_platform_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__2_is_linux(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__3_is_bsd(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__4_is_darwin(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__5_is_windows(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchdog$utils$platform$$$function__1_get_platform_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform$$$function__1_get_platform_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name = MAKE_FUNCTION_FRAME(tstate, code_objects_4771129cf16443151af2071fad18e4a8, module_watchdog$utils$platform, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name->m_type_description == NULL);
frame_frame_watchdog$utils$platform$$$function__1_get_platform_name = cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform$$$function__1_get_platform_name);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform$$$function__1_get_platform_name) == 2);

// Framed code:
tmp_return_value = module_var_accessor_watchdog$utils$platform$PLATFORM_WINDOWS(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PLATFORM_WINDOWS);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform$$$function__1_get_platform_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform$$$function__1_get_platform_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform$$$function__1_get_platform_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$platform$$$function__1_get_platform_name,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$platform$$$function__1_get_platform_name == cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name);
    cache_frame_frame_watchdog$utils$platform$$$function__1_get_platform_name = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$platform$$$function__1_get_platform_name);

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


static PyObject *impl_watchdog$utils$platform$$$function__2_is_linux(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform$$$function__2_is_linux;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux = MAKE_FUNCTION_FRAME(tstate, code_objects_041b153893a327eeb1d55482b6c3256f, module_watchdog$utils$platform, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux->m_type_description == NULL);
frame_frame_watchdog$utils$platform$$$function__2_is_linux = cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform$$$function__2_is_linux);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform$$$function__2_is_linux) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_watchdog$utils$platform$__platform__(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___platform__);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$utils$platform$PLATFORM_LINUX(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PLATFORM_LINUX);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform$$$function__2_is_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform$$$function__2_is_linux->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform$$$function__2_is_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$platform$$$function__2_is_linux,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$platform$$$function__2_is_linux == cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux);
    cache_frame_frame_watchdog$utils$platform$$$function__2_is_linux = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$platform$$$function__2_is_linux);

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


static PyObject *impl_watchdog$utils$platform$$$function__3_is_bsd(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform$$$function__3_is_bsd;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd = MAKE_FUNCTION_FRAME(tstate, code_objects_0681826dd63ec77e5ff3fa4c2eebeeab, module_watchdog$utils$platform, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd->m_type_description == NULL);
frame_frame_watchdog$utils$platform$$$function__3_is_bsd = cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform$$$function__3_is_bsd);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform$$$function__3_is_bsd) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_watchdog$utils$platform$__platform__(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___platform__);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$utils$platform$PLATFORM_BSD(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PLATFORM_BSD);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform$$$function__3_is_bsd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform$$$function__3_is_bsd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform$$$function__3_is_bsd, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$platform$$$function__3_is_bsd,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$platform$$$function__3_is_bsd == cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd);
    cache_frame_frame_watchdog$utils$platform$$$function__3_is_bsd = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$platform$$$function__3_is_bsd);

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


static PyObject *impl_watchdog$utils$platform$$$function__4_is_darwin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform$$$function__4_is_darwin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin = MAKE_FUNCTION_FRAME(tstate, code_objects_215cc147c9b8027c4006cee49a857ae7, module_watchdog$utils$platform, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin->m_type_description == NULL);
frame_frame_watchdog$utils$platform$$$function__4_is_darwin = cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform$$$function__4_is_darwin);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform$$$function__4_is_darwin) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_watchdog$utils$platform$__platform__(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___platform__);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$utils$platform$PLATFORM_DARWIN(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PLATFORM_DARWIN);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform$$$function__4_is_darwin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform$$$function__4_is_darwin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform$$$function__4_is_darwin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$platform$$$function__4_is_darwin,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$platform$$$function__4_is_darwin == cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin);
    cache_frame_frame_watchdog$utils$platform$$$function__4_is_darwin = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$platform$$$function__4_is_darwin);

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


static PyObject *impl_watchdog$utils$platform$$$function__5_is_windows(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform$$$function__5_is_windows;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows = MAKE_FUNCTION_FRAME(tstate, code_objects_f7b1f2af721ba9df93c46ab5c0c28881, module_watchdog$utils$platform, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows->m_type_description == NULL);
frame_frame_watchdog$utils$platform$$$function__5_is_windows = cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform$$$function__5_is_windows);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform$$$function__5_is_windows) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_watchdog$utils$platform$__platform__(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___platform__);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$utils$platform$PLATFORM_WINDOWS(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PLATFORM_WINDOWS);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform$$$function__5_is_windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform$$$function__5_is_windows->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform$$$function__5_is_windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$platform$$$function__5_is_windows,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$platform$$$function__5_is_windows == cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows);
    cache_frame_frame_watchdog$utils$platform$$$function__5_is_windows = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$platform$$$function__5_is_windows);

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



static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__1_get_platform_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$platform$$$function__1_get_platform_name,
        mod_consts.const_str_plain_get_platform_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4771129cf16443151af2071fad18e4a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$platform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__2_is_linux(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$platform$$$function__2_is_linux,
        mod_consts.const_str_plain_is_linux,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_041b153893a327eeb1d55482b6c3256f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$platform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__3_is_bsd(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$platform$$$function__3_is_bsd,
        mod_consts.const_str_plain_is_bsd,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0681826dd63ec77e5ff3fa4c2eebeeab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$platform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__4_is_darwin(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$platform$$$function__4_is_darwin,
        mod_consts.const_str_plain_is_darwin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_215cc147c9b8027c4006cee49a857ae7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$platform,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$platform$$$function__5_is_windows(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$platform$$$function__5_is_windows,
        mod_consts.const_str_plain_is_windows,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f7b1f2af721ba9df93c46ab5c0c28881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$platform,
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

static function_impl_code const function_table_watchdog$utils$platform[] = {
impl_watchdog$utils$platform$$$function__1_get_platform_name,
impl_watchdog$utils$platform$$$function__2_is_linux,
impl_watchdog$utils$platform$$$function__3_is_bsd,
impl_watchdog$utils$platform$$$function__4_is_darwin,
impl_watchdog$utils$platform$$$function__5_is_windows,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$utils$platform);
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
        module_watchdog$utils$platform,
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
        function_table_watchdog$utils$platform,
        sizeof(function_table_watchdog$utils$platform) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.utils.platform";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$utils$platform(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$utils$platform");

    // Store the module for future use.
    module_watchdog$utils$platform = module;

    moduledict_watchdog$utils$platform = MODULE_DICT(module_watchdog$utils$platform);

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
        PRINT_STRING("watchdog$utils$platform: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$utils$platform: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$utils$platform: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.platform" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$utils$platform\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$utils$platform,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$platform,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$platform,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$platform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$platform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$utils$platform);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$utils$platform);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_watchdog$utils$platform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$utils$platform = MAKE_MODULE_FRAME(code_objects_28c679a046c3a73a506dc1e655cb9016, module_watchdog$utils$platform);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$platform);
assert(Py_REFCNT(frame_frame_watchdog$utils$platform) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$utils$platform$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$utils$platform$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_plain_windows;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_WINDOWS, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_plain_linux;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_LINUX, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_bsd;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_BSD, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_darwin;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_DARWIN, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_plain_unknown;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_PLATFORM_UNKNOWN, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_11 = MAKE_FUNCTION_watchdog$utils$platform$$$function__1_get_platform_name(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_get_platform_name, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_watchdog$utils$platform$get_platform_name(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_watchdog$utils$platform->m_frame.f_lineno = 28;
tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain___platform__, tmp_assign_source_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$platform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$platform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$platform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$utils$platform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_13 = MAKE_FUNCTION_watchdog$utils$platform$$$function__2_is_linux(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_linux, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_14 = MAKE_FUNCTION_watchdog$utils$platform$$$function__3_is_bsd(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_bsd, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_15 = MAKE_FUNCTION_watchdog$utils$platform$$$function__4_is_darwin(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_darwin, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_16 = MAKE_FUNCTION_watchdog$utils$platform$$$function__5_is_windows(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_windows, tmp_assign_source_16);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$utils$platform", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.platform" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$utils$platform);
    return module_watchdog$utils$platform;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$platform, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$utils$platform", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

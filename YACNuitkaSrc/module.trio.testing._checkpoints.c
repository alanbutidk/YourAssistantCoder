/* Generated code for Python module 'trio$testing$_checkpoints'
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



/* The "module_trio$testing$_checkpoints" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$testing$_checkpoints;
PyDictObject *moduledict_trio$testing$_checkpoints;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_791ab2cb303f3e8905a71a7d0464d185;
PyObject *const_str_plain__core;
PyObject *const_str_plain_current_task;
PyObject *const_str_plain__cancel_points;
PyObject *const_str_plain__schedule_points;
PyObject *const_str_plain_expected;
PyObject *const_str_digest_5c9f95b2eab19edefcbe53aa072acc0a;
PyObject *const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7;
PyObject *const_str_plain__assert_yields_or_not;
PyObject *const_tuple_true_tuple;
PyObject *const_str_digest_fa3eb1780aab7ce0d530c2256e52e314;
PyObject *const_tuple_false_tuple;
PyObject *const_str_digest_0f7db5901aa828faa2c82af8c0bf1489;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_AbstractContextManager_str_plain_contextmanager_tuple;
PyObject *const_str_plain_AbstractContextManager;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_tuple_str_plain__core_tuple;
PyObject *const_int_pos_2;
PyObject *const_dict_d2ace57c26f695351cfba78f9d09aed7;
PyObject *const_dict_65a3dd887368ab07b26a435402025e81;
PyObject *const_str_plain_assert_checkpoints;
PyObject *const_str_plain_assert_no_checkpoints;
PyObject *const_str_digest_89c12b0d8212fd00717f9120f13e06ab;
PyObject *const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96;
PyObject *const_tuple_76c9c611094c3b03b5213d3231277624_tuple;
PyObject *const_tuple_str_plain___tracebackhide___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[31];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio.testing._checkpoints"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_791ab2cb303f3e8905a71a7d0464d185);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_task);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__cancel_points);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__schedule_points);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_expected);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c9f95b2eab19edefcbe53aa072acc0a);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__assert_yields_or_not);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa3eb1780aab7ce0d530c2256e52e314);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f7db5901aa828faa2c82af8c0bf1489);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractContextManager_str_plain_contextmanager_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractContextManager);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__core_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_dict_d2ace57c26f695351cfba78f9d09aed7);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_65a3dd887368ab07b26a435402025e81);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_checkpoints);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_no_checkpoints);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_89c12b0d8212fd00717f9120f13e06ab);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_76c9c611094c3b03b5213d3231277624_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___tracebackhide___tuple);
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
void checkModuleConstants_trio$testing$_checkpoints(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_791ab2cb303f3e8905a71a7d0464d185));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_791ab2cb303f3e8905a71a7d0464d185);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_task);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__cancel_points));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cancel_points);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__schedule_points));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__schedule_points);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_expected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expected);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c9f95b2eab19edefcbe53aa072acc0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c9f95b2eab19edefcbe53aa072acc0a);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__assert_yields_or_not));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__assert_yields_or_not);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa3eb1780aab7ce0d530c2256e52e314));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa3eb1780aab7ce0d530c2256e52e314);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f7db5901aa828faa2c82af8c0bf1489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f7db5901aa828faa2c82af8c0bf1489);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AbstractContextManager_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AbstractContextManager_str_plain_contextmanager_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractContextManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractContextManager);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__core_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__core_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_dict_d2ace57c26f695351cfba78f9d09aed7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d2ace57c26f695351cfba78f9d09aed7);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_65a3dd887368ab07b26a435402025e81));
CHECK_OBJECT_DEEP(mod_consts.const_dict_65a3dd887368ab07b26a435402025e81);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_checkpoints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_checkpoints);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_no_checkpoints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_no_checkpoints);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_89c12b0d8212fd00717f9120f13e06ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89c12b0d8212fd00717f9120f13e06ab);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_76c9c611094c3b03b5213d3231277624_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76c9c611094c3b03b5213d3231277624_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___tracebackhide___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___tracebackhide___tuple);
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
static PyObject *module_var_accessor_trio$testing$_checkpoints$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$testing$_checkpoints->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$testing$_checkpoints->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$testing$_checkpoints->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$testing$_checkpoints$_assert_yields_or_not(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$testing$_checkpoints->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$testing$_checkpoints->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__assert_yields_or_not);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$testing$_checkpoints->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__assert_yields_or_not);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__assert_yields_or_not, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__assert_yields_or_not);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__assert_yields_or_not, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__assert_yields_or_not);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__assert_yields_or_not);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__assert_yields_or_not);
    }

    return result;
}

static PyObject *module_var_accessor_trio$testing$_checkpoints$_core(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$testing$_checkpoints->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$testing$_checkpoints->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__core);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$testing$_checkpoints->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__core);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__core, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__core);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__core, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__core);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__core);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__core);
    }

    return result;
}

static PyObject *module_var_accessor_trio$testing$_checkpoints$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$testing$_checkpoints->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$testing$_checkpoints->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$testing$_checkpoints->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3ea341cda43308f83deddda69125d990;
static PyCodeObject *code_objects_be7554466dd5955f9f685ba9105f55f9;
static PyCodeObject *code_objects_06e5287ba621ee65fc840e2db3bb7bad;
static PyCodeObject *code_objects_8c2070b470485f40dbb8b596d10a9620;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_89c12b0d8212fd00717f9120f13e06ab); CHECK_OBJECT(module_filename_obj);
code_objects_3ea341cda43308f83deddda69125d990 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96, mod_consts.const_str_digest_c80a4f29bb5a8b5f461bb5fac9c91a96, NULL, NULL, 0, 0, 0);
code_objects_be7554466dd5955f9f685ba9105f55f9 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__assert_yields_or_not, mod_consts.const_str_plain__assert_yields_or_not, mod_consts.const_tuple_76c9c611094c3b03b5213d3231277624_tuple, NULL, 1, 0, 0);
code_objects_06e5287ba621ee65fc840e2db3bb7bad = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_checkpoints, mod_consts.const_str_plain_assert_checkpoints, mod_consts.const_tuple_str_plain___tracebackhide___tuple, NULL, 0, 0, 0);
code_objects_8c2070b470485f40dbb8b596d10a9620 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_no_checkpoints, mod_consts.const_str_plain_assert_no_checkpoints, mod_consts.const_tuple_str_plain___tracebackhide___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__1__assert_yields_or_not(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__2_assert_checkpoints(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$testing$_checkpoints$$$function__1__assert_yields_or_not(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_expected = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_expected;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_expected);
CHECK_OBJECT(par_expected);
Py_DECREF(par_expected);
par_expected = NULL;
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



#if 1
struct trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_locals {
PyObject *var_task;
PyObject *var_orig_cancel;
PyObject *var_orig_schedule;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_locals *generator_heap = (struct trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_task = NULL;
generator_heap->var_orig_cancel = NULL;
generator_heap->var_orig_schedule = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_be7554466dd5955f9f685ba9105f55f9, module_trio$testing$_checkpoints, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$testing$_checkpoints$_core(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__core);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 16;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 16;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_task);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 16;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_task == NULL);
generator_heap->var_task = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_1 = generator_heap->var_task;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cancel_points);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 17;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_orig_cancel == NULL);
generator_heap->var_orig_cancel = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_2 = generator_heap->var_task;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__schedule_points);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 18;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_orig_schedule == NULL);
generator_heap->var_orig_schedule = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_3 = Py_None;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 20;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expected);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 21;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 21;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 21;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_4 = generator_heap->var_task;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__cancel_points);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_orig_cancel);
tmp_cmp_expr_right_1 = generator_heap->var_orig_cancel;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_5 = generator_heap->var_task;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__schedule_points);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_orig_schedule);
tmp_cmp_expr_right_2 = generator_heap->var_orig_schedule;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_5c9f95b2eab19edefcbe53aa072acc0a;
generator->m_frame->m_frame.f_lineno = 24;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 24;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cNooo";
goto try_except_handler_2;
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expected);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}

tmp_operand_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
tmp_and_left_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_6 = generator_heap->var_task;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__cancel_points);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_orig_cancel);
tmp_cmp_expr_right_3 = generator_heap->var_orig_cancel;
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_7 = generator_heap->var_task;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__schedule_points);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_orig_schedule);
tmp_cmp_expr_right_4 = generator_heap->var_orig_schedule;
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto try_except_handler_3;
}
tmp_and_right_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7;
generator->m_frame->m_frame.f_lineno = 29;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 29;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cNooo";
goto try_except_handler_3;
}
branch_no_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 19;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cNooo";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_operand_value_2;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_9;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_expected);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_8 = generator_heap->var_task;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__cancel_points);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_orig_cancel);
tmp_cmp_expr_right_5 = generator_heap->var_orig_cancel;
tmp_or_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(generator_heap->var_task);
tmp_expression_value_9 = generator_heap->var_task;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__schedule_points);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_orig_schedule);
tmp_cmp_expr_right_6 = generator_heap->var_orig_schedule;
tmp_or_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cNooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_right_value_3 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_3 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_3 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_39fb7fa9e9e76f3011d6a0124d3bccd7;
generator->m_frame->m_frame.f_lineno = 29;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_3;
generator_heap->exception_lineno = 29;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cNooo";
goto frame_exception_exit_1;
}
branch_no_3:;

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
    generator->m_closure[0],
    NULL,
    generator_heap->var_task,
    generator_heap->var_orig_cancel,
    generator_heap->var_orig_schedule
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_task);
generator_heap->var_task = NULL;
Py_XDECREF(generator_heap->var_orig_cancel);
generator_heap->var_orig_cancel = NULL;
Py_XDECREF(generator_heap->var_orig_schedule);
generator_heap->var_orig_schedule = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_task);
CHECK_OBJECT(generator_heap->var_task);
Py_DECREF(generator_heap->var_task);
generator_heap->var_task = NULL;
CHECK_OBJECT(generator_heap->var_orig_cancel);
CHECK_OBJECT(generator_heap->var_orig_cancel);
Py_DECREF(generator_heap->var_orig_cancel);
generator_heap->var_orig_cancel = NULL;
CHECK_OBJECT(generator_heap->var_orig_schedule);
CHECK_OBJECT(generator_heap->var_orig_schedule);
Py_DECREF(generator_heap->var_orig_schedule);
generator_heap->var_orig_schedule = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_context,
        module_trio$testing$_checkpoints,
        mod_consts.const_str_plain__assert_yields_or_not,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_be7554466dd5955f9f685ba9105f55f9,
        closure,
        1,
#if 1
        sizeof(struct trio$testing$_checkpoints$$$function__1__assert_yields_or_not$$$genobj__1__assert_yields_or_not_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$testing$_checkpoints$$$function__2_assert_checkpoints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints)) {
    Py_XDECREF(cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints = MAKE_FUNCTION_FRAME(tstate, code_objects_06e5287ba621ee65fc840e2db3bb7bad, module_trio$testing$_checkpoints, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints->m_type_description == NULL);
frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints = cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints);
assert(Py_REFCNT(frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$testing$_checkpoints$_assert_yields_or_not(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__assert_yields_or_not);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "N";
    goto frame_exception_exit_1;
}
frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints->m_frame.f_lineno = 49;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_true_tuple);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "N";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints,
    type_description_1,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints == cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints);
    cache_frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints = NULL;
}

assertFrameObject(frame_frame_trio$testing$_checkpoints$$$function__2_assert_checkpoints);

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


static PyObject *impl_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints)) {
    Py_XDECREF(cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints = MAKE_FUNCTION_FRAME(tstate, code_objects_8c2070b470485f40dbb8b596d10a9620, module_trio$testing$_checkpoints, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints->m_type_description == NULL);
frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints = cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints);
assert(Py_REFCNT(frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$testing$_checkpoints$_assert_yields_or_not(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__assert_yields_or_not);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "N";
    goto frame_exception_exit_1;
}
frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints->m_frame.f_lineno = 69;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_false_tuple);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "N";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints,
    type_description_1,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints == cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints);
    cache_frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints = NULL;
}

assertFrameObject(frame_frame_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints);

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



static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__1__assert_yields_or_not(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$testing$_checkpoints$$$function__1__assert_yields_or_not,
        mod_consts.const_str_plain__assert_yields_or_not,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_be7554466dd5955f9f685ba9105f55f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$testing$_checkpoints,
        mod_consts.const_str_digest_791ab2cb303f3e8905a71a7d0464d185,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__2_assert_checkpoints(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$testing$_checkpoints$$$function__2_assert_checkpoints,
        mod_consts.const_str_plain_assert_checkpoints,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_06e5287ba621ee65fc840e2db3bb7bad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$testing$_checkpoints,
        mod_consts.const_str_digest_fa3eb1780aab7ce0d530c2256e52e314,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints,
        mod_consts.const_str_plain_assert_no_checkpoints,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c2070b470485f40dbb8b596d10a9620,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$testing$_checkpoints,
        mod_consts.const_str_digest_0f7db5901aa828faa2c82af8c0bf1489,
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

static function_impl_code const function_table_trio$testing$_checkpoints[] = {
impl_trio$testing$_checkpoints$$$function__1__assert_yields_or_not,
impl_trio$testing$_checkpoints$$$function__2_assert_checkpoints,
impl_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$testing$_checkpoints);
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
        module_trio$testing$_checkpoints,
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
        function_table_trio$testing$_checkpoints,
        sizeof(function_table_trio$testing$_checkpoints) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio.testing._checkpoints";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$testing$_checkpoints(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$testing$_checkpoints");

    // Store the module for future use.
    module_trio$testing$_checkpoints = module;

    moduledict_trio$testing$_checkpoints = MODULE_DICT(module_trio$testing$_checkpoints);

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
        PRINT_STRING("trio$testing$_checkpoints: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$testing$_checkpoints: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$testing$_checkpoints: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.testing._checkpoints" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$testing$_checkpoints\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$testing$_checkpoints,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$testing$_checkpoints,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$testing$_checkpoints,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$testing$_checkpoints,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$testing$_checkpoints,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$testing$_checkpoints);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$testing$_checkpoints);
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

        UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$testing$_checkpoints;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$testing$_checkpoints = MAKE_MODULE_FRAME(code_objects_3ea341cda43308f83deddda69125d990, module_trio$testing$_checkpoints);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$testing$_checkpoints);
assert(Py_REFCNT(frame_frame_trio$testing$_checkpoints) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$testing$_checkpoints$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$testing$_checkpoints$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$testing$_checkpoints;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AbstractContextManager_str_plain_contextmanager_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_trio$testing$_checkpoints->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$testing$_checkpoints,
        mod_consts.const_str_plain_AbstractContextManager,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AbstractContextManager);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractContextManager, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$testing$_checkpoints,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_contextmanager);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$testing$_checkpoints;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__core_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_trio$testing$_checkpoints->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$testing$_checkpoints,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__core, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_1 = module_var_accessor_trio$testing$_checkpoints$contextmanager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d2ace57c26f695351cfba78f9d09aed7);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$testing$_checkpoints$$$function__1__assert_yields_or_not(tstate, tmp_annotations_1);

frame_frame_trio$testing$_checkpoints->m_frame.f_lineno = 12;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain__assert_yields_or_not, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$testing$_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$testing$_checkpoints->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$testing$_checkpoints, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$testing$_checkpoints);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_65a3dd887368ab07b26a435402025e81);

tmp_assign_source_11 = MAKE_FUNCTION_trio$testing$_checkpoints$$$function__2_assert_checkpoints(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_checkpoints, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_65a3dd887368ab07b26a435402025e81);

tmp_assign_source_12 = MAKE_FUNCTION_trio$testing$_checkpoints$$$function__3_assert_no_checkpoints(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_no_checkpoints, tmp_assign_source_12);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$testing$_checkpoints", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.testing._checkpoints" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$testing$_checkpoints);
    return module_trio$testing$_checkpoints;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$testing$_checkpoints, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$testing$_checkpoints", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

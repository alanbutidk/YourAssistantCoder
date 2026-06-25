/* Generated code for Python module 'tenacity$after'
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



/* The "module_tenacity$after" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tenacity$after;
PyDictObject *moduledict_tenacity$after;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d;
PyObject *const_str_plain_log_it;
PyObject *const_str_digest_3b685725f9d8221ff477239d6d4738f4;
PyObject *const_str_digest_c2a282dd6d340a9bb69feebeb0e4e4b8;
PyObject *const_str_plain_fn;
PyObject *const_str_angle_unknown;
PyObject *const_str_plain__utils;
PyObject *const_str_plain_get_callback_name;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_log;
PyObject *const_str_plain_log_level;
PyObject *const_str_digest_743136c73a56fa4c8277c9a7b57c6d1f;
PyObject *const_str_digest_561c7b79af46f49af95a9ec5a5b87f94;
PyObject *const_str_plain_sec_format;
PyObject *const_str_plain_seconds_since_start;
PyObject *const_str_digest_e9962ec5e62c2563ca6056d355ae53df;
PyObject *const_str_plain_to_ordinal;
PyObject *const_str_plain_attempt_number;
PyObject *const_str_digest_de27f77afb6ee82add4bd35ed297e640;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_tenacity;
PyObject *const_tuple_str_plain__utils_tuple;
PyObject *const_str_digest_ef791de0129b9e0a4318664dad75c45d;
PyObject *const_str_plain_after_nothing;
PyObject *const_tuple_str_digest_24dc9a5f277e70c71009e117c19409e4_tuple;
PyObject *const_str_plain_LoggerProtocol;
PyObject *const_str_plain_return;
PyObject *const_str_plain_Callable;
PyObject *const_tuple_list_str_plain_RetryCallState_list_none_tuple;
PyObject *const_str_plain_after_log;
PyObject *const_str_digest_691dc550ae17b403e421e455987b253b;
PyObject *const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc;
PyObject *const_tuple_d5d6f19f3a34c3201e31b82b6ff6d5e8_tuple;
PyObject *const_tuple_str_plain_retry_state_tuple;
PyObject *const_tuple_9399891a1c39feb67458933ede9a8721_tuple;
PyObject *const_tuple_str_plain_log_level_str_plain_logger_str_plain_sec_format_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[38];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("tenacity.after"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_log_it);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b685725f9d8221ff477239d6d4738f4);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2a282dd6d340a9bb69feebeb0e4e4b8);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_fn);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_angle_unknown);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_callback_name);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_log_level);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_743136c73a56fa4c8277c9a7b57c6d1f);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_561c7b79af46f49af95a9ec5a5b87f94);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_sec_format);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_seconds_since_start);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9962ec5e62c2563ca6056d355ae53df);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_ordinal);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_de27f77afb6ee82add4bd35ed297e640);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef791de0129b9e0a4318664dad75c45d);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_after_nothing);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_24dc9a5f277e70c71009e117c19409e4_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_LoggerProtocol);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_none_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_after_log);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_691dc550ae17b403e421e455987b253b);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_d5d6f19f3a34c3201e31b82b6ff6d5e8_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retry_state_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_9399891a1c39feb67458933ede9a8721_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_level_str_plain_logger_str_plain_sec_format_tuple);
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
void checkModuleConstants_tenacity$after(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_log_it));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log_it);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b685725f9d8221ff477239d6d4738f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b685725f9d8221ff477239d6d4738f4);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2a282dd6d340a9bb69feebeb0e4e4b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2a282dd6d340a9bb69feebeb0e4e4b8);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_fn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fn);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_angle_unknown));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_unknown);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_callback_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_callback_name);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_log_level));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log_level);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_743136c73a56fa4c8277c9a7b57c6d1f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_743136c73a56fa4c8277c9a7b57c6d1f);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_561c7b79af46f49af95a9ec5a5b87f94));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_561c7b79af46f49af95a9ec5a5b87f94);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_sec_format));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sec_format);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_seconds_since_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seconds_since_start);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9962ec5e62c2563ca6056d355ae53df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9962ec5e62c2563ca6056d355ae53df);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_ordinal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_ordinal);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attempt_number);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_de27f77afb6ee82add4bd35ed297e640));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de27f77afb6ee82add4bd35ed297e640);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tenacity);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__utils_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef791de0129b9e0a4318664dad75c45d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef791de0129b9e0a4318664dad75c45d);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_after_nothing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after_nothing);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_24dc9a5f277e70c71009e117c19409e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_24dc9a5f277e70c71009e117c19409e4_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_LoggerProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LoggerProtocol);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_str_plain_RetryCallState_list_none_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_after_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_after_log);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_691dc550ae17b403e421e455987b253b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_691dc550ae17b403e421e455987b253b);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_d5d6f19f3a34c3201e31b82b6ff6d5e8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5d6f19f3a34c3201e31b82b6ff6d5e8_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retry_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_retry_state_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_9399891a1c39feb67458933ede9a8721_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9399891a1c39feb67458933ede9a8721_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_log_level_str_plain_logger_str_plain_sec_format_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_log_level_str_plain_logger_str_plain_sec_format_tuple);
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
static PyObject *module_var_accessor_tenacity$after$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$after->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$after->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$after->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$after$_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$after->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$after->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$after->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_554c80b367e055f06490df8279651299;
static PyCodeObject *code_objects_7dfd0e38c8452f77d9fffff53d30c6a6;
static PyCodeObject *code_objects_fdefa3855231c00edae8c2f11be14a87;
static PyCodeObject *code_objects_5d31fa155f0403b9ba988bfce4a8a8e2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_691dc550ae17b403e421e455987b253b); CHECK_OBJECT(module_filename_obj);
code_objects_554c80b367e055f06490df8279651299 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc, mod_consts.const_str_digest_3f8945f4f39ef96baa6ed3e442eaacdc, NULL, NULL, 0, 0, 0);
code_objects_7dfd0e38c8452f77d9fffff53d30c6a6 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_after_log, mod_consts.const_str_plain_after_log, mod_consts.const_tuple_d5d6f19f3a34c3201e31b82b6ff6d5e8_tuple, NULL, 3, 0, 0);
code_objects_fdefa3855231c00edae8c2f11be14a87 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_after_nothing, mod_consts.const_str_plain_after_nothing, mod_consts.const_tuple_str_plain_retry_state_tuple, NULL, 1, 0, 0);
code_objects_5d31fa155f0403b9ba988bfce4a8a8e2 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_log_it, mod_consts.const_str_digest_3b685725f9d8221ff477239d6d4738f4, mod_consts.const_tuple_9399891a1c39feb67458933ede9a8721_tuple, mod_consts.const_tuple_str_plain_log_level_str_plain_logger_str_plain_sec_format_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_tenacity$after$$$function__1_after_nothing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$after$$$function__2_after_log(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$after$$$function__2_after_log$$$function__1_log_it(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_tenacity$after$$$function__2_after_log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_logger = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_log_level = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_sec_format = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_log_it = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d);
tmp_closure_1[0] = par_log_level;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_logger;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_sec_format;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_1 = MAKE_FUNCTION_tenacity$after$$$function__2_after_log$$$function__1_log_it(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_log_it == NULL);
var_log_it = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_log_it);
tmp_return_value = var_log_it;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_logger);
CHECK_OBJECT(par_logger);
Py_DECREF(par_logger);
par_logger = NULL;
CHECK_OBJECT(par_log_level);
CHECK_OBJECT(par_log_level);
Py_DECREF(par_log_level);
par_log_level = NULL;
CHECK_OBJECT(par_sec_format);
CHECK_OBJECT(par_sec_format);
Py_DECREF(par_sec_format);
par_sec_format = NULL;
CHECK_OBJECT(var_log_it);
CHECK_OBJECT(var_log_it);
Py_DECREF(var_log_it);
var_log_it = NULL;
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


static PyObject *impl_tenacity$after$$$function__2_after_log$$$function__1_log_it(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_retry_state = python_pars[0];
PyObject *var_fn_name = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it)) {
    Py_XDECREF(cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it = MAKE_FUNCTION_FRAME(tstate, code_objects_5d31fa155f0403b9ba988bfce4a8a8e2, module_tenacity$after, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it->m_type_description == NULL);
frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it = cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it);
assert(Py_REFCNT(frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fn);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_angle_unknown;
assert(var_fn_name == NULL);
Py_INCREF(tmp_assign_source_1);
var_fn_name = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_tenacity$after$_utils(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_callback_name);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_3 = par_retry_state;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fn);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 41;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it->m_frame.f_lineno = 41;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
assert(var_fn_name == NULL);
var_fn_name = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 42;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_log);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_tuple_element_1 = mod_consts.const_str_digest_743136c73a56fa4c8277c9a7b57c6d1f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_fn_name);
tmp_format_value_1 = var_fn_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_561c7b79af46f49af95a9ec5a5b87f94;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sec_format);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 45;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}

tmp_mod_expr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
CHECK_OBJECT(par_retry_state);
tmp_expression_value_5 = par_retry_state;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_seconds_since_start);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e9962ec5e62c2563ca6056d355ae53df;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_tenacity$after$_utils(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_to_ordinal);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_7 = par_retry_state;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_attempt_number);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 46;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it->m_frame.f_lineno = 46;
tmp_format_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_de27f77afb6ee82add4bd35ed297e640;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it,
    type_description_1,
    par_retry_state,
    var_fn_name,
    self->m_closure[1],
    self->m_closure[0],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it == cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it);
    cache_frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it = NULL;
}

assertFrameObject(frame_frame_tenacity$after$$$function__2_after_log$$$function__1_log_it);

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
CHECK_OBJECT(var_fn_name);
CHECK_OBJECT(var_fn_name);
Py_DECREF(var_fn_name);
var_fn_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fn_name);
var_fn_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_tenacity$after$$$function__1_after_nothing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_after_nothing,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fdefa3855231c00edae8c2f11be14a87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$after,
        mod_consts.const_str_digest_ef791de0129b9e0a4318664dad75c45d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$after$$$function__2_after_log(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$after$$$function__2_after_log,
        mod_consts.const_str_plain_after_log,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7dfd0e38c8452f77d9fffff53d30c6a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$after,
        mod_consts.const_str_digest_c2a282dd6d340a9bb69feebeb0e4e4b8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$after$$$function__2_after_log$$$function__1_log_it(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$after$$$function__2_after_log$$$function__1_log_it,
        mod_consts.const_str_plain_log_it,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b685725f9d8221ff477239d6d4738f4,
#endif
        code_objects_5d31fa155f0403b9ba988bfce4a8a8e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$after,
        NULL,
        closure,
        3
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

static function_impl_code const function_table_tenacity$after[] = {
impl_tenacity$after$$$function__2_after_log$$$function__1_log_it,
impl_tenacity$after$$$function__2_after_log,
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

    return Nuitka_Function_GetFunctionState(function, function_table_tenacity$after);
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
        module_tenacity$after,
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
        function_table_tenacity$after,
        sizeof(function_table_tenacity$after) / sizeof(function_impl_code)
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
static char const *module_full_name = "tenacity.after";
#endif

// Internal entry point for module code.
PyObject *module_code_tenacity$after(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("tenacity$after");

    // Store the module for future use.
    module_tenacity$after = module;

    moduledict_tenacity$after = MODULE_DICT(module_tenacity$after);

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
        PRINT_STRING("tenacity$after: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("tenacity$after: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("tenacity$after: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.after" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittenacity$after\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_tenacity$after,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tenacity$after,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tenacity$after,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$after,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$after,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tenacity$after);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_tenacity$after);
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

        UPDATE_STRING_DICT1(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_tenacity$after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_tenacity$after = MAKE_MODULE_FRAME(code_objects_554c80b367e055f06490df8279651299, module_tenacity$after);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$after);
assert(Py_REFCNT(frame_frame_tenacity$after) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_tenacity$after$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_tenacity$after$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tenacity;
tmp_globals_arg_value_1 = (PyObject *)moduledict_tenacity$after;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__utils_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_tenacity$after->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_tenacity$after,
        mod_consts.const_str_plain__utils,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain__utils, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1fa83a41ac6c26f9d9186db3aa4ebb2d);

tmp_assign_source_6 = MAKE_FUNCTION_tenacity$after$$$function__1_after_nothing(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain_after_nothing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_defaults_1 = mod_consts.const_tuple_str_digest_24dc9a5f277e70c71009e117c19409e4_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_logger;
tmp_expression_value_1 = module_var_accessor_tenacity$after$_utils(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_LoggerProtocol);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_log_level;
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_sec_format;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_subscript_value_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_none_tuple, "li");
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_7 = MAKE_FUNCTION_tenacity$after$$$function__2_after_log(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_tenacity$after, (Nuitka_StringObject *)mod_consts.const_str_plain_after_log, tmp_assign_source_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_tenacity$after);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("tenacity$after", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.after" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_tenacity$after);
    return module_tenacity$after;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$after, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("tenacity$after", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

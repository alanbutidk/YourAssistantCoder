/* Generated code for Python module 'multiprocessing$$45$postLoad'
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



/* The "module_multiprocessing$$45$postLoad" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_multiprocessing$$45$postLoad;
PyDictObject *moduledict_multiprocessing$$45$postLoad;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_im_self;
PyObject *const_str_plain_im_class;
PyObject *const_str_plain_im_func;
PyObject *const_str_plain___parents_main__;
PyObject *const_str_plain_modules;
PyObject *const_str_plain___mp_main__;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_1c9b99ef582c6b5705145380d18cd593;
PyObject *const_tuple_str_plain_ForkingPickler_tuple;
PyObject *const_str_plain_ForkingPickler;
PyObject *const_str_digest_95375e0006507f47fc2519eb9b142fac;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_a2691ee6974e7c106bcdaf1f585bded9;
PyObject *const_str_plain_C;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_9;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_f;
PyObject *const_str_digest_d7e00df07a35c14e15e3eff97773c6b2;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain__reduce_compiled_method;
PyObject *const_str_digest_243b58d3592bd464acd72254b6aec975;
PyObject *const_str_plain_multiprocessing;
PyObject *const_str_plain_spawn;
PyObject *const_str_plain___nuitka_original_fixup_main_from_path;
PyObject *const_str_plain__fixup_main_from_path;
PyObject *const_str_plain__fixup_main_from_path_for_nuitka;
PyObject *const_str_digest_b3d21845f88d74c687ec4fee74239a4d;
PyObject *const_str_digest_a5e1b9d507c3b6e0344a6503f9256148;
PyObject *const_tuple_str_plain_main_path_str_plain_parents_main_tuple;
PyObject *const_tuple_str_plain_m_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[33];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("multiprocessing-postLoad"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_self);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_class);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_func);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain___parents_main__);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___mp_main__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c9b99ef582c6b5705145380d18cd593);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ForkingPickler_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ForkingPickler);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_95375e0006507f47fc2519eb9b142fac);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2691ee6974e7c106bcdaf1f585bded9);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_C);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7e00df07a35c14e15e3eff97773c6b2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__reduce_compiled_method);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_243b58d3592bd464acd72254b6aec975);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiprocessing);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_spawn);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___nuitka_original_fixup_main_from_path);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__fixup_main_from_path);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3d21845f88d74c687ec4fee74239a4d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5e1b9d507c3b6e0344a6503f9256148);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_main_path_str_plain_parents_main_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_m_tuple);
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
void checkModuleConstants_multiprocessing$$45$postLoad(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_im_self);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_im_class);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_im_func);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain___parents_main__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___parents_main__);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___mp_main__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mp_main__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c9b99ef582c6b5705145380d18cd593));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c9b99ef582c6b5705145380d18cd593);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ForkingPickler_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ForkingPickler_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ForkingPickler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ForkingPickler);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_95375e0006507f47fc2519eb9b142fac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95375e0006507f47fc2519eb9b142fac);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2691ee6974e7c106bcdaf1f585bded9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2691ee6974e7c106bcdaf1f585bded9);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_C));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_C);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_int_pos_9));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_9);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7e00df07a35c14e15e3eff97773c6b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7e00df07a35c14e15e3eff97773c6b2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__reduce_compiled_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reduce_compiled_method);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_243b58d3592bd464acd72254b6aec975));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_243b58d3592bd464acd72254b6aec975);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiprocessing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiprocessing);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_spawn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spawn);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___nuitka_original_fixup_main_from_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___nuitka_original_fixup_main_from_path);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__fixup_main_from_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fixup_main_from_path);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3d21845f88d74c687ec4fee74239a4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3d21845f88d74c687ec4fee74239a4d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5e1b9d507c3b6e0344a6503f9256148));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5e1b9d507c3b6e0344a6503f9256148);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_main_path_str_plain_parents_main_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_main_path_str_plain_parents_main_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_m_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_m_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_multiprocessing$$45$postLoad$C(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_C);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_C);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_C, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_C);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_C, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_C);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_C);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_C);
    }

    return result;
}

static PyObject *module_var_accessor_multiprocessing$$45$postLoad$ForkingPickler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ForkingPickler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ForkingPickler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ForkingPickler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ForkingPickler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler);
    }

    return result;
}

static PyObject *module_var_accessor_multiprocessing$$45$postLoad$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_multiprocessing$$45$postLoad$_fixup_main_from_path_for_nuitka(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__fixup_main_from_path_for_nuitka);
    }

    return result;
}

static PyObject *module_var_accessor_multiprocessing$$45$postLoad$_reduce_compiled_method(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__reduce_compiled_method);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__reduce_compiled_method);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__reduce_compiled_method, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__reduce_compiled_method);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__reduce_compiled_method, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__reduce_compiled_method);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__reduce_compiled_method);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__reduce_compiled_method);
    }

    return result;
}

static PyObject *module_var_accessor_multiprocessing$$45$postLoad$multiprocessing(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_multiprocessing$$45$postLoad->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_multiprocessing$$45$postLoad->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_multiprocessing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_multiprocessing$$45$postLoad->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiprocessing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiprocessing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_multiprocessing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_multiprocessing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_multiprocessing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_multiprocessing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_multiprocessing);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_74e94b18c155cd8898f2d19b6a56845f;
static PyCodeObject *code_objects_d77751bc19b52eeb978a58aa7ca3381c;
static PyCodeObject *code_objects_f2d3d6c22c6f0709b84b1991f9c93429;
static PyCodeObject *code_objects_dc800b46c4fc5115f55a76ad62c26587;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b3d21845f88d74c687ec4fee74239a4d); CHECK_OBJECT(module_filename_obj);
code_objects_74e94b18c155cd8898f2d19b6a56845f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a5e1b9d507c3b6e0344a6503f9256148, mod_consts.const_str_digest_a5e1b9d507c3b6e0344a6503f9256148, NULL, NULL, 0, 0, 0);
code_objects_d77751bc19b52eeb978a58aa7ca3381c = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka, mod_consts.const_str_plain__fixup_main_from_path_for_nuitka, mod_consts.const_tuple_str_plain_main_path_str_plain_parents_main_tuple, NULL, 1, 0, 0);
code_objects_f2d3d6c22c6f0709b84b1991f9c93429 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__reduce_compiled_method, mod_consts.const_str_plain__reduce_compiled_method, mod_consts.const_tuple_str_plain_m_tuple, NULL, 1, 0, 0);
code_objects_dc800b46c4fc5115f55a76ad62c26587 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_f, mod_consts.const_str_digest_d7e00df07a35c14e15e3eff97773c6b2, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__1_f(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_m = python_pars[0];
struct Nuitka_FrameObject *frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method)) {
    Py_XDECREF(cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method = MAKE_FUNCTION_FRAME(tstate, code_objects_f2d3d6c22c6f0709b84b1991f9c93429, module_multiprocessing$$45$postLoad, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method->m_type_description == NULL);
frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method = cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method);
assert(Py_REFCNT(frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_m);
tmp_expression_value_1 = par_m;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im_self);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "o";
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
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = LOOKUP_BUILTIN(const_str_plain_getattr);
assert(tmp_tuple_element_1 != NULL);
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_m);
tmp_expression_value_2 = par_m;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im_class);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_m);
tmp_expression_value_4 = par_m;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im_func);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = LOOKUP_BUILTIN(const_str_plain_getattr);
assert(tmp_tuple_element_3 != NULL);
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_m);
tmp_expression_value_5 = par_m;
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_im_self);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "o";
    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_tuple_element_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_m);
tmp_expression_value_7 = par_m;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_im_func);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "o";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_3, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_tuple_element_3);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method,
    type_description_1,
    par_m
);


// Release cached frame if used for exception.
if (frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method == cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method);
    cache_frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method = NULL;
}

assertFrameObject(frame_frame_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_m);
Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_main_path = python_pars[0];
PyObject *var_parents_main = NULL;
struct Nuitka_FrameObject *frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka)) {
    Py_XDECREF(cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka = MAKE_FUNCTION_FRAME(tstate, code_objects_d77751bc19b52eeb978a58aa7ca3381c, module_multiprocessing$$45$postLoad, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka->m_type_description == NULL);
frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka = cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka);
assert(Py_REFCNT(frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_main_path);
tmp_cmp_expr_left_1 = par_main_path;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain___parents_main__;
tmp_globals_arg_value_1 = (PyObject *)moduledict_multiprocessing$$45$postLoad;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka->m_frame.f_lineno = 32;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_parents_main == NULL);
var_parents_main = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_parents_main);
tmp_ass_subvalue_1 = var_parents_main;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modules);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = const_str_plain___main__;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_parents_main);
tmp_ass_subvalue_2 = var_parents_main;
tmp_expression_value_2 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_2 == NULL));
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_modules);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain___mp_main__;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka,
    type_description_1,
    par_main_path,
    var_parents_main
);


// Release cached frame if used for exception.
if (frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka == cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka);
    cache_frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka = NULL;
}

assertFrameObject(frame_frame_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka);

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
CHECK_OBJECT(var_parents_main);
CHECK_OBJECT(var_parents_main);
Py_DECREF(var_parents_main);
var_parents_main = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parents_main);
var_parents_main = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_main_path);
Py_DECREF(par_main_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_main_path);
Py_DECREF(par_main_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__1_f(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_f,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7e00df07a35c14e15e3eff97773c6b2,
#endif
        code_objects_dc800b46c4fc5115f55a76ad62c26587,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_multiprocessing$$45$postLoad,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method,
        mod_consts.const_str_plain__reduce_compiled_method,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f2d3d6c22c6f0709b84b1991f9c93429,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_multiprocessing$$45$postLoad,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka,
        mod_consts.const_str_plain__fixup_main_from_path_for_nuitka,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d77751bc19b52eeb978a58aa7ca3381c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_multiprocessing$$45$postLoad,
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

static function_impl_code const function_table_multiprocessing$$45$postLoad[] = {
impl_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method,
impl_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka,
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

    return Nuitka_Function_GetFunctionState(function, function_table_multiprocessing$$45$postLoad);
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
        module_multiprocessing$$45$postLoad,
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
        function_table_multiprocessing$$45$postLoad,
        sizeof(function_table_multiprocessing$$45$postLoad) / sizeof(function_impl_code)
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
static char const *module_full_name = "multiprocessing-postLoad";
#endif

// Internal entry point for module code.
PyObject *module_code_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("multiprocessing$$45$postLoad");

    // Store the module for future use.
    module_multiprocessing$$45$postLoad = module;

    moduledict_multiprocessing$$45$postLoad = MODULE_DICT(module_multiprocessing$$45$postLoad);

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
        PRINT_STRING("multiprocessing$$45$postLoad: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("multiprocessing$$45$postLoad: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("multiprocessing$$45$postLoad: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "multiprocessing-postLoad" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmultiprocessing$$45$postLoad\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_multiprocessing$$45$postLoad,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_multiprocessing$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_multiprocessing$$45$postLoad,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_multiprocessing$$45$postLoad,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_multiprocessing$$45$postLoad,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_multiprocessing$$45$postLoad);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_multiprocessing$$45$postLoad);
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

        UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_multiprocessing$$45$postLoad;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_multiprocessing$$45$postLoad$$$class__1_C_9 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_multiprocessing$$45$postLoad = MAKE_MODULE_FRAME(code_objects_74e94b18c155cd8898f2d19b6a56845f, module_multiprocessing$$45$postLoad);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_multiprocessing$$45$postLoad);
assert(Py_REFCNT(frame_frame_multiprocessing$$45$postLoad) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_multiprocessing$$45$postLoad$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_multiprocessing$$45$postLoad$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_1c9b99ef582c6b5705145380d18cd593;
tmp_globals_arg_value_1 = (PyObject *)moduledict_multiprocessing$$45$postLoad;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ForkingPickler_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 2;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_multiprocessing$$45$postLoad,
        mod_consts.const_str_plain_ForkingPickler,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ForkingPickler);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler, tmp_assign_source_4);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_multiprocessing$$45$postLoad, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_multiprocessing$$45$postLoad, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_95375e0006507f47fc2519eb9b142fac;
tmp_globals_arg_value_2 = (PyObject *)moduledict_multiprocessing$$45$postLoad;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ForkingPickler_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_multiprocessing$$45$postLoad,
        mod_consts.const_str_plain_ForkingPickler,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ForkingPickler);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_ForkingPickler, tmp_assign_source_5);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_multiprocessing$$45$postLoad->m_frame)) {
        frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_multiprocessing$$45$postLoad$$$class__1_C_9 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_a2691ee6974e7c106bcdaf1f585bded9;
tmp_result = DICT_SET_ITEM(locals_multiprocessing$$45$postLoad$$$class__1_C_9, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_C;
tmp_result = DICT_SET_ITEM(locals_multiprocessing$$45$postLoad$$$class__1_C_9, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_9;
tmp_result = DICT_SET_ITEM(locals_multiprocessing$$45$postLoad$$$class__1_C_9, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__1_f(tstate);

tmp_result = DICT_SET_ITEM(locals_multiprocessing$$45$postLoad$$$class__1_C_9, mod_consts.const_str_plain_f, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_multiprocessing$$45$postLoad$$$class__1_C_9, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_C;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_multiprocessing$$45$postLoad$$$class__1_C_9;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 9;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_11;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_10 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_multiprocessing$$45$postLoad$$$class__1_C_9);
locals_multiprocessing$$45$postLoad$$$class__1_C_9 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_multiprocessing$$45$postLoad$$$class__1_C_9);
locals_multiprocessing$$45$postLoad$$$class__1_C_9 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 9;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_C, tmp_assign_source_10);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_assign_source_12;

tmp_assign_source_12 = MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__2__reduce_compiled_method(tstate);

UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__reduce_compiled_method, tmp_assign_source_12);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_multiprocessing$$45$postLoad$ForkingPickler(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ForkingPickler);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_register);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_multiprocessing$$45$postLoad$C(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_C);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 19;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_f);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_multiprocessing$$45$postLoad$_reduce_compiled_method(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__reduce_compiled_method);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 19;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_243b58d3592bd464acd72254b6aec975;
tmp_globals_arg_value_3 = (PyObject *)moduledict_multiprocessing$$45$postLoad;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_multiprocessing$$45$postLoad->m_frame.f_lineno = 24;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain_multiprocessing, tmp_assign_source_13);
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_multiprocessing$$45$postLoad$multiprocessing(tstate);
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_spawn);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___nuitka_original_fixup_main_from_path);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_3;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_multiprocessing$$45$postLoad$multiprocessing(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_multiprocessing);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_spawn);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fixup_main_from_path);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_multiprocessing$$45$postLoad$multiprocessing(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_multiprocessing);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_3);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_spawn);
if (tmp_assattr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain___nuitka_original_fixup_main_from_path, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_target_3);
Py_DECREF(tmp_assattr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_multiprocessing$$45$postLoad$$$function__3__fixup_main_from_path_for_nuitka(tstate);

UPDATE_STRING_DICT1(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)mod_consts.const_str_plain__fixup_main_from_path_for_nuitka, tmp_assign_source_14);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
PyObject *tmp_expression_value_8;
tmp_assattr_value_4 = module_var_accessor_multiprocessing$$45$postLoad$_fixup_main_from_path_for_nuitka(tstate);
assert(!(tmp_assattr_value_4 == NULL));
tmp_expression_value_8 = module_var_accessor_multiprocessing$$45$postLoad$multiprocessing(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_multiprocessing);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_spawn);
if (tmp_assattr_target_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__fixup_main_from_path, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_target_4);
Py_DECREF(tmp_assattr_target_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_multiprocessing$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_multiprocessing$$45$postLoad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_multiprocessing$$45$postLoad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_multiprocessing$$45$postLoad);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("multiprocessing$$45$postLoad", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "multiprocessing-postLoad" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_multiprocessing$$45$postLoad);
    return module_multiprocessing$$45$postLoad;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_multiprocessing$$45$postLoad, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("multiprocessing$$45$postLoad", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

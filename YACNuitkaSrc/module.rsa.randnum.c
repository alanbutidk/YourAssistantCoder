/* Generated code for Python module 'rsa$randnum'
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



/* The "module_rsa$randnum" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$randnum;
PyDictObject *moduledict_rsa$randnum;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_pos_8;
PyObject *const_str_plain_urandom;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_struct;
PyObject *const_str_plain_pack;
PyObject *const_str_plain_B;
PyObject *const_str_digest_523078eb90a80da22798bfb99de8eb84;
PyObject *const_str_plain_read_random_bits;
PyObject *const_str_plain_transform;
PyObject *const_str_plain_bytes2int;
PyObject *const_str_digest_9459537ca143fe6353375c2703faf484;
PyObject *const_str_plain_read_random_int;
PyObject *const_str_digest_6b9f1018cf396a41f991d26597353e45;
PyObject *const_str_plain_common;
PyObject *const_str_plain_bit_size;
PyObject *const_str_plain_tries;
PyObject *const_int_pos_10;
PyObject *const_str_digest_518c6321195a4820b922b274f8b85542;
PyObject *const_str_digest_43aa329ac4e6b0976464495569d42d07;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_plain_rsa;
PyObject *const_tuple_str_plain_common_str_plain_transform_tuple;
PyObject *const_dict_347d091859bcb1353e679369c7ee7249;
PyObject *const_dict_fd2086467cf46fd6563d3928a895e41a;
PyObject *const_str_plain_read_random_odd_int;
PyObject *const_dict_975f85a35c3ae2163d0fb08c163ffdcc;
PyObject *const_str_plain_randint;
PyObject *const_str_digest_12f9464ecf57917c7a0c8bd31484960c;
PyObject *const_str_digest_797a00141199fcbb4e97277a2832c7e0;
PyObject *const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple;
PyObject *const_tuple_43ffc955d13bf1716a050898326e9459_tuple;
PyObject *const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple;
PyObject *const_tuple_str_plain_nbits_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[35];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("rsa.randnum"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_urandom);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_pack);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_B);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_523078eb90a80da22798bfb99de8eb84);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_bits);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_bytes2int);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_9459537ca143fe6353375c2703faf484);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_int);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b9f1018cf396a41f991d26597353e45);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_common);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_bit_size);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_tries);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_518c6321195a4820b922b274f8b85542);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_43aa329ac4e6b0976464495569d42d07);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_common_str_plain_transform_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_347d091859bcb1353e679369c7ee7249);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_odd_int);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_dict_975f85a35c3ae2163d0fb08c163ffdcc);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_randint);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_12f9464ecf57917c7a0c8bd31484960c);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_797a00141199fcbb4e97277a2832c7e0);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_43ffc955d13bf1716a050898326e9459_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_value_tuple);
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
void checkModuleConstants_rsa$randnum(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_urandom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urandom);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_struct);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_pack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pack);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_B));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_B);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_523078eb90a80da22798bfb99de8eb84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_523078eb90a80da22798bfb99de8eb84);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_random_bits);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transform);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_bytes2int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bytes2int);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_9459537ca143fe6353375c2703faf484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9459537ca143fe6353375c2703faf484);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_random_int);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b9f1018cf396a41f991d26597353e45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b9f1018cf396a41f991d26597353e45);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_common);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_bit_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bit_size);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_tries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tries);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_518c6321195a4820b922b274f8b85542));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_518c6321195a4820b922b274f8b85542);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_43aa329ac4e6b0976464495569d42d07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43aa329ac4e6b0976464495569d42d07);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_common_str_plain_transform_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_common_str_plain_transform_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_347d091859bcb1353e679369c7ee7249));
CHECK_OBJECT_DEEP(mod_consts.const_dict_347d091859bcb1353e679369c7ee7249);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_random_odd_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_random_odd_int);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_dict_975f85a35c3ae2163d0fb08c163ffdcc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_975f85a35c3ae2163d0fb08c163ffdcc);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_randint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_randint);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_12f9464ecf57917c7a0c8bd31484960c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12f9464ecf57917c7a0c8bd31484960c);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_797a00141199fcbb4e97277a2832c7e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_797a00141199fcbb4e97277a2832c7e0);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_43ffc955d13bf1716a050898326e9459_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43ffc955d13bf1716a050898326e9459_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nbits_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_nbits_str_plain_value_tuple);
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
static PyObject *module_var_accessor_rsa$randnum$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$randnum$common(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_common);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_common, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_common);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_common, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_common);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$randnum$read_random_bits(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_bits);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_random_bits);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_random_bits, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_random_bits);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_random_bits, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_bits);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_bits);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_bits);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$randnum$read_random_int(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_random_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_random_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_random_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_random_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_int);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$randnum$struct(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_struct);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_struct, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_struct);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_struct, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_struct);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$randnum$transform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$randnum->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$randnum->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$randnum->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transform);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_114c349d5351cc58748f6bc3cccd8964;
static PyCodeObject *code_objects_8ce991c1e39258c37650a31f1e054d8b;
static PyCodeObject *code_objects_1c73d805389010c4a6a52f5f28d0de4e;
static PyCodeObject *code_objects_04d3fccbbaac39a9294451047ac95701;
static PyCodeObject *code_objects_3b382ccbb74a5f8b77d6514c692b4158;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_12f9464ecf57917c7a0c8bd31484960c); CHECK_OBJECT(module_filename_obj);
code_objects_114c349d5351cc58748f6bc3cccd8964 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_797a00141199fcbb4e97277a2832c7e0, mod_consts.const_str_digest_797a00141199fcbb4e97277a2832c7e0, NULL, NULL, 0, 0, 0);
code_objects_8ce991c1e39258c37650a31f1e054d8b = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_randint, mod_consts.const_str_plain_randint, mod_consts.const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, NULL, 1, 0, 0);
code_objects_1c73d805389010c4a6a52f5f28d0de4e = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_random_bits, mod_consts.const_str_plain_read_random_bits, mod_consts.const_tuple_43ffc955d13bf1716a050898326e9459_tuple, NULL, 1, 0, 0);
code_objects_04d3fccbbaac39a9294451047ac95701 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_random_int, mod_consts.const_str_plain_read_random_int, mod_consts.const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_3b382ccbb74a5f8b77d6514c692b4158 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_read_random_odd_int, mod_consts.const_str_plain_read_random_odd_int, mod_consts.const_tuple_str_plain_nbits_str_plain_value_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__1_read_random_bits(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__2_read_random_int(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__3_read_random_odd_int(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__4_randint(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_rsa$randnum$$$function__1_read_random_bits(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *var_nbytes = NULL;
PyObject *var_rbits = NULL;
PyObject *var_randomdata = NULL;
PyObject *var_randomvalue = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$randnum$$$function__1_read_random_bits;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$randnum$$$function__1_read_random_bits = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$randnum$$$function__1_read_random_bits)) {
    Py_XDECREF(cache_frame_frame_rsa$randnum$$$function__1_read_random_bits);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$randnum$$$function__1_read_random_bits == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$randnum$$$function__1_read_random_bits = MAKE_FUNCTION_FRAME(tstate, code_objects_1c73d805389010c4a6a52f5f28d0de4e, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$randnum$$$function__1_read_random_bits->m_type_description == NULL);
frame_frame_rsa$randnum$$$function__1_read_random_bits = cache_frame_frame_rsa$randnum$$$function__1_read_random_bits;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$randnum$$$function__1_read_random_bits);
assert(Py_REFCNT(frame_frame_rsa$randnum$$$function__1_read_random_bits) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
CHECK_OBJECT(par_nbits);
tmp_divmod_expr_left_1 = par_nbits;
tmp_divmod_expr_right_1 = mod_consts.const_int_pos_8;
tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_LONG(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_nbytes == NULL);
Py_INCREF(tmp_assign_source_4);
var_nbytes = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_rbits == NULL);
Py_INCREF(tmp_assign_source_5);
var_rbits = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_nbytes);
tmp_args_element_value_1 = var_nbytes;
frame_frame_rsa$randnum$$$function__1_read_random_bits->m_frame.f_lineno = 35;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urandom, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_randomdata == NULL);
var_randomdata = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_rbits);
tmp_cmp_expr_left_1 = var_rbits;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ord_arg_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_rsa$randnum$$$function__1_read_random_bits->m_frame.f_lineno = 39;
tmp_ord_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_urandom,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_randomvalue == NULL);
var_randomvalue = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_irshift_expr_left_1;
PyObject *tmp_irshift_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_randomvalue);
tmp_irshift_expr_left_1 = var_randomvalue;
tmp_sub_expr_left_1 = mod_consts.const_int_pos_8;
CHECK_OBJECT(var_rbits);
tmp_sub_expr_right_1 = var_rbits;
tmp_irshift_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_irshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_RSHIFT_OBJECT_OBJECT(&tmp_irshift_expr_left_1, tmp_irshift_expr_right_1);
CHECK_OBJECT(tmp_irshift_expr_right_1);
Py_DECREF(tmp_irshift_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_irshift_expr_left_1;
var_randomvalue = tmp_assign_source_8;

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_rsa$randnum$struct(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_struct);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_B;
CHECK_OBJECT(var_randomvalue);
tmp_args_element_value_3 = var_randomvalue;
frame_frame_rsa$randnum$$$function__1_read_random_bits->m_frame.f_lineno = 41;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_add_expr_left_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_pack,
        call_args
    );
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_randomdata);
tmp_add_expr_right_1 = var_randomdata;
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_randomdata;
    assert(old != NULL);
    var_randomdata = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$randnum$$$function__1_read_random_bits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$randnum$$$function__1_read_random_bits->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$randnum$$$function__1_read_random_bits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$randnum$$$function__1_read_random_bits,
    type_description_1,
    par_nbits,
    var_nbytes,
    var_rbits,
    var_randomdata,
    var_randomvalue
);


// Release cached frame if used for exception.
if (frame_frame_rsa$randnum$$$function__1_read_random_bits == cache_frame_frame_rsa$randnum$$$function__1_read_random_bits) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$randnum$$$function__1_read_random_bits);
    cache_frame_frame_rsa$randnum$$$function__1_read_random_bits = NULL;
}

assertFrameObject(frame_frame_rsa$randnum$$$function__1_read_random_bits);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_randomdata);
tmp_return_value = var_randomdata;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_nbytes);
CHECK_OBJECT(var_nbytes);
Py_DECREF(var_nbytes);
var_nbytes = NULL;
CHECK_OBJECT(var_rbits);
CHECK_OBJECT(var_rbits);
Py_DECREF(var_rbits);
var_rbits = NULL;
CHECK_OBJECT(var_randomdata);
CHECK_OBJECT(var_randomdata);
Py_DECREF(var_randomdata);
var_randomdata = NULL;
Py_XDECREF(var_randomvalue);
var_randomvalue = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_nbytes);
var_nbytes = NULL;
Py_XDECREF(var_rbits);
var_rbits = NULL;
Py_XDECREF(var_randomdata);
var_randomdata = NULL;
Py_XDECREF(var_randomvalue);
var_randomvalue = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$randnum$$$function__2_read_random_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *var_randomdata = NULL;
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$randnum$$$function__2_read_random_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$randnum$$$function__2_read_random_int = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$randnum$$$function__2_read_random_int)) {
    Py_XDECREF(cache_frame_frame_rsa$randnum$$$function__2_read_random_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$randnum$$$function__2_read_random_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$randnum$$$function__2_read_random_int = MAKE_FUNCTION_FRAME(tstate, code_objects_04d3fccbbaac39a9294451047ac95701, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$randnum$$$function__2_read_random_int->m_type_description == NULL);
frame_frame_rsa$randnum$$$function__2_read_random_int = cache_frame_frame_rsa$randnum$$$function__2_read_random_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$randnum$$$function__2_read_random_int);
assert(Py_REFCNT(frame_frame_rsa$randnum$$$function__2_read_random_int) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_rsa$randnum$read_random_bits(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_random_bits);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_nbits);
tmp_args_element_value_1 = par_nbits;
frame_frame_rsa$randnum$$$function__2_read_random_int->m_frame.f_lineno = 49;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_randomdata == NULL);
var_randomdata = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_rsa$randnum$transform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_randomdata);
tmp_args_element_value_2 = var_randomdata;
frame_frame_rsa$randnum$$$function__2_read_random_int->m_frame.f_lineno = 50;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bytes2int, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_value);
tmp_ibitor_expr_left_1 = var_value;
tmp_lshift_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_nbits);
tmp_sub_expr_left_1 = par_nbits;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_lshift_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_lshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_ibitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_right_1);
Py_DECREF(tmp_lshift_expr_right_1);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_ibitor_expr_left_1;
var_value = tmp_assign_source_3;

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$randnum$$$function__2_read_random_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$randnum$$$function__2_read_random_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$randnum$$$function__2_read_random_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$randnum$$$function__2_read_random_int,
    type_description_1,
    par_nbits,
    var_randomdata,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_rsa$randnum$$$function__2_read_random_int == cache_frame_frame_rsa$randnum$$$function__2_read_random_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$randnum$$$function__2_read_random_int);
    cache_frame_frame_rsa$randnum$$$function__2_read_random_int = NULL;
}

assertFrameObject(frame_frame_rsa$randnum$$$function__2_read_random_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_randomdata);
CHECK_OBJECT(var_randomdata);
Py_DECREF(var_randomdata);
var_randomdata = NULL;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_randomdata);
var_randomdata = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$randnum$$$function__3_read_random_odd_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_nbits = python_pars[0];
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$randnum$$$function__3_read_random_odd_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int)) {
    Py_XDECREF(cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int = MAKE_FUNCTION_FRAME(tstate, code_objects_3b382ccbb74a5f8b77d6514c692b4158, module_rsa$randnum, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int->m_type_description == NULL);
frame_frame_rsa$randnum$$$function__3_read_random_odd_int = cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$randnum$$$function__3_read_random_odd_int);
assert(Py_REFCNT(frame_frame_rsa$randnum$$$function__3_read_random_odd_int) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_rsa$randnum$read_random_int(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_random_int);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_nbits);
tmp_args_element_value_1 = par_nbits;
frame_frame_rsa$randnum$$$function__3_read_random_odd_int->m_frame.f_lineno = 66;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_1;
}
{
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
CHECK_OBJECT(var_value);
tmp_bitor_expr_left_1 = var_value;
tmp_bitor_expr_right_1 = const_int_pos_1;
tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_LONG(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$randnum$$$function__3_read_random_odd_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$randnum$$$function__3_read_random_odd_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$randnum$$$function__3_read_random_odd_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$randnum$$$function__3_read_random_odd_int,
    type_description_1,
    par_nbits,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_rsa$randnum$$$function__3_read_random_odd_int == cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int);
    cache_frame_frame_rsa$randnum$$$function__3_read_random_odd_int = NULL;
}

assertFrameObject(frame_frame_rsa$randnum$$$function__3_read_random_odd_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_nbits);
Py_DECREF(par_nbits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$randnum$$$function__4_randint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_maxvalue = python_pars[0];
PyObject *var_bit_size = NULL;
PyObject *var_tries = NULL;
PyObject *var_value = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$randnum$$$function__4_randint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$randnum$$$function__4_randint = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$randnum$$$function__4_randint)) {
    Py_XDECREF(cache_frame_frame_rsa$randnum$$$function__4_randint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$randnum$$$function__4_randint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$randnum$$$function__4_randint = MAKE_FUNCTION_FRAME(tstate, code_objects_8ce991c1e39258c37650a31f1e054d8b, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$randnum$$$function__4_randint->m_type_description == NULL);
frame_frame_rsa$randnum$$$function__4_randint = cache_frame_frame_rsa$randnum$$$function__4_randint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$randnum$$$function__4_randint);
assert(Py_REFCNT(frame_frame_rsa$randnum$$$function__4_randint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_rsa$randnum$common(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_common);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_maxvalue);
tmp_args_element_value_1 = par_maxvalue;
frame_frame_rsa$randnum$$$function__4_randint->m_frame.f_lineno = 80;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bit_size, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bit_size == NULL);
var_bit_size = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(var_tries == NULL);
Py_INCREF(tmp_assign_source_2);
var_tries = tmp_assign_source_2;
}
loop_start_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_rsa$randnum$read_random_int(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_random_int);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_bit_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bit_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_bit_size;
frame_frame_rsa$randnum$$$function__4_randint->m_frame.f_lineno = 84;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
CHECK_OBJECT(par_maxvalue);
tmp_cmp_expr_right_1 = par_maxvalue;
tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
bool tmp_tmp_and_left_value_1_cbool_1;
int tmp_truth_name_1;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_left_1 = var_tries;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_10;
tmp_cmp_expr_left_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 0;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_tries);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_bit_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bit_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_bit_size;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_isub_expr_left_1;
var_bit_size = tmp_assign_source_4;

}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_tries;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_tries = tmp_assign_source_5;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$randnum$$$function__4_randint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$randnum$$$function__4_randint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$randnum$$$function__4_randint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$randnum$$$function__4_randint,
    type_description_1,
    par_maxvalue,
    var_bit_size,
    var_tries,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_rsa$randnum$$$function__4_randint == cache_frame_frame_rsa$randnum$$$function__4_randint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$randnum$$$function__4_randint);
    cache_frame_frame_rsa$randnum$$$function__4_randint = NULL;
}

assertFrameObject(frame_frame_rsa$randnum$$$function__4_randint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_bit_size);
var_bit_size = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bit_size);
var_bit_size = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_maxvalue);
Py_DECREF(par_maxvalue);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_maxvalue);
Py_DECREF(par_maxvalue);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__1_read_random_bits(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function__1_read_random_bits,
        mod_consts.const_str_plain_read_random_bits,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c73d805389010c4a6a52f5f28d0de4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$randnum,
        mod_consts.const_str_digest_523078eb90a80da22798bfb99de8eb84,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__2_read_random_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function__2_read_random_int,
        mod_consts.const_str_plain_read_random_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_04d3fccbbaac39a9294451047ac95701,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$randnum,
        mod_consts.const_str_digest_9459537ca143fe6353375c2703faf484,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__3_read_random_odd_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function__3_read_random_odd_int,
        mod_consts.const_str_plain_read_random_odd_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b382ccbb74a5f8b77d6514c692b4158,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$randnum,
        mod_consts.const_str_digest_6b9f1018cf396a41f991d26597353e45,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function__4_randint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function__4_randint,
        mod_consts.const_str_plain_randint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ce991c1e39258c37650a31f1e054d8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$randnum,
        mod_consts.const_str_digest_518c6321195a4820b922b274f8b85542,
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

static function_impl_code const function_table_rsa$randnum[] = {
impl_rsa$randnum$$$function__1_read_random_bits,
impl_rsa$randnum$$$function__2_read_random_int,
impl_rsa$randnum$$$function__3_read_random_odd_int,
impl_rsa$randnum$$$function__4_randint,
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

    return Nuitka_Function_GetFunctionState(function, function_table_rsa$randnum);
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
        module_rsa$randnum,
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
        function_table_rsa$randnum,
        sizeof(function_table_rsa$randnum) / sizeof(function_impl_code)
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
static char const *module_full_name = "rsa.randnum";
#endif

// Internal entry point for module code.
PyObject *module_code_rsa$randnum(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rsa$randnum");

    // Store the module for future use.
    module_rsa$randnum = module;

    moduledict_rsa$randnum = MODULE_DICT(module_rsa$randnum);

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
        PRINT_STRING("rsa$randnum: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("rsa$randnum: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("rsa$randnum: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.randnum" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrsa$randnum\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rsa$randnum,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rsa$randnum,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rsa$randnum,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$randnum,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$randnum,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rsa$randnum);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_rsa$randnum);
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

        UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$randnum;
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
tmp_assign_source_1 = mod_consts.const_str_digest_43aa329ac4e6b0976464495569d42d07;
UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_rsa$randnum = MAKE_MODULE_FRAME(code_objects_114c349d5351cc58748f6bc3cccd8964, module_rsa$randnum);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$randnum);
assert(Py_REFCNT(frame_frame_rsa$randnum) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_rsa$randnum$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_rsa$randnum$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_1 = (PyObject *)moduledict_rsa$randnum;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_rsa$randnum->m_frame.f_lineno = 20;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_struct, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_rsa;
tmp_globals_arg_value_2 = (PyObject *)moduledict_rsa$randnum;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_common_str_plain_transform_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_rsa$randnum->m_frame.f_lineno = 22;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_rsa$randnum,
        mod_consts.const_str_plain_common,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_common);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_common, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_rsa$randnum,
        mod_consts.const_str_plain_transform,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_transform);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_transform, tmp_assign_source_8);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$randnum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$randnum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$randnum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_rsa$randnum);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_347d091859bcb1353e679369c7ee7249);

tmp_assign_source_9 = MAKE_FUNCTION_rsa$randnum$$$function__1_read_random_bits(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_bits, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);

tmp_assign_source_10 = MAKE_FUNCTION_rsa$randnum$$$function__2_read_random_int(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_int, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_fd2086467cf46fd6563d3928a895e41a);

tmp_assign_source_11 = MAKE_FUNCTION_rsa$randnum$$$function__3_read_random_odd_int(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_read_random_odd_int, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_975f85a35c3ae2163d0fb08c163ffdcc);

tmp_assign_source_12 = MAKE_FUNCTION_rsa$randnum$$$function__4_randint(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_rsa$randnum, (Nuitka_StringObject *)mod_consts.const_str_plain_randint, tmp_assign_source_12);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rsa$randnum", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.randnum" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_rsa$randnum);
    return module_rsa$randnum;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("rsa$randnum", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

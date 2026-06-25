/* Generated code for Python module 'anthropic$lib$bedrock$_auth'
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



/* The "module_anthropic$lib$bedrock$_auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$bedrock$_auth;
PyDictObject *moduledict_anthropic$lib$bedrock$_auth;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_boto3;
PyObject *const_str_plain_Session;
PyObject *const_tuple_5564eba77aed161e71f55696255fa898_tuple;
PyObject *const_str_digest_65e49cd3f8b54fdf0c231ecf8c5d5855;
PyObject *const_tuple_str_plain_SigV4Auth_tuple;
PyObject *const_str_plain_SigV4Auth;
PyObject *const_str_digest_360599f49ef42507b433b1fbbd759b9f;
PyObject *const_tuple_str_plain_AWSRequest_tuple;
PyObject *const_str_plain_AWSRequest;
PyObject *const_str_plain__get_session;
PyObject *const_tuple_9ac2ce9e3379360cbec231826fa5a641_tuple;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_connection;
PyObject *const_str_plain_upper;
PyObject *const_tuple_c694a6bf73421f3d60be984bc465123f_tuple;
PyObject *const_str_plain_get_credentials;
PyObject *const_str_digest_3fdd3355480f92c9400a3b2a9f01ccca;
PyObject *const_str_plain_bedrock;
PyObject *const_str_plain_region_name;
PyObject *const_str_plain_add_auth;
PyObject *const_str_plain_prepare;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_lru_cache_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_lru_cache;
PyObject *const_tuple_int_pos_512_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_ec7bddc563c587e58b4472a2fa4ad80d;
PyObject *const_dict_2196dbf080abcf4ac864c4561975c504;
PyObject *const_str_plain_get_auth_headers;
PyObject *const_str_digest_bd17a40be4cf4f8939cf95e448dd76c6;
PyObject *const_str_digest_e87e2ad91712517722f4fe3e70cf8018;
PyObject *const_tuple_38d4f04f36e4dd02175ca0883e15742d_tuple;
PyObject *const_tuple_6e5f71ea3e5f136389418763e1cbf9d3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[40];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.bedrock._auth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_boto3);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_5564eba77aed161e71f55696255fa898_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_65e49cd3f8b54fdf0c231ecf8c5d5855);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SigV4Auth_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_SigV4Auth);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_360599f49ef42507b433b1fbbd759b9f);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWSRequest_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWSRequest);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_session);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_9ac2ce9e3379360cbec231826fa5a641_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_c694a6bf73421f3d60be984bc465123f_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_credentials);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fdd3355480f92c9400a3b2a9f01ccca);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_bedrock);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_region_name);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_auth);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_prepare);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lru_cache_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_512_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_ec7bddc563c587e58b4472a2fa4ad80d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_2196dbf080abcf4ac864c4561975c504);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_headers);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd17a40be4cf4f8939cf95e448dd76c6);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_e87e2ad91712517722f4fe3e70cf8018);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_38d4f04f36e4dd02175ca0883e15742d_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_6e5f71ea3e5f136389418763e1cbf9d3_tuple);
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
void checkModuleConstants_anthropic$lib$bedrock$_auth(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_boto3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_boto3);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Session);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_5564eba77aed161e71f55696255fa898_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5564eba77aed161e71f55696255fa898_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_65e49cd3f8b54fdf0c231ecf8c5d5855));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65e49cd3f8b54fdf0c231ecf8c5d5855);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SigV4Auth_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SigV4Auth_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_SigV4Auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SigV4Auth);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_360599f49ef42507b433b1fbbd759b9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_360599f49ef42507b433b1fbbd759b9f);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AWSRequest_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AWSRequest_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWSRequest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWSRequest);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_session);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_9ac2ce9e3379360cbec231826fa5a641_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9ac2ce9e3379360cbec231826fa5a641_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connection);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upper);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_c694a6bf73421f3d60be984bc465123f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c694a6bf73421f3d60be984bc465123f_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_credentials);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fdd3355480f92c9400a3b2a9f01ccca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fdd3355480f92c9400a3b2a9f01ccca);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_bedrock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bedrock);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_region_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_region_name);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_auth);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_prepare));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prepare);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lru_cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_lru_cache_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_512_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_512_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_ec7bddc563c587e58b4472a2fa4ad80d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ec7bddc563c587e58b4472a2fa4ad80d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_2196dbf080abcf4ac864c4561975c504));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2196dbf080abcf4ac864c4561975c504);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_auth_headers);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd17a40be4cf4f8939cf95e448dd76c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd17a40be4cf4f8939cf95e448dd76c6);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_e87e2ad91712517722f4fe3e70cf8018));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e87e2ad91712517722f4fe3e70cf8018);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_38d4f04f36e4dd02175ca0883e15742d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38d4f04f36e4dd02175ca0883e15742d_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_6e5f71ea3e5f136389418763e1cbf9d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e5f71ea3e5f136389418763e1cbf9d3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_anthropic$lib$bedrock$_auth$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$bedrock$_auth$_get_session(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_session);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_session);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_session, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_session);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_session, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_session);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_session);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_session);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$bedrock$_auth$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$bedrock$_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$bedrock$_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$bedrock$_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c2fb44d0ddec2c45b0153d210275e6e5;
static PyCodeObject *code_objects_5b24fa6011940249539e427dabfade60;
static PyCodeObject *code_objects_9f15b53574527b612e01941f7e8b283d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_bd17a40be4cf4f8939cf95e448dd76c6); CHECK_OBJECT(module_filename_obj);
code_objects_c2fb44d0ddec2c45b0153d210275e6e5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e87e2ad91712517722f4fe3e70cf8018, mod_consts.const_str_digest_e87e2ad91712517722f4fe3e70cf8018, NULL, NULL, 0, 0, 0);
code_objects_5b24fa6011940249539e427dabfade60 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_session, mod_consts.const_str_plain__get_session, mod_consts.const_tuple_38d4f04f36e4dd02175ca0883e15742d_tuple, NULL, 0, 5, 0);
code_objects_9f15b53574527b612e01941f7e8b283d = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_auth_headers, mod_consts.const_str_plain_get_auth_headers, mod_consts.const_tuple_6e5f71ea3e5f136389418763e1cbf9d3_tuple, NULL, 0, 9, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__1__get_session(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$bedrock$_auth$$$function__1__get_session(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_aws_access_key = python_pars[0];
PyObject *par_aws_secret_key = python_pars[1];
PyObject *par_aws_session_token = python_pars[2];
PyObject *par_region = python_pars[3];
PyObject *par_profile = python_pars[4];
PyObject *var_boto3 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session = MAKE_FUNCTION_FRAME(tstate, code_objects_5b24fa6011940249539e427dabfade60, module_anthropic$lib$bedrock$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session->m_type_description == NULL);
frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session = cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_boto3;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session->m_frame.f_lineno = 22;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_boto3 == NULL);
var_boto3 = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
CHECK_OBJECT(var_boto3);
tmp_expression_value_1 = var_boto3;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Session);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_profile);
tmp_kw_call_value_0_1 = par_profile;
CHECK_OBJECT(par_region);
tmp_kw_call_value_1_1 = par_region;
CHECK_OBJECT(par_aws_access_key);
tmp_kw_call_value_2_1 = par_aws_access_key;
CHECK_OBJECT(par_aws_secret_key);
tmp_kw_call_value_3_1 = par_aws_secret_key;
CHECK_OBJECT(par_aws_session_token);
tmp_kw_call_value_4_1 = par_aws_session_token;
frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session->m_frame.f_lineno = 24;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_5564eba77aed161e71f55696255fa898_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session,
    type_description_1,
    par_aws_access_key,
    par_aws_secret_key,
    par_aws_session_token,
    par_region,
    par_profile,
    var_boto3
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session == cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session);
    cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$bedrock$_auth$$$function__1__get_session);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_boto3);
CHECK_OBJECT(var_boto3);
Py_DECREF(var_boto3);
var_boto3 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_boto3);
var_boto3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_session_token);
Py_DECREF(par_aws_session_token);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_session_token);
Py_DECREF(par_aws_session_token);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_method = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_aws_access_key = python_pars[3];
PyObject *par_aws_secret_key = python_pars[4];
PyObject *par_aws_session_token = python_pars[5];
PyObject *par_region = python_pars[6];
PyObject *par_profile = python_pars[7];
PyObject *par_data = python_pars[8];
PyObject *var_SigV4Auth = NULL;
PyObject *var_AWSRequest = NULL;
PyObject *var_session = NULL;
PyObject *var_request = NULL;
PyObject *var_credentials = NULL;
PyObject *var_signer = NULL;
PyObject *var_prepped = NULL;
PyObject *outline_0_var_key = NULL;
PyObject *outline_0_var_value = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_9f15b53574527b612e01941f7e8b283d, module_anthropic$lib$bedrock$_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_type_description == NULL);
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers = cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_65e49cd3f8b54fdf0c231ecf8c5d5855;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_SigV4Auth_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 45;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_auth,
        mod_consts.const_str_plain_SigV4Auth,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_SigV4Auth);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_SigV4Auth == NULL);
var_SigV4Auth = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_360599f49ef42507b433b1fbbd759b9f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$bedrock$_auth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AWSRequest_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 46;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$bedrock$_auth,
        mod_consts.const_str_plain_AWSRequest,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AWSRequest);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_AWSRequest == NULL);
var_AWSRequest = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$bedrock$_auth$_get_session(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_session);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_profile);
tmp_kw_call_value_0_1 = par_profile;
CHECK_OBJECT(par_region);
tmp_kw_call_value_1_1 = par_region;
CHECK_OBJECT(par_aws_access_key);
tmp_kw_call_value_2_1 = par_aws_access_key;
CHECK_OBJECT(par_aws_secret_key);
tmp_kw_call_value_3_1 = par_aws_secret_key;
CHECK_OBJECT(par_aws_session_token);
tmp_kw_call_value_4_1 = par_aws_session_token;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 48;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_9ac2ce9e3379360cbec231826fa5a641_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_session == NULL);
var_session = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 59;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(par_headers);
tmp_delsubscr_target_1 = par_headers;
tmp_delsubscr_subscript_1 = mod_consts.const_str_plain_connection;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
CHECK_OBJECT(var_AWSRequest);
tmp_called_value_3 = var_AWSRequest;
CHECK_OBJECT(par_method);
tmp_expression_value_2 = par_method;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_upper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 62;
tmp_kw_call_value_0_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_kw_call_value_1_2 = par_url;
CHECK_OBJECT(par_headers);
tmp_kw_call_value_2_2 = par_headers;
CHECK_OBJECT(par_data);
tmp_kw_call_value_3_2 = par_data;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 62;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_c694a6bf73421f3d60be984bc465123f_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_request == NULL);
var_request = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_session);
tmp_called_instance_1 = var_session;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 63;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_credentials);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_credentials == NULL);
var_credentials = tmp_assign_source_6;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_credentials);
tmp_operand_value_1 = var_credentials;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3fdd3355480f92c9400a3b2a9f01ccca;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 65;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_SigV4Auth);
tmp_called_value_5 = var_SigV4Auth;
CHECK_OBJECT(var_credentials);
tmp_args_element_value_1 = var_credentials;
tmp_args_element_value_2 = mod_consts.const_str_plain_bedrock;
CHECK_OBJECT(var_session);
tmp_expression_value_3 = var_session;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_region_name);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_signer == NULL);
var_signer = tmp_assign_source_7;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_signer);
tmp_called_instance_2 = var_signer;
CHECK_OBJECT(var_request);
tmp_args_element_value_4 = var_request;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 68;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add_auth, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_request);
tmp_called_instance_3 = var_request;
frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame.f_lineno = 70;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_prepare);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_prepped == NULL);
var_prepped = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_prepped);
tmp_expression_value_4 = var_prepped;
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_dict_arg_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_dict_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
CHECK_OBJECT(tmp_dict_arg_1);
Py_DECREF(tmp_dict_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_10;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 72;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_15 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_key;
    outline_0_var_key = tmp_assign_source_15;
    Py_INCREF(outline_0_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_16 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_value;
    outline_0_var_value = tmp_assign_source_16;
    Py_INCREF(outline_0_var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(outline_0_var_value);
tmp_cmp_expr_left_1 = outline_0_var_value;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_key);
tmp_dictset38_key_1 = outline_0_var_key;
CHECK_OBJECT(outline_0_var_value);
tmp_dictset38_value_1 = outline_0_var_value;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_return_value = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_key);
outline_0_var_key = NULL;
Py_XDECREF(outline_0_var_value);
outline_0_var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 72;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers,
    type_description_1,
    par_method,
    par_url,
    par_headers,
    par_aws_access_key,
    par_aws_secret_key,
    par_aws_session_token,
    par_region,
    par_profile,
    par_data,
    var_SigV4Auth,
    var_AWSRequest,
    var_session,
    var_request,
    var_credentials,
    var_signer,
    var_prepped
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers == cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers);
    cache_frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(var_SigV4Auth);
CHECK_OBJECT(var_SigV4Auth);
Py_DECREF(var_SigV4Auth);
var_SigV4Auth = NULL;
CHECK_OBJECT(var_AWSRequest);
CHECK_OBJECT(var_AWSRequest);
Py_DECREF(var_AWSRequest);
var_AWSRequest = NULL;
CHECK_OBJECT(var_session);
CHECK_OBJECT(var_session);
Py_DECREF(var_session);
var_session = NULL;
CHECK_OBJECT(var_request);
CHECK_OBJECT(var_request);
Py_DECREF(var_request);
var_request = NULL;
CHECK_OBJECT(var_credentials);
CHECK_OBJECT(var_credentials);
Py_DECREF(var_credentials);
var_credentials = NULL;
CHECK_OBJECT(var_signer);
CHECK_OBJECT(var_signer);
Py_DECREF(var_signer);
var_signer = NULL;
CHECK_OBJECT(var_prepped);
CHECK_OBJECT(var_prepped);
Py_DECREF(var_prepped);
var_prepped = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_headers);
par_headers = NULL;
Py_XDECREF(var_SigV4Auth);
var_SigV4Auth = NULL;
Py_XDECREF(var_AWSRequest);
var_AWSRequest = NULL;
Py_XDECREF(var_session);
var_session = NULL;
Py_XDECREF(var_request);
var_request = NULL;
Py_XDECREF(var_credentials);
var_credentials = NULL;
Py_XDECREF(var_signer);
var_signer = NULL;
Py_XDECREF(var_prepped);
var_prepped = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_session_token);
Py_DECREF(par_aws_session_token);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_aws_access_key);
Py_DECREF(par_aws_access_key);
CHECK_OBJECT(par_aws_secret_key);
Py_DECREF(par_aws_secret_key);
CHECK_OBJECT(par_aws_session_token);
Py_DECREF(par_aws_session_token);
CHECK_OBJECT(par_region);
Py_DECREF(par_region);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__1__get_session(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_auth$$$function__1__get_session,
        mod_consts.const_str_plain__get_session,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5b24fa6011940249539e427dabfade60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers,
        mod_consts.const_str_plain_get_auth_headers,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9f15b53574527b612e01941f7e8b283d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$bedrock$_auth,
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

static function_impl_code const function_table_anthropic$lib$bedrock$_auth[] = {
impl_anthropic$lib$bedrock$_auth$$$function__1__get_session,
impl_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$bedrock$_auth);
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
        module_anthropic$lib$bedrock$_auth,
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
        function_table_anthropic$lib$bedrock$_auth,
        sizeof(function_table_anthropic$lib$bedrock$_auth) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.bedrock._auth";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$bedrock$_auth(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$bedrock$_auth");

    // Store the module for future use.
    module_anthropic$lib$bedrock$_auth = module;

    moduledict_anthropic$lib$bedrock$_auth = MODULE_DICT(module_anthropic$lib$bedrock$_auth);

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
        PRINT_STRING("anthropic$lib$bedrock$_auth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$bedrock$_auth: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$bedrock$_auth: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.bedrock._auth" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$bedrock$_auth\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$bedrock$_auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$bedrock$_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$bedrock$_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$bedrock$_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$bedrock$_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$bedrock$_auth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$bedrock$_auth);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_anthropic$lib$bedrock$_auth;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$bedrock$_auth = MAKE_MODULE_FRAME(code_objects_c2fb44d0ddec2c45b0153d210275e6e5, module_anthropic$lib$bedrock$_auth);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$bedrock$_auth);
assert(Py_REFCNT(frame_frame_anthropic$lib$bedrock$_auth) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$bedrock$_auth$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$bedrock$_auth$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$bedrock$_auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$bedrock$_auth->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$bedrock$_auth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_lru_cache_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$bedrock$_auth->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$bedrock$_auth,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = module_var_accessor_anthropic$lib$bedrock$_auth$lru_cache(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_anthropic$lib$bedrock$_auth->m_frame.f_lineno = 13;
tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_512_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ec7bddc563c587e58b4472a2fa4ad80d);

tmp_args_element_value_1 = MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__1__get_session(tstate, tmp_annotations_1);

frame_frame_anthropic$lib$bedrock$_auth->m_frame.f_lineno = 13;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_session, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$bedrock$_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$bedrock$_auth->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$bedrock$_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$bedrock$_auth);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_2196dbf080abcf4ac864c4561975c504);

tmp_assign_source_9 = MAKE_FUNCTION_anthropic$lib$bedrock$_auth$$$function__2_get_auth_headers(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_get_auth_headers, tmp_assign_source_9);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$bedrock$_auth", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.bedrock._auth" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$bedrock$_auth);
    return module_anthropic$lib$bedrock$_auth;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$bedrock$_auth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$bedrock$_auth", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'textual$_opacity'
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



/* The "module_textual$_opacity" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_opacity;
PyDictObject *moduledict_textual$_opacity;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d1cd97defc3685af967a993cf9f4cc0c;
PyObject *const_str_plain_Segment;
PyObject *const_str_plain_Color;
PyObject *const_str_plain_from_rich_color;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_base_background;
PyObject *const_str_plain_blend;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_51baade6b6dec7113d097eb3e6b6fbd6;
PyObject *const_str_plain_segments;
PyObject *const_str_plain_color;
PyObject *const_str_plain_opacity;
PyObject *const_str_plain_rich_color;
PyObject *const_tuple_str_plain_color_tuple;
PyObject *const_str_plain_bgcolor;
PyObject *const_tuple_str_plain_bgcolor_tuple;
PyObject *const_str_plain__Segment;
PyObject *const_str_plain__apply_opacity;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_digest_615ac80a3c34c509292e42657aa55cf9;
PyObject *const_str_digest_ab412ce4b5b3549f37a543210be8047b;
PyObject *const_tuple_859abf84c0d92b32e17ae89fa6bb966e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[32];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._opacity"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1cd97defc3685af967a993cf9f4cc0c);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_background);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_blend);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_51baade6b6dec7113d097eb3e6b6fbd6);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_segments);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_opacity);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bgcolor_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__Segment);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply_opacity);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_615ac80a3c34c509292e42657aa55cf9);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab412ce4b5b3549f37a543210be8047b);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_859abf84c0d92b32e17ae89fa6bb966e_tuple);
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
void checkModuleConstants_textual$_opacity(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1cd97defc3685af967a993cf9f4cc0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1cd97defc3685af967a993cf9f4cc0c);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_rich_color);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_background));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_background);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_blend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blend);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_51baade6b6dec7113d097eb3e6b6fbd6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51baade6b6dec7113d097eb3e6b6fbd6);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_segments);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_opacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opacity);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_color_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bgcolor);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bgcolor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bgcolor_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Segment);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply_opacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply_opacity);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_615ac80a3c34c509292e42657aa55cf9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_615ac80a3c34c509292e42657aa55cf9);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab412ce4b5b3549f37a543210be8047b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab412ce4b5b3549f37a543210be8047b);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_859abf84c0d92b32e17ae89fa6bb966e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_859abf84c0d92b32e17ae89fa6bb966e_tuple);
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
static PyObject *module_var_accessor_textual$_opacity$Color(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_opacity$Iterable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_opacity$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_opacity$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_opacity$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_opacity$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_opacity->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_opacity->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_opacity->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dc1b21ef34685f9d88d691f0f9a6f4ed;
static PyCodeObject *code_objects_aad198aa3e6a24d994f4206eb7ab5446;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_615ac80a3c34c509292e42657aa55cf9); CHECK_OBJECT(module_filename_obj);
code_objects_dc1b21ef34685f9d88d691f0f9a6f4ed = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_ab412ce4b5b3549f37a543210be8047b, mod_consts.const_str_digest_ab412ce4b5b3549f37a543210be8047b, NULL, NULL, 0, 0, 0);
code_objects_aad198aa3e6a24d994f4206eb7ab5446 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__apply_opacity, mod_consts.const_str_plain__apply_opacity, mod_consts.const_tuple_859abf84c0d92b32e17ae89fa6bb966e_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_opacity$$$function__1__apply_opacity(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_opacity$$$function__1__apply_opacity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_segments = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_base_background = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_opacity = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_base_background;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_opacity;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_segments;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_segments);
CHECK_OBJECT(par_segments);
Py_DECREF(par_segments);
par_segments = NULL;
CHECK_OBJECT(par_base_background);
CHECK_OBJECT(par_base_background);
Py_DECREF(par_base_background);
par_base_background = NULL;
CHECK_OBJECT(par_opacity);
CHECK_OBJECT(par_opacity);
Py_DECREF(par_opacity);
par_opacity = NULL;
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
struct textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_locals {
PyObject *var__Segment;
PyObject *var_from_rich_color;
PyObject *var_from_color;
PyObject *var_blend;
PyObject *var_styled_segments;
PyObject *var_text;
PyObject *var_style;
PyObject *var__;
PyObject *var_blended_style;
PyObject *var_color;
PyObject *var_blended_foreground;
PyObject *var_bgcolor;
PyObject *var_blended_background;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_locals *generator_heap = (struct textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var__Segment = NULL;
generator_heap->var_from_rich_color = NULL;
generator_heap->var_from_color = NULL;
generator_heap->var_blend = NULL;
generator_heap->var_styled_segments = NULL;
generator_heap->var_text = NULL;
generator_heap->var_style = NULL;
generator_heap->var__ = NULL;
generator_heap->var_blended_style = NULL;
generator_heap->var_color = NULL;
generator_heap->var_blended_foreground = NULL;
generator_heap->var_bgcolor = NULL;
generator_heap->var_blended_background = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_aad198aa3e6a24d994f4206eb7ab5446, module_textual$_opacity, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
tmp_assign_source_1 = module_var_accessor_textual$_opacity$Segment(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 24;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var__Segment == NULL);
Py_INCREF(tmp_assign_source_1);
generator_heap->var__Segment = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_opacity$Color(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 25;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_rich_color);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 25;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_from_rich_color == NULL);
generator_heap->var_from_rich_color = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$_opacity$Style(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_color);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 26;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_from_color == NULL);
generator_heap->var_from_color = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_base_background);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_blend);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 27;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_blend == NULL);
generator_heap->var_blend = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$_opacity$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 28;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_51baade6b6dec7113d097eb3e6b6fbd6;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 28;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 28;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 28;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_styled_segments == NULL);
generator_heap->var_styled_segments = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->var_styled_segments);
tmp_iter_arg_1 = generator_heap->var_styled_segments;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccooooooooooooo";
generator_heap->exception_lineno = 29;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_text;
    generator_heap->var_text = tmp_assign_source_12;
    Py_INCREF(generator_heap->var_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_style;
    generator_heap->var_style = tmp_assign_source_13;
    Py_INCREF(generator_heap->var_style);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_14 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var__;
    generator_heap->var__ = tmp_assign_source_14;
    Py_INCREF(generator_heap->var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(generator_heap->var_style);
tmp_assign_source_15 = generator_heap->var_style;
{
    PyObject *old = generator_heap->var_blended_style;
    generator_heap->var_blended_style = tmp_assign_source_15;
    Py_INCREF(generator_heap->var_blended_style);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_4 = generator_heap->var_style;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_color);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 32;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
if (generator_heap->var_from_rich_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_5 = generator_heap->var_style;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_color);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 33;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 33;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_color;
    generator_heap->var_color = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
if (generator_heap->var_blend == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_blend);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = generator_heap->var_blend;
CHECK_OBJECT(generator_heap->var_color);
tmp_args_element_value_4 = generator_heap->var_color;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_opacity);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 34;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_blended_foreground;
    generator_heap->var_blended_foreground = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(generator_heap->var_blended_style);
tmp_iadd_expr_left_1 = generator_heap->var_blended_style;
if (generator_heap->var_from_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = generator_heap->var_from_color;
CHECK_OBJECT(generator_heap->var_blended_foreground);
tmp_expression_value_6 = generator_heap->var_blended_foreground;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rich_color);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 35;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_color_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_18 = tmp_iadd_expr_left_1;
generator_heap->var_blended_style = tmp_assign_source_18;

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_7 = generator_heap->var_style;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_bgcolor);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 37;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_8;
if (generator_heap->var_from_rich_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_5 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_8 = generator_heap->var_style;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 38;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 38;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_bgcolor;
    generator_heap->var_bgcolor = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
if (generator_heap->var_blend == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_blend);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 39;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_6 = generator_heap->var_blend;
CHECK_OBJECT(generator_heap->var_bgcolor);
tmp_args_element_value_7 = generator_heap->var_bgcolor;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_opacity);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 39;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 39;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_blended_background;
    generator_heap->var_blended_background = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(generator_heap->var_blended_style);
tmp_iadd_expr_left_2 = generator_heap->var_blended_style;
if (generator_heap->var_from_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_7 = generator_heap->var_from_color;
CHECK_OBJECT(generator_heap->var_blended_background);
tmp_expression_value_9 = generator_heap->var_blended_background;
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rich_color);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 40;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_bgcolor_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 40;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_21 = tmp_iadd_expr_left_2;
generator_heap->var_blended_style = tmp_assign_source_21;

}
branch_no_2:;
{
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_8 = generator_heap->var__Segment;
CHECK_OBJECT(generator_heap->var_text);
tmp_args_element_value_9 = generator_heap->var_text;
CHECK_OBJECT(generator_heap->var_blended_style);
tmp_args_element_value_10 = generator_heap->var_blended_style;
generator->m_frame->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_10;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 29;
generator_heap->type_description_1 = "cccooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator->m_closure[2],
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var__Segment,
    generator_heap->var_from_rich_color,
    generator_heap->var_from_color,
    generator_heap->var_blend,
    generator_heap->var_styled_segments,
    generator_heap->var_text,
    generator_heap->var_style,
    generator_heap->var__,
    generator_heap->var_blended_style,
    generator_heap->var_color,
    generator_heap->var_blended_foreground,
    generator_heap->var_bgcolor,
    generator_heap->var_blended_background
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_from_color);
generator_heap->var_from_color = NULL;
Py_XDECREF(generator_heap->var_blend);
generator_heap->var_blend = NULL;
Py_XDECREF(generator_heap->var_styled_segments);
generator_heap->var_styled_segments = NULL;
Py_XDECREF(generator_heap->var_text);
generator_heap->var_text = NULL;
Py_XDECREF(generator_heap->var_style);
generator_heap->var_style = NULL;
Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;
Py_XDECREF(generator_heap->var_blended_style);
generator_heap->var_blended_style = NULL;
Py_XDECREF(generator_heap->var_color);
generator_heap->var_color = NULL;
Py_XDECREF(generator_heap->var_blended_foreground);
generator_heap->var_blended_foreground = NULL;
Py_XDECREF(generator_heap->var_bgcolor);
generator_heap->var_bgcolor = NULL;
Py_XDECREF(generator_heap->var_blended_background);
generator_heap->var_blended_background = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_from_color);
generator_heap->var_from_color = NULL;
Py_XDECREF(generator_heap->var_blend);
generator_heap->var_blend = NULL;
CHECK_OBJECT(generator_heap->var_styled_segments);
CHECK_OBJECT(generator_heap->var_styled_segments);
Py_DECREF(generator_heap->var_styled_segments);
generator_heap->var_styled_segments = NULL;
Py_XDECREF(generator_heap->var_text);
generator_heap->var_text = NULL;
Py_XDECREF(generator_heap->var_style);
generator_heap->var_style = NULL;
Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;
Py_XDECREF(generator_heap->var_blended_style);
generator_heap->var_blended_style = NULL;
Py_XDECREF(generator_heap->var_color);
generator_heap->var_color = NULL;
Py_XDECREF(generator_heap->var_blended_foreground);
generator_heap->var_blended_foreground = NULL;
Py_XDECREF(generator_heap->var_bgcolor);
generator_heap->var_bgcolor = NULL;
Py_XDECREF(generator_heap->var_blended_background);
generator_heap->var_blended_background = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_context,
        module_textual$_opacity,
        mod_consts.const_str_plain__apply_opacity,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_aad198aa3e6a24d994f4206eb7ab5446,
        closure,
        3,
#if 1
        sizeof(struct textual$_opacity$$$function__1__apply_opacity$$$genobj__1__apply_opacity_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$_opacity$$$function__1__apply_opacity(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_opacity$$$function__1__apply_opacity,
        mod_consts.const_str_plain__apply_opacity,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aad198aa3e6a24d994f4206eb7ab5446,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_opacity,
        mod_consts.const_str_digest_d1cd97defc3685af967a993cf9f4cc0c,
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

static function_impl_code const function_table_textual$_opacity[] = {
impl_textual$_opacity$$$function__1__apply_opacity,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_opacity);
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
        module_textual$_opacity,
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
        function_table_textual$_opacity,
        sizeof(function_table_textual$_opacity) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._opacity";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_opacity(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_opacity");

    // Store the module for future use.
    module_textual$_opacity = module;

    moduledict_textual$_opacity = MODULE_DICT(module_textual$_opacity);

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
        PRINT_STRING("textual$_opacity: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_opacity: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_opacity: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._opacity" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_opacity\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_opacity,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_opacity,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_opacity,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_opacity,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_opacity,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_opacity);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_opacity);
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

        UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_opacity;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_opacity = MAKE_MODULE_FRAME(code_objects_dc1b21ef34685f9d88d691f0f9a6f4ed, module_textual$_opacity);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_opacity);
assert(Py_REFCNT(frame_frame_textual$_opacity) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_opacity$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_opacity$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_4);
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
        (PyObject *)moduledict_textual$_opacity,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_5);
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
        (PyObject *)moduledict_textual$_opacity,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_6);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_opacity;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_opacity->m_frame.f_lineno = 3;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$_opacity,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_opacity;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_opacity->m_frame.f_lineno = 4;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_opacity,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_opacity;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_opacity->m_frame.f_lineno = 6;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_opacity,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_segments;
tmp_expression_value_1 = module_var_accessor_textual$_opacity$Iterable(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_textual$_opacity$Segment(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_base_background;
tmp_dict_value_1 = module_var_accessor_textual$_opacity$Color(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_opacity;
tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_2 = module_var_accessor_textual$_opacity$Iterable(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterable);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto dict_build_exception_1;
}
tmp_subscript_value_2 = module_var_accessor_textual$_opacity$Segment(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_10 = MAKE_FUNCTION_textual$_opacity$$$function__1__apply_opacity(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_opacity, (Nuitka_StringObject *)mod_consts.const_str_plain__apply_opacity, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_opacity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_opacity->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_opacity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_opacity);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_opacity", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._opacity" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_opacity);
    return module_textual$_opacity;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_opacity, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_opacity", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

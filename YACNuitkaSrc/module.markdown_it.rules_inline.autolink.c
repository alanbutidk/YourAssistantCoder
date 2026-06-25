/* Generated code for Python module 'markdown_it$rules_inline$autolink'
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



/* The "module_markdown_it$rules_inline$autolink" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_inline$autolink;
PyDictObject *moduledict_markdown_it$rules_inline$autolink;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pos;
PyObject *const_str_plain_src;
PyObject *const_str_chr_60;
PyObject *const_str_plain_posMax;
PyObject *const_str_plain_state;
PyObject *const_str_chr_62;
PyObject *const_str_plain_AUTOLINK_RE;
PyObject *const_str_plain_search;
PyObject *const_str_plain_md;
PyObject *const_str_plain_normalizeLink;
PyObject *const_str_plain_validateLink;
PyObject *const_str_plain_push;
PyObject *const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple;
PyObject *const_str_plain_href;
PyObject *const_str_plain_attrs;
PyObject *const_str_plain_autolink;
PyObject *const_str_plain_markup;
PyObject *const_str_plain_auto;
PyObject *const_str_plain_info;
PyObject *const_tuple_str_plain_text_str_empty_int_0_tuple;
PyObject *const_str_plain_normalizeLinkText;
PyObject *const_str_plain_content;
PyObject *const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple;
PyObject *const_str_plain_EMAIL_RE;
PyObject *const_str_digest_59c33d34518c98b50110b8b5b227fe48;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_plain_state_inline;
PyObject *const_tuple_str_plain_StateInline_tuple;
PyObject *const_str_plain_StateInline;
PyObject *const_tuple_str_digest_365c2c923a1352383d01498c686d6440_tuple;
PyObject *const_tuple_str_digest_2fcdfcf5022c8c65dda5b7207b547ba0_tuple;
PyObject *const_str_plain_silent;
PyObject *const_str_plain_return;
PyObject *const_str_digest_46c6d3f66df57f0b027bcee729f66c14;
PyObject *const_str_digest_9176a53f7e93f019fee75818fa2f9cfb;
PyObject *const_tuple_55df8a22bd8b315761db9c05718349bc_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_inline.autolink"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_src);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_posMax);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTOLINK_RE);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_href);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrs);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_autolink);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_markup);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLinkText);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_RE);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateInline_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_365c2c923a1352383d01498c686d6440_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2fcdfcf5022c8c65dda5b7207b547ba0_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_silent);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_46c6d3f66df57f0b027bcee729f66c14);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_9176a53f7e93f019fee75818fa2f9cfb);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_55df8a22bd8b315761db9c05718349bc_tuple);
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
void checkModuleConstants_markdown_it$rules_inline$autolink(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_src));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_posMax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_posMax);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTOLINK_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AUTOLINK_RE);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_md));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_md);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeLink);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_validateLink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validateLink);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_href));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_href);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrs);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_autolink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_autolink);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_markup);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_normalizeLinkText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_normalizeLinkText);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_EMAIL_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EMAIL_RE);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_inline);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StateInline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StateInline_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateInline);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_365c2c923a1352383d01498c686d6440_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_365c2c923a1352383d01498c686d6440_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2fcdfcf5022c8c65dda5b7207b547ba0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2fcdfcf5022c8c65dda5b7207b547ba0_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_silent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_silent);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_46c6d3f66df57f0b027bcee729f66c14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46c6d3f66df57f0b027bcee729f66c14);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_9176a53f7e93f019fee75818fa2f9cfb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9176a53f7e93f019fee75818fa2f9cfb);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_55df8a22bd8b315761db9c05718349bc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_55df8a22bd8b315761db9c05718349bc_tuple);
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
static PyObject *module_var_accessor_markdown_it$rules_inline$autolink$AUTOLINK_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$autolink->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$autolink->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTOLINK_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$autolink->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTOLINK_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTOLINK_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AUTOLINK_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AUTOLINK_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTOLINK_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTOLINK_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTOLINK_RE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$autolink$EMAIL_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$autolink->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$autolink->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_EMAIL_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$autolink->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EMAIL_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EMAIL_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EMAIL_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EMAIL_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_EMAIL_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_EMAIL_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EMAIL_RE);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$autolink$StateInline(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$autolink->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$autolink->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$autolink->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StateInline);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StateInline, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StateInline);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StateInline, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$autolink$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$autolink->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$autolink->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$autolink->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$autolink$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$autolink->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$autolink->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$autolink->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_630a5dfa114db24edb6ab97872ee90fd;
static PyCodeObject *code_objects_e8ccb4dbaf54da2a05aba2ed1ca7953f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_46c6d3f66df57f0b027bcee729f66c14); CHECK_OBJECT(module_filename_obj);
code_objects_630a5dfa114db24edb6ab97872ee90fd = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_9176a53f7e93f019fee75818fa2f9cfb, mod_consts.const_str_digest_9176a53f7e93f019fee75818fa2f9cfb, NULL, NULL, 0, 0, 0);
code_objects_e8ccb4dbaf54da2a05aba2ed1ca7953f = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_autolink, mod_consts.const_str_plain_autolink, mod_consts.const_tuple_55df8a22bd8b315761db9c05718349bc_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$autolink$$$function__1_autolink(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_inline$autolink$$$function__1_autolink(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_silent = python_pars[1];
PyObject *var_pos = NULL;
PyObject *var_start = NULL;
PyObject *var_maximum = NULL;
PyObject *var_ch = NULL;
PyObject *var_url = NULL;
PyObject *var_fullUrl = NULL;
PyObject *var_token = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink = MAKE_FUNCTION_FRAME(tstate, code_objects_e8ccb4dbaf54da2a05aba2ed1ca7953f, module_markdown_it$rules_inline$autolink, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink = cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pos);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pos == NULL);
var_pos = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_src);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_1 = var_pos;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_60;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_state);
tmp_expression_value_4 = par_state;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pos);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_start == NULL);
var_start = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_state);
tmp_expression_value_5 = par_state;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_posMax);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_3;
}
loop_start_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 22;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_pos;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_4;

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_pos);
tmp_cmp_expr_left_2 = var_pos;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_2 = var_maximum;
tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 26;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = par_state;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_src);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_subscript_value_2 = var_pos;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_3 = var_ch;
tmp_cmp_expr_right_3 = mod_consts.const_str_chr_60;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_ch);
tmp_cmp_expr_left_4 = var_ch;
tmp_cmp_expr_right_4 = mod_consts.const_str_chr_62;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 21;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_stop_value_1;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_state;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_src);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_start);
tmp_add_expr_left_1 = var_start;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_8);

exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pos);
tmp_stop_value_1 = var_pos;
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_6;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_inline$autolink$AUTOLINK_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AUTOLINK_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_url);
tmp_args_element_value_1 = var_url;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 35;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_state;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_md);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_url);
tmp_args_element_value_2 = var_url;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 36;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_normalizeLink, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fullUrl == NULL);
var_fullUrl = tmp_assign_source_7;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_state;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_md);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fullUrl);
tmp_args_element_value_3 = var_fullUrl;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 37;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_validateLink, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_silent);
tmp_operand_value_2 = par_silent;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_4;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 41;
tmp_assign_source_8 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_8;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_1;
tmp_dict_key_1 = mod_consts.const_str_plain_href;
CHECK_OBJECT(var_fullUrl);
tmp_dict_value_1 = var_fullUrl;
tmp_assattr_value_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_token);
tmp_assattr_target_1 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_attrs, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = mod_consts.const_str_plain_autolink;
CHECK_OBJECT(var_token);
tmp_assattr_target_2 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_markup, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = mod_consts.const_str_plain_auto;
CHECK_OBJECT(var_token);
tmp_assattr_target_3 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_info, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_5;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 46;
tmp_assign_source_9 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_4;
PyObject *tmp_assattr_target_4;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_state;
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_md);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_url);
tmp_args_element_value_4 = var_url;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 47;
tmp_assattr_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_normalizeLinkText, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_assattr_target_4 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_content, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_7;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_7 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 49;
tmp_assign_source_10 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = mod_consts.const_str_plain_autolink;
CHECK_OBJECT(var_token);
tmp_assattr_target_5 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_markup, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = mod_consts.const_str_plain_auto;
CHECK_OBJECT(var_token);
tmp_assattr_target_6 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_info, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_13;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = par_state;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pos);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_2 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_url);
tmp_len_arg_1 = var_url;
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_2 = 2;
tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = tmp_iadd_expr_left_2;
tmp_inplace_assign_1__value = tmp_assign_source_12;

}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_7 = tmp_inplace_assign_1__value;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_assattr_target_7 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_pos, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_5;
tmp_called_instance_8 = module_var_accessor_markdown_it$rules_inline$autolink$EMAIL_RE(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EMAIL_RE);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_url);
tmp_args_element_value_5 = var_url;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 56;
tmp_cmp_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_search, tmp_args_element_value_5);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = par_state;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_md);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_normalizeLink);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = mod_consts.const_str_digest_59c33d34518c98b50110b8b5b227fe48;
CHECK_OBJECT(var_url);
tmp_add_expr_right_3 = var_url;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 57;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fullUrl == NULL);
var_fullUrl = tmp_assign_source_13;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_instance_9;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_7;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = par_state;
tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_md);
if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fullUrl);
tmp_args_element_value_7 = var_fullUrl;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 58;
tmp_operand_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_validateLink, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(par_silent);
tmp_operand_value_4 = par_silent;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_10;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_10 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 62;
tmp_assign_source_14 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_link_open_str_plain_a_int_pos_1_tuple, 0)
);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_14;
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_assattr_target_8;
tmp_dict_key_2 = mod_consts.const_str_plain_href;
CHECK_OBJECT(var_fullUrl);
tmp_dict_value_2 = var_fullUrl;
tmp_assattr_value_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assattr_value_8, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
CHECK_OBJECT(var_token);
tmp_assattr_target_8 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_attrs, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = mod_consts.const_str_plain_autolink;
CHECK_OBJECT(var_token);
tmp_assattr_target_9 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_markup, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = mod_consts.const_str_plain_auto;
CHECK_OBJECT(var_token);
tmp_assattr_target_10 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_info, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_11;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_11 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 67;
tmp_assign_source_15 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_text_str_empty_int_0_tuple, 0)
);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_called_instance_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_8;
PyObject *tmp_assattr_target_11;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = par_state;
tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_md);
if (tmp_called_instance_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_url);
tmp_args_element_value_8 = var_url;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 68;
tmp_assattr_value_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_normalizeLinkText, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_12);
Py_DECREF(tmp_called_instance_12);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_assattr_target_11 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_content, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_13;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_13 = par_state;
frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame.f_lineno = 70;
tmp_assign_source_16 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_13,
    mod_consts.const_str_plain_push,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_link_close_str_plain_a_int_neg_1_tuple, 0)
);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    assert(old != NULL);
    var_token = tmp_assign_source_16;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
tmp_assattr_value_12 = mod_consts.const_str_plain_autolink;
CHECK_OBJECT(var_token);
tmp_assattr_target_12 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_markup, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = mod_consts.const_str_plain_auto;
CHECK_OBJECT(var_token);
tmp_assattr_target_13 = var_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_info, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_10:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_18;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = par_state;
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_pos);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_2__value == NULL);
tmp_inplace_assign_2__value = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_iadd_expr_left_3 = tmp_inplace_assign_2__value;
CHECK_OBJECT(var_url);
tmp_len_arg_2 = var_url;
tmp_add_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_add_expr_right_4 = 2;
tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
assert(!(tmp_iadd_expr_right_3 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_18 = tmp_iadd_expr_left_3;
tmp_inplace_assign_2__value = tmp_assign_source_18;

}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_assattr_value_14 = tmp_inplace_assign_2__value;
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_assattr_target_14 = par_state;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_pos, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink,
    type_description_1,
    par_state,
    par_silent,
    var_pos,
    var_start,
    var_maximum,
    var_ch,
    var_url,
    var_fullUrl,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink == cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink);
    cache_frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$autolink$$$function__1_autolink);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_pos);
CHECK_OBJECT(var_pos);
Py_DECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_fullUrl);
var_fullUrl = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pos);
var_pos = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_fullUrl);
var_fullUrl = NULL;
Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$autolink$$$function__1_autolink(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$autolink$$$function__1_autolink,
        mod_consts.const_str_plain_autolink,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e8ccb4dbaf54da2a05aba2ed1ca7953f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$autolink,
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

static function_impl_code const function_table_markdown_it$rules_inline$autolink[] = {
impl_markdown_it$rules_inline$autolink$$$function__1_autolink,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_inline$autolink);
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
        module_markdown_it$rules_inline$autolink,
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
        function_table_markdown_it$rules_inline$autolink,
        sizeof(function_table_markdown_it$rules_inline$autolink) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_inline.autolink";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_inline$autolink(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_inline$autolink");

    // Store the module for future use.
    module_markdown_it$rules_inline$autolink = module;

    moduledict_markdown_it$rules_inline$autolink = MODULE_DICT(module_markdown_it$rules_inline$autolink);

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
        PRINT_STRING("markdown_it$rules_inline$autolink: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_inline$autolink: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_inline$autolink: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.autolink" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_inline$autolink\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_inline$autolink,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$autolink,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$autolink,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$autolink,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$autolink,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_inline$autolink);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_inline$autolink);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$autolink;
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_inline$autolink = MAKE_MODULE_FRAME(code_objects_630a5dfa114db24edb6ab97872ee90fd, module_markdown_it$rules_inline$autolink);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$autolink);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$autolink) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_inline$autolink$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_inline$autolink$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_inline$autolink;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$rules_inline$autolink->m_frame.f_lineno = 2;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_state_inline;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$rules_inline$autolink;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_StateInline_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_markdown_it$rules_inline$autolink->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$rules_inline$autolink,
        mod_consts.const_str_plain_StateInline,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_StateInline);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_markdown_it$rules_inline$autolink$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 6;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$autolink->m_frame.f_lineno = 6;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_365c2c923a1352383d01498c686d6440_tuple, 0)
);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_EMAIL_RE, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_markdown_it$rules_inline$autolink$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$autolink->m_frame.f_lineno = 9;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2fcdfcf5022c8c65dda5b7207b547ba0_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_AUTOLINK_RE, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_state;
tmp_dict_value_1 = module_var_accessor_markdown_it$rules_inline$autolink$StateInline(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StateInline);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_silent;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_8 = MAKE_FUNCTION_markdown_it$rules_inline$autolink$$$function__1_autolink(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)mod_consts.const_str_plain_autolink, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$autolink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$autolink->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$autolink, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_inline$autolink);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_inline$autolink", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.autolink" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_inline$autolink);
    return module_markdown_it$rules_inline$autolink;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$autolink, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_inline$autolink", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

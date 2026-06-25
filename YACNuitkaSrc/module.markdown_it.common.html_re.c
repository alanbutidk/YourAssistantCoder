/* Generated code for Python module 'markdown_it$common$html_re'
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



/* The "module_markdown_it$common$html_re" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$common$html_re;
PyDictObject *moduledict_markdown_it$common$html_re;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_b692085873b14fe5a816d47043c3fde9;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_re;
PyObject *const_str_digest_23995551346276250b9388928f7de96a;
PyObject *const_str_plain_attr_name;
PyObject *const_str_digest_570130f10181f19d8c54ce83914d3ab8;
PyObject *const_str_plain_unquoted;
PyObject *const_str_digest_c1f132c047d8f98067058a4495cbca66;
PyObject *const_str_plain_single_quoted;
PyObject *const_str_digest_207734800c19298768f2644078ca0f41;
PyObject *const_str_plain_double_quoted;
PyObject *const_str_digest_c64595dbb448219932b659de56da4f30;
PyObject *const_str_chr_124;
PyObject *const_str_chr_41;
PyObject *const_str_plain_attr_value;
PyObject *const_str_digest_a7d64a002aeb35db940adeeb4e995f21;
PyObject *const_str_digest_5db927cc849eb07e164d0ae02e95feea;
PyObject *const_str_digest_2fcf8af31ce7f224f3bb6771faa36822;
PyObject *const_str_plain_attribute;
PyObject *const_str_digest_ca977963fde09e2755210110fd899c52;
PyObject *const_str_digest_51ec26547507ed3a0c75e745203aa357;
PyObject *const_str_plain_open_tag;
PyObject *const_str_digest_3b767a4aa44bd26d3a19b4b189b95b08;
PyObject *const_str_plain_close_tag;
PyObject *const_str_digest_956103d9cb183479ced50663363de282;
PyObject *const_str_plain_comment;
PyObject *const_str_digest_a12eb50ff6a07d2b2a6b1aff76252f97;
PyObject *const_str_plain_processing;
PyObject *const_str_digest_eeebac7e8fbcb4f7dff8207ef4a429b4;
PyObject *const_str_plain_declaration;
PyObject *const_str_digest_21ce911dd7f98615689b515224d12f83;
PyObject *const_str_plain_cdata;
PyObject *const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0;
PyObject *const_str_plain_HTML_TAG_RE;
PyObject *const_str_plain_HTML_OPEN_CLOSE_TAG_STR;
PyObject *const_str_plain_HTML_OPEN_CLOSE_TAG_RE;
PyObject *const_str_digest_6a64238dd1995fc6de40a3dd25dc19e3;
PyObject *const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[39];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.common.html_re"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_b692085873b14fe5a816d47043c3fde9);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_23995551346276250b9388928f7de96a);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_570130f10181f19d8c54ce83914d3ab8);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_unquoted);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1f132c047d8f98067058a4495cbca66);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_single_quoted);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_207734800c19298768f2644078ca0f41);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_double_quoted);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_chr_124);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_attr_value);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7d64a002aeb35db940adeeb4e995f21);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_5db927cc849eb07e164d0ae02e95feea);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fcf8af31ce7f224f3bb6771faa36822);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_attribute);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca977963fde09e2755210110fd899c52);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_51ec26547507ed3a0c75e745203aa357);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_tag);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b767a4aa44bd26d3a19b4b189b95b08);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_tag);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_956103d9cb183479ced50663363de282);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_comment);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_a12eb50ff6a07d2b2a6b1aff76252f97);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_processing);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_eeebac7e8fbcb4f7dff8207ef4a429b4);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_declaration);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_21ce911dd7f98615689b515224d12f83);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_cdata);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_TAG_RE);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_RE);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a64238dd1995fc6de40a3dd25dc19e3);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b);
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
void checkModuleConstants_markdown_it$common$html_re(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_b692085873b14fe5a816d47043c3fde9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b692085873b14fe5a816d47043c3fde9);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_23995551346276250b9388928f7de96a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23995551346276250b9388928f7de96a);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attr_name);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_570130f10181f19d8c54ce83914d3ab8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_570130f10181f19d8c54ce83914d3ab8);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_unquoted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unquoted);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1f132c047d8f98067058a4495cbca66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1f132c047d8f98067058a4495cbca66);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_single_quoted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_single_quoted);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_207734800c19298768f2644078ca0f41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_207734800c19298768f2644078ca0f41);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_double_quoted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double_quoted);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_chr_124));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_124);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_attr_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attr_value);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7d64a002aeb35db940adeeb4e995f21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7d64a002aeb35db940adeeb4e995f21);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_5db927cc849eb07e164d0ae02e95feea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5db927cc849eb07e164d0ae02e95feea);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fcf8af31ce7f224f3bb6771faa36822));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fcf8af31ce7f224f3bb6771faa36822);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_attribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attribute);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca977963fde09e2755210110fd899c52));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca977963fde09e2755210110fd899c52);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_51ec26547507ed3a0c75e745203aa357));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51ec26547507ed3a0c75e745203aa357);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_tag);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b767a4aa44bd26d3a19b4b189b95b08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b767a4aa44bd26d3a19b4b189b95b08);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_tag);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_956103d9cb183479ced50663363de282));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_956103d9cb183479ced50663363de282);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_comment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comment);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_a12eb50ff6a07d2b2a6b1aff76252f97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a12eb50ff6a07d2b2a6b1aff76252f97);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_processing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_processing);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_eeebac7e8fbcb4f7dff8207ef4a429b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eeebac7e8fbcb4f7dff8207ef4a429b4);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_declaration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_declaration);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_21ce911dd7f98615689b515224d12f83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21ce911dd7f98615689b515224d12f83);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_cdata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cdata);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_TAG_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTML_TAG_RE);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_RE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_RE);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a64238dd1995fc6de40a3dd25dc19e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a64238dd1995fc6de40a3dd25dc19e3);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_markdown_it$common$html_re$HTML_OPEN_CLOSE_TAG_STR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$attr_name(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_name);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$attr_value(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_value);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr_value);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr_value, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attr_value);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attr_value, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_value);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_value);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_value);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$attribute(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attribute);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attribute);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attribute, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_attribute);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_attribute, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attribute);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attribute);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_attribute);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$cdata(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_cdata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cdata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cdata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cdata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cdata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_cdata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_cdata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cdata);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$close_tag(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_close_tag);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_close_tag);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_close_tag, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_close_tag);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_close_tag, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_close_tag);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_close_tag);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_close_tag);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$comment(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_comment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_comment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_comment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_comment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_comment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_comment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_comment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_comment);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$declaration(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_declaration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_declaration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_declaration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_declaration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_declaration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_declaration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_declaration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_declaration);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$double_quoted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_double_quoted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_double_quoted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_double_quoted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_double_quoted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_double_quoted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_double_quoted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_double_quoted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_double_quoted);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$open_tag(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tag);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_tag);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_tag, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_tag);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_tag, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tag);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tag);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tag);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$processing(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_processing);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_processing);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_processing, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_processing);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_processing, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_processing);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_processing);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_processing);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$single_quoted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_single_quoted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_single_quoted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_single_quoted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_single_quoted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_single_quoted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_single_quoted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_single_quoted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_single_quoted);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$common$html_re$unquoted(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$common$html_re->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$common$html_re->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_unquoted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$common$html_re->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unquoted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unquoted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unquoted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unquoted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_unquoted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_unquoted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unquoted);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_867861c0801a7685972adcfd0d1b2575;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6a64238dd1995fc6de40a3dd25dc19e3); CHECK_OBJECT(module_filename_obj);
code_objects_867861c0801a7685972adcfd0d1b2575 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b, mod_consts.const_str_digest_3adbcd20fd3bea2c5883259f9d9df82b, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_markdown_it$common$html_re[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$common$html_re);
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
        module_markdown_it$common$html_re,
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
        function_table_markdown_it$common$html_re,
        sizeof(function_table_markdown_it$common$html_re) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.common.html_re";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$common$html_re(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$common$html_re");

    // Store the module for future use.
    module_markdown_it$common$html_re = module;

    moduledict_markdown_it$common$html_re = MODULE_DICT(module_markdown_it$common$html_re);

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
        PRINT_STRING("markdown_it$common$html_re: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$common$html_re: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$common$html_re: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.common.html_re" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$common$html_re\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$common$html_re,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$common$html_re,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$common$html_re,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$common$html_re,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$common$html_re,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$common$html_re);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$common$html_re);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_markdown_it$common$html_re;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_b692085873b14fe5a816d47043c3fde9;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$common$html_re = MAKE_MODULE_FRAME(code_objects_867861c0801a7685972adcfd0d1b2575, module_markdown_it$common$html_re);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$common$html_re);
assert(Py_REFCNT(frame_frame_markdown_it$common$html_re) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$common$html_re$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$common$html_re$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$common$html_re;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$common$html_re->m_frame.f_lineno = 3;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_23995551346276250b9388928f7de96a;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_name, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_digest_570130f10181f19d8c54ce83914d3ab8;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_unquoted, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_digest_c1f132c047d8f98067058a4495cbca66;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_single_quoted, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_digest_207734800c19298768f2644078ca0f41;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_double_quoted, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
tmp_add_expr_left_6 = mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30;
tmp_add_expr_right_6 = module_var_accessor_markdown_it$common$html_re$unquoted(tstate);
assert(!(tmp_add_expr_right_6 == NULL));
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
assert(!(tmp_add_expr_left_5 == NULL));
tmp_add_expr_right_5 = mod_consts.const_str_chr_124;
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
assert(!(tmp_add_expr_left_4 == NULL));
tmp_add_expr_right_4 = module_var_accessor_markdown_it$common$html_re$single_quoted(tstate);
assert(!(tmp_add_expr_right_4 == NULL));
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
assert(!(tmp_add_expr_left_3 == NULL));
tmp_add_expr_right_3 = mod_consts.const_str_chr_124;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
assert(!(tmp_add_expr_left_2 == NULL));
tmp_add_expr_right_2 = module_var_accessor_markdown_it$common$html_re$double_quoted(tstate);
assert(!(tmp_add_expr_right_2 == NULL));
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = mod_consts.const_str_chr_41;
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attr_value, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
tmp_add_expr_left_10 = mod_consts.const_str_digest_a7d64a002aeb35db940adeeb4e995f21;
tmp_add_expr_right_10 = module_var_accessor_markdown_it$common$html_re$attr_name(tstate);
assert(!(tmp_add_expr_right_10 == NULL));
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_10, tmp_add_expr_right_10);
assert(!(tmp_add_expr_left_9 == NULL));
tmp_add_expr_right_9 = mod_consts.const_str_digest_5db927cc849eb07e164d0ae02e95feea;
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
assert(!(tmp_add_expr_left_8 == NULL));
tmp_add_expr_right_8 = module_var_accessor_markdown_it$common$html_re$attr_value(tstate);
assert(!(tmp_add_expr_right_8 == NULL));
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
assert(!(tmp_add_expr_left_7 == NULL));
tmp_add_expr_right_7 = mod_consts.const_str_digest_2fcf8af31ce7f224f3bb6771faa36822;
tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_attribute, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_add_expr_left_12;
PyObject *tmp_add_expr_right_12;
tmp_add_expr_left_12 = mod_consts.const_str_digest_ca977963fde09e2755210110fd899c52;
tmp_add_expr_right_12 = module_var_accessor_markdown_it$common$html_re$attribute(tstate);
assert(!(tmp_add_expr_right_12 == NULL));
tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_12, tmp_add_expr_right_12);
assert(!(tmp_add_expr_left_11 == NULL));
tmp_add_expr_right_11 = mod_consts.const_str_digest_51ec26547507ed3a0c75e745203aa357;
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
CHECK_OBJECT(tmp_add_expr_left_11);
Py_DECREF(tmp_add_expr_left_11);
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tag, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_3b767a4aa44bd26d3a19b4b189b95b08;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_close_tag, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_digest_956103d9cb183479ced50663363de282;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_comment, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_a12eb50ff6a07d2b2a6b1aff76252f97;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_processing, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_eeebac7e8fbcb4f7dff8207ef4a429b4;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_declaration, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_21ce911dd7f98615689b515224d12f83;
UPDATE_STRING_DICT0(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_cdata, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_13;
PyObject *tmp_add_expr_right_13;
PyObject *tmp_add_expr_left_14;
PyObject *tmp_add_expr_right_14;
PyObject *tmp_add_expr_left_15;
PyObject *tmp_add_expr_right_15;
PyObject *tmp_add_expr_left_16;
PyObject *tmp_add_expr_right_16;
PyObject *tmp_add_expr_left_17;
PyObject *tmp_add_expr_right_17;
PyObject *tmp_add_expr_left_18;
PyObject *tmp_add_expr_right_18;
PyObject *tmp_add_expr_left_19;
PyObject *tmp_add_expr_right_19;
PyObject *tmp_add_expr_left_20;
PyObject *tmp_add_expr_right_20;
PyObject *tmp_add_expr_left_21;
PyObject *tmp_add_expr_right_21;
PyObject *tmp_add_expr_left_22;
PyObject *tmp_add_expr_right_22;
PyObject *tmp_add_expr_left_23;
PyObject *tmp_add_expr_right_23;
PyObject *tmp_add_expr_left_24;
PyObject *tmp_add_expr_right_24;
tmp_expression_value_1 = module_var_accessor_markdown_it$common$html_re$re(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_24 = mod_consts.const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0;
tmp_add_expr_right_24 = module_var_accessor_markdown_it$common$html_re$open_tag(tstate);
if (unlikely(tmp_add_expr_right_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_open_tag);
}

if (tmp_add_expr_right_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
if (tmp_add_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_23 = mod_consts.const_str_chr_124;
tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_23, tmp_add_expr_right_23);
CHECK_OBJECT(tmp_add_expr_left_23);
Py_DECREF(tmp_add_expr_left_23);
if (tmp_add_expr_left_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_22 = module_var_accessor_markdown_it$common$html_re$close_tag(tstate);
if (unlikely(tmp_add_expr_right_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_close_tag);
}

if (tmp_add_expr_right_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_22);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
CHECK_OBJECT(tmp_add_expr_left_22);
Py_DECREF(tmp_add_expr_left_22);
if (tmp_add_expr_left_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_21 = mod_consts.const_str_chr_124;
tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_21, tmp_add_expr_right_21);
CHECK_OBJECT(tmp_add_expr_left_21);
Py_DECREF(tmp_add_expr_left_21);
if (tmp_add_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_20 = module_var_accessor_markdown_it$common$html_re$comment(tstate);
if (unlikely(tmp_add_expr_right_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_comment);
}

if (tmp_add_expr_right_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_20);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
CHECK_OBJECT(tmp_add_expr_left_20);
Py_DECREF(tmp_add_expr_left_20);
if (tmp_add_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_19 = mod_consts.const_str_chr_124;
tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_19, tmp_add_expr_right_19);
CHECK_OBJECT(tmp_add_expr_left_19);
Py_DECREF(tmp_add_expr_left_19);
if (tmp_add_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 30;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_18 = module_var_accessor_markdown_it$common$html_re$processing(tstate);
if (unlikely(tmp_add_expr_right_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_processing);
}

if (tmp_add_expr_right_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_18);

exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
CHECK_OBJECT(tmp_add_expr_left_18);
Py_DECREF(tmp_add_expr_left_18);
if (tmp_add_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_17 = mod_consts.const_str_chr_124;
tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_17, tmp_add_expr_right_17);
CHECK_OBJECT(tmp_add_expr_left_17);
Py_DECREF(tmp_add_expr_left_17);
if (tmp_add_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_16 = module_var_accessor_markdown_it$common$html_re$declaration(tstate);
if (unlikely(tmp_add_expr_right_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_declaration);
}

if (tmp_add_expr_right_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
CHECK_OBJECT(tmp_add_expr_left_16);
Py_DECREF(tmp_add_expr_left_16);
if (tmp_add_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_15 = mod_consts.const_str_chr_124;
tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
CHECK_OBJECT(tmp_add_expr_left_15);
Py_DECREF(tmp_add_expr_left_15);
if (tmp_add_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_14 = module_var_accessor_markdown_it$common$html_re$cdata(tstate);
if (unlikely(tmp_add_expr_right_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cdata);
}

if (tmp_add_expr_right_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
CHECK_OBJECT(tmp_add_expr_left_14);
Py_DECREF(tmp_add_expr_left_14);
if (tmp_add_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_13 = mod_consts.const_str_chr_41;
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
CHECK_OBJECT(tmp_add_expr_left_13);
Py_DECREF(tmp_add_expr_left_13);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 36;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$html_re->m_frame.f_lineno = 23;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_TAG_RE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_25;
PyObject *tmp_add_expr_right_25;
PyObject *tmp_add_expr_left_26;
PyObject *tmp_add_expr_right_26;
PyObject *tmp_add_expr_left_27;
PyObject *tmp_add_expr_right_27;
PyObject *tmp_add_expr_left_28;
PyObject *tmp_add_expr_right_28;
tmp_add_expr_left_28 = mod_consts.const_str_digest_4d29cb51656cb27b3da3eb0fdff7d7a0;
tmp_add_expr_right_28 = module_var_accessor_markdown_it$common$html_re$open_tag(tstate);
if (unlikely(tmp_add_expr_right_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_open_tag);
}

if (tmp_add_expr_right_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_27 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
if (tmp_add_expr_left_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_27 = mod_consts.const_str_chr_124;
tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_27, tmp_add_expr_right_27);
CHECK_OBJECT(tmp_add_expr_left_27);
Py_DECREF(tmp_add_expr_left_27);
if (tmp_add_expr_left_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_26 = module_var_accessor_markdown_it$common$html_re$close_tag(tstate);
if (unlikely(tmp_add_expr_right_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_close_tag);
}

if (tmp_add_expr_right_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_26);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
CHECK_OBJECT(tmp_add_expr_left_26);
Py_DECREF(tmp_add_expr_left_26);
if (tmp_add_expr_left_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_25 = mod_consts.const_str_chr_41;
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_25, tmp_add_expr_right_25);
CHECK_OBJECT(tmp_add_expr_left_25);
Py_DECREF(tmp_add_expr_left_25);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_markdown_it$common$html_re$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_compile);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_markdown_it$common$html_re$HTML_OPEN_CLOSE_TAG_STR(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_STR);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_markdown_it$common$html_re->m_frame.f_lineno = 39;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)mod_consts.const_str_plain_HTML_OPEN_CLOSE_TAG_RE, tmp_assign_source_19);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$common$html_re, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$common$html_re->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$common$html_re, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$common$html_re);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$common$html_re", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.common.html_re" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$common$html_re);
    return module_markdown_it$common$html_re;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$common$html_re, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$common$html_re", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'textual$widgets$_label'
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



/* The "module_textual$widgets$_label" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$widgets$_label;
PyDictObject *moduledict_textual$widgets$_label;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_1b5edc934a9cc7f75032d09162ce8966_tuple;
PyObject *const_str_plain_add_class;
PyObject *const_str_digest_56cb61a8c5da94daab6df28d31375e9d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Literal;
PyObject *const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
PyObject *const_tuple_str_plain_VisualType_tuple;
PyObject *const_str_plain_VisualType;
PyObject *const_str_digest_633dcd707105ca4a456fbda8f3770e71;
PyObject *const_tuple_str_plain_Static_tuple;
PyObject *const_str_plain_Static;
PyObject *const_tuple_075734c6ef4b28e6017b472cbf629f56_tuple;
PyObject *const_str_plain_LabelVariant;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Label;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f322c6d7ccf991501332bda59733c62c;
PyObject *const_str_digest_fe3c82cc57939bd08055ee65b3f30a1b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_13;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_19c82f344edb7059512d18420631201d;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_dict_5e417d6f4235b90fecf72f525df0f6b1;
PyObject *const_dict_5443920bdae8b0360f20b9fa808ea16d;
PyObject *const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_208757892c6a5237edfd80ac2bdee21d;
PyObject *const_str_digest_3179ce4e6f75ac1de813776ca1672118;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_8f594d691f4fc96bbf8bddf6cfb18f46_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[37];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.widgets._label"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_1b5edc934a9cc7f75032d09162ce8966_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_class);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_56cb61a8c5da94daab6df28d31375e9d);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VisualType_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_VisualType);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Static_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Static);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_075734c6ef4b28e6017b472cbf629f56_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_LabelVariant);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Label);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_f322c6d7ccf991501332bda59733c62c);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe3c82cc57939bd08055ee65b3f30a1b);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_19c82f344edb7059512d18420631201d);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_5e417d6f4235b90fecf72f525df0f6b1);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_5443920bdae8b0360f20b9fa808ea16d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_208757892c6a5237edfd80ac2bdee21d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_3179ce4e6f75ac1de813776ca1672118);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_8f594d691f4fc96bbf8bddf6cfb18f46_tuple);
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
void checkModuleConstants_textual$widgets$_label(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_1b5edc934a9cc7f75032d09162ce8966_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1b5edc934a9cc7f75032d09162ce8966_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_class);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_56cb61a8c5da94daab6df28d31375e9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56cb61a8c5da94daab6df28d31375e9d);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VisualType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VisualType_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_VisualType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VisualType);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Static_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Static_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Static));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Static);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_075734c6ef4b28e6017b472cbf629f56_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_075734c6ef4b28e6017b472cbf629f56_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_LabelVariant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LabelVariant);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Label);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_f322c6d7ccf991501332bda59733c62c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f322c6d7ccf991501332bda59733c62c);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe3c82cc57939bd08055ee65b3f30a1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe3c82cc57939bd08055ee65b3f30a1b);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_13));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_13);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_19c82f344edb7059512d18420631201d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19c82f344edb7059512d18420631201d);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_5e417d6f4235b90fecf72f525df0f6b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5e417d6f4235b90fecf72f525df0f6b1);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_5443920bdae8b0360f20b9fa808ea16d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5443920bdae8b0360f20b9fa808ea16d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_208757892c6a5237edfd80ac2bdee21d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_208757892c6a5237edfd80ac2bdee21d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_3179ce4e6f75ac1de813776ca1672118));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3179ce4e6f75ac1de813776ca1672118);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_8f594d691f4fc96bbf8bddf6cfb18f46_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f594d691f4fc96bbf8bddf6cfb18f46_tuple);
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
static PyObject *module_var_accessor_textual$widgets$_label$Literal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_label->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_label->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_label->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_label$Static(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_label->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_label->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_label->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Static);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Static, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Static);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Static, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_label$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_label->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_label->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_label->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cd773d1c2cb1b9f3d5833ad842593b87;
static PyCodeObject *code_objects_9b5b1ca031aacbd82232297dbc8b58ac;
static PyCodeObject *code_objects_0ca2f1321fe21617764e72c4cb771b11;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_208757892c6a5237edfd80ac2bdee21d); CHECK_OBJECT(module_filename_obj);
code_objects_cd773d1c2cb1b9f3d5833ad842593b87 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3179ce4e6f75ac1de813776ca1672118, mod_consts.const_str_digest_3179ce4e6f75ac1de813776ca1672118, NULL, NULL, 0, 0, 0);
code_objects_9b5b1ca031aacbd82232297dbc8b58ac = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Label, mod_consts.const_str_plain_Label, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0ca2f1321fe21617764e72c4cb771b11 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899, mod_consts.const_tuple_8f594d691f4fc96bbf8bddf6cfb18f46_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 8, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$widgets$_label$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$widgets$_label$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_variant = python_pars[2];
PyObject *par_expand = python_pars[3];
PyObject *par_shrink = python_pars[4];
PyObject *par_markup = python_pars[5];
PyObject *par_name = python_pars[6];
PyObject *par_id = python_pars[7];
PyObject *par_classes = python_pars[8];
PyObject *par_disabled = python_pars[9];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_label$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_label$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_label$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_label$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_label$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_label$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0ca2f1321fe21617764e72c4cb771b11, module_textual$widgets$_label, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_label$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$widgets$_label$$$function__1___init__ = cache_frame_frame_textual$widgets$_label$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_label$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_label$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_label, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_content);
tmp_kw_call_arg_value_0_1 = par_content;
CHECK_OBJECT(par_expand);
tmp_kw_call_dict_value_0_1 = par_expand;
CHECK_OBJECT(par_shrink);
tmp_kw_call_dict_value_1_1 = par_shrink;
CHECK_OBJECT(par_markup);
tmp_kw_call_dict_value_2_1 = par_markup;
CHECK_OBJECT(par_name);
tmp_kw_call_dict_value_3_1 = par_name;
CHECK_OBJECT(par_id);
tmp_kw_call_dict_value_4_1 = par_id;
CHECK_OBJECT(par_classes);
tmp_kw_call_dict_value_5_1 = par_classes;
CHECK_OBJECT(par_disabled);
tmp_kw_call_dict_value_6_1 = par_disabled;
frame_frame_textual$widgets$_label$$$function__1___init__->m_frame.f_lineno = 62;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_1b5edc934a9cc7f75032d09162ce8966_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_variant);
tmp_truth_name_1 = CHECK_IF_TRUE(par_variant);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_variant);
tmp_args_element_value_1 = par_variant;
frame_frame_textual$widgets$_label$$$function__1___init__->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_class, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_label$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_label$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_label$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_label$$$function__1___init__,
    type_description_1,
    par_self,
    par_content,
    par_variant,
    par_expand,
    par_shrink,
    par_markup,
    par_name,
    par_id,
    par_classes,
    par_disabled,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_label$$$function__1___init__ == cache_frame_frame_textual$widgets$_label$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_label$$$function__1___init__);
    cache_frame_frame_textual$widgets$_label$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_label$$$function__1___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_variant);
Py_DECREF(par_variant);
CHECK_OBJECT(par_expand);
Py_DECREF(par_expand);
CHECK_OBJECT(par_shrink);
Py_DECREF(par_shrink);
CHECK_OBJECT(par_markup);
Py_DECREF(par_markup);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_variant);
Py_DECREF(par_variant);
CHECK_OBJECT(par_expand);
Py_DECREF(par_expand);
CHECK_OBJECT(par_shrink);
Py_DECREF(par_shrink);
CHECK_OBJECT(par_markup);
Py_DECREF(par_markup);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_label$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_label$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_97d5e7d2a5e3f7c322e0d9addc132899,
#endif
        code_objects_0ca2f1321fe21617764e72c4cb771b11,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$widgets$_label,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_textual$widgets$_label[] = {
impl_textual$widgets$_label$$$function__1___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$widgets$_label);
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
        module_textual$widgets$_label,
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
        function_table_textual$widgets$_label,
        sizeof(function_table_textual$widgets$_label) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.widgets._label";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$widgets$_label(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$widgets$_label");

    // Store the module for future use.
    module_textual$widgets$_label = module;

    moduledict_textual$widgets$_label = MODULE_DICT(module_textual$widgets$_label);

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
        PRINT_STRING("textual$widgets$_label: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$widgets$_label: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$widgets$_label: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._label" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$widgets$_label\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$widgets$_label,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_label,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_label,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_label,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_label,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$widgets$_label);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$widgets$_label);
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

        UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_label;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$widgets$_label$$$class__1_Label_13 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_label$$$class__1_Label_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_56cb61a8c5da94daab6df28d31375e9d;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$widgets$_label = MAKE_MODULE_FRAME(code_objects_cd773d1c2cb1b9f3d5833ad842593b87, module_textual$widgets$_label);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_label);
assert(Py_REFCNT(frame_frame_textual$widgets$_label) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$widgets$_label$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$widgets$_label$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$widgets$_label,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$widgets$_label;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_VisualType_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$widgets$_label->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$widgets$_label,
        mod_consts.const_str_plain_VisualType,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_VisualType);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_VisualType, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$widgets$_label;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Static_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$widgets$_label->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$widgets$_label,
        mod_consts.const_str_plain_Static,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Static);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Static, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_textual$widgets$_label$Literal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_075734c6ef4b28e6017b472cbf629f56_tuple;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_LabelVariant, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$widgets$_label$Static(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Static);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_9, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_10 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Label;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_label->m_frame.f_lineno = 13;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
frame_frame_textual$widgets$_label->m_frame.f_lineno = 13;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 13;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
branch_end_1:;
{
PyObject *tmp_assign_source_15;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$widgets$_label$$$class__1_Label_13 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f322c6d7ccf991501332bda59733c62c;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_fe3c82cc57939bd08055ee65b3f30a1b;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Label;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_13;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
frame_frame_textual$widgets$_label$$$class__1_Label_2 = MAKE_CLASS_FRAME(tstate, code_objects_9b5b1ca031aacbd82232297dbc8b58ac, module_textual$widgets$_label, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_label$$$class__1_Label_2);
assert(Py_REFCNT(frame_frame_textual$widgets$_label$$$class__1_Label_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_19c82f344edb7059512d18420631201d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_5e417d6f4235b90fecf72f525df0f6b1);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5443920bdae8b0360f20b9fa808ea16d);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_label$$$function__1___init__(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_label$$$class__1_Label_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_label$$$class__1_Label_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_label$$$class__1_Label_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_label$$$class__1_Label_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_label$$$class__1_Label_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_label$$$class__1_Label_13, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Label;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$widgets$_label$$$class__1_Label_13;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_label->m_frame.f_lineno = 13;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_16);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_15 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_textual$widgets$_label$$$class__1_Label_13);
locals_textual$widgets$_label$$$class__1_Label_13 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_label$$$class__1_Label_13);
locals_textual$widgets$_label$$$class__1_Label_13 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 13;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_label, (Nuitka_StringObject *)mod_consts.const_str_plain_Label, tmp_assign_source_15);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_label, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_label->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_label, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$widgets$_label);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$widgets$_label", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._label" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$widgets$_label);
    return module_textual$widgets$_label;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_label, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$widgets$_label", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

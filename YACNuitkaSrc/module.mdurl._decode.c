/* Generated code for Python module 'mdurl$_decode'
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



/* The "module_mdurl$_decode" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mdurl$_decode;
PyDictObject *moduledict_mdurl$_decode;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_decode_cache;
PyObject *const_xrange_0_128;
PyObject *const_str_plain_cache;
PyObject *const_str_chr_37;
PyObject *const_str_plain_0;
PyObject *const_slice_int_pos_2_none_none;
PyObject *const_str_plain_upper;
PyObject *const_slice_int_neg_2_none_none;
PyObject *const_str_plain_get_decode_cache;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_repl_func_with_cache;
PyObject *const_tuple_str_plain_cache_tuple;
PyObject *const_str_plain_re;
PyObject *const_str_plain_sub;
PyObject *const_str_digest_9f7705a5ed713dbc105f0eac3f5e5246;
PyObject *const_str_plain_IGNORECASE;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_group;
PyObject *const_str_plain_i;
PyObject *const_int_pos_16;
PyObject *const_str_plain_result;
PyObject *const_int_pos_224;
PyObject *const_int_pos_192;
PyObject *const_str_plain_decode;
PyObject *const_str_digest_f286886bf19d693a40ea6089aa478718;
PyObject *const_int_pos_240;
PyObject *const_str_digest_e8d544bf75098b0e307b64d55b80c3a0;
PyObject *const_int_pos_248;
PyObject *const_str_digest_03a27baef4c3c9f79106d4320072d2df;
PyObject *const_str_chr_65533;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Sequence_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_functools;
PyObject *const_str_digest_e88381ac1ff6e3e5b3d009f2689b943c;
PyObject *const_str_plain_DECODE_DEFAULT_CHARS;
PyObject *const_str_plain_DECODE_COMPONENT_CHARS;
PyObject *const_str_digest_5520352aedbd1723efd5efd9a9ba2525;
PyObject *const_dict_59c9504f4f9ea0bffbfca61950505ae5;
PyObject *const_dict_fecf0257e2dd4a6bc98b79f862edc180;
PyObject *const_dict_7f9f8dcf991780e3b8efa78ae5e8234b;
PyObject *const_str_digest_11732b59ff0e1dee01f52874346e59f4;
PyObject *const_str_digest_bd31fdfd48470e737eef49c9c331bde5;
PyObject *const_tuple_26e07ab6040e4185fa7fcb1dcc0ecf9f_tuple;
PyObject *const_tuple_ef666a723b9e89ecc1215669cafa2cf5_tuple;
PyObject *const_tuple_89413ea0152e6a29355572c8ae10553a_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[49];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("mdurl._decode"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode_cache);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_xrange_0_128);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_cache);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_0);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_2_none_none);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_decode_cache);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_repl_func_with_cache);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cache_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f7705a5ed713dbc105f0eac3f5e5246);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_i);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_224);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_f286886bf19d693a40ea6089aa478718);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_240);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8d544bf75098b0e307b64d55b80c3a0);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_248);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_03a27baef4c3c9f79106d4320072d2df);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_chr_65533);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_e88381ac1ff6e3e5b3d009f2689b943c);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_COMPONENT_CHARS);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_59c9504f4f9ea0bffbfca61950505ae5);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_fecf0257e2dd4a6bc98b79f862edc180);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_7f9f8dcf991780e3b8efa78ae5e8234b);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_11732b59ff0e1dee01f52874346e59f4);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd31fdfd48470e737eef49c9c331bde5);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_26e07ab6040e4185fa7fcb1dcc0ecf9f_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_ef666a723b9e89ecc1215669cafa2cf5_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_89413ea0152e6a29355572c8ae10553a_tuple);
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
void checkModuleConstants_mdurl$_decode(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode_cache);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_xrange_0_128));
CHECK_OBJECT_DEEP(mod_consts.const_xrange_0_128);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cache);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_chr_37));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_37);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_0);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_2_none_none);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upper);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_2_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_2_none_none);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_decode_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_decode_cache);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_repl_func_with_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_repl_func_with_cache);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cache_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cache_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f7705a5ed713dbc105f0eac3f5e5246));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f7705a5ed713dbc105f0eac3f5e5246);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORECASE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORECASE);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_i));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_i);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_224));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_224);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_192));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_192);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_f286886bf19d693a40ea6089aa478718));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f286886bf19d693a40ea6089aa478718);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_240));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_240);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8d544bf75098b0e307b64d55b80c3a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8d544bf75098b0e307b64d55b80c3a0);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_248));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_248);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_03a27baef4c3c9f79106d4320072d2df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03a27baef4c3c9f79106d4320072d2df);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_chr_65533));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_65533);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Sequence_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_e88381ac1ff6e3e5b3d009f2689b943c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e88381ac1ff6e3e5b3d009f2689b943c);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_COMPONENT_CHARS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DECODE_COMPONENT_CHARS);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_59c9504f4f9ea0bffbfca61950505ae5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_59c9504f4f9ea0bffbfca61950505ae5);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_fecf0257e2dd4a6bc98b79f862edc180));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fecf0257e2dd4a6bc98b79f862edc180);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_7f9f8dcf991780e3b8efa78ae5e8234b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7f9f8dcf991780e3b8efa78ae5e8234b);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_11732b59ff0e1dee01f52874346e59f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11732b59ff0e1dee01f52874346e59f4);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd31fdfd48470e737eef49c9c331bde5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd31fdfd48470e737eef49c9c331bde5);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_26e07ab6040e4185fa7fcb1dcc0ecf9f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_26e07ab6040e4185fa7fcb1dcc0ecf9f_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_ef666a723b9e89ecc1215669cafa2cf5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef666a723b9e89ecc1215669cafa2cf5_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_89413ea0152e6a29355572c8ae10553a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_89413ea0152e6a29355572c8ae10553a_tuple);
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
static PyObject *module_var_accessor_mdurl$_decode$DECODE_DEFAULT_CHARS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$decode_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_decode_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_decode_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_cache);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$get_decode_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_get_decode_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_decode_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_decode_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_decode_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_decode_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_get_decode_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_get_decode_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_decode_cache);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_mdurl$_decode$repl_func_with_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_decode->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_decode->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_repl_func_with_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_decode->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_repl_func_with_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_repl_func_with_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_repl_func_with_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_repl_func_with_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_repl_func_with_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_repl_func_with_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_repl_func_with_cache);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e3f417260b833344f7c3bcd1b54b168e;
static PyCodeObject *code_objects_3b00365974f6c5f83be9a0bce4c81680;
static PyCodeObject *code_objects_1a54f6cd9f43544ba7c602f891c2f70f;
static PyCodeObject *code_objects_40c20de6d8d2f5fd6b179e1ee8312391;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_11732b59ff0e1dee01f52874346e59f4); CHECK_OBJECT(module_filename_obj);
code_objects_e3f417260b833344f7c3bcd1b54b168e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_bd31fdfd48470e737eef49c9c331bde5, mod_consts.const_str_digest_bd31fdfd48470e737eef49c9c331bde5, NULL, NULL, 0, 0, 0);
code_objects_3b00365974f6c5f83be9a0bce4c81680 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode, mod_consts.const_str_plain_decode, mod_consts.const_tuple_26e07ab6040e4185fa7fcb1dcc0ecf9f_tuple, NULL, 2, 0, 0);
code_objects_1a54f6cd9f43544ba7c602f891c2f70f = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_decode_cache, mod_consts.const_str_plain_get_decode_cache, mod_consts.const_tuple_ef666a723b9e89ecc1215669cafa2cf5_tuple, NULL, 1, 0, 0);
code_objects_40c20de6d8d2f5fd6b179e1ee8312391 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_repl_func_with_cache, mod_consts.const_str_plain_repl_func_with_cache, mod_consts.const_tuple_89413ea0152e6a29355572c8ae10553a_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__1_get_decode_cache(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__2_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__3_repl_func_with_cache(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_mdurl$_decode$$$function__1_get_decode_cache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_exclude = python_pars[0];
PyObject *var_cache = NULL;
PyObject *var_i = NULL;
PyObject *var_ch = NULL;
PyObject *var_ch_code = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_decode$$$function__1_get_decode_cache;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache)) {
    Py_XDECREF(cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache = MAKE_FUNCTION_FRAME(tstate, code_objects_1a54f6cd9f43544ba7c602f891c2f70f, module_mdurl$_decode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache->m_type_description == NULL);
frame_frame_mdurl$_decode$$$function__1_get_decode_cache = cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_decode$$$function__1_get_decode_cache);
assert(Py_REFCNT(frame_frame_mdurl$_decode$$$function__1_get_decode_cache) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_exclude);
tmp_cmp_expr_left_1 = par_exclude;
tmp_cmp_expr_right_1 = module_var_accessor_mdurl$_decode$decode_cache(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_cache);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_mdurl$_decode$decode_cache(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_cache);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_exclude);
tmp_subscript_value_1 = par_exclude;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_cache == NULL);
var_cache = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_cache);
tmp_ass_subvalue_1 = var_cache;
tmp_ass_subscribed_1 = module_var_accessor_mdurl$_decode$decode_cache(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decode_cache);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_exclude);
tmp_ass_subscript_1 = par_exclude;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_128;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 20;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_4;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_chr_arg_1;
CHECK_OBJECT(var_i);
tmp_chr_arg_1 = var_i;
tmp_assign_source_5 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_ch;
    var_ch = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_cache == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 22;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_cache;
CHECK_OBJECT(var_ch);
tmp_item_value_1 = var_ch;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_exclude);
tmp_len_arg_1 = par_exclude;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 24;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ord_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_exclude);
tmp_expression_value_2 = par_exclude;
CHECK_OBJECT(var_i);
tmp_subscript_value_2 = var_i;
tmp_ord_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_ord_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_9 = BUILTIN_ORD(tmp_ord_arg_1);
CHECK_OBJECT(tmp_ord_arg_1);
Py_DECREF(tmp_ord_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_ch_code;
    var_ch_code = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_hex_arg_1;
PyObject *tmp_subscript_value_3;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_add_expr_left_1 = mod_consts.const_str_chr_37;
tmp_add_expr_left_2 = mod_consts.const_str_plain_0;
CHECK_OBJECT(var_ch_code);
tmp_hex_arg_1 = var_ch_code;
tmp_expression_value_5 = BUILTIN_HEX(tstate, tmp_hex_arg_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_2_none_none;
tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_mdurl$_decode$$$function__1_get_decode_cache->m_frame.f_lineno = 26;
tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_expression_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_4 = mod_consts.const_slice_int_neg_2_none_none;
tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (var_cache == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_ass_subscribed_2 = var_cache;
CHECK_OBJECT(var_ch_code);
tmp_ass_subscript_2 = var_ch_code;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (var_cache == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 28;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_cache;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__1_get_decode_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_decode$$$function__1_get_decode_cache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__1_get_decode_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_decode$$$function__1_get_decode_cache,
    type_description_1,
    par_exclude,
    var_cache,
    var_i,
    var_ch,
    var_ch_code
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_decode$$$function__1_get_decode_cache == cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache);
    cache_frame_frame_mdurl$_decode$$$function__1_get_decode_cache = NULL;
}

assertFrameObject(frame_frame_mdurl$_decode$$$function__1_get_decode_cache);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_cache);
var_cache = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_ch_code);
var_ch_code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cache);
var_cache = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_ch);
var_ch = NULL;
Py_XDECREF(var_ch_code);
var_ch_code = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_mdurl$_decode$$$function__2_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_string = python_pars[0];
PyObject *par_exclude = python_pars[1];
PyObject *var_cache = NULL;
PyObject *var_repl_func = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_decode$$$function__2_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_decode$$$function__2_decode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_decode$$$function__2_decode)) {
    Py_XDECREF(cache_frame_frame_mdurl$_decode$$$function__2_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_decode$$$function__2_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_decode$$$function__2_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_3b00365974f6c5f83be9a0bce4c81680, module_mdurl$_decode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_decode$$$function__2_decode->m_type_description == NULL);
frame_frame_mdurl$_decode$$$function__2_decode = cache_frame_frame_mdurl$_decode$$$function__2_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_decode$$$function__2_decode);
assert(Py_REFCNT(frame_frame_mdurl$_decode$$$function__2_decode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_mdurl$_decode$get_decode_cache(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_decode_cache);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_exclude);
tmp_args_element_value_1 = par_exclude;
frame_frame_mdurl$_decode$$$function__2_decode->m_frame.f_lineno = 34;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cache == NULL);
var_cache = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_2 == NULL));
tmp_kw_call_arg_value_0_1 = module_var_accessor_mdurl$_decode$repl_func_with_cache(tstate);
if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_repl_func_with_cache);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 35;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cache);
tmp_kw_call_dict_value_0_1 = var_cache;
frame_frame_mdurl$_decode$$$function__2_decode->m_frame.f_lineno = 35;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_cache_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_repl_func == NULL);
var_repl_func = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_mdurl$_decode$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sub);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_9f7705a5ed713dbc105f0eac3f5e5246;
CHECK_OBJECT(var_repl_func);
tmp_kw_call_arg_value_1_1 = var_repl_func;
CHECK_OBJECT(par_string);
tmp_kw_call_arg_value_2_1 = par_string;
tmp_expression_value_2 = module_var_accessor_mdurl$_decode$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_IGNORECASE);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_mdurl$_decode$$$function__2_decode->m_frame.f_lineno = 36;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__2_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_decode$$$function__2_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__2_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_decode$$$function__2_decode,
    type_description_1,
    par_string,
    par_exclude,
    var_cache,
    var_repl_func
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_decode$$$function__2_decode == cache_frame_frame_mdurl$_decode$$$function__2_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_decode$$$function__2_decode);
    cache_frame_frame_mdurl$_decode$$$function__2_decode = NULL;
}

assertFrameObject(frame_frame_mdurl$_decode$$$function__2_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cache);
CHECK_OBJECT(var_cache);
Py_DECREF(var_cache);
var_cache = NULL;
CHECK_OBJECT(var_repl_func);
CHECK_OBJECT(var_repl_func);
Py_DECREF(var_repl_func);
var_repl_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cache);
var_cache = NULL;
Py_XDECREF(var_repl_func);
var_repl_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_string);
Py_DECREF(par_string);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_mdurl$_decode$$$function__3_repl_func_with_cache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_match = python_pars[0];
PyObject *par_cache = python_pars[1];
PyObject *var_seq = NULL;
PyObject *var_result = NULL;
PyObject *var_i = NULL;
PyObject *var_l = NULL;
PyObject *var_b1 = NULL;
PyObject *var_b2 = NULL;
PyObject *var_all_bytes = NULL;
PyObject *var_b3 = NULL;
PyObject *var_b4 = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache)) {
    Py_XDECREF(cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache = MAKE_FUNCTION_FRAME(tstate, code_objects_40c20de6d8d2f5fd6b179e1ee8312391, module_mdurl$_decode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_type_description == NULL);
frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache = cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache);
assert(Py_REFCNT(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_match);
tmp_called_instance_1 = par_match;
frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = 40;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_group);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_seq == NULL);
var_seq = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_2);
var_result = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_i == NULL);
Py_INCREF(tmp_assign_source_3);
var_i = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_seq);
tmp_len_arg_1 = var_seq;
tmp_assign_source_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_l == NULL);
var_l = tmp_assign_source_4;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 45;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_i;
CHECK_OBJECT(var_l);
tmp_cmp_expr_right_1 = var_l;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_base_value_1;
CHECK_OBJECT(var_seq);
tmp_expression_value_1 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_i;
tmp_add_expr_right_1 = 1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_start_value_1 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 46;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_2 = var_i;
tmp_add_expr_right_2 = 3;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_stop_value_1 == NULL));
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_value_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_1 = mod_consts.const_int_pos_16;
tmp_assign_source_5 = BUILTIN_INT2(tstate, tmp_value_value_1, tmp_base_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b1;
    var_b1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
CHECK_OBJECT(var_b1);
tmp_cmp_expr_left_2 = var_b1;
tmp_cmp_expr_right_2 = 128;
tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 49;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_result;
CHECK_OBJECT(par_cache);
tmp_expression_value_2 = par_cache;
CHECK_OBJECT(var_b1);
tmp_subscript_value_2 = var_b1;
tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_6;

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_2;
nuitka_digit tmp_iadd_expr_right_2;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_i;
tmp_iadd_expr_right_2 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_7 = tmp_iadd_expr_left_2;
var_i = tmp_assign_source_7;

}
goto loop_start_1;
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_add_expr_left_3;
nuitka_digit tmp_add_expr_right_3;
CHECK_OBJECT(var_b1);
tmp_bitand_expr_left_1 = var_b1;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_224;
tmp_cmp_expr_left_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
assert(!(tmp_cmp_expr_left_3 == NULL));
tmp_cmp_expr_right_3 = 192;
tmp_and_left_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_3 = var_i;
tmp_add_expr_right_3 = 3;
tmp_cmp_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_3, tmp_add_expr_right_3);
assert(!(tmp_cmp_expr_left_4 == NULL));
CHECK_OBJECT(var_l);
tmp_cmp_expr_right_4 = var_l;
tmp_and_right_value_1 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_value_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_2;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_stop_value_2;
PyObject *tmp_add_expr_left_5;
nuitka_digit tmp_add_expr_right_5;
PyObject *tmp_base_value_2;
CHECK_OBJECT(var_seq);
tmp_expression_value_3 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_i;
tmp_add_expr_right_4 = 4;
tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
assert(!(tmp_start_value_2 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_5 = var_i;
tmp_add_expr_right_5 = 6;
tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_5, tmp_add_expr_right_5);
assert(!(tmp_stop_value_2 == NULL));
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
CHECK_OBJECT(tmp_stop_value_2);
Py_DECREF(tmp_stop_value_2);
assert(!(tmp_subscript_value_3 == NULL));
tmp_value_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_2 = mod_consts.const_int_pos_16;
tmp_assign_source_8 = BUILTIN_INT2(tstate, tmp_value_value_2, tmp_base_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b2;
    var_b2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(var_b2);
tmp_bitand_expr_left_2 = var_b2;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_5 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
assert(!(tmp_cmp_expr_left_5 == NULL));
tmp_cmp_expr_right_5 = 128;
tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_b1);
tmp_tuple_element_1 = var_b1;
tmp_bytes_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_bytes_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_b2);
tmp_tuple_element_1 = var_b2;
PyTuple_SET_ITEM0(tmp_bytes_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_9 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_all_bytes;
    var_all_bytes = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_3 = var_result;
CHECK_OBJECT(var_all_bytes);
tmp_expression_value_4 = var_all_bytes;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = 60;
tmp_iadd_expr_right_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_3;
var_result = tmp_assign_source_10;

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_iadd_expr_left_4 = var_result;
tmp_iadd_expr_right_4 = mod_consts.const_str_digest_f286886bf19d693a40ea6089aa478718;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_11 = tmp_iadd_expr_left_4;
var_result = tmp_assign_source_11;

}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame)) {
        frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
branch_end_5:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_5;
nuitka_digit tmp_iadd_expr_right_5;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_5 = var_i;
tmp_iadd_expr_right_5 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
assert(!(tmp_result == false));
tmp_assign_source_12 = tmp_iadd_expr_left_5;
var_i = tmp_assign_source_12;

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iadd_expr_left_6;
nuitka_digit tmp_iadd_expr_right_6;
CHECK_OBJECT(var_i);
tmp_iadd_expr_left_6 = var_i;
tmp_iadd_expr_right_6 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
assert(!(tmp_result == false));
tmp_assign_source_13 = tmp_iadd_expr_left_6;
var_i = tmp_assign_source_13;

}
goto loop_start_1;
branch_no_4:;
branch_no_3:;
{
bool tmp_condition_result_6;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_7;
nuitka_digit tmp_cmp_expr_right_7;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_add_expr_left_6;
nuitka_digit tmp_add_expr_right_6;
CHECK_OBJECT(var_b1);
tmp_bitand_expr_left_3 = var_b1;
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_240;
tmp_cmp_expr_left_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
assert(!(tmp_cmp_expr_left_7 == NULL));
tmp_cmp_expr_right_7 = 224;
tmp_and_left_value_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_6 = var_i;
tmp_add_expr_right_6 = 6;
tmp_cmp_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_6, tmp_add_expr_right_6);
assert(!(tmp_cmp_expr_left_8 == NULL));
CHECK_OBJECT(var_l);
tmp_cmp_expr_right_8 = var_l;
tmp_and_right_value_2 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
tmp_condition_result_6 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_6 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_value_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_3;
PyObject *tmp_add_expr_left_7;
nuitka_digit tmp_add_expr_right_7;
PyObject *tmp_stop_value_3;
PyObject *tmp_add_expr_left_8;
nuitka_digit tmp_add_expr_right_8;
PyObject *tmp_base_value_3;
CHECK_OBJECT(var_seq);
tmp_expression_value_5 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_7 = var_i;
tmp_add_expr_right_7 = 4;
tmp_start_value_3 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_7, tmp_add_expr_right_7);
assert(!(tmp_start_value_3 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_8 = var_i;
tmp_add_expr_right_8 = 6;
tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_8, tmp_add_expr_right_8);
assert(!(tmp_stop_value_3 == NULL));
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_4 == NULL));
tmp_value_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_3 = mod_consts.const_int_pos_16;
tmp_assign_source_14 = BUILTIN_INT2(tstate, tmp_value_value_3, tmp_base_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b2;
    var_b2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_value_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_4;
PyObject *tmp_add_expr_left_9;
nuitka_digit tmp_add_expr_right_9;
PyObject *tmp_stop_value_4;
PyObject *tmp_add_expr_left_10;
nuitka_digit tmp_add_expr_right_10;
PyObject *tmp_base_value_4;
CHECK_OBJECT(var_seq);
tmp_expression_value_6 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_9 = var_i;
tmp_add_expr_right_9 = 7;
tmp_start_value_4 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_9, tmp_add_expr_right_9);
assert(!(tmp_start_value_4 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_10 = var_i;
tmp_add_expr_right_10 = 9;
tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_10, tmp_add_expr_right_10);
assert(!(tmp_stop_value_4 == NULL));
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
CHECK_OBJECT(tmp_start_value_4);
Py_DECREF(tmp_start_value_4);
CHECK_OBJECT(tmp_stop_value_4);
Py_DECREF(tmp_stop_value_4);
assert(!(tmp_subscript_value_5 == NULL));
tmp_value_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_value_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_4 = mod_consts.const_int_pos_16;
tmp_assign_source_15 = BUILTIN_INT2(tstate, tmp_value_value_4, tmp_base_value_4);
CHECK_OBJECT(tmp_value_value_4);
Py_DECREF(tmp_value_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b3;
    var_b3 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_9;
nuitka_digit tmp_cmp_expr_right_9;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
PyObject *tmp_cmp_expr_left_10;
nuitka_digit tmp_cmp_expr_right_10;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
CHECK_OBJECT(var_b2);
tmp_bitand_expr_left_4 = var_b2;
tmp_bitand_expr_right_4 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_9 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
assert(!(tmp_cmp_expr_left_9 == NULL));
tmp_cmp_expr_right_9 = 128;
tmp_and_left_value_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_b3);
tmp_bitand_expr_left_5 = var_b3;
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_10 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
assert(!(tmp_cmp_expr_left_10 == NULL));
tmp_cmp_expr_right_10 = 128;
tmp_and_right_value_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_bytes_arg_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_b1);
tmp_tuple_element_2 = var_b1;
tmp_bytes_arg_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_bytes_arg_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_b2);
tmp_tuple_element_2 = var_b2;
PyTuple_SET_ITEM0(tmp_bytes_arg_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_b3);
tmp_tuple_element_2 = var_b3;
PyTuple_SET_ITEM0(tmp_bytes_arg_2, 2, tmp_tuple_element_2);
tmp_assign_source_16 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_2);
CHECK_OBJECT(tmp_bytes_arg_2);
Py_DECREF(tmp_bytes_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_all_bytes;
    var_all_bytes = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}

tmp_iadd_expr_left_7 = var_result;
CHECK_OBJECT(var_all_bytes);
tmp_expression_value_7 = var_all_bytes;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = 76;
tmp_iadd_expr_right_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iadd_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
CHECK_OBJECT(tmp_iadd_expr_right_7);
Py_DECREF(tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_17 = tmp_iadd_expr_left_7;
var_result = tmp_assign_source_17;

}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 78;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}

tmp_iadd_expr_left_8 = var_result;
tmp_iadd_expr_right_8 = mod_consts.const_str_digest_e8d544bf75098b0e307b64d55b80c3a0;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_18 = tmp_iadd_expr_left_8;
var_result = tmp_assign_source_18;

}
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 75;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame)) {
        frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
branch_end_8:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iadd_expr_left_9;
nuitka_digit tmp_iadd_expr_right_9;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_9 = var_i;
tmp_iadd_expr_right_9 = 6;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
assert(!(tmp_result == false));
tmp_assign_source_19 = tmp_iadd_expr_left_9;
var_i = tmp_assign_source_19;

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_10;
nuitka_digit tmp_iadd_expr_right_10;
CHECK_OBJECT(var_i);
tmp_iadd_expr_left_10 = var_i;
tmp_iadd_expr_right_10 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
assert(!(tmp_result == false));
tmp_assign_source_20 = tmp_iadd_expr_left_10;
var_i = tmp_assign_source_20;

}
goto loop_start_1;
branch_no_7:;
branch_no_6:;
{
bool tmp_condition_result_9;
int tmp_and_left_truth_4;
bool tmp_and_left_value_4;
bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_12;
nuitka_digit tmp_cmp_expr_right_12;
PyObject *tmp_bitand_expr_left_6;
PyObject *tmp_bitand_expr_right_6;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_add_expr_left_11;
nuitka_digit tmp_add_expr_right_11;
CHECK_OBJECT(var_b1);
tmp_bitand_expr_left_6 = var_b1;
tmp_bitand_expr_right_6 = mod_consts.const_int_pos_248;
tmp_cmp_expr_left_12 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
assert(!(tmp_cmp_expr_left_12 == NULL));
tmp_cmp_expr_right_12 = 240;
tmp_and_left_value_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
tmp_and_left_truth_4 = tmp_and_left_value_4 != false ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_11 = var_i;
tmp_add_expr_right_11 = 9;
tmp_cmp_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_11, tmp_add_expr_right_11);
assert(!(tmp_cmp_expr_left_13 == NULL));
CHECK_OBJECT(var_l);
tmp_cmp_expr_right_13 = var_l;
tmp_and_right_value_4 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
tmp_condition_result_9 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_9 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_value_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_5;
PyObject *tmp_add_expr_left_12;
nuitka_digit tmp_add_expr_right_12;
PyObject *tmp_stop_value_5;
PyObject *tmp_add_expr_left_13;
nuitka_digit tmp_add_expr_right_13;
PyObject *tmp_base_value_5;
CHECK_OBJECT(var_seq);
tmp_expression_value_8 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_12 = var_i;
tmp_add_expr_right_12 = 4;
tmp_start_value_5 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_12, tmp_add_expr_right_12);
assert(!(tmp_start_value_5 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_13 = var_i;
tmp_add_expr_right_13 = 6;
tmp_stop_value_5 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_13, tmp_add_expr_right_13);
assert(!(tmp_stop_value_5 == NULL));
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_5);
CHECK_OBJECT(tmp_start_value_5);
Py_DECREF(tmp_start_value_5);
CHECK_OBJECT(tmp_stop_value_5);
Py_DECREF(tmp_stop_value_5);
assert(!(tmp_subscript_value_6 == NULL));
tmp_value_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_value_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_5 = mod_consts.const_int_pos_16;
tmp_assign_source_21 = BUILTIN_INT2(tstate, tmp_value_value_5, tmp_base_value_5);
CHECK_OBJECT(tmp_value_value_5);
Py_DECREF(tmp_value_value_5);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b2;
    var_b2 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_value_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_6;
PyObject *tmp_add_expr_left_14;
nuitka_digit tmp_add_expr_right_14;
PyObject *tmp_stop_value_6;
PyObject *tmp_add_expr_left_15;
nuitka_digit tmp_add_expr_right_15;
PyObject *tmp_base_value_6;
CHECK_OBJECT(var_seq);
tmp_expression_value_9 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_14 = var_i;
tmp_add_expr_right_14 = 7;
tmp_start_value_6 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_14, tmp_add_expr_right_14);
assert(!(tmp_start_value_6 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_15 = var_i;
tmp_add_expr_right_15 = 9;
tmp_stop_value_6 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_15, tmp_add_expr_right_15);
assert(!(tmp_stop_value_6 == NULL));
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_6, tmp_stop_value_6);
CHECK_OBJECT(tmp_start_value_6);
Py_DECREF(tmp_start_value_6);
CHECK_OBJECT(tmp_stop_value_6);
Py_DECREF(tmp_stop_value_6);
assert(!(tmp_subscript_value_7 == NULL));
tmp_value_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_value_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_6 = mod_consts.const_int_pos_16;
tmp_assign_source_22 = BUILTIN_INT2(tstate, tmp_value_value_6, tmp_base_value_6);
CHECK_OBJECT(tmp_value_value_6);
Py_DECREF(tmp_value_value_6);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b3;
    var_b3 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_value_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
PyObject *tmp_start_value_7;
PyObject *tmp_add_expr_left_16;
nuitka_digit tmp_add_expr_right_16;
PyObject *tmp_stop_value_7;
PyObject *tmp_add_expr_left_17;
nuitka_digit tmp_add_expr_right_17;
PyObject *tmp_base_value_7;
CHECK_OBJECT(var_seq);
tmp_expression_value_10 = var_seq;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_16 = var_i;
tmp_add_expr_right_16 = 10;
tmp_start_value_7 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_16, tmp_add_expr_right_16);
assert(!(tmp_start_value_7 == NULL));
if (var_i == NULL) {
Py_DECREF(tmp_start_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_17 = var_i;
tmp_add_expr_right_17 = 12;
tmp_stop_value_7 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_17, tmp_add_expr_right_17);
assert(!(tmp_stop_value_7 == NULL));
tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_7, tmp_stop_value_7);
CHECK_OBJECT(tmp_start_value_7);
Py_DECREF(tmp_start_value_7);
CHECK_OBJECT(tmp_stop_value_7);
Py_DECREF(tmp_stop_value_7);
assert(!(tmp_subscript_value_8 == NULL));
tmp_value_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_value_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_7 = mod_consts.const_int_pos_16;
tmp_assign_source_23 = BUILTIN_INT2(tstate, tmp_value_value_7, tmp_base_value_7);
CHECK_OBJECT(tmp_value_value_7);
Py_DECREF(tmp_value_value_7);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_b4;
    var_b4 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_10;
int tmp_and_left_truth_5;
bool tmp_and_left_value_5;
bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_14;
nuitka_digit tmp_cmp_expr_right_14;
PyObject *tmp_bitand_expr_left_7;
PyObject *tmp_bitand_expr_right_7;
int tmp_and_left_truth_6;
bool tmp_and_left_value_6;
bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_15;
nuitka_digit tmp_cmp_expr_right_15;
PyObject *tmp_bitand_expr_left_8;
PyObject *tmp_bitand_expr_right_8;
PyObject *tmp_cmp_expr_left_16;
nuitka_digit tmp_cmp_expr_right_16;
PyObject *tmp_bitand_expr_left_9;
PyObject *tmp_bitand_expr_right_9;
CHECK_OBJECT(var_b2);
tmp_bitand_expr_left_7 = var_b2;
tmp_bitand_expr_right_7 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_14 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
assert(!(tmp_cmp_expr_left_14 == NULL));
tmp_cmp_expr_right_14 = 128;
tmp_and_left_value_5 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_b3);
tmp_bitand_expr_left_8 = var_b3;
tmp_bitand_expr_right_8 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_15 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_8, tmp_bitand_expr_right_8);
assert(!(tmp_cmp_expr_left_15 == NULL));
tmp_cmp_expr_right_15 = 128;
tmp_and_left_value_6 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_b4);
tmp_bitand_expr_left_9 = var_b4;
tmp_bitand_expr_right_9 = mod_consts.const_int_pos_192;
tmp_cmp_expr_left_16 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_9, tmp_bitand_expr_right_9);
assert(!(tmp_cmp_expr_left_16 == NULL));
tmp_cmp_expr_right_16 = 128;
tmp_and_right_value_6 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
tmp_and_right_value_5 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_and_right_value_5 = tmp_and_left_value_6;
and_end_6:;
tmp_condition_result_10 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_10 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_bytes_arg_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_b1);
tmp_tuple_element_3 = var_b1;
tmp_bytes_arg_3 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_bytes_arg_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_b2);
tmp_tuple_element_3 = var_b2;
PyTuple_SET_ITEM0(tmp_bytes_arg_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_b3);
tmp_tuple_element_3 = var_b3;
PyTuple_SET_ITEM0(tmp_bytes_arg_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_b4);
tmp_tuple_element_3 = var_b4;
PyTuple_SET_ITEM0(tmp_bytes_arg_3, 3, tmp_tuple_element_3);
tmp_assign_source_24 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_3);
CHECK_OBJECT(tmp_bytes_arg_3);
Py_DECREF(tmp_bytes_arg_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_all_bytes;
    var_all_bytes = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iadd_expr_left_11;
PyObject *tmp_iadd_expr_right_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}

tmp_iadd_expr_left_11 = var_result;
CHECK_OBJECT(var_all_bytes);
tmp_expression_value_11 = var_all_bytes;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = 93;
tmp_iadd_expr_right_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iadd_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
CHECK_OBJECT(tmp_iadd_expr_right_11);
Py_DECREF(tmp_iadd_expr_right_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_25 = tmp_iadd_expr_left_11;
var_result = tmp_assign_source_25;

}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
tmp_cmp_expr_left_17 = EXC_TYPE(tstate);
tmp_cmp_expr_right_17 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_12;
PyObject *tmp_iadd_expr_right_12;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}

tmp_iadd_expr_left_12 = var_result;
tmp_iadd_expr_right_12 = mod_consts.const_str_digest_03a27baef4c3c9f79106d4320072d2df;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_26 = tmp_iadd_expr_left_12;
var_result = tmp_assign_source_26;

}
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 92;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame)) {
        frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_7;
branch_end_11:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iadd_expr_left_13;
nuitka_digit tmp_iadd_expr_right_13;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_13 = var_i;
tmp_iadd_expr_right_13 = 9;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
assert(!(tmp_result == false));
tmp_assign_source_27 = tmp_iadd_expr_left_13;
var_i = tmp_assign_source_27;

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iadd_expr_left_14;
nuitka_digit tmp_iadd_expr_right_14;
CHECK_OBJECT(var_i);
tmp_iadd_expr_left_14 = var_i;
tmp_iadd_expr_right_14 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
assert(!(tmp_result == false));
tmp_assign_source_28 = tmp_iadd_expr_left_14;
var_i = tmp_assign_source_28;

}
goto loop_start_1;
branch_no_10:;
branch_no_9:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iadd_expr_left_15;
PyObject *tmp_iadd_expr_right_15;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_15 = var_result;
tmp_iadd_expr_right_15 = mod_consts.const_str_chr_65533;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = tmp_iadd_expr_left_15;
var_result = tmp_assign_source_29;

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iadd_expr_left_16;
nuitka_digit tmp_iadd_expr_right_16;
if (var_i == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_16 = var_i;
tmp_iadd_expr_right_16 = 3;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
assert(!(tmp_result == false));
tmp_assign_source_30 = tmp_iadd_expr_left_16;
var_i = tmp_assign_source_30;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache,
    type_description_1,
    par_match,
    par_cache,
    var_seq,
    var_result,
    var_i,
    var_l,
    var_b1,
    var_b2,
    var_all_bytes,
    var_b3,
    var_b4
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache == cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache);
    cache_frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache = NULL;
}

assertFrameObject(frame_frame_mdurl$_decode$$$function__3_repl_func_with_cache);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_seq);
CHECK_OBJECT(var_seq);
Py_DECREF(var_seq);
var_seq = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
CHECK_OBJECT(var_l);
CHECK_OBJECT(var_l);
Py_DECREF(var_l);
var_l = NULL;
Py_XDECREF(var_b1);
var_b1 = NULL;
Py_XDECREF(var_b2);
var_b2 = NULL;
Py_XDECREF(var_all_bytes);
var_all_bytes = NULL;
Py_XDECREF(var_b3);
var_b3 = NULL;
Py_XDECREF(var_b4);
var_b4 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_seq);
var_seq = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_l);
var_l = NULL;
Py_XDECREF(var_b1);
var_b1 = NULL;
Py_XDECREF(var_b2);
var_b2 = NULL;
Py_XDECREF(var_all_bytes);
var_all_bytes = NULL;
Py_XDECREF(var_b3);
var_b3 = NULL;
Py_XDECREF(var_b4);
var_b4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_match);
Py_DECREF(par_match);
CHECK_OBJECT(par_cache);
Py_DECREF(par_cache);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_match);
Py_DECREF(par_match);
CHECK_OBJECT(par_cache);
Py_DECREF(par_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__1_get_decode_cache(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_decode$$$function__1_get_decode_cache,
        mod_consts.const_str_plain_get_decode_cache,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1a54f6cd9f43544ba7c602f891c2f70f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_decode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__2_decode(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_decode$$$function__2_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b00365974f6c5f83be9a0bce4c81680,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_decode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mdurl$_decode$$$function__3_repl_func_with_cache(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_decode$$$function__3_repl_func_with_cache,
        mod_consts.const_str_plain_repl_func_with_cache,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_40c20de6d8d2f5fd6b179e1ee8312391,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_decode,
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

static function_impl_code const function_table_mdurl$_decode[] = {
impl_mdurl$_decode$$$function__1_get_decode_cache,
impl_mdurl$_decode$$$function__2_decode,
impl_mdurl$_decode$$$function__3_repl_func_with_cache,
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

    return Nuitka_Function_GetFunctionState(function, function_table_mdurl$_decode);
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
        module_mdurl$_decode,
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
        function_table_mdurl$_decode,
        sizeof(function_table_mdurl$_decode) / sizeof(function_impl_code)
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
static char const *module_full_name = "mdurl._decode";
#endif

// Internal entry point for module code.
PyObject *module_code_mdurl$_decode(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mdurl$_decode");

    // Store the module for future use.
    module_mdurl$_decode = module;

    moduledict_mdurl$_decode = MODULE_DICT(module_mdurl$_decode);

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
        PRINT_STRING("mdurl$_decode: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("mdurl$_decode: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mdurl$_decode: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._decode" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmdurl$_decode\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mdurl$_decode,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mdurl$_decode,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mdurl$_decode,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_decode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_decode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mdurl$_decode);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mdurl$_decode);
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

        UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_mdurl$_decode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_mdurl$_decode = MAKE_MODULE_FRAME(code_objects_e3f417260b833344f7c3bcd1b54b168e, module_mdurl$_decode);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_decode);
assert(Py_REFCNT(frame_frame_mdurl$_decode) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_mdurl$_decode$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_mdurl$_decode$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_mdurl$_decode;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Sequence_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_mdurl$_decode->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_mdurl$_decode,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Sequence);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_mdurl$_decode;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_mdurl$_decode->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_e88381ac1ff6e3e5b3d009f2689b943c;
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_DEFAULT_CHARS, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = const_str_empty;
UPDATE_STRING_DICT0(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_COMPONENT_CHARS, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_decode_cache, tmp_assign_source_11);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_5520352aedbd1723efd5efd9a9ba2525;
tmp_ass_subscribed_1 = module_var_accessor_mdurl$_decode$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_decode_cache;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_59c9504f4f9ea0bffbfca61950505ae5);

tmp_assign_source_12 = MAKE_FUNCTION_mdurl$_decode$$$function__1_get_decode_cache(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_get_decode_cache, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_2;
tmp_tuple_element_1 = module_var_accessor_mdurl$_decode$DECODE_DEFAULT_CHARS(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECODE_DEFAULT_CHARS);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_fecf0257e2dd4a6bc98b79f862edc180);

tmp_assign_source_13 = MAKE_FUNCTION_mdurl$_decode$$$function__2_decode(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_decode, tmp_assign_source_13);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_mdurl$_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_7f9f8dcf991780e3b8efa78ae5e8234b);

tmp_assign_source_14 = MAKE_FUNCTION_mdurl$_decode$$$function__3_repl_func_with_cache(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_mdurl$_decode, (Nuitka_StringObject *)mod_consts.const_str_plain_repl_func_with_cache, tmp_assign_source_14);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mdurl$_decode", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._decode" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_mdurl$_decode);
    return module_mdurl$_decode;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_decode, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mdurl$_decode", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

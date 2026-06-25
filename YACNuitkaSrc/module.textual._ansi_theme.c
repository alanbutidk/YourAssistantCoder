/* Generated code for Python module 'textual$_ansi_theme'
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



/* The "module_textual$_ansi_theme" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_ansi_theme;
PyDictObject *moduledict_textual$_ansi_theme;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_b56f36eef1d5d2570ea9024ef8186c89;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_6bc791a702fe5b987b1341713efdae95;
PyObject *const_tuple_str_plain_TerminalTheme_tuple;
PyObject *const_str_plain_TerminalTheme;
PyObject *const_dict_a487c6a78d25cdcc67711c1ada580aca;
PyObject *const_str_plain_rgb;
PyObject *const_tuple_int_pos_12_int_pos_12_int_pos_12_tuple;
PyObject *const_tuple_int_pos_217_int_pos_217_int_pos_217_tuple;
PyObject *const_tuple_int_pos_26_int_pos_26_int_pos_26_tuple;
PyObject *const_tuple_int_pos_244_int_0_int_pos_95_tuple;
PyObject *const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple;
PyObject *const_tuple_int_pos_253_int_pos_151_int_pos_31_tuple;
PyObject *const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple;
PyObject *const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple;
PyObject *const_tuple_int_pos_196_int_pos_197_int_pos_181_tuple;
PyObject *const_tuple_int_pos_98_int_pos_94_int_pos_76_tuple;
PyObject *const_tuple_int_pos_224_int_pos_213_int_pos_97_tuple;
PyObject *const_tuple_int_pos_246_int_pos_246_int_pos_239_tuple;
PyObject *const_str_plain_MONOKAI;
PyObject *const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple;
PyObject *const_tuple_int_0_int_0_int_0_tuple;
PyObject *const_tuple_int_pos_170_int_pos_55_int_pos_49_tuple;
PyObject *const_tuple_int_pos_68_int_pos_140_int_pos_39_tuple;
PyObject *const_tuple_int_pos_203_int_pos_144_int_0_tuple;
PyObject *const_tuple_int_pos_50_int_pos_92_int_pos_192_tuple;
PyObject *const_tuple_int_pos_122_int_pos_62_int_pos_157_tuple;
PyObject *const_tuple_int_0_int_pos_131_int_pos_178_tuple;
PyObject *const_tuple_int_pos_119_int_pos_119_int_pos_119_tuple;
PyObject *const_tuple_int_pos_240_int_pos_80_int_pos_80_tuple;
PyObject *const_tuple_int_pos_96_int_pos_203_int_0_tuple;
PyObject *const_tuple_int_pos_255_int_pos_188_int_pos_93_tuple;
PyObject *const_tuple_int_0_int_pos_122_int_pos_204_tuple;
PyObject *const_tuple_int_pos_230_int_pos_76_int_pos_230_tuple;
PyObject *const_tuple_int_0_int_pos_170_int_pos_203_tuple;
PyObject *const_str_plain_ALABASTER;
PyObject *const_str_plain_DEFAULT_TERMINAL_THEME;
PyObject *const_str_digest_df6ed039added8b7fc3600da377377ea;
PyObject *const_str_digest_c0a72e75a2c72ae224174d981076d0ed;
PyObject *const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[42];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._ansi_theme"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_b56f36eef1d5d2570ea9024ef8186c89);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_dict_a487c6a78d25cdcc67711c1ada580aca);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgb);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_int_pos_12_int_pos_12_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_217_int_pos_217_int_pos_217_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_26_int_pos_26_int_pos_26_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_253_int_pos_151_int_pos_31_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_196_int_pos_197_int_pos_181_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_98_int_pos_94_int_pos_76_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_224_int_pos_213_int_pos_97_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_246_int_pos_246_int_pos_239_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_MONOKAI);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_170_int_pos_55_int_pos_49_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_68_int_pos_140_int_pos_39_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_203_int_pos_144_int_0_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_50_int_pos_92_int_pos_192_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_122_int_pos_62_int_pos_157_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_131_int_pos_178_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_119_int_pos_119_int_pos_119_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_240_int_pos_80_int_pos_80_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_96_int_pos_203_int_0_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_int_pos_188_int_pos_93_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_122_int_pos_204_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_230_int_pos_76_int_pos_230_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_170_int_pos_203_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALABASTER);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_df6ed039added8b7fc3600da377377ea);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0a72e75a2c72ae224174d981076d0ed);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple);
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
void checkModuleConstants_textual$_ansi_theme(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_b56f36eef1d5d2570ea9024ef8186c89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b56f36eef1d5d2570ea9024ef8186c89);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TerminalTheme);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_dict_a487c6a78d25cdcc67711c1ada580aca));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a487c6a78d25cdcc67711c1ada580aca);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rgb);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_int_pos_12_int_pos_12_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_12_int_pos_12_int_pos_12_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_217_int_pos_217_int_pos_217_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_217_int_pos_217_int_pos_217_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_26_int_pos_26_int_pos_26_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_26_int_pos_26_int_pos_26_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_253_int_pos_151_int_pos_31_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_253_int_pos_151_int_pos_31_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_196_int_pos_197_int_pos_181_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_196_int_pos_197_int_pos_181_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_98_int_pos_94_int_pos_76_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_98_int_pos_94_int_pos_76_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_224_int_pos_213_int_pos_97_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_224_int_pos_213_int_pos_97_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_246_int_pos_246_int_pos_239_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_246_int_pos_246_int_pos_239_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_MONOKAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MONOKAI);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_170_int_pos_55_int_pos_49_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_170_int_pos_55_int_pos_49_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_68_int_pos_140_int_pos_39_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_68_int_pos_140_int_pos_39_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_203_int_pos_144_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_203_int_pos_144_int_0_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_50_int_pos_92_int_pos_192_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_50_int_pos_92_int_pos_192_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_122_int_pos_62_int_pos_157_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_122_int_pos_62_int_pos_157_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_131_int_pos_178_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_131_int_pos_178_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_119_int_pos_119_int_pos_119_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_119_int_pos_119_int_pos_119_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_240_int_pos_80_int_pos_80_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_240_int_pos_80_int_pos_80_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_96_int_pos_203_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_96_int_pos_203_int_0_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_int_pos_188_int_pos_93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_255_int_pos_188_int_pos_93_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_122_int_pos_204_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_122_int_pos_204_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_230_int_pos_76_int_pos_230_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_230_int_pos_76_int_pos_230_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_170_int_pos_203_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_170_int_pos_203_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALABASTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALABASTER);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_df6ed039added8b7fc3600da377377ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df6ed039added8b7fc3600da377377ea);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0a72e75a2c72ae224174d981076d0ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0a72e75a2c72ae224174d981076d0ed);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple);
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
static PyObject *module_var_accessor_textual$_ansi_theme$MONOKAI(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_ansi_theme->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_ansi_theme->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_MONOKAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_ansi_theme->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MONOKAI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MONOKAI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MONOKAI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MONOKAI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_MONOKAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_MONOKAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MONOKAI);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_ansi_theme$TerminalTheme(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_ansi_theme->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_ansi_theme->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_ansi_theme->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TerminalTheme);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TerminalTheme, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TerminalTheme);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TerminalTheme, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_ansi_theme$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_ansi_theme->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_ansi_theme->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_ansi_theme->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_ansi_theme$rgb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_ansi_theme->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_ansi_theme->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_rgb);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_ansi_theme->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rgb);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rgb, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rgb);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rgb, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_rgb);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_rgb);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rgb);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b74332c47221eb4ed8def8d01f837b68;
static PyCodeObject *code_objects_797923b712704683fe01d66f650385d1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_df6ed039added8b7fc3600da377377ea); CHECK_OBJECT(module_filename_obj);
code_objects_b74332c47221eb4ed8def8d01f837b68 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c0a72e75a2c72ae224174d981076d0ed, mod_consts.const_str_digest_c0a72e75a2c72ae224174d981076d0ed, NULL, NULL, 0, 0, 0);
code_objects_797923b712704683fe01d66f650385d1 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rgb, mod_consts.const_str_plain_rgb, mod_consts.const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_textual$_ansi_theme$$$function__1_rgb(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_ansi_theme$$$function__1_rgb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_red = python_pars[0];
PyObject *par_green = python_pars[1];
PyObject *par_blue = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_red);
tmp_tuple_element_1 = par_red;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_green);
tmp_tuple_element_1 = par_green;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_blue);
tmp_tuple_element_1 = par_blue;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto function_return_exit;
}

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_red);
Py_DECREF(par_red);
CHECK_OBJECT(par_green);
Py_DECREF(par_green);
CHECK_OBJECT(par_blue);
Py_DECREF(par_blue);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$_ansi_theme$$$function__1_rgb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_ansi_theme$$$function__1_rgb,
        mod_consts.const_str_plain_rgb,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_797923b712704683fe01d66f650385d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_ansi_theme,
        mod_consts.const_str_digest_b56f36eef1d5d2570ea9024ef8186c89,
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

static function_impl_code const function_table_textual$_ansi_theme[] = {
impl_textual$_ansi_theme$$$function__1_rgb,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_ansi_theme);
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
        module_textual$_ansi_theme,
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
        function_table_textual$_ansi_theme,
        sizeof(function_table_textual$_ansi_theme) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._ansi_theme";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_ansi_theme(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_ansi_theme");

    // Store the module for future use.
    module_textual$_ansi_theme = module;

    moduledict_textual$_ansi_theme = MODULE_DICT(module_textual$_ansi_theme);

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
        PRINT_STRING("textual$_ansi_theme: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_ansi_theme: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_ansi_theme: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._ansi_theme" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_ansi_theme\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_ansi_theme,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_ansi_theme,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_ansi_theme,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_ansi_theme,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_ansi_theme,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_ansi_theme);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_ansi_theme);
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

        UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$_ansi_theme;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_ansi_theme = MAKE_MODULE_FRAME(code_objects_b74332c47221eb4ed8def8d01f837b68, module_textual$_ansi_theme);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_ansi_theme);
assert(Py_REFCNT(frame_frame_textual$_ansi_theme) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_ansi_theme$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_ansi_theme$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_ansi_theme;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_TerminalTheme_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$_ansi_theme,
        mod_consts.const_str_plain_TerminalTheme,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TerminalTheme);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a487c6a78d25cdcc67711c1ada580aca);

tmp_assign_source_6 = MAKE_FUNCTION_textual$_ansi_theme$$$function__1_rgb(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_rgb, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_list_element_2;
PyObject *tmp_called_value_13;
tmp_called_value_1 = module_var_accessor_textual$_ansi_theme$TerminalTheme(tstate);
assert(!(tmp_called_value_1 == NULL));
tmp_called_value_2 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 23;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_2, mod_consts.const_tuple_int_pos_12_int_pos_12_int_pos_12_tuple);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 24;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts.const_tuple_int_pos_217_int_pos_217_int_pos_217_tuple);

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 26;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_int_pos_26_int_pos_26_int_pos_26_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = MAKE_LIST_EMPTY(tstate, 9);
{
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_1);
tmp_called_value_5 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 27;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 1, tmp_list_element_1);
tmp_called_value_6 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 28;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 2, tmp_list_element_1);
tmp_called_value_7 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 29;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_int_pos_253_int_pos_151_int_pos_31_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 3, tmp_list_element_1);
tmp_called_value_8 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 30;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 4, tmp_list_element_1);
tmp_called_value_9 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 31;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 5, tmp_list_element_1);
tmp_called_value_10 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 32;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 6, tmp_list_element_1);
tmp_called_value_11 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 33;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_int_pos_196_int_pos_197_int_pos_181_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 7, tmp_list_element_1);
tmp_called_value_12 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto list_build_exception_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 34;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_int_pos_98_int_pos_94_int_pos_76_tuple);

if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_args_element_value_3, 8, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_called_value_13 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 37;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = MAKE_LIST_EMPTY(tstate, 7);
{
PyObject *tmp_called_value_14;
PyObject *tmp_called_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyList_SET_ITEM(tmp_args_element_value_4, 0, tmp_list_element_2);
tmp_called_value_14 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 38;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_int_pos_152_int_pos_224_int_pos_36_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 1, tmp_list_element_2);
tmp_called_value_15 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 39;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_int_pos_224_int_pos_213_int_pos_97_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 2, tmp_list_element_2);
tmp_called_value_16 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 40;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_int_pos_157_int_pos_101_int_pos_255_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 3, tmp_list_element_2);
tmp_called_value_17 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 41;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_17, mod_consts.const_tuple_int_pos_244_int_0_int_pos_95_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 4, tmp_list_element_2);
tmp_called_value_18 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 42;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_18, mod_consts.const_tuple_int_pos_88_int_pos_209_int_pos_235_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 5, tmp_list_element_2);
tmp_called_value_19 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto list_build_exception_2;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 43;
tmp_list_element_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_19, mod_consts.const_tuple_int_pos_246_int_pos_246_int_pos_239_tuple);

if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_args_element_value_4, 6, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_4);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 22;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_MONOKAI, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_7;
PyObject *tmp_list_element_3;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_8;
PyObject *tmp_list_element_4;
PyObject *tmp_called_value_32;
tmp_called_value_20 = module_var_accessor_textual$_ansi_theme$TerminalTheme(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TerminalTheme);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_called_value_21 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 48;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple);

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_called_value_22 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_5);

exception_lineno = 49;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 49;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_22, mod_consts.const_tuple_int_0_int_0_int_0_tuple);

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 49;

    goto frame_exception_exit_1;
}
tmp_called_value_23 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 51;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_23, mod_consts.const_tuple_int_0_int_0_int_0_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = MAKE_LIST_EMPTY(tstate, 9);
{
PyObject *tmp_called_value_24;
PyObject *tmp_called_value_25;
PyObject *tmp_called_value_26;
PyObject *tmp_called_value_27;
PyObject *tmp_called_value_28;
PyObject *tmp_called_value_29;
PyObject *tmp_called_value_30;
PyObject *tmp_called_value_31;
PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_3);
tmp_called_value_24 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 52;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_24, mod_consts.const_tuple_int_pos_170_int_pos_55_int_pos_49_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 1, tmp_list_element_3);
tmp_called_value_25 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 53;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_25, mod_consts.const_tuple_int_pos_68_int_pos_140_int_pos_39_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 2, tmp_list_element_3);
tmp_called_value_26 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 54;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_26, mod_consts.const_tuple_int_pos_203_int_pos_144_int_0_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 3, tmp_list_element_3);
tmp_called_value_27 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 55;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_27, mod_consts.const_tuple_int_pos_50_int_pos_92_int_pos_192_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 4, tmp_list_element_3);
tmp_called_value_28 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 56;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_28, mod_consts.const_tuple_int_pos_122_int_pos_62_int_pos_157_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 5, tmp_list_element_3);
tmp_called_value_29 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 57;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_29, mod_consts.const_tuple_int_0_int_pos_131_int_pos_178_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 6, tmp_list_element_3);
tmp_called_value_30 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 58;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_30, mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 7, tmp_list_element_3);
tmp_called_value_31 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto list_build_exception_3;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 59;
tmp_list_element_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_31, mod_consts.const_tuple_int_pos_119_int_pos_119_int_pos_119_tuple);

if (tmp_list_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto list_build_exception_3;
}
PyList_SET_ITEM(tmp_args_element_value_7, 8, tmp_list_element_3);
}
goto list_build_no_exception_3;
// Exception handling pass through code for list_build:
list_build_exception_3:;
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_3:;
tmp_called_value_32 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 62;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_32, mod_consts.const_tuple_int_pos_240_int_pos_80_int_pos_80_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = MAKE_LIST_EMPTY(tstate, 7);
{
PyObject *tmp_called_value_33;
PyObject *tmp_called_value_34;
PyObject *tmp_called_value_35;
PyObject *tmp_called_value_36;
PyObject *tmp_called_value_37;
PyObject *tmp_called_value_38;
PyList_SET_ITEM(tmp_args_element_value_8, 0, tmp_list_element_4);
tmp_called_value_33 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 63;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_33, mod_consts.const_tuple_int_pos_96_int_pos_203_int_0_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 1, tmp_list_element_4);
tmp_called_value_34 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 64;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_34, mod_consts.const_tuple_int_pos_255_int_pos_188_int_pos_93_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 2, tmp_list_element_4);
tmp_called_value_35 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 65;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_35, mod_consts.const_tuple_int_0_int_pos_122_int_pos_204_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 3, tmp_list_element_4);
tmp_called_value_36 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 66;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_36, mod_consts.const_tuple_int_pos_230_int_pos_76_int_pos_230_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 4, tmp_list_element_4);
tmp_called_value_37 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 67;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_37, mod_consts.const_tuple_int_0_int_pos_170_int_pos_203_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 5, tmp_list_element_4);
tmp_called_value_38 = module_var_accessor_textual$_ansi_theme$rgb(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto list_build_exception_4;
}
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 68;
tmp_list_element_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_38, mod_consts.const_tuple_int_pos_247_int_pos_247_int_pos_247_tuple);

if (tmp_list_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto list_build_exception_4;
}
PyList_SET_ITEM(tmp_args_element_value_8, 6, tmp_list_element_4);
}
goto list_build_no_exception_4;
// Exception handling pass through code for list_build:
list_build_exception_4:;
Py_DECREF(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_4:;
frame_frame_textual$_ansi_theme->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_ALABASTER, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_textual$_ansi_theme$MONOKAI(tstate);
if (unlikely(tmp_assign_source_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MONOKAI);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TERMINAL_THEME, tmp_assign_source_9);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_ansi_theme, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_ansi_theme->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_ansi_theme, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_ansi_theme);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_ansi_theme", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._ansi_theme" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_ansi_theme);
    return module_textual$_ansi_theme;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_ansi_theme, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_ansi_theme", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

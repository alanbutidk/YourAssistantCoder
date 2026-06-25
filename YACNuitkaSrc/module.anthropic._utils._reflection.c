/* Generated code for Python module 'anthropic$_utils$_reflection'
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



/* The "module_anthropic$_utils$_reflection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$_utils$_reflection;
PyDictObject *moduledict_anthropic$_utils$_reflection;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_signature;
PyObject *const_str_plain_parameters;
PyObject *const_str_digest_e0108f5a82a6d340718444b7a9517d23;
PyObject *const_str_plain_items;
PyObject *const_str_plain_check_sig;
PyObject *const_str_plain_errors;
PyObject *const_str_digest_3995fa327901f101b08eb9f03f1d1b6e;
PyObject *const_str_digest_97a50fb2613b337b556ebe3781bd6aaa;
PyObject *const_str_plain_annotation;
PyObject *const_str_digest_50b3af4c04a3ab158f6e1e57f909fa60;
PyObject *const_str_digest_06e0253af5434427f1c71cc741bfcd20;
PyObject *const_str_digest_f0deb2c1644a7fc22308c69aeb4b4346;
PyObject *const_str_digest_1656abe90eff01eda55a341e82e9fda3;
PyObject *const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
PyObject *const_str_digest_97988af3e67ae761bfcecfe1a4562bfc;
PyObject *const_str_plain_typing_extensions;
PyObject *const_str_plain_get_overloads;
PyObject *const_str_digest_ead10ed9843f0915c3dee60bc0277001;
PyObject *const_str_plain_source_sig;
PyObject *const_str_plain_overload_sig;
PyObject *const_str_plain_append;
PyObject *const_str_digest_456851aaf3dd617d1e67f32e93426d5f;
PyObject *const_str_digest_3b60944a7c4a384905d0e5c2f6324459;
PyObject *const_str_digest_42cc460483cf62625d326f0d79fd3717;
PyObject *const_str_digest_2cdc19c884619da507576b26f5314eb1;
PyObject *const_str_digest_f2b1c591a93c177c2bc04725ee4eef07;
PyObject *const_str_digest_4df270219072b6b64d8ff891f268b05d;
PyObject *const_str_digest_b9881426ae76e784b3e4e228a69bdb0b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_dict_3ce783f7f87b24ce75053a4baa904e8f;
PyObject *const_str_plain_function_has_argument;
PyObject *const_dict_15758c07f2426622f09e243a7ad8634b;
PyObject *const_dict_5c61824ed7e051acd6e814894cf8d3ec;
PyObject *const_str_plain_assert_signatures_in_sync;
PyObject *const_dict_b7585cf293b133946e69479ec7ced590;
PyObject *const_str_plain_assert_overloads_in_sync;
PyObject *const_str_digest_7532c83e4d366d57ab3283b34eb21570;
PyObject *const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf;
PyObject *const_tuple_f007e6fe20e079ab4e57b0ba3f05c280_tuple;
PyObject *const_tuple_8456c843dc21488f7796a6796dabf53b_tuple;
PyObject *const_tuple_str_plain_func_str_plain_arg_name_str_plain_sig_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[45];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic._utils._reflection"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0108f5a82a6d340718444b7a9517d23);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_sig);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_3995fa327901f101b08eb9f03f1d1b6e);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_97a50fb2613b337b556ebe3781bd6aaa);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_50b3af4c04a3ab158f6e1e57f909fa60);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_06e0253af5434427f1c71cc741bfcd20);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0deb2c1644a7fc22308c69aeb4b4346);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_1656abe90eff01eda55a341e82e9fda3);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_97988af3e67ae761bfcecfe1a4562bfc);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_overloads);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead10ed9843f0915c3dee60bc0277001);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_source_sig);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload_sig);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_456851aaf3dd617d1e67f32e93426d5f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b60944a7c4a384905d0e5c2f6324459);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_42cc460483cf62625d326f0d79fd3717);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cdc19c884619da507576b26f5314eb1);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2b1c591a93c177c2bc04725ee4eef07);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_4df270219072b6b64d8ff891f268b05d);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9881426ae76e784b3e4e228a69bdb0b);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_3ce783f7f87b24ce75053a4baa904e8f);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_has_argument);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_15758c07f2426622f09e243a7ad8634b);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_5c61824ed7e051acd6e814894cf8d3ec);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_signatures_in_sync);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_b7585cf293b133946e69479ec7ced590);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_overloads_in_sync);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_7532c83e4d366d57ab3283b34eb21570);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_f007e6fe20e079ab4e57b0ba3f05c280_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_8456c843dc21488f7796a6796dabf53b_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_arg_name_str_plain_sig_tuple);
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
void checkModuleConstants_anthropic$_utils$_reflection(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0108f5a82a6d340718444b7a9517d23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0108f5a82a6d340718444b7a9517d23);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_sig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_sig);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_3995fa327901f101b08eb9f03f1d1b6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3995fa327901f101b08eb9f03f1d1b6e);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_97a50fb2613b337b556ebe3781bd6aaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97a50fb2613b337b556ebe3781bd6aaa);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_50b3af4c04a3ab158f6e1e57f909fa60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50b3af4c04a3ab158f6e1e57f909fa60);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_06e0253af5434427f1c71cc741bfcd20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06e0253af5434427f1c71cc741bfcd20);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0deb2c1644a7fc22308c69aeb4b4346));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0deb2c1644a7fc22308c69aeb4b4346);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_1656abe90eff01eda55a341e82e9fda3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1656abe90eff01eda55a341e82e9fda3);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_97988af3e67ae761bfcecfe1a4562bfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97988af3e67ae761bfcecfe1a4562bfc);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_overloads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_overloads);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead10ed9843f0915c3dee60bc0277001));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead10ed9843f0915c3dee60bc0277001);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_source_sig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_source_sig);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload_sig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload_sig);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_456851aaf3dd617d1e67f32e93426d5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_456851aaf3dd617d1e67f32e93426d5f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b60944a7c4a384905d0e5c2f6324459));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b60944a7c4a384905d0e5c2f6324459);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_42cc460483cf62625d326f0d79fd3717));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42cc460483cf62625d326f0d79fd3717);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cdc19c884619da507576b26f5314eb1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cdc19c884619da507576b26f5314eb1);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2b1c591a93c177c2bc04725ee4eef07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2b1c591a93c177c2bc04725ee4eef07);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_4df270219072b6b64d8ff891f268b05d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4df270219072b6b64d8ff891f268b05d);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9881426ae76e784b3e4e228a69bdb0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9881426ae76e784b3e4e228a69bdb0b);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_3ce783f7f87b24ce75053a4baa904e8f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3ce783f7f87b24ce75053a4baa904e8f);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_has_argument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_has_argument);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_15758c07f2426622f09e243a7ad8634b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_15758c07f2426622f09e243a7ad8634b);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_5c61824ed7e051acd6e814894cf8d3ec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c61824ed7e051acd6e814894cf8d3ec);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_signatures_in_sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_signatures_in_sync);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_b7585cf293b133946e69479ec7ced590));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b7585cf293b133946e69479ec7ced590);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_overloads_in_sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_overloads_in_sync);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_7532c83e4d366d57ab3283b34eb21570));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7532c83e4d366d57ab3283b34eb21570);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_f007e6fe20e079ab4e57b0ba3f05c280_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f007e6fe20e079ab4e57b0ba3f05c280_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_8456c843dc21488f7796a6796dabf53b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8456c843dc21488f7796a6796dabf53b_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_arg_name_str_plain_sig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_str_plain_arg_name_str_plain_sig_tuple);
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
static PyObject *module_var_accessor_anthropic$_utils$_reflection$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_reflection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_reflection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_reflection->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_reflection$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_reflection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_reflection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_reflection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$_utils$_reflection$typing_extensions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$_utils$_reflection->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$_utils$_reflection->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$_utils$_reflection->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_extensions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_extensions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_extensions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_extensions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3374de52c9531e1f3d759d6d85059468;
static PyCodeObject *code_objects_36b66d17724748ede491e6b73c705f54;
static PyCodeObject *code_objects_66c05b3b42484cc0912c86ea50047181;
static PyCodeObject *code_objects_e276771a8d55af7bb75b4cee70ee2427;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7532c83e4d366d57ab3283b34eb21570); CHECK_OBJECT(module_filename_obj);
code_objects_3374de52c9531e1f3d759d6d85059468 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf, mod_consts.const_str_digest_6c3b199f29fcb24dcfd45e3cb38b63cf, NULL, NULL, 0, 0, 0);
code_objects_36b66d17724748ede491e6b73c705f54 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_overloads_in_sync, mod_consts.const_str_plain_assert_overloads_in_sync, mod_consts.const_tuple_f007e6fe20e079ab4e57b0ba3f05c280_tuple, NULL, 2, 1, 0);
code_objects_66c05b3b42484cc0912c86ea50047181 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_signatures_in_sync, mod_consts.const_str_plain_assert_signatures_in_sync, mod_consts.const_tuple_8456c843dc21488f7796a6796dabf53b_tuple, NULL, 2, 1, 0);
code_objects_e276771a8d55af7bb75b4cee70ee2427 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_function_has_argument, mod_consts.const_str_plain_function_has_argument, mod_consts.const_tuple_str_plain_func_str_plain_arg_name_str_plain_sig_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__1_function_has_argument(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$_utils$_reflection$$$function__1_function_has_argument(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
PyObject *par_arg_name = python_pars[1];
PyObject *var_sig = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument = MAKE_FUNCTION_FRAME(tstate, code_objects_e276771a8d55af7bb75b4cee70ee2427, module_anthropic$_utils$_reflection, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument->m_type_description == NULL);
frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument = cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_anthropic$_utils$_reflection$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_args_element_value_1 = par_func;
frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument->m_frame.f_lineno = 10;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_signature, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_sig == NULL);
var_sig = tmp_assign_source_1;
}
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arg_name);
tmp_cmp_expr_left_1 = par_arg_name;
CHECK_OBJECT(var_sig);
tmp_expression_value_1 = var_sig;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parameters);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument,
    type_description_1,
    par_func,
    par_arg_name,
    var_sig
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument == cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument);
    cache_frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_reflection$$$function__1_function_has_argument);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sig);
CHECK_OBJECT(var_sig);
Py_DECREF(var_sig);
var_sig = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_sig);
var_sig = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_arg_name);
Py_DECREF(par_arg_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_arg_name);
Py_DECREF(par_arg_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_source_func = python_pars[0];
PyObject *par_check_func = python_pars[1];
PyObject *par_exclude_params = python_pars[2];
PyObject *var_errors = NULL;
PyObject *var_check_sig = NULL;
PyObject *var_source_sig = NULL;
PyObject *var_name = NULL;
PyObject *var_source_param = NULL;
PyObject *var_custom_param = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync = MAKE_FUNCTION_FRAME(tstate, code_objects_66c05b3b42484cc0912c86ea50047181, module_anthropic$_utils$_reflection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_type_description == NULL);
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync = cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_anthropic$_utils$_reflection$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_check_func);
tmp_args_element_value_1 = par_check_func;
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame.f_lineno = 22;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_signature, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_check_sig == NULL);
var_check_sig = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_anthropic$_utils$_reflection$inspect(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_source_func);
tmp_args_element_value_2 = par_source_func;
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame.f_lineno = 23;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_signature, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_sig == NULL);
var_source_sig = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_errors == NULL);
var_errors = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_source_sig);
tmp_expression_value_2 = var_source_sig;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parameters);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame.f_lineno = 27;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 27;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_9;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_source_param;
    var_source_param = tmp_assign_source_10;
    Py_INCREF(var_source_param);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
CHECK_OBJECT(par_exclude_params);
tmp_cmp_expr_right_1 = par_exclude_params;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
if (var_check_sig == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_check_sig);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = var_check_sig;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_parameters);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_3 = var_name;
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame.f_lineno = 31;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_custom_param;
    var_custom_param = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_custom_param);
tmp_operand_value_1 = var_custom_param;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_errors;
tmp_tuple_element_1 = mod_consts.const_str_digest_3995fa327901f101b08eb9f03f1d1b6e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_name);
tmp_format_value_1 = var_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_97a50fb2613b337b556ebe3781bd6aaa;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_item_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_item_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto loop_start_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_custom_param);
tmp_expression_value_5 = var_custom_param;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_annotation);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_source_param);
tmp_expression_value_6 = var_source_param;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_annotation);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 37;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_errors;
tmp_tuple_element_2 = mod_consts.const_str_digest_50b3af4c04a3ab158f6e1e57f909fa60;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_name);
tmp_format_value_2 = var_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_06e0253af5434427f1c71cc741bfcd20;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_source_param);
tmp_expression_value_7 = var_source_param;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_annotation);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_f0deb2c1644a7fc22308c69aeb4b4346;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
CHECK_OBJECT(var_custom_param);
tmp_expression_value_8 = var_custom_param;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_annotation);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_item_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_item_value_2 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto loop_start_1;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_errors);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_5;
PyObject *tmp_len_arg_1;
PyObject *tmp_format_spec_5;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_errors;
tmp_format_value_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_1656abe90eff01eda55a341e82e9fda3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_add_expr_left_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_str_arg_value_1 = mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
if (var_errors == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_errors;
tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame.f_lineno = 43;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync,
    type_description_1,
    par_source_func,
    par_check_func,
    par_exclude_params,
    var_errors,
    var_check_sig,
    var_source_sig,
    var_name,
    var_source_param,
    var_custom_param
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync == cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync);
    cache_frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync);

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
Py_XDECREF(var_errors);
var_errors = NULL;
Py_XDECREF(var_check_sig);
var_check_sig = NULL;
CHECK_OBJECT(var_source_sig);
CHECK_OBJECT(var_source_sig);
Py_DECREF(var_source_sig);
var_source_sig = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_source_param);
var_source_param = NULL;
Py_XDECREF(var_custom_param);
var_custom_param = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_errors);
var_errors = NULL;
Py_XDECREF(var_check_sig);
var_check_sig = NULL;
Py_XDECREF(var_source_sig);
var_source_sig = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_source_param);
var_source_param = NULL;
Py_XDECREF(var_custom_param);
var_custom_param = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_source_func);
Py_DECREF(par_source_func);
CHECK_OBJECT(par_check_func);
Py_DECREF(par_check_func);
CHECK_OBJECT(par_exclude_params);
Py_DECREF(par_exclude_params);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_source_func);
Py_DECREF(par_source_func);
CHECK_OBJECT(par_check_func);
Py_DECREF(par_check_func);
CHECK_OBJECT(par_exclude_params);
Py_DECREF(par_exclude_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_source_func = python_pars[0];
PyObject *par_overloaded_func = python_pars[1];
PyObject *par_exclude_params = python_pars[2];
PyObject *var_errors = NULL;
PyObject *var_source_sig = NULL;
PyObject *var_overloads = NULL;
PyObject *var_i = NULL;
PyObject *var_overload_fn = NULL;
PyObject *var_overload_sig = NULL;
PyObject *var_name = NULL;
PyObject *var_source_param = NULL;
PyObject *var_overload_param = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync)) {
    Py_XDECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync = MAKE_FUNCTION_FRAME(tstate, code_objects_36b66d17724748ede491e6b73c705f54, module_anthropic$_utils$_reflection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_type_description == NULL);
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync = cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_anthropic$_utils$_reflection$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_source_func);
tmp_args_element_value_1 = par_source_func;
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 53;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_signature, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_sig == NULL);
var_source_sig = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_anthropic$_utils$_reflection$typing_extensions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_extensions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_overloaded_func);
tmp_args_element_value_2 = par_overloaded_func;
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 54;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_overloads, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_overloads == NULL);
var_overloads = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_overloads);
tmp_operand_value_1 = var_overloads;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ead10ed9843f0915c3dee60bc0277001;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_overloaded_func);
tmp_operand_value_2 = par_overloaded_func;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 57;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_errors == NULL);
var_errors = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_overloads);
tmp_args_element_value_3 = var_overloads;
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 61;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 61;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_9;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_overload_fn;
    var_overload_fn = tmp_assign_source_10;
    Py_INCREF(var_overload_fn);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_3 = module_var_accessor_anthropic$_utils$_reflection$inspect(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_overload_fn);
tmp_args_element_value_4 = var_overload_fn;
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 62;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_signature, tmp_args_element_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_overload_sig;
    var_overload_sig = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
if (var_source_sig == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_source_sig);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = var_source_sig;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parameters);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 63;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 63;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_17;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_source_param;
    var_source_param = tmp_assign_source_18;
    Py_INCREF(var_source_param);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_1 = var_name;
CHECK_OBJECT(par_exclude_params);
tmp_cmp_expr_right_1 = par_exclude_params;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_start_2;
branch_no_2:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
if (var_overload_sig == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload_sig);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_4 = var_overload_sig;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_parameters);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_5 = var_name;
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 67;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_overload_param;
    var_overload_param = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_overload_param);
tmp_operand_value_3 = var_overload_param;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_5 = var_errors;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_456851aaf3dd617d1e67f32e93426d5f;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_i);
tmp_format_value_2 = var_i;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_3b60944a7c4a384905d0e5c2f6324459;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_name);
tmp_format_value_3 = var_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_97a50fb2613b337b556ebe3781bd6aaa;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 69;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto loop_start_2;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_overload_param);
tmp_expression_value_6 = var_overload_param;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_annotation);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_source_param);
tmp_expression_value_7 = var_source_param;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_annotation);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_8 = var_errors;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_append);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_element_3 = mod_consts.const_str_digest_456851aaf3dd617d1e67f32e93426d5f;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_i);
tmp_format_value_4 = var_i;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_42cc460483cf62625d326f0d79fd3717;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_name);
tmp_format_value_5 = var_name;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_2cdc19c884619da507576b26f5314eb1;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
CHECK_OBJECT(var_source_param);
tmp_expression_value_9 = var_source_param;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_annotation);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_value_6 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 5, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_f2b1c591a93c177c2bc04725ee4eef07;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 6, tmp_tuple_element_3);
CHECK_OBJECT(var_overload_param);
tmp_expression_value_10 = var_overload_param;
tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_annotation);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_value_7 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 7, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_errors);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_format_value_8;
PyObject *tmp_len_arg_1;
PyObject *tmp_format_spec_8;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
if (var_errors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_errors;
tmp_format_value_8 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_format_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
CHECK_OBJECT(tmp_format_value_8);
Py_DECREF(tmp_format_value_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_4df270219072b6b64d8ff891f268b05d;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_add_expr_left_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_str_arg_value_1 = mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
if (var_errors == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_errors;
tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 79;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_make_exception_arg_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame.f_lineno = 78;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync,
    type_description_1,
    par_source_func,
    par_overloaded_func,
    par_exclude_params,
    var_errors,
    var_source_sig,
    var_overloads,
    var_i,
    var_overload_fn,
    var_overload_sig,
    var_name,
    var_source_param,
    var_overload_param
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync == cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync);
    cache_frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync = NULL;
}

assertFrameObject(frame_frame_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync);

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
Py_XDECREF(var_errors);
var_errors = NULL;
Py_XDECREF(var_source_sig);
var_source_sig = NULL;
CHECK_OBJECT(var_overloads);
CHECK_OBJECT(var_overloads);
Py_DECREF(var_overloads);
var_overloads = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_overload_fn);
var_overload_fn = NULL;
Py_XDECREF(var_overload_sig);
var_overload_sig = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_source_param);
var_source_param = NULL;
Py_XDECREF(var_overload_param);
var_overload_param = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_errors);
var_errors = NULL;
Py_XDECREF(var_source_sig);
var_source_sig = NULL;
Py_XDECREF(var_overloads);
var_overloads = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_overload_fn);
var_overload_fn = NULL;
Py_XDECREF(var_overload_sig);
var_overload_sig = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_source_param);
var_source_param = NULL;
Py_XDECREF(var_overload_param);
var_overload_param = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_source_func);
Py_DECREF(par_source_func);
CHECK_OBJECT(par_overloaded_func);
Py_DECREF(par_overloaded_func);
CHECK_OBJECT(par_exclude_params);
Py_DECREF(par_exclude_params);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_source_func);
Py_DECREF(par_source_func);
CHECK_OBJECT(par_overloaded_func);
Py_DECREF(par_overloaded_func);
CHECK_OBJECT(par_exclude_params);
Py_DECREF(par_exclude_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__1_function_has_argument(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_reflection$$$function__1_function_has_argument,
        mod_consts.const_str_plain_function_has_argument,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e276771a8d55af7bb75b4cee70ee2427,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$_utils$_reflection,
        mod_consts.const_str_digest_e0108f5a82a6d340718444b7a9517d23,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync,
        mod_consts.const_str_plain_assert_signatures_in_sync,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_66c05b3b42484cc0912c86ea50047181,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$_utils$_reflection,
        mod_consts.const_str_digest_97988af3e67ae761bfcecfe1a4562bfc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync,
        mod_consts.const_str_plain_assert_overloads_in_sync,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_36b66d17724748ede491e6b73c705f54,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$_utils$_reflection,
        mod_consts.const_str_digest_b9881426ae76e784b3e4e228a69bdb0b,
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

static function_impl_code const function_table_anthropic$_utils$_reflection[] = {
impl_anthropic$_utils$_reflection$$$function__1_function_has_argument,
impl_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync,
impl_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$_utils$_reflection);
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
        module_anthropic$_utils$_reflection,
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
        function_table_anthropic$_utils$_reflection,
        sizeof(function_table_anthropic$_utils$_reflection) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic._utils._reflection";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$_utils$_reflection(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$_utils$_reflection");

    // Store the module for future use.
    module_anthropic$_utils$_reflection = module;

    moduledict_anthropic$_utils$_reflection = MODULE_DICT(module_anthropic$_utils$_reflection);

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
        PRINT_STRING("anthropic$_utils$_reflection: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$_utils$_reflection: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$_utils$_reflection: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic._utils._reflection" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$_utils$_reflection\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$_utils$_reflection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$_utils$_reflection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$_utils$_reflection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$_utils$_reflection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$_utils$_reflection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$_utils$_reflection);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$_utils$_reflection);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$_utils$_reflection;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$_utils$_reflection = MAKE_MODULE_FRAME(code_objects_3374de52c9531e1f3d759d6d85059468, module_anthropic$_utils$_reflection);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$_utils$_reflection);
assert(Py_REFCNT(frame_frame_anthropic$_utils$_reflection) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$_utils$_reflection$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$_utils$_reflection$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$_utils$_reflection;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$_utils$_reflection->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$_utils$_reflection;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$_utils$_reflection->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$_utils$_reflection,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$_utils$_reflection,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_9);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$_utils$_reflection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$_utils$_reflection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$_utils$_reflection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$_utils$_reflection);

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
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3ce783f7f87b24ce75053a4baa904e8f);

tmp_assign_source_10 = MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__1_function_has_argument(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_function_has_argument, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
tmp_kw_defaults_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_15758c07f2426622f09e243a7ad8634b);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5c61824ed7e051acd6e814894cf8d3ec);

tmp_assign_source_11 = MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__2_assert_signatures_in_sync(tstate, tmp_kw_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_signatures_in_sync, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_3;
tmp_kw_defaults_2 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_15758c07f2426622f09e243a7ad8634b);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b7585cf293b133946e69479ec7ced590);

tmp_assign_source_12 = MAKE_FUNCTION_anthropic$_utils$_reflection$$$function__3_assert_overloads_in_sync(tstate, tmp_kw_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_overloads_in_sync, tmp_assign_source_12);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$_utils$_reflection", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic._utils._reflection" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$_utils$_reflection);
    return module_anthropic$_utils$_reflection;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$_utils$_reflection, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$_utils$_reflection", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

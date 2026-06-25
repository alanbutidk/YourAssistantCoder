/* Generated code for Python module 'textual$system_commands'
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



/* The "module_textual$system_commands" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$system_commands;
PyDictObject *moduledict_textual$system_commands;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_52d8e1c685e663154cbb2511e41da66a;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain_self;
PyObject *const_str_plain_app;
PyObject *const_str_plain_get_system_commands;
PyObject *const_str_plain_screen;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_DiscoveryHit;
PyObject *const_tuple_str_plain_help_tuple;
PyObject *const_str_plain_discover;
PyObject *const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad;
PyObject *const_str_digest_b9e50d474252a150b93e4220a55f2c87;
PyObject *const_str_plain_matcher;
PyObject *const_str_plain_query;
PyObject *const_str_digest_7391172483fe3c72f3ef95ee0e768c22;
PyObject *const_str_plain_match;
PyObject *const_str_plain_Hit;
PyObject *const_str_plain_highlight;
PyObject *const_str_plain_search;
PyObject *const_str_digest_001b578b27bf1d133de5c5a25c1d3d70;
PyObject *const_str_digest_dea412e02b0e615b77d36ead5ac0f0e7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_bdbd9622cd5ef663544dfbf55c6a8f97;
PyObject *const_tuple_55a2c003e59ee91ba0c331b01fdb67a7_tuple;
PyObject *const_str_plain_Hits;
PyObject *const_str_plain_Provider;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_SystemCommandsProvider;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_6f907833fe48e11dbaec8edc4df99d02;
PyObject *const_str_digest_4259c342b2f6804786827f6f41004bda;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_19;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_1483a2ab279ef20a800c3f32b604e615;
PyObject *const_dict_ac8ce313c9d611403544794e9fb67d8b;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_e19f153b6c87183ab6be0befa246279d;
PyObject *const_tuple_str_plain_command_tuple;
PyObject *const_str_digest_d3b4074be422a9a4fc839448ff98464e;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_82e05c9ff51e26aa5e8be6ae818bf7c3_tuple;
PyObject *const_tuple_7407173758553f63539ded9d7760495b_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[50];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.system_commands"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_52d8e1c685e663154cbb2511e41da66a);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_system_commands);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_DiscoveryHit);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_discover);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9e50d474252a150b93e4220a55f2c87);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_matcher);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hit);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlight);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_dea412e02b0e615b77d36ead5ac0f0e7);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdbd9622cd5ef663544dfbf55c6a8f97);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_55a2c003e59ee91ba0c331b01fdb67a7_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Hits);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Provider);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_SystemCommandsProvider);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f907833fe48e11dbaec8edc4df99d02);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4259c342b2f6804786827f6f41004bda);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_1483a2ab279ef20a800c3f32b604e615);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_ac8ce313c9d611403544794e9fb67d8b);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_e19f153b6c87183ab6be0befa246279d);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3b4074be422a9a4fc839448ff98464e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_82e05c9ff51e26aa5e8be6ae818bf7c3_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_7407173758553f63539ded9d7760495b_tuple);
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
void checkModuleConstants_textual$system_commands(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_52d8e1c685e663154cbb2511e41da66a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52d8e1c685e663154cbb2511e41da66a);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_system_commands));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_system_commands);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_DiscoveryHit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DiscoveryHit);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_help_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_help_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_discover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_discover);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9e50d474252a150b93e4220a55f2c87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9e50d474252a150b93e4220a55f2c87);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_matcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matcher);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_query);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hit);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlight);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_dea412e02b0e615b77d36ead5ac0f0e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dea412e02b0e615b77d36ead5ac0f0e7);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdbd9622cd5ef663544dfbf55c6a8f97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdbd9622cd5ef663544dfbf55c6a8f97);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_55a2c003e59ee91ba0c331b01fdb67a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_55a2c003e59ee91ba0c331b01fdb67a7_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Hits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Hits);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Provider);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_SystemCommandsProvider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SystemCommandsProvider);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f907833fe48e11dbaec8edc4df99d02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f907833fe48e11dbaec8edc4df99d02);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4259c342b2f6804786827f6f41004bda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4259c342b2f6804786827f6f41004bda);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_19));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_19);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_1483a2ab279ef20a800c3f32b604e615));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1483a2ab279ef20a800c3f32b604e615);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_ac8ce313c9d611403544794e9fb67d8b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac8ce313c9d611403544794e9fb67d8b);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_e19f153b6c87183ab6be0befa246279d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e19f153b6c87183ab6be0befa246279d);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3b4074be422a9a4fc839448ff98464e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3b4074be422a9a4fc839448ff98464e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_82e05c9ff51e26aa5e8be6ae818bf7c3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_82e05c9ff51e26aa5e8be6ae818bf7c3_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_7407173758553f63539ded9d7760495b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7407173758553f63539ded9d7760495b_tuple);
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
static PyObject *module_var_accessor_textual$system_commands$DiscoveryHit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$system_commands->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$system_commands->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_DiscoveryHit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$system_commands->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DiscoveryHit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DiscoveryHit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DiscoveryHit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DiscoveryHit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_DiscoveryHit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_DiscoveryHit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DiscoveryHit);
    }

    return result;
}

static PyObject *module_var_accessor_textual$system_commands$Hit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$system_commands->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$system_commands->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Hit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$system_commands->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Hit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Hit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Hit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Hit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Hit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Hit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Hit);
    }

    return result;
}

static PyObject *module_var_accessor_textual$system_commands$Provider(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$system_commands->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$system_commands->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Provider);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$system_commands->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Provider);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Provider, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Provider);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Provider, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Provider);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Provider);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Provider);
    }

    return result;
}

static PyObject *module_var_accessor_textual$system_commands$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$system_commands->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$system_commands->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$system_commands->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_672bf2c37867dd650f7e723d897814a8;
static PyCodeObject *code_objects_5dbbeb4c38b1343ba16208d1655a967f;
static PyCodeObject *code_objects_ddda296b04ff64b5a69175dd42ed9821;
static PyCodeObject *code_objects_19ac63bc72c0411dd46854b57f118603;
static PyCodeObject *code_objects_b5e76869a35e23ea77a2d722df9e7de2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e19f153b6c87183ab6be0befa246279d); CHECK_OBJECT(module_filename_obj);
code_objects_672bf2c37867dd650f7e723d897814a8 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422, mod_consts.const_tuple_str_plain_command_tuple, NULL, 1, 0, 0);
code_objects_5dbbeb4c38b1343ba16208d1655a967f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d3b4074be422a9a4fc839448ff98464e, mod_consts.const_str_digest_d3b4074be422a9a4fc839448ff98464e, NULL, NULL, 0, 0, 0);
code_objects_ddda296b04ff64b5a69175dd42ed9821 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SystemCommandsProvider, mod_consts.const_str_plain_SystemCommandsProvider, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_19ac63bc72c0411dd46854b57f118603 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_discover, mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad, mod_consts.const_tuple_82e05c9ff51e26aa5e8be6ae818bf7c3_tuple, NULL, 1, 0, 0);
code_objects_b5e76869a35e23ea77a2d722df9e7de2 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_search, mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70, mod_consts.const_tuple_7407173758553f63539ded9d7760495b_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_ASYNCGEN_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_textual$system_commands$$$function__2_search$$$asyncgen__1_search(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__1_discover(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__2_search(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$system_commands$$$function__1_discover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_ASYNCGEN_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
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
struct textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_locals {
PyObject *var_commands;
PyObject *var_name;
PyObject *var_help_text;
PyObject *var_callback;
PyObject *var_discover;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__element_4;
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

static PyObject *textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_locals *asyncgen_heap = (struct textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_commands = NULL;
asyncgen_heap->var_name = NULL;
asyncgen_heap->var_help_text = NULL;
asyncgen_heap->var_callback = NULL;
asyncgen_heap->var_discover = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_19ac63bc72c0411dd46854b57f118603, module_textual$system_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_1 != NULL);
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_app);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_system_commands);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_screen);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_2);

asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 32;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 32;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda(tstate);

asyncgen->m_frame->m_frame.f_lineno = 31;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 31;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_commands == NULL);
asyncgen_heap->var_commands = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(asyncgen_heap->var_commands);
tmp_iter_arg_1 = asyncgen_heap->var_commands;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "cooooo";
asyncgen_heap->exception_lineno = 34;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = asyncgen_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
    asyncgen_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_1;
    asyncgen_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_2;
    asyncgen_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_3;
    asyncgen_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &asyncgen_heap->exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_4;
    asyncgen_heap->tmp_tuple_unpack_1__element_4 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
asyncgen_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &asyncgen_heap->exception_state, tmp_iterator_name_1, 4);
if (asyncgen_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_4);
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = asyncgen_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = asyncgen_heap->var_name;
    asyncgen_heap->var_name = tmp_assign_source_9;
    Py_INCREF(asyncgen_heap->var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = asyncgen_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = asyncgen_heap->var_help_text;
    asyncgen_heap->var_help_text = tmp_assign_source_10;
    Py_INCREF(asyncgen_heap->var_help_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = asyncgen_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = asyncgen_heap->var_callback;
    asyncgen_heap->var_callback = tmp_assign_source_11;
    Py_INCREF(asyncgen_heap->var_callback);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = asyncgen_heap->tmp_tuple_unpack_1__element_4;
{
    PyObject *old = asyncgen_heap->var_discover;
    asyncgen_heap->var_discover = tmp_assign_source_12;
    Py_INCREF(asyncgen_heap->var_discover);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_4);
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(asyncgen_heap->var_discover);
tmp_truth_name_1 = CHECK_IF_TRUE(asyncgen_heap->var_discover);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 35;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_2;
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
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_3 = module_var_accessor_textual$system_commands$DiscoveryHit(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_DiscoveryHit);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 36;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_name);
tmp_kw_call_arg_value_0_2 = asyncgen_heap->var_name;
CHECK_OBJECT(asyncgen_heap->var_callback);
tmp_kw_call_arg_value_1_1 = asyncgen_heap->var_callback;
CHECK_OBJECT(asyncgen_heap->var_help_text);
tmp_kw_call_dict_value_0_2 = asyncgen_heap->var_help_text;
asyncgen->m_frame->m_frame.f_lineno = 36;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_help_tuple);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 36;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 36;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 34;
asyncgen_heap->type_description_1 = "cooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[0],
    asyncgen_heap->var_commands,
    asyncgen_heap->var_name,
    asyncgen_heap->var_help_text,
    asyncgen_heap->var_callback,
    asyncgen_heap->var_discover
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_commands);
CHECK_OBJECT(asyncgen_heap->var_commands);
Py_DECREF(asyncgen_heap->var_commands);
asyncgen_heap->var_commands = NULL;
Py_XDECREF(asyncgen_heap->var_name);
asyncgen_heap->var_name = NULL;
Py_XDECREF(asyncgen_heap->var_help_text);
asyncgen_heap->var_help_text = NULL;
Py_XDECREF(asyncgen_heap->var_callback);
asyncgen_heap->var_callback = NULL;
Py_XDECREF(asyncgen_heap->var_discover);
asyncgen_heap->var_discover = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_commands);
asyncgen_heap->var_commands = NULL;
Py_XDECREF(asyncgen_heap->var_name);
asyncgen_heap->var_name = NULL;
Py_XDECREF(asyncgen_heap->var_help_text);
asyncgen_heap->var_help_text = NULL;
Py_XDECREF(asyncgen_heap->var_callback);
asyncgen_heap->var_callback = NULL;
Py_XDECREF(asyncgen_heap->var_discover);
asyncgen_heap->var_discover = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_context,
        module_textual$system_commands,
        mod_consts.const_str_plain_discover,
        mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad,
        code_objects_19ac63bc72c0411dd46854b57f118603,
        closure,
        1,
#if 1
        sizeof(struct textual$system_commands$$$function__1_discover$$$asyncgen__1_discover_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_command = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_672bf2c37867dd650f7e723d897814a8, module_textual$system_commands, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda->m_type_description == NULL);
frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda = cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_command);
tmp_expression_value_1 = par_command;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda,
    type_description_1,
    par_command
);


// Release cached frame if used for exception.
if (frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda == cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda);
    cache_frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_command);
Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$system_commands$$$function__2_search(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_query = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_query;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_textual$system_commands$$$function__2_search$$$asyncgen__1_search(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_query);
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
par_query = NULL;
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
struct textual$system_commands$$$function__2_search$$$asyncgen__1_search_locals {
PyObject *var_matcher;
PyObject *var_name;
PyObject *var_help_text;
PyObject *var_callback;
PyObject *var__;
PyObject *var_match;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__element_4;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *textual$system_commands$$$function__2_search$$$asyncgen__1_search_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$system_commands$$$function__2_search$$$asyncgen__1_search_locals *asyncgen_heap = (struct textual$system_commands$$$function__2_search$$$asyncgen__1_search_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_matcher = NULL;
asyncgen_heap->var_name = NULL;
asyncgen_heap->var_help_text = NULL;
asyncgen_heap->var_callback = NULL;
asyncgen_heap->var__ = NULL;
asyncgen_heap->var_match = NULL;
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b5e76869a35e23ea77a2d722df9e7de2, module_textual$system_commands, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 53;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_matcher);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 53;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_query);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 53;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 53;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 53;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_matcher == NULL);
asyncgen_heap->var_matcher = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_system_commands);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_screen);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_2);

asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 57;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->tmp_for_loop_1__for_iterator == NULL);
asyncgen_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = asyncgen_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccoooooo";
asyncgen_heap->exception_lineno = 57;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = asyncgen_heap->tmp_for_loop_1__iter_value;
    asyncgen_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = asyncgen_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
    asyncgen_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT_STARRED(tstate, &asyncgen_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_1;
    asyncgen_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT_STARRED(tstate, &asyncgen_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_2;
    asyncgen_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT_STARRED(tstate, &asyncgen_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_3;
    asyncgen_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
tmp_list_arg_1 = asyncgen_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = asyncgen_heap->tmp_tuple_unpack_1__element_4;
    asyncgen_heap->tmp_tuple_unpack_1__element_4 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_4);
tmp_len_arg_1 = asyncgen_heap->tmp_tuple_unpack_1__element_4;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_len_arg_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_4);
tmp_len_arg_2 = asyncgen_heap->tmp_tuple_unpack_1__element_4;
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = 3;
tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_4;
}
asyncgen->m_frame->m_frame.f_lineno = 57;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccoooooo";
goto try_except_handler_4;
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_4);
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(asyncgen_heap->tmp_tuple_unpack_1__source_iter);
asyncgen_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = asyncgen_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = asyncgen_heap->var_name;
    asyncgen_heap->var_name = tmp_assign_source_9;
    Py_INCREF(asyncgen_heap->var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_1);
asyncgen_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = asyncgen_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = asyncgen_heap->var_help_text;
    asyncgen_heap->var_help_text = tmp_assign_source_10;
    Py_INCREF(asyncgen_heap->var_help_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_2);
asyncgen_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = asyncgen_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = asyncgen_heap->var_callback;
    asyncgen_heap->var_callback = tmp_assign_source_11;
    Py_INCREF(asyncgen_heap->var_callback);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_3);
asyncgen_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(asyncgen_heap->tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = asyncgen_heap->tmp_tuple_unpack_1__element_4;
{
    PyObject *old = asyncgen_heap->var__;
    asyncgen_heap->var__ = tmp_assign_source_12;
    Py_INCREF(asyncgen_heap->var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(asyncgen_heap->tmp_tuple_unpack_1__element_4);
asyncgen_heap->tmp_tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
if (asyncgen_heap->var_matcher == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_matcher);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 58;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_5;
}

tmp_called_instance_1 = asyncgen_heap->var_matcher;
CHECK_OBJECT(asyncgen_heap->var_name);
tmp_args_element_value_3 = asyncgen_heap->var_name;
asyncgen->m_frame->m_frame.f_lineno = 58;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 58;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = asyncgen_heap->tmp_assignment_expr_1__value;
    asyncgen_heap->tmp_assignment_expr_1__value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
tmp_assign_source_14 = asyncgen_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = asyncgen_heap->var_match;
    asyncgen_heap->var_match = tmp_assign_source_14;
    Py_INCREF(asyncgen_heap->var_match);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_2 = asyncgen_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_2);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
Py_DECREF(asyncgen_heap->tmp_assignment_expr_1__value);
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_assignment_expr_1__value);
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 58;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_3 = module_var_accessor_textual$system_commands$Hit(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_Hit);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 59;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_match);
tmp_kw_call_arg_value_0_1 = asyncgen_heap->var_match;
if (asyncgen_heap->var_matcher == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_matcher);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 61;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}

tmp_called_instance_2 = asyncgen_heap->var_matcher;
CHECK_OBJECT(asyncgen_heap->var_name);
tmp_args_element_value_4 = asyncgen_heap->var_name;
asyncgen->m_frame->m_frame.f_lineno = 61;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_highlight, tmp_args_element_value_4);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 61;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(asyncgen_heap->var_callback);
tmp_kw_call_arg_value_2_1 = asyncgen_heap->var_callback;
CHECK_OBJECT(asyncgen_heap->var_help_text);
tmp_kw_call_dict_value_0_1 = asyncgen_heap->var_help_text;
asyncgen->m_frame->m_frame.f_lineno = 59;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_help_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 59;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
return tmp_expression_value_5;
yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 59;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 57;
asyncgen_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_matcher,
    asyncgen_heap->var_name,
    asyncgen_heap->var_help_text,
    asyncgen_heap->var_callback,
    asyncgen_heap->var__,
    asyncgen_heap->var_match
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(asyncgen_heap->tmp_for_loop_1__iter_value);
asyncgen_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(asyncgen_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(asyncgen_heap->tmp_for_loop_1__for_iterator);
asyncgen_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(asyncgen_heap->var_matcher);
asyncgen_heap->var_matcher = NULL;
Py_XDECREF(asyncgen_heap->var_name);
asyncgen_heap->var_name = NULL;
Py_XDECREF(asyncgen_heap->var_help_text);
asyncgen_heap->var_help_text = NULL;
Py_XDECREF(asyncgen_heap->var_callback);
asyncgen_heap->var_callback = NULL;
Py_XDECREF(asyncgen_heap->var__);
asyncgen_heap->var__ = NULL;
Py_XDECREF(asyncgen_heap->var_match);
asyncgen_heap->var_match = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_matcher);
asyncgen_heap->var_matcher = NULL;
Py_XDECREF(asyncgen_heap->var_name);
asyncgen_heap->var_name = NULL;
Py_XDECREF(asyncgen_heap->var_help_text);
asyncgen_heap->var_help_text = NULL;
Py_XDECREF(asyncgen_heap->var_callback);
asyncgen_heap->var_callback = NULL;
Py_XDECREF(asyncgen_heap->var__);
asyncgen_heap->var__ = NULL;
Py_XDECREF(asyncgen_heap->var_match);
asyncgen_heap->var_match = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_5;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_textual$system_commands$$$function__2_search$$$asyncgen__1_search(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        textual$system_commands$$$function__2_search$$$asyncgen__1_search_context,
        module_textual$system_commands,
        mod_consts.const_str_plain_search,
        mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70,
        code_objects_b5e76869a35e23ea77a2d722df9e7de2,
        closure,
        2,
#if 1
        sizeof(struct textual$system_commands$$$function__2_search$$$asyncgen__1_search_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__1_discover(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$system_commands$$$function__1_discover,
        mod_consts.const_str_plain_discover,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1772aa18a94d81e88267b9fe3dccd3ad,
#endif
        code_objects_19ac63bc72c0411dd46854b57f118603,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$system_commands,
        mod_consts.const_str_digest_52d8e1c685e663154cbb2511e41da66a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e886fdb3c3920e3bae50afb7e9c6d422,
#endif
        code_objects_672bf2c37867dd650f7e723d897814a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$system_commands,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$system_commands$$$function__2_search(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$system_commands$$$function__2_search,
        mod_consts.const_str_plain_search,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_001b578b27bf1d133de5c5a25c1d3d70,
#endif
        code_objects_b5e76869a35e23ea77a2d722df9e7de2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$system_commands,
        mod_consts.const_str_digest_b9e50d474252a150b93e4220a55f2c87,
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

static function_impl_code const function_table_textual$system_commands[] = {
impl_textual$system_commands$$$function__1_discover$$$asyncgen__1_discover$$$function__1_lambda,
impl_textual$system_commands$$$function__1_discover,
impl_textual$system_commands$$$function__2_search,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$system_commands);
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
        module_textual$system_commands,
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
        function_table_textual$system_commands,
        sizeof(function_table_textual$system_commands) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.system_commands";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$system_commands(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$system_commands");

    // Store the module for future use.
    module_textual$system_commands = module;

    moduledict_textual$system_commands = MODULE_DICT(module_textual$system_commands);

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
        PRINT_STRING("textual$system_commands: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$system_commands: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$system_commands: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.system_commands" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$system_commands\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$system_commands,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$system_commands,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$system_commands,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$system_commands,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$system_commands,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$system_commands);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$system_commands);
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

        UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$system_commands;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$system_commands$$$class__1_SystemCommandsProvider_19 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_dea412e02b0e615b77d36ead5ac0f0e7;
UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$system_commands = MAKE_MODULE_FRAME(code_objects_5dbbeb4c38b1343ba16208d1655a967f, module_textual$system_commands);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$system_commands);
assert(Py_REFCNT(frame_frame_textual$system_commands) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$system_commands$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$system_commands$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bdbd9622cd5ef663544dfbf55c6a8f97;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$system_commands;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_55a2c003e59ee91ba0c331b01fdb67a7_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$system_commands->m_frame.f_lineno = 16;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$system_commands,
        mod_consts.const_str_plain_DiscoveryHit,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_DiscoveryHit);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_DiscoveryHit, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$system_commands,
        mod_consts.const_str_plain_Hit,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Hit);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Hit, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$system_commands,
        mod_consts.const_str_plain_Hits,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Hits);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Hits, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$system_commands,
        mod_consts.const_str_plain_Provider,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Provider);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_Provider, tmp_assign_source_9);
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$system_commands$Provider(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Provider);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_SystemCommandsProvider;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$system_commands->m_frame.f_lineno = 19;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
frame_frame_textual$system_commands->m_frame.f_lineno = 19;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 19;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$system_commands$$$class__1_SystemCommandsProvider_19 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6f907833fe48e11dbaec8edc4df99d02;
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_4259c342b2f6804786827f6f41004bda;
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_SystemCommandsProvider;
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2 = MAKE_CLASS_FRAME(tstate, code_objects_ddda296b04ff64b5a69175dd42ed9821, module_textual$system_commands, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2);
assert(Py_REFCNT(frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1483a2ab279ef20a800c3f32b604e615);

tmp_dictset_value = MAKE_FUNCTION_textual$system_commands$$$function__1_discover(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain_discover, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ac8ce313c9d611403544794e9fb67d8b);

tmp_dictset_value = MAKE_FUNCTION_textual$system_commands$$$function__2_search(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain_search, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$system_commands$$$class__1_SystemCommandsProvider_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
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


exception_lineno = 19;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_SystemCommandsProvider;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$system_commands$$$class__1_SystemCommandsProvider_19;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$system_commands->m_frame.f_lineno = 19;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19);
locals_textual$system_commands$$$class__1_SystemCommandsProvider_19 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$system_commands$$$class__1_SystemCommandsProvider_19);
locals_textual$system_commands$$$class__1_SystemCommandsProvider_19 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 19;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$system_commands, (Nuitka_StringObject *)mod_consts.const_str_plain_SystemCommandsProvider, tmp_assign_source_16);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$system_commands, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$system_commands->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$system_commands, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$system_commands);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$system_commands", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.system_commands" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$system_commands);
    return module_textual$system_commands;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$system_commands, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$system_commands", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

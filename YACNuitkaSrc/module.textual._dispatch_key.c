/* Generated code for Python module 'textual$_dispatch_key'
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



/* The "module_textual$_dispatch_key" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_dispatch_key;
PyDictObject *moduledict_textual$_dispatch_key;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_35f14b26749599856b143320aa59367e;
PyObject *const_dict_18f385b248227b4f982dc51965363bda;
PyObject *const_str_digest_66c8f2b86951867857e7eb073be8f814;
PyObject *const_str_plain_get_key_handler;
PyObject *const_str_digest_6a5a9647bc982e80d2f1280459eeeabf;
PyObject *const_str_plain_event;
PyObject *const_dict_39eccf42d88ab01a1324a4083357a313;
PyObject *const_str_digest_d976046ea7ed65da23966a593a46bfd7;
PyObject *const_str_plain__raise_duplicate_key_handlers_error;
PyObject *const_str_digest_40eb39b90dc20477919849b7ee2c5007;
PyObject *const_str_plain_node;
PyObject *const_str_plain_screen;
PyObject *const_str_plain_name_aliases;
PyObject *const_str_plain_invoked_method;
PyObject *const_str_plain_key_name;
PyObject *const_str_plain_is_active;
PyObject *const_str_plain_invoke;
PyObject *const_str_plain_handled;
PyObject *const_str_plain_dispatch_key;
PyObject *const_str_plain_key_;
PyObject *const_str_plain__key_;
PyObject *const_str_plain_DuplicateKeyHandlers;
PyObject *const_str_digest_56f095a300d9e13147c7df1a7561ef93;
PyObject *const_str_digest_9c0975c206b3050f991042c6a07b324e;
PyObject *const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyObject *const_str_digest_24f08a89dd6d28cb5813bde798f712db;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_events_tuple;
PyObject *const_str_plain_events;
PyObject *const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf;
PyObject *const_tuple_str_plain_invoke_tuple;
PyObject *const_str_digest_a2b771df01944acf98eee59166e27e5e;
PyObject *const_tuple_str_plain_DOMNode_tuple;
PyObject *const_str_plain_DOMNode;
PyObject *const_str_digest_a33627154aef0f8deca081a44233ee29;
PyObject *const_tuple_str_plain_DuplicateKeyHandlers_tuple;
PyObject *const_str_digest_daf538768b16b8e3ad7fea25e6475ea0;
PyObject *const_tuple_str_plain_MessagePump_tuple;
PyObject *const_str_plain_MessagePump;
PyObject *const_dict_0d447d031b26065ed2af736d41815f84;
PyObject *const_str_digest_0e3d5bd9ebf9efd77fd69af4f17b1cdf;
PyObject *const_str_digest_182002523476e6cccd64dc643154531c;
PyObject *const_tuple_3e2e75b888d432e95d4f263116d668a6_tuple;
PyObject *const_tuple_0bf5c6e87f164df11d7dc6ca35e34327_tuple;
PyObject *const_tuple_str_plain_pump_str_plain_key_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._dispatch_key"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_35f14b26749599856b143320aa59367e);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_18f385b248227b4f982dc51965363bda);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_66c8f2b86951867857e7eb073be8f814);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_handler);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a5a9647bc982e80d2f1280459eeeabf);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_dict_39eccf42d88ab01a1324a4083357a313);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_d976046ea7ed65da23966a593a46bfd7);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__raise_duplicate_key_handlers_error);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_40eb39b90dc20477919849b7ee2c5007);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_node);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_name_aliases);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_invoked_method);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_name);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_active);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_invoke);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_handled);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_dispatch_key);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__key_);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateKeyHandlers);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_56f095a300d9e13147c7df1a7561ef93);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c0975c206b3050f991042c6a07b324e);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_24f08a89dd6d28cb5813bde798f712db);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invoke_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DOMNode_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOMNode);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_a33627154aef0f8deca081a44233ee29);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DuplicateKeyHandlers_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessagePump_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessagePump);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_0d447d031b26065ed2af736d41815f84);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e3d5bd9ebf9efd77fd69af4f17b1cdf);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_182002523476e6cccd64dc643154531c);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_3e2e75b888d432e95d4f263116d668a6_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_0bf5c6e87f164df11d7dc6ca35e34327_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pump_str_plain_key_tuple);
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
void checkModuleConstants_textual$_dispatch_key(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_35f14b26749599856b143320aa59367e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35f14b26749599856b143320aa59367e);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_18f385b248227b4f982dc51965363bda));
CHECK_OBJECT_DEEP(mod_consts.const_dict_18f385b248227b4f982dc51965363bda);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_66c8f2b86951867857e7eb073be8f814));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66c8f2b86951867857e7eb073be8f814);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_key_handler);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a5a9647bc982e80d2f1280459eeeabf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a5a9647bc982e80d2f1280459eeeabf);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_dict_39eccf42d88ab01a1324a4083357a313));
CHECK_OBJECT_DEEP(mod_consts.const_dict_39eccf42d88ab01a1324a4083357a313);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_d976046ea7ed65da23966a593a46bfd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d976046ea7ed65da23966a593a46bfd7);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__raise_duplicate_key_handlers_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__raise_duplicate_key_handlers_error);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_40eb39b90dc20477919849b7ee2c5007));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40eb39b90dc20477919849b7ee2c5007);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_node);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_name_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_name_aliases);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_invoked_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invoked_method);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_name);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_active));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_active);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_invoke));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invoke);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_handled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handled);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_dispatch_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dispatch_key);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__key_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__key_);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateKeyHandlers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DuplicateKeyHandlers);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_56f095a300d9e13147c7df1a7561ef93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56f095a300d9e13147c7df1a7561ef93);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c0975c206b3050f991042c6a07b324e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c0975c206b3050f991042c6a07b324e);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_24f08a89dd6d28cb5813bde798f712db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24f08a89dd6d28cb5813bde798f712db);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_events_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invoke_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_invoke_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DOMNode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DOMNode_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOMNode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOMNode);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_a33627154aef0f8deca081a44233ee29));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a33627154aef0f8deca081a44233ee29);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DuplicateKeyHandlers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DuplicateKeyHandlers_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessagePump_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessagePump_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessagePump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessagePump);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_0d447d031b26065ed2af736d41815f84));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d447d031b26065ed2af736d41815f84);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e3d5bd9ebf9efd77fd69af4f17b1cdf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e3d5bd9ebf9efd77fd69af4f17b1cdf);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_182002523476e6cccd64dc643154531c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_182002523476e6cccd64dc643154531c);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_3e2e75b888d432e95d4f263116d668a6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3e2e75b888d432e95d4f263116d668a6_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_0bf5c6e87f164df11d7dc6ca35e34327_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0bf5c6e87f164df11d7dc6ca35e34327_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pump_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pump_str_plain_key_tuple);
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
static PyObject *module_var_accessor_textual$_dispatch_key$DuplicateKeyHandlers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_dispatch_key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_dispatch_key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateKeyHandlers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_dispatch_key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DuplicateKeyHandlers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DuplicateKeyHandlers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DuplicateKeyHandlers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DuplicateKeyHandlers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateKeyHandlers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateKeyHandlers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateKeyHandlers);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_dispatch_key$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_dispatch_key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_dispatch_key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_dispatch_key->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_dispatch_key$invoke(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_dispatch_key->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_dispatch_key->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_dispatch_key->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_invoke);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_invoke, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_invoke);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_invoke, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5fd43f922c6dcb38395729126852579f;
static PyCodeObject *code_objects_0a1b0fb7a12b2e40659eec1e5ebf0143;
static PyCodeObject *code_objects_36ce1bc74be381a5d8efd5169e2cf4d2;
static PyCodeObject *code_objects_fedf23e9a8b3bd0d70bda52f54402256;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0e3d5bd9ebf9efd77fd69af4f17b1cdf); CHECK_OBJECT(module_filename_obj);
code_objects_5fd43f922c6dcb38395729126852579f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_182002523476e6cccd64dc643154531c, mod_consts.const_str_digest_182002523476e6cccd64dc643154531c, NULL, NULL, 0, 0, 0);
code_objects_0a1b0fb7a12b2e40659eec1e5ebf0143 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__raise_duplicate_key_handlers_error, mod_consts.const_str_digest_40eb39b90dc20477919849b7ee2c5007, mod_consts.const_tuple_3e2e75b888d432e95d4f263116d668a6_tuple, NULL, 3, 0, 0);
code_objects_36ce1bc74be381a5d8efd5169e2cf4d2 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dispatch_key, mod_consts.const_str_plain_dispatch_key, mod_consts.const_tuple_0bf5c6e87f164df11d7dc6ca35e34327_tuple, NULL, 2, 0, 0);
code_objects_fedf23e9a8b3bd0d70bda52f54402256 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_key_handler, mod_consts.const_str_digest_6a5a9647bc982e80d2f1280459eeeabf, mod_consts.const_tuple_str_plain_pump_str_plain_key_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_dispatch_key$$$function__1_dispatch_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_node = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_event = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_event;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_node;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_node);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
par_node = NULL;
CHECK_OBJECT(par_event);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
par_event = NULL;
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
struct textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_locals {
PyObject *var_get_key_handler;
PyObject *var_handled;
PyObject *var_invoked_method;
PyObject *var_key_name;
PyObject *var__raise_duplicate_key_handlers_error;
PyObject *var_screen;
PyObject *var_key_method_name;
PyObject *var_key_method;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
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

static PyObject *textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_locals *coroutine_heap = (struct textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_get_key_handler = NULL;
coroutine_heap->var_handled = NULL;
coroutine_heap->var_invoked_method = NULL;
coroutine_heap->var_key_name = NULL;
coroutine_heap->var__raise_duplicate_key_handlers_error = NULL;
coroutine_heap->var_screen = NULL;
coroutine_heap->var_key_method_name = NULL;
coroutine_heap->var_key_method = NULL;
coroutine_heap->tmp_assignment_expr_1__value = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_18f385b248227b4f982dc51965363bda);

tmp_assign_source_1 = MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler(tstate, tmp_annotations_1);

assert(coroutine_heap->var_get_key_handler == NULL);
coroutine_heap->var_get_key_handler = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_False;
assert(coroutine_heap->var_handled == NULL);
Py_INCREF(tmp_assign_source_2);
coroutine_heap->var_handled = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(coroutine_heap->var_invoked_method == NULL);
Py_INCREF(tmp_assign_source_3);
coroutine_heap->var_invoked_method = tmp_assign_source_3;
}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_36ce1bc74be381a5d8efd5169e2cf4d2, module_textual$_dispatch_key, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 35;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 35;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_key_name == NULL);
coroutine_heap->var_key_name = tmp_assign_source_4;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(coroutine_heap->var_key_name);
tmp_operand_value_1 = coroutine_heap->var_key_name;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 36;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
coroutine_heap->tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_39eccf42d88ab01a1324a4083357a313);

tmp_assign_source_5 = MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error(tstate, tmp_annotations_2);

assert(coroutine_heap->var__raise_duplicate_key_handlers_error == NULL);
coroutine_heap->var__raise_duplicate_key_handlers_error = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_node);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 51;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_screen);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 51;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_screen == NULL);
coroutine_heap->var_screen = tmp_assign_source_6;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_None;
assert(coroutine_heap->var_screen == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_screen = tmp_assign_source_7;
}
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 50;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccoooooooo";
goto try_except_handler_3;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_name_aliases);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooooooo";
coroutine_heap->exception_lineno = 54;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_10 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var_key_method_name;
    coroutine_heap->var_key_method_name = tmp_assign_source_10;
    Py_INCREF(coroutine_heap->var_key_method_name);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (coroutine_heap->var_get_key_handler == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_key_handler);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_5;
}

tmp_called_value_1 = coroutine_heap->var_get_key_handler;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_node);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_key_method_name);
tmp_args_element_value_2 = coroutine_heap->var_key_method_name;
coroutine->m_frame->m_frame.f_lineno = 55;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = coroutine_heap->tmp_assignment_expr_1__value;
    coroutine_heap->tmp_assignment_expr_1__value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(coroutine_heap->tmp_assignment_expr_1__value);
tmp_assign_source_12 = coroutine_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = coroutine_heap->var_key_method;
    coroutine_heap->var_key_method = tmp_assign_source_12;
    Py_INCREF(coroutine_heap->var_key_method);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(coroutine_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_2);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(coroutine_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(coroutine_heap->tmp_assignment_expr_1__value);
Py_DECREF(coroutine_heap->tmp_assignment_expr_1__value);
coroutine_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_assignment_expr_1__value);
coroutine_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
if (coroutine_heap->var_invoked_method == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_invoked_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_invoked_method);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
if (coroutine_heap->var__raise_duplicate_key_handlers_error == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__raise_duplicate_key_handlers_error);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_called_value_2 = coroutine_heap->var__raise_duplicate_key_handlers_error;
if (coroutine_heap->var_key_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_key_name);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_3 = coroutine_heap->var_key_name;
if (coroutine_heap->var_invoked_method == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_invoked_method);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_4 = coroutine_heap->var_invoked_method;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_key_method);
tmp_expression_value_5 = coroutine_heap->var_key_method;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_args_element_value_4);

coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 57;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
{
bool tmp_condition_result_5;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
if (coroutine_heap->var_screen == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_screen);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_cmp_expr_left_3 = coroutine_heap->var_screen;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (coroutine_heap->var_screen == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_screen);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = coroutine_heap->var_screen;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_is_active);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_end_1;
branch_no_5:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
coroutine->m_frame->m_frame.f_lineno = 65;
tmp_called_value_3 = module_var_accessor_textual$_dispatch_key$invoke(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_invoke);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_key_method);
tmp_args_element_value_6 = coroutine_heap->var_key_method;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_7 = ASYNC_AWAIT(tstate, tmp_expression_value_8, await_normal);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_13, sizeof(PyObject *), &tmp_cmp_expr_right_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_7;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_13, sizeof(PyObject *), &tmp_cmp_expr_right_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 65;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_left_4 = yield_return_value;
tmp_cmp_expr_right_4 = Py_False;
tmp_assign_source_13 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
{
    PyObject *old = coroutine_heap->var_handled;
    coroutine_heap->var_handled = tmp_assign_source_13;
    Py_INCREF(coroutine_heap->var_handled);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(coroutine_heap->var_key_method);
tmp_assign_source_14 = coroutine_heap->var_key_method;
{
    PyObject *old = coroutine_heap->var_invoked_method;
    coroutine_heap->var_invoked_method = tmp_assign_source_14;
    Py_INCREF(coroutine_heap->var_invoked_method);
    Py_XDECREF(old);
}

}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 54;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
if (coroutine_heap->var_handled == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_handled);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 68;
coroutine_heap->type_description_1 = "ccoooooooo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = coroutine_heap->var_handled;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_get_key_handler,
    coroutine_heap->var_handled,
    coroutine_heap->var_invoked_method,
    coroutine_heap->var_key_name,
    coroutine_heap->var__raise_duplicate_key_handlers_error,
    coroutine_heap->var_screen,
    coroutine_heap->var_key_method_name,
    coroutine_heap->var_key_method
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_get_key_handler);
coroutine_heap->var_get_key_handler = NULL;
Py_XDECREF(coroutine_heap->var_handled);
coroutine_heap->var_handled = NULL;
Py_XDECREF(coroutine_heap->var_invoked_method);
coroutine_heap->var_invoked_method = NULL;
Py_XDECREF(coroutine_heap->var_key_name);
coroutine_heap->var_key_name = NULL;
Py_XDECREF(coroutine_heap->var__raise_duplicate_key_handlers_error);
coroutine_heap->var__raise_duplicate_key_handlers_error = NULL;
Py_XDECREF(coroutine_heap->var_screen);
coroutine_heap->var_screen = NULL;
Py_XDECREF(coroutine_heap->var_key_method_name);
coroutine_heap->var_key_method_name = NULL;
Py_XDECREF(coroutine_heap->var_key_method);
coroutine_heap->var_key_method = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_get_key_handler);
coroutine_heap->var_get_key_handler = NULL;
Py_XDECREF(coroutine_heap->var_handled);
coroutine_heap->var_handled = NULL;
Py_XDECREF(coroutine_heap->var_invoked_method);
coroutine_heap->var_invoked_method = NULL;
Py_XDECREF(coroutine_heap->var_key_name);
coroutine_heap->var_key_name = NULL;
Py_XDECREF(coroutine_heap->var__raise_duplicate_key_handlers_error);
coroutine_heap->var__raise_duplicate_key_handlers_error = NULL;
Py_XDECREF(coroutine_heap->var_screen);
coroutine_heap->var_screen = NULL;
Py_XDECREF(coroutine_heap->var_key_method_name);
coroutine_heap->var_key_method_name = NULL;
Py_XDECREF(coroutine_heap->var_key_method);
coroutine_heap->var_key_method = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_context,
        module_textual$_dispatch_key,
        mod_consts.const_str_plain_dispatch_key,
        NULL,
        code_objects_36ce1bc74be381a5d8efd5169e2cf4d2,
        closure,
        2,
#if 1
        sizeof(struct textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_pump = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler)) {
    Py_XDECREF(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler = MAKE_FUNCTION_FRAME(tstate, code_objects_fedf23e9a8b3bd0d70bda52f54402256, module_textual$_dispatch_key, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler->m_type_description == NULL);
frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler = cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler);
assert(Py_REFCNT(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(par_pump);
tmp_expression_value_1 = par_pump;
tmp_tuple_element_1 = mod_consts.const_str_plain_key_;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_key);
tmp_format_value_1 = par_key;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
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
tmp_name_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_name_value_1 == NULL));
tmp_default_value_1 = Py_None;
tmp_or_left_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(par_pump);
tmp_expression_value_2 = par_pump;
tmp_tuple_element_2 = mod_consts.const_str_plain__key_;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_key);
tmp_format_value_2 = par_key;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_name_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_name_value_2 == NULL));
tmp_default_value_2 = Py_None;
tmp_or_right_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_2);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler,
    type_description_1,
    par_pump,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler == cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler);
    cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler = NULL;
}

assertFrameObject(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_pump);
Py_DECREF(par_pump);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_pump);
Py_DECREF(par_pump);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_key_name = python_pars[0];
PyObject *par_first_handler = python_pars[1];
PyObject *par_second_handler = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error)) {
    Py_XDECREF(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error = MAKE_FUNCTION_FRAME(tstate, code_objects_0a1b0fb7a12b2e40659eec1e5ebf0143, module_textual$_dispatch_key, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error->m_type_description == NULL);
frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error = cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error);
assert(Py_REFCNT(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_textual$_dispatch_key$DuplicateKeyHandlers(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DuplicateKeyHandlers);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_56f095a300d9e13147c7df1a7561ef93;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_key_name);
tmp_operand_value_1 = par_key_name;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_9c0975c206b3050f991042c6a07b324e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_first_handler);
tmp_operand_value_2 = par_first_handler;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7f0aead4232d288d8dfdff349b11a1b5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_second_handler);
tmp_operand_value_3 = par_second_handler;
tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_24f08a89dd6d28cb5813bde798f712db;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error->m_frame.f_lineno = 43;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error,
    type_description_1,
    par_key_name,
    par_first_handler,
    par_second_handler
);


// Release cached frame if used for exception.
if (frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error == cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error);
    cache_frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error = NULL;
}

assertFrameObject(frame_frame_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_key_name);
Py_DECREF(par_key_name);
CHECK_OBJECT(par_first_handler);
Py_DECREF(par_first_handler);
CHECK_OBJECT(par_second_handler);
Py_DECREF(par_second_handler);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}



static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_dispatch_key$$$function__1_dispatch_key,
        mod_consts.const_str_plain_dispatch_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_36ce1bc74be381a5d8efd5169e2cf4d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_dispatch_key,
        mod_consts.const_str_digest_35f14b26749599856b143320aa59367e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler,
        mod_consts.const_str_plain_get_key_handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a5a9647bc982e80d2f1280459eeeabf,
#endif
        code_objects_fedf23e9a8b3bd0d70bda52f54402256,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_dispatch_key,
        mod_consts.const_str_digest_66c8f2b86951867857e7eb073be8f814,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error,
        mod_consts.const_str_plain__raise_duplicate_key_handlers_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40eb39b90dc20477919849b7ee2c5007,
#endif
        code_objects_0a1b0fb7a12b2e40659eec1e5ebf0143,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_dispatch_key,
        mod_consts.const_str_digest_d976046ea7ed65da23966a593a46bfd7,
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

static function_impl_code const function_table_textual$_dispatch_key[] = {
impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__1_get_key_handler,
impl_textual$_dispatch_key$$$function__1_dispatch_key$$$coroutine__1_dispatch_key$$$function__2__raise_duplicate_key_handlers_error,
impl_textual$_dispatch_key$$$function__1_dispatch_key,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_dispatch_key);
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
        module_textual$_dispatch_key,
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
        function_table_textual$_dispatch_key,
        sizeof(function_table_textual$_dispatch_key) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._dispatch_key";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_dispatch_key(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_dispatch_key");

    // Store the module for future use.
    module_textual$_dispatch_key = module;

    moduledict_textual$_dispatch_key = MODULE_DICT(module_textual$_dispatch_key);

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
        PRINT_STRING("textual$_dispatch_key: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_dispatch_key: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_dispatch_key: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._dispatch_key" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_dispatch_key\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_dispatch_key,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_dispatch_key,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_dispatch_key,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_dispatch_key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_dispatch_key,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_dispatch_key);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_dispatch_key);
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

        UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$_dispatch_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_dispatch_key = MAKE_MODULE_FRAME(code_objects_5fd43f922c6dcb38395729126852579f, module_textual$_dispatch_key);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_dispatch_key);
assert(Py_REFCNT(frame_frame_textual$_dispatch_key) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_dispatch_key$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_dispatch_key$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_dispatch_key;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_events_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_dispatch_key->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_events,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_events);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_events, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_dispatch_key;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_invoke_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_dispatch_key->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_invoke,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_invoke);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_a2b771df01944acf98eee59166e27e5e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_dispatch_key;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_DOMNode_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_dispatch_key->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_DOMNode,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DOMNode);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_DOMNode, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_a33627154aef0f8deca081a44233ee29;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$_dispatch_key;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DuplicateKeyHandlers_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$_dispatch_key->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_DuplicateKeyHandlers,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_DuplicateKeyHandlers);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateKeyHandlers, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$_dispatch_key;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_MessagePump_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$_dispatch_key->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$_dispatch_key,
        mod_consts.const_str_plain_MessagePump,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_MessagePump);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_MessagePump, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_dispatch_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_dispatch_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_dispatch_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_dispatch_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d447d031b26065ed2af736d41815f84);

tmp_assign_source_11 = MAKE_FUNCTION_textual$_dispatch_key$$$function__1_dispatch_key(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)mod_consts.const_str_plain_dispatch_key, tmp_assign_source_11);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_dispatch_key", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._dispatch_key" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_dispatch_key);
    return module_textual$_dispatch_key;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_dispatch_key, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_dispatch_key", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

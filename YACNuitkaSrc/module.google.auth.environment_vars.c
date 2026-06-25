/* Generated code for Python module 'google$auth$environment_vars'
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



/* The "module_google$auth$environment_vars" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$environment_vars;
PyDictObject *moduledict_google$auth$environment_vars;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_10880f052f27f928d51126b331deabae;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_GOOGLE_CLOUD_PROJECT;
PyObject *const_str_plain_PROJECT;
PyObject *const_str_plain_GCLOUD_PROJECT;
PyObject *const_str_plain_LEGACY_PROJECT;
PyObject *const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT;
PyObject *const_str_plain_GOOGLE_APPLICATION_CREDENTIALS;
PyObject *const_str_plain_CREDENTIALS;
PyObject *const_str_plain_CLOUDSDK_CONFIG;
PyObject *const_str_plain_CLOUD_SDK_CONFIG_DIR;
PyObject *const_str_plain_GCE_METADATA_HOST;
PyObject *const_str_plain_GCE_METADATA_ROOT;
PyObject *const_str_plain_GCE_METADATA_IP;
PyObject *const_str_plain_GCE_METADATA_TIMEOUT;
PyObject *const_str_plain_GCE_METADATA_DETECT_RETRIES;
PyObject *const_str_plain_NO_GCE_CHECK;
PyObject *const_str_plain_GCE_METADATA_MTLS_MODE;
PyObject *const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE;
PyObject *const_str_plain_APPENGINE_RUNTIME;
PyObject *const_str_plain_LEGACY_APPENGINE_RUNTIME;
PyObject *const_str_plain_AWS_ACCESS_KEY_ID;
PyObject *const_str_plain_AWS_SECRET_ACCESS_KEY;
PyObject *const_str_plain_AWS_SESSION_TOKEN;
PyObject *const_str_plain_AWS_REGION;
PyObject *const_str_plain_AWS_DEFAULT_REGION;
PyObject *const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED;
PyObject *const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG;
PyObject *const_str_digest_60822a906f0610ea59f70a1265882b97;
PyObject *const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d;
PyObject *const_str_digest_20475c486f127d59b0974272c7a69b01;
PyObject *const_str_digest_4c277e36b72d0381f6e94bd6c13d9729;
PyObject *const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[34];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.environment_vars"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_10880f052f27f928d51126b331deabae);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_PROJECT);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROJECT);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCLOUD_PROJECT);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_PROJECT);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_APPLICATION_CREDENTIALS);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_CREDENTIALS);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUDSDK_CONFIG);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_HOST);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_ROOT);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_IP);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_TIMEOUT);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_GCE_CHECK);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_MTLS_MODE);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_APPENGINE_RUNTIME);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_APPENGINE_RUNTIME);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_ACCESS_KEY_ID);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SESSION_TOKEN);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_REGION);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_DEFAULT_REGION);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c277e36b72d0381f6e94bd6c13d9729);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4);
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
void checkModuleConstants_google$auth$environment_vars(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_10880f052f27f928d51126b331deabae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10880f052f27f928d51126b331deabae);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_CLOUD_PROJECT);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PROJECT);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCLOUD_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCLOUD_PROJECT);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LEGACY_PROJECT);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_APPLICATION_CREDENTIALS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_APPLICATION_CREDENTIALS);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_CREDENTIALS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CREDENTIALS);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUDSDK_CONFIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOUDSDK_CONFIG);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_HOST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_HOST);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_ROOT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_ROOT);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_IP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_IP);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_TIMEOUT);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_GCE_CHECK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_GCE_CHECK);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_MTLS_MODE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_MTLS_MODE);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_APPENGINE_RUNTIME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APPENGINE_RUNTIME);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_LEGACY_APPENGINE_RUNTIME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LEGACY_APPENGINE_RUNTIME);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_ACCESS_KEY_ID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_ACCESS_KEY_ID);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_SESSION_TOKEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_SESSION_TOKEN);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_REGION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_REGION);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_AWS_DEFAULT_REGION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AWS_DEFAULT_REGION);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c277e36b72d0381f6e94bd6c13d9729));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c277e36b72d0381f6e94bd6c13d9729);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_google$auth$environment_vars$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$environment_vars->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$environment_vars->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$environment_vars->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0d3a4cdcb23f4abae2077aa66ffaa0d2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4c277e36b72d0381f6e94bd6c13d9729); CHECK_OBJECT(module_filename_obj);
code_objects_0d3a4cdcb23f4abae2077aa66ffaa0d2 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4, mod_consts.const_str_digest_e3f7d66bd4b6090d28635fc7be82f6b4, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_google$auth$environment_vars[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$environment_vars);
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
        module_google$auth$environment_vars,
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
        function_table_google$auth$environment_vars,
        sizeof(function_table_google$auth$environment_vars) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.environment_vars";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$environment_vars(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$environment_vars");

    // Store the module for future use.
    module_google$auth$environment_vars = module;

    moduledict_google$auth$environment_vars = MODULE_DICT(module_google$auth$environment_vars);

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
        PRINT_STRING("google$auth$environment_vars: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$environment_vars: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$environment_vars: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.environment_vars" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$environment_vars\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$environment_vars,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$environment_vars,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$environment_vars,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$environment_vars,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$environment_vars,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$environment_vars);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$environment_vars);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$environment_vars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_10880f052f27f928d51126b331deabae;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$environment_vars = MAKE_MODULE_FRAME(code_objects_0d3a4cdcb23f4abae2077aa66ffaa0d2, module_google$auth$environment_vars);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$environment_vars);
assert(Py_REFCNT(frame_frame_google$auth$environment_vars) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$environment_vars$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$environment_vars$__spec__(tstate);
assert(!(tmp_assattr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_has_location, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$environment_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$environment_vars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$environment_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$environment_vars);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_plain_GOOGLE_CLOUD_PROJECT;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_PROJECT, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_plain_GCLOUD_PROJECT;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_LEGACY_PROJECT, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOGLE_CLOUD_QUOTA_PROJECT, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_plain_GOOGLE_APPLICATION_CREDENTIALS;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_CREDENTIALS, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_CLOUDSDK_CONFIG;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_CLOUD_SDK_CONFIG_DIR, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_GCE_METADATA_HOST;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_HOST, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_plain_GCE_METADATA_ROOT;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_ROOT, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_plain_GCE_METADATA_IP;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_IP, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_GCE_METADATA_TIMEOUT;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_TIMEOUT, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_plain_NO_GCE_CHECK;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_NO_GCE_CHECK, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_plain_GCE_METADATA_MTLS_MODE;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GCE_METADATA_MTLS_MODE, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOGLE_API_USE_CLIENT_CERTIFICATE, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_plain_APPENGINE_RUNTIME;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_LEGACY_APPENGINE_RUNTIME, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_plain_AWS_ACCESS_KEY_ID;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_AWS_ACCESS_KEY_ID, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_AWS_SECRET_ACCESS_KEY, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_plain_AWS_SESSION_TOKEN;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_AWS_SESSION_TOKEN, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_str_plain_AWS_REGION;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_AWS_REGION, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_plain_AWS_DEFAULT_REGION;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_AWS_DEFAULT_REGION, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOGLE_AUTH_TRUST_BOUNDARY_ENABLED, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_plain_GOOGLE_API_CERTIFICATE_CONFIG, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_digest_60822a906f0610ea59f70a1265882b97, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_digest_9a6343af434e3b1bbb60f8f21d855c5d, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01;
UPDATE_STRING_DICT0(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)mod_consts.const_str_digest_20475c486f127d59b0974272c7a69b01, tmp_assign_source_27);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$environment_vars", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.environment_vars" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$environment_vars);
    return module_google$auth$environment_vars;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$environment_vars, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$environment_vars", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

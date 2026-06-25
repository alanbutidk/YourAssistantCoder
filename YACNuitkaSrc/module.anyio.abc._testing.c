/* Generated code for Python module 'anyio$abc$_testing'
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



/* The "module_anyio$abc$_testing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_testing;
PyDictObject *moduledict_anyio$abc$_testing;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_e3170635fac9d089bae7d3bb18ca83da_tuple;
PyObject *const_str_plain_AsyncGenerator;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Coroutine;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain__T;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_TestRunner_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_71cd10115bb924019d6382121b302ea5;
PyObject *const_str_digest_89c0174380a21c292547448d5bf9be8a;
PyObject *const_str_plain_TestRunner;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_11;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_1a479dd38f9e91c84d4c3749b122aa3d;
PyObject *const_str_digest_7133e3fe7825adbe8a21d75875e09a13;
PyObject *const_dict_e5b439434799ffb9c6adc26be2573387;
PyObject *const_str_digest_94a3377cc028383e5267b7dcaed6e96f;
PyObject *const_dict_3ee1e8d7ab9ee8559defeb70d2257162;
PyObject *const_str_digest_6730ff5dc948673379ed250615679ba1;
PyObject *const_str_plain_run_asyncgen_fixture;
PyObject *const_str_digest_9bdc1abf576dfd38365eacf92663864a;
PyObject *const_dict_24460753c2c4b486aaa80893f36a61d8;
PyObject *const_str_digest_b6efb0cc2c7d5feedf20a7af1a2dd7f2;
PyObject *const_str_plain_run_fixture;
PyObject *const_str_digest_204931c0f71cdfaebb556e9c5c182859;
PyObject *const_dict_8b8e8126d8da99cd3b213ffcc4fb3df4;
PyObject *const_str_digest_98f3574c46ce17adb5f93623010cc589;
PyObject *const_str_plain_run_test;
PyObject *const_str_digest_625a28635915185df9d7c0e5201be0e2;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_54275c14a314f5e1d6e231b898cbc0ea;
PyObject *const_str_digest_7edaf812281358ebd215b86b26bf9740;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_str_plain_test_func_str_plain_kwargs_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[53];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio.abc._testing"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_e3170635fac9d089bae7d3bb18ca83da_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TestRunner_tuple_empty_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_71cd10115bb924019d6382121b302ea5);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_89c0174380a21c292547448d5bf9be8a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_TestRunner);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_11);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_1a479dd38f9e91c84d4c3749b122aa3d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_7133e3fe7825adbe8a21d75875e09a13);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_e5b439434799ffb9c6adc26be2573387);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_94a3377cc028383e5267b7dcaed6e96f);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_3ee1e8d7ab9ee8559defeb70d2257162);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_6730ff5dc948673379ed250615679ba1);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_asyncgen_fixture);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bdc1abf576dfd38365eacf92663864a);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_24460753c2c4b486aaa80893f36a61d8);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6efb0cc2c7d5feedf20a7af1a2dd7f2);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_fixture);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_204931c0f71cdfaebb556e9c5c182859);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_8b8e8126d8da99cd3b213ffcc4fb3df4);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_98f3574c46ce17adb5f93623010cc589);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_test);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_625a28635915185df9d7c0e5201be0e2);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_54275c14a314f5e1d6e231b898cbc0ea);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_7edaf812281358ebd215b86b26bf9740);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_test_func_str_plain_kwargs_tuple);
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
void checkModuleConstants_anyio$abc$_testing(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_e3170635fac9d089bae7d3bb18ca83da_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e3170635fac9d089bae7d3bb18ca83da_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncGenerator);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Coroutine);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TestRunner_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TestRunner_tuple_empty_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_71cd10115bb924019d6382121b302ea5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71cd10115bb924019d6382121b302ea5);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_89c0174380a21c292547448d5bf9be8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89c0174380a21c292547448d5bf9be8a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_TestRunner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TestRunner);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_11));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_11);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_1a479dd38f9e91c84d4c3749b122aa3d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1a479dd38f9e91c84d4c3749b122aa3d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_7133e3fe7825adbe8a21d75875e09a13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7133e3fe7825adbe8a21d75875e09a13);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_e5b439434799ffb9c6adc26be2573387));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5b439434799ffb9c6adc26be2573387);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_94a3377cc028383e5267b7dcaed6e96f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94a3377cc028383e5267b7dcaed6e96f);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_3ee1e8d7ab9ee8559defeb70d2257162));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3ee1e8d7ab9ee8559defeb70d2257162);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_6730ff5dc948673379ed250615679ba1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6730ff5dc948673379ed250615679ba1);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_asyncgen_fixture));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_asyncgen_fixture);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bdc1abf576dfd38365eacf92663864a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bdc1abf576dfd38365eacf92663864a);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_24460753c2c4b486aaa80893f36a61d8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_24460753c2c4b486aaa80893f36a61d8);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6efb0cc2c7d5feedf20a7af1a2dd7f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6efb0cc2c7d5feedf20a7af1a2dd7f2);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_fixture));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_fixture);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_204931c0f71cdfaebb556e9c5c182859));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_204931c0f71cdfaebb556e9c5c182859);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_8b8e8126d8da99cd3b213ffcc4fb3df4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8b8e8126d8da99cd3b213ffcc4fb3df4);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_98f3574c46ce17adb5f93623010cc589));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98f3574c46ce17adb5f93623010cc589);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_test));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_test);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_625a28635915185df9d7c0e5201be0e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_625a28635915185df9d7c0e5201be0e2);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_54275c14a314f5e1d6e231b898cbc0ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54275c14a314f5e1d6e231b898cbc0ea);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_7edaf812281358ebd215b86b26bf9740));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7edaf812281358ebd215b86b26bf9740);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_test_func_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_test_func_str_plain_kwargs_tuple);
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
static PyObject *module_var_accessor_anyio$abc$_testing$ABCMeta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_testing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_testing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_testing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_testing$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_testing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_testing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_testing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_testing$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_testing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_testing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_testing->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$_testing$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc$_testing->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc$_testing->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc$_testing->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e1554d691dd90f3226252a3b80835e6c;
static PyCodeObject *code_objects_cbc4c53c62429b5bae7a38f6aeacdf3f;
static PyCodeObject *code_objects_a678940ee2aa1fc4bfdd0141f6e7ebad;
static PyCodeObject *code_objects_2cc74c96b8765860f1ce19f0ec417d5b;
static PyCodeObject *code_objects_da3ce9e3152b4cf36ba60d9772282767;
static PyCodeObject *code_objects_17f1ec9ada2c7d358bb8a852e333f979;
static PyCodeObject *code_objects_948b917d2b73c7e46e8a7650b87cd812;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_54275c14a314f5e1d6e231b898cbc0ea); CHECK_OBJECT(module_filename_obj);
code_objects_e1554d691dd90f3226252a3b80835e6c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7edaf812281358ebd215b86b26bf9740, mod_consts.const_str_digest_7edaf812281358ebd215b86b26bf9740, NULL, NULL, 0, 0, 0);
code_objects_cbc4c53c62429b5bae7a38f6aeacdf3f = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TestRunner, mod_consts.const_str_plain_TestRunner, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a678940ee2aa1fc4bfdd0141f6e7ebad = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_7133e3fe7825adbe8a21d75875e09a13, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2cc74c96b8765860f1ce19f0ec417d5b = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_94a3377cc028383e5267b7dcaed6e96f, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, NULL, 4, 0, 0);
code_objects_da3ce9e3152b4cf36ba60d9772282767 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_asyncgen_fixture, mod_consts.const_str_digest_9bdc1abf576dfd38365eacf92663864a, mod_consts.const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple, NULL, 3, 0, 0);
code_objects_17f1ec9ada2c7d358bb8a852e333f979 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_fixture, mod_consts.const_str_digest_204931c0f71cdfaebb556e9c5c182859, mod_consts.const_tuple_str_plain_self_str_plain_fixture_func_str_plain_kwargs_tuple, NULL, 3, 0, 0);
code_objects_948b917d2b73c7e46e8a7650b87cd812 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_test, mod_consts.const_str_digest_625a28635915185df9d7c0e5201be0e2, mod_consts.const_tuple_str_plain_self_str_plain_test_func_str_plain_kwargs_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__1___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__2___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__3_run_asyncgen_fixture(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__4_run_fixture(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__5_run_test(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_testing$$$function__1___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__1___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_testing$$$function__1___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7133e3fe7825adbe8a21d75875e09a13,
#endif
        code_objects_a678940ee2aa1fc4bfdd0141f6e7ebad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__2___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_94a3377cc028383e5267b7dcaed6e96f,
#endif
        code_objects_2cc74c96b8765860f1ce19f0ec417d5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_testing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__3_run_asyncgen_fixture(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run_asyncgen_fixture,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bdc1abf576dfd38365eacf92663864a,
#endif
        code_objects_da3ce9e3152b4cf36ba60d9772282767,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_testing,
        mod_consts.const_str_digest_6730ff5dc948673379ed250615679ba1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__4_run_fixture(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run_fixture,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_204931c0f71cdfaebb556e9c5c182859,
#endif
        code_objects_17f1ec9ada2c7d358bb8a852e333f979,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_testing,
        mod_consts.const_str_digest_b6efb0cc2c7d5feedf20a7af1a2dd7f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_testing$$$function__5_run_test(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_run_test,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_625a28635915185df9d7c0e5201be0e2,
#endif
        code_objects_948b917d2b73c7e46e8a7650b87cd812,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_testing,
        mod_consts.const_str_digest_98f3574c46ce17adb5f93623010cc589,
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

static function_impl_code const function_table_anyio$abc$_testing[] = {
impl_anyio$abc$_testing$$$function__1___enter__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$abc$_testing);
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
        module_anyio$abc$_testing,
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
        function_table_anyio$abc$_testing,
        sizeof(function_table_anyio$abc$_testing) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio.abc._testing";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$abc$_testing(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$abc$_testing");

    // Store the module for future use.
    module_anyio$abc$_testing = module;

    moduledict_anyio$abc$_testing = MODULE_DICT(module_anyio$abc$_testing);

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
        PRINT_STRING("anyio$abc$_testing: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$abc$_testing: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$abc$_testing: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._testing" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$abc$_testing\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_testing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_testing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_testing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_testing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$abc$_testing);
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

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_testing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_anyio$abc$_testing$$$class__1_TestRunner_11 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$abc$_testing = MAKE_MODULE_FRAME(code_objects_e1554d691dd90f3226252a3b80835e6c, module_anyio$abc$_testing);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_testing);
assert(Py_REFCNT(frame_frame_anyio$abc$_testing) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$abc$_testing$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$abc$_testing$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_testing;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ABCMeta_str_plain_abstractmethod_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_ABCMeta,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABCMeta);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_testing;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_e3170635fac9d089bae7d3bb18ca83da_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 5;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_AsyncGenerator,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AsyncGenerator);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGenerator, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_Coroutine,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Coroutine);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_13);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_14 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_14);
tmp_import_from_3__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$abc$_testing,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_16);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$abc$_testing$TypeVar(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 8;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__T_tuple);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_17);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_dict_value_1 = module_var_accessor_anyio$abc$_testing$ABCMeta(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCMeta);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto try_except_handler_4;
}
tmp_assign_source_18 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_19 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_19 == NULL) {
    tmp_assign_source_19 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_19);
}
assert(!(tmp_assign_source_19 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_19);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_1 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_TestRunner_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 11;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_3 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_5 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 11;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 11;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_2:;
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anyio$abc$_testing$$$class__1_TestRunner_11 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_71cd10115bb924019d6382121b302ea5;
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_89c0174380a21c292547448d5bf9be8a;
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_TestRunner;
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_11;
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2 = MAKE_CLASS_FRAME(tstate, code_objects_cbc4c53c62429b5bae7a38f6aeacdf3f, module_anyio$abc$_testing, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2);
assert(Py_REFCNT(frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1a479dd38f9e91c84d4c3749b122aa3d);

tmp_dictset_value = MAKE_FUNCTION_anyio$abc$_testing$$$function__1___enter__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_anyio$abc$_testing$abstractmethod(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e5b439434799ffb9c6adc26be2573387);

tmp_args_element_value_1 = MAKE_FUNCTION_anyio$abc$_testing$$$function__2___exit__(tstate, tmp_annotations_2);

frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2->m_frame.f_lineno = 20;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_anyio$abc$_testing$abstractmethod(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_3ee1e8d7ab9ee8559defeb70d2257162);

tmp_args_element_value_2 = MAKE_FUNCTION_anyio$abc$_testing$$$function__3_run_asyncgen_fixture(tstate, tmp_annotations_3);

frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2->m_frame.f_lineno = 28;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_run_asyncgen_fixture, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_5 = PyObject_GetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_anyio$abc$_testing$abstractmethod(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_24460753c2c4b486aaa80893f36a61d8);

tmp_args_element_value_3 = MAKE_FUNCTION_anyio$abc$_testing$$$function__4_run_fixture(tstate, tmp_annotations_4);

frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2->m_frame.f_lineno = 42;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_run_fixture, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_5;
tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_anyio$abc$_testing$abstractmethod(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_8b8e8126d8da99cd3b213ffcc4fb3df4);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$abc$_testing$$$function__5_run_test(tstate, tmp_annotations_5);

frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2->m_frame.f_lineno = 56;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain_run_test, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$abc$_testing$$$class__1_TestRunner_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$abc$_testing$$$class__1_TestRunner_11, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_TestRunner;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_anyio$abc$_testing$$$class__1_TestRunner_11;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$abc$_testing->m_frame.f_lineno = 11;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_22 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_anyio$abc$_testing$$$class__1_TestRunner_11);
locals_anyio$abc$_testing$$$class__1_TestRunner_11 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$abc$_testing$$$class__1_TestRunner_11);
locals_anyio$abc$_testing$$$class__1_TestRunner_11 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 11;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)mod_consts.const_str_plain_TestRunner, tmp_assign_source_22);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc$_testing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc$_testing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc$_testing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$abc$_testing);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$abc$_testing", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc._testing" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$abc$_testing);
    return module_anyio$abc$_testing;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_testing, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_testing", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

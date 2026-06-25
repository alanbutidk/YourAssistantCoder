/* Generated code for Python module 'google$auth$crypt$base'
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



/* The "module_google$auth$crypt$base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$crypt$base;
PyDictObject *moduledict_google$auth$crypt$base;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_9587ec184c254604866d6908b14b9c64;
PyObject *const_str_digest_02e3fd2bd6cf87bd8c522727959491b4;
PyObject *const_str_digest_886a3152e0b3e80da5f2c0f627b7e2cd;
PyObject *const_str_digest_74abf55b8a34eb8ce2f0dca263178e97;
PyObject *const_str_digest_6a11a5811c19f190409b56c4d77a9502;
PyObject *const_str_digest_ba7aeddbd6d53f4200855dca48c72981;
PyObject *const_str_digest_3f09298fccf9d49ad905fd9586ec0282;
PyObject *const_str_digest_738d18cc251430bb41234ba5e3d5554e;
PyObject *const_str_plain__JSON_FILE_PRIVATE_KEY;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_MalformedError;
PyObject *const_tuple_str_digest_8de9a0674931e7847b853a97ff928208_tuple;
PyObject *const_str_plain_from_string;
PyObject *const_str_plain__JSON_FILE_PRIVATE_KEY_ID;
PyObject *const_str_digest_48746b82568338d3466fbd5863dd77dd;
PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
PyObject *const_str_plain_json;
PyObject *const_str_plain_load;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_from_service_account_info;
PyObject *const_str_plain_data;
PyObject *const_str_digest_91653de0e1821c32caa1fdf4be9505bc;
PyObject *const_str_digest_fd52d4a9501e9309d5d2750958d5dbd9;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_io;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_str_plain_private_key;
PyObject *const_str_plain_private_key_id;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_Verifier_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e1295a6fd7574b3b209f6d73794938fd;
PyObject *const_str_digest_0257f626bde781cdf48bb2f90a6af6ee;
PyObject *const_str_plain_Verifier;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_verify;
PyObject *const_str_digest_576866e3bd2e010a3b9344effb83bf53;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_str_plain_Signer_tuple_empty_tuple;
PyObject *const_str_digest_db1c315445c1cbb21954187e7792f619;
PyObject *const_str_plain_Signer;
PyObject *const_int_pos_47;
PyObject *const_str_plain_abstractproperty;
PyObject *const_str_plain_key_id;
PyObject *const_str_digest_5adc3f9eee1e56106002d2e91bb3564b;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_0844d054892067e00a2136acf409491a;
PyObject *const_tuple_str_plain_FromServiceAccountMixin_tuple_empty_tuple;
PyObject *const_str_digest_e73d4ab0af3c69ed845df315ee1446f5;
PyObject *const_str_plain_FromServiceAccountMixin;
PyObject *const_int_pos_70;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4;
PyObject *const_str_digest_7af6246108f0ae58c2549cc7677fb553;
PyObject *const_str_plain_from_service_account_file;
PyObject *const_str_digest_523eb23f34246d3e4664f10a3d6107b5;
PyObject *const_str_digest_69e1f82c0e3880f232278913dc8b38c9;
PyObject *const_str_digest_c1943f790463ae12b4b749b02df4cb45;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_d52d6c3ccb60a3cf64cbe69dbc5aaa9e_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_info_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_key_str_plain_key_id_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[75];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.crypt.base"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_9587ec184c254604866d6908b14b9c64);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_02e3fd2bd6cf87bd8c522727959491b4);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_886a3152e0b3e80da5f2c0f627b7e2cd);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_74abf55b8a34eb8ce2f0dca263178e97);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a11a5811c19f190409b56c4d77a9502);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba7aeddbd6d53f4200855dca48c72981);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f09298fccf9d49ad905fd9586ec0282);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_738d18cc251430bb41234ba5e3d5554e);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8de9a0674931e7847b853a97ff928208_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_string);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_48746b82568338d3466fbd5863dd77dd);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_91653de0e1821c32caa1fdf4be9505bc);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd52d4a9501e9309d5d2750958d5dbd9);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_key);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_key_id);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Verifier_tuple_empty_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_0257f626bde781cdf48bb2f90a6af6ee);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_576866e3bd2e010a3b9344effb83bf53);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signer_tuple_empty_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_db1c315445c1cbb21954187e7792f619);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signer);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractproperty);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_id);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_5adc3f9eee1e56106002d2e91bb3564b);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_0844d054892067e00a2136acf409491a);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FromServiceAccountMixin_tuple_empty_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_e73d4ab0af3c69ed845df315ee1446f5);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_FromServiceAccountMixin);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_70);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_7af6246108f0ae58c2549cc7677fb553);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_file);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_523eb23f34246d3e4664f10a3d6107b5);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_69e1f82c0e3880f232278913dc8b38c9);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1943f790463ae12b4b749b02df4cb45);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_d52d6c3ccb60a3cf64cbe69dbc5aaa9e_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_info_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_key_str_plain_key_id_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple);
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
void checkModuleConstants_google$auth$crypt$base(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_9587ec184c254604866d6908b14b9c64));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9587ec184c254604866d6908b14b9c64);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_02e3fd2bd6cf87bd8c522727959491b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02e3fd2bd6cf87bd8c522727959491b4);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_886a3152e0b3e80da5f2c0f627b7e2cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_886a3152e0b3e80da5f2c0f627b7e2cd);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_74abf55b8a34eb8ce2f0dca263178e97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74abf55b8a34eb8ce2f0dca263178e97);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a11a5811c19f190409b56c4d77a9502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a11a5811c19f190409b56c4d77a9502);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba7aeddbd6d53f4200855dca48c72981));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba7aeddbd6d53f4200855dca48c72981);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f09298fccf9d49ad905fd9586ec0282));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f09298fccf9d49ad905fd9586ec0282);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_738d18cc251430bb41234ba5e3d5554e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_738d18cc251430bb41234ba5e3d5554e);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8de9a0674931e7847b853a97ff928208_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8de9a0674931e7847b853a97ff928208_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_string);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_48746b82568338d3466fbd5863dd77dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48746b82568338d3466fbd5863dd77dd);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_service_account_info);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_91653de0e1821c32caa1fdf4be9505bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91653de0e1821c32caa1fdf4be9505bc);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd52d4a9501e9309d5d2750958d5dbd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd52d4a9501e9309d5d2750958d5dbd9);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_private_key);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_private_key_id);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Verifier_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Verifier_tuple_empty_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_0257f626bde781cdf48bb2f90a6af6ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0257f626bde781cdf48bb2f90a6af6ee);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Verifier);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_576866e3bd2e010a3b9344effb83bf53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_576866e3bd2e010a3b9344effb83bf53);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Signer_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Signer_tuple_empty_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_db1c315445c1cbb21954187e7792f619));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db1c315445c1cbb21954187e7792f619);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signer);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_47));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_47);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractproperty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractproperty);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_id);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_5adc3f9eee1e56106002d2e91bb3564b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5adc3f9eee1e56106002d2e91bb3564b);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_0844d054892067e00a2136acf409491a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0844d054892067e00a2136acf409491a);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FromServiceAccountMixin_tuple_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FromServiceAccountMixin_tuple_empty_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_e73d4ab0af3c69ed845df315ee1446f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e73d4ab0af3c69ed845df315ee1446f5);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_FromServiceAccountMixin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FromServiceAccountMixin);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_70));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_70);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_7af6246108f0ae58c2549cc7677fb553));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7af6246108f0ae58c2549cc7677fb553);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_service_account_file);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_523eb23f34246d3e4664f10a3d6107b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_523eb23f34246d3e4664f10a3d6107b5);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_69e1f82c0e3880f232278913dc8b38c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69e1f82c0e3880f232278913dc8b38c9);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1943f790463ae12b4b749b02df4cb45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1943f790463ae12b4b749b02df4cb45);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_d52d6c3ccb60a3cf64cbe69dbc5aaa9e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d52d6c3ccb60a3cf64cbe69dbc5aaa9e_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_info_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_info_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_key_str_plain_key_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_key_str_plain_key_id_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_google$auth$crypt$base$_JSON_FILE_PRIVATE_KEY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base$_JSON_FILE_PRIVATE_KEY_ID(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt$base->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt$base->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt$base->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_309eab1d62c3ea240708d9bf29b8c2e1;
static PyCodeObject *code_objects_c4a4539bb49947290e2ca3cbdd5421b2;
static PyCodeObject *code_objects_36a9e7170dee87debc72b2a0b9b6156a;
static PyCodeObject *code_objects_e9a086535a4d5d04a8b54780f09e8e1a;
static PyCodeObject *code_objects_163de972c3f2c10bf986afc939deb35b;
static PyCodeObject *code_objects_c8793a7ec4132401fc73a8044990f4a1;
static PyCodeObject *code_objects_2f313d7b9ac3f98b3288d5dc6f8f542b;
static PyCodeObject *code_objects_8f3ceb806076095d728632d7b6ede31a;
static PyCodeObject *code_objects_55c262465b0b0d7506550a4c082ac288;
static PyCodeObject *code_objects_24d1e1c6f4a01e0e4f4c89ddbd083c61;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_69e1f82c0e3880f232278913dc8b38c9); CHECK_OBJECT(module_filename_obj);
code_objects_309eab1d62c3ea240708d9bf29b8c2e1 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c1943f790463ae12b4b749b02df4cb45, mod_consts.const_str_digest_c1943f790463ae12b4b749b02df4cb45, NULL, NULL, 0, 0, 0);
code_objects_c4a4539bb49947290e2ca3cbdd5421b2 = MAKE_CODE_OBJECT(module_filename_obj, 70, 0, mod_consts.const_str_plain_FromServiceAccountMixin, mod_consts.const_str_plain_FromServiceAccountMixin, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_36a9e7170dee87debc72b2a0b9b6156a = MAKE_CODE_OBJECT(module_filename_obj, 47, 0, mod_consts.const_str_plain_Signer, mod_consts.const_str_plain_Signer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e9a086535a4d5d04a8b54780f09e8e1a = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts.const_str_plain_Verifier, mod_consts.const_str_plain_Verifier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_163de972c3f2c10bf986afc939deb35b = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_service_account_file, mod_consts.const_str_digest_523eb23f34246d3e4664f10a3d6107b5, mod_consts.const_tuple_d52d6c3ccb60a3cf64cbe69dbc5aaa9e_tuple, NULL, 2, 0, 0);
code_objects_c8793a7ec4132401fc73a8044990f4a1 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_service_account_info, mod_consts.const_str_digest_7af6246108f0ae58c2549cc7677fb553, mod_consts.const_tuple_str_plain_cls_str_plain_info_tuple, NULL, 2, 0, 0);
code_objects_2f313d7b9ac3f98b3288d5dc6f8f542b = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_string, mod_consts.const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4, mod_consts.const_tuple_str_plain_cls_str_plain_key_str_plain_key_id_tuple, NULL, 3, 0, 0);
code_objects_8f3ceb806076095d728632d7b6ede31a = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_key_id, mod_consts.const_str_digest_5adc3f9eee1e56106002d2e91bb3564b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_55c262465b0b0d7506550a4c082ac288 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign, mod_consts.const_str_digest_0844d054892067e00a2136acf409491a, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_24d1e1c6f4a01e0e4f4c89ddbd083c61 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify, mod_consts.const_str_digest_576866e3bd2e010a3b9344effb83bf53, mod_consts.const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__1_verify(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__2_key_id(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__3_sign(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__4_from_string(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__5_from_service_account_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__6_from_service_account_file(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$crypt$base$$$function__1_verify(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *par_signature = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__1_verify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__1_verify = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__1_verify)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__1_verify);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__1_verify == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__1_verify = MAKE_FUNCTION_FRAME(tstate, code_objects_24d1e1c6f4a01e0e4f4c89ddbd083c61, module_google$auth$crypt$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__1_verify->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__1_verify = cache_frame_frame_google$auth$crypt$base$$$function__1_verify;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__1_verify);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__1_verify) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9587ec184c254604866d6908b14b9c64;
frame_frame_google$auth$crypt$base$$$function__1_verify->m_frame.f_lineno = 44;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__1_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__1_verify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__1_verify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__1_verify,
    type_description_1,
    par_self,
    par_message,
    par_signature
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__1_verify == cache_frame_frame_google$auth$crypt$base$$$function__1_verify) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__1_verify);
    cache_frame_frame_google$auth$crypt$base$$$function__1_verify = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__1_verify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$crypt$base$$$function__2_key_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__2_key_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__2_key_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__2_key_id)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__2_key_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__2_key_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__2_key_id = MAKE_FUNCTION_FRAME(tstate, code_objects_8f3ceb806076095d728632d7b6ede31a, module_google$auth$crypt$base, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__2_key_id->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__2_key_id = cache_frame_frame_google$auth$crypt$base$$$function__2_key_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__2_key_id);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__2_key_id) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_886a3152e0b3e80da5f2c0f627b7e2cd;
frame_frame_google$auth$crypt$base$$$function__2_key_id->m_frame.f_lineno = 53;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__2_key_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__2_key_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__2_key_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__2_key_id,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__2_key_id == cache_frame_frame_google$auth$crypt$base$$$function__2_key_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__2_key_id);
    cache_frame_frame_google$auth$crypt$base$$$function__2_key_id = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__2_key_id);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$crypt$base$$$function__3_sign(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__3_sign;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__3_sign = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__3_sign)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__3_sign);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__3_sign == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__3_sign = MAKE_FUNCTION_FRAME(tstate, code_objects_55c262465b0b0d7506550a4c082ac288, module_google$auth$crypt$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__3_sign->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__3_sign = cache_frame_frame_google$auth$crypt$base$$$function__3_sign;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__3_sign);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__3_sign) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6a11a5811c19f190409b56c4d77a9502;
frame_frame_google$auth$crypt$base$$$function__3_sign->m_frame.f_lineno = 67;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 67;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__3_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__3_sign->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__3_sign, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__3_sign,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__3_sign == cache_frame_frame_google$auth$crypt$base$$$function__3_sign) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__3_sign);
    cache_frame_frame_google$auth$crypt$base$$$function__3_sign = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__3_sign);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$crypt$base$$$function__4_from_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_key_id = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__4_from_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__4_from_string = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__4_from_string)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__4_from_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__4_from_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__4_from_string = MAKE_FUNCTION_FRAME(tstate, code_objects_2f313d7b9ac3f98b3288d5dc6f8f542b, module_google$auth$crypt$base, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__4_from_string->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__4_from_string = cache_frame_frame_google$auth$crypt$base$$$function__4_from_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__4_from_string);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__4_from_string) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3f09298fccf9d49ad905fd9586ec0282;
frame_frame_google$auth$crypt$base$$$function__4_from_string->m_frame.f_lineno = 87;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__4_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__4_from_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__4_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__4_from_string,
    type_description_1,
    par_cls,
    par_key,
    par_key_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__4_from_string == cache_frame_frame_google$auth$crypt$base$$$function__4_from_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__4_from_string);
    cache_frame_frame_google$auth$crypt$base$$$function__4_from_string = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__4_from_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_key_id);
Py_DECREF(par_key_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$auth$crypt$base$$$function__5_from_service_account_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info = MAKE_FUNCTION_FRAME(tstate, code_objects_c8793a7ec4132401fc73a8044990f4a1, module_google$auth$crypt$base, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info = cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_google$auth$crypt$base$_JSON_FILE_PRIVATE_KEY(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_cmp_expr_right_1 = par_info;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$base$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info->m_frame.f_lineno = 105;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_MalformedError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_8de9a0674931e7847b853a97ff928208_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 105;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_string);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_2 = par_info;
tmp_subscript_value_1 = module_var_accessor_google$auth$crypt$base$_JSON_FILE_PRIVATE_KEY(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_info);
tmp_expression_value_3 = par_info;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_google$auth$crypt$base$_JSON_FILE_PRIVATE_KEY_ID(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info->m_frame.f_lineno = 110;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info->m_frame.f_lineno = 109;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info,
    type_description_1,
    par_cls,
    par_info
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info == cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info);
    cache_frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__5_from_service_account_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$crypt$base$$$function__6_from_service_account_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *var_json_file = NULL;
PyObject *var_data = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file = MAKE_FUNCTION_FRAME(tstate, code_objects_163de972c3f2c10bf986afc939deb35b, module_google$auth$crypt$base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_type_description == NULL);
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file = cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_open);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_plain_r;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_81b3970727674c20ce12b1a4757dad21);
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 124;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 124;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_json_file == NULL);
Py_INCREF(tmp_assign_source_5);
var_json_file = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$base$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_json_file);
tmp_args_element_value_1 = var_json_file;
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 125;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_data == NULL);
var_data = tmp_assign_source_6;
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 124;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame)) {
        frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 124;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame)) {
        frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 124;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 124;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_cls);
tmp_expression_value_4 = par_cls;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_from_service_account_info);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_data;
frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame.f_lineno = 127;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file,
    type_description_1,
    par_cls,
    par_filename,
    var_json_file,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file == cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file);
    cache_frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$base$$$function__6_from_service_account_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_json_file);
CHECK_OBJECT(var_json_file);
Py_DECREF(var_json_file);
var_json_file = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_json_file);
var_json_file = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__1_verify(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__1_verify,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_576866e3bd2e010a3b9344effb83bf53,
#endif
        code_objects_24d1e1c6f4a01e0e4f4c89ddbd083c61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_02e3fd2bd6cf87bd8c522727959491b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__2_key_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__2_key_id,
        mod_consts.const_str_plain_key_id,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5adc3f9eee1e56106002d2e91bb3564b,
#endif
        code_objects_8f3ceb806076095d728632d7b6ede31a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_74abf55b8a34eb8ce2f0dca263178e97,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__3_sign(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__3_sign,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0844d054892067e00a2136acf409491a,
#endif
        code_objects_55c262465b0b0d7506550a4c082ac288,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_ba7aeddbd6d53f4200855dca48c72981,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__4_from_string(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__4_from_string,
        mod_consts.const_str_plain_from_string,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e820c6ddfd114a8cfa6b0adc7e7939a4,
#endif
        code_objects_2f313d7b9ac3f98b3288d5dc6f8f542b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_738d18cc251430bb41234ba5e3d5554e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__5_from_service_account_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__5_from_service_account_info,
        mod_consts.const_str_plain_from_service_account_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7af6246108f0ae58c2549cc7677fb553,
#endif
        code_objects_c8793a7ec4132401fc73a8044990f4a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_48746b82568338d3466fbd5863dd77dd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$base$$$function__6_from_service_account_file(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$base$$$function__6_from_service_account_file,
        mod_consts.const_str_plain_from_service_account_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_523eb23f34246d3e4664f10a3d6107b5,
#endif
        code_objects_163de972c3f2c10bf986afc939deb35b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt$base,
        mod_consts.const_str_digest_91653de0e1821c32caa1fdf4be9505bc,
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

static function_impl_code const function_table_google$auth$crypt$base[] = {
impl_google$auth$crypt$base$$$function__1_verify,
impl_google$auth$crypt$base$$$function__2_key_id,
impl_google$auth$crypt$base$$$function__3_sign,
impl_google$auth$crypt$base$$$function__4_from_string,
impl_google$auth$crypt$base$$$function__5_from_service_account_info,
impl_google$auth$crypt$base$$$function__6_from_service_account_file,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$crypt$base);
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
        module_google$auth$crypt$base,
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
        function_table_google$auth$crypt$base,
        sizeof(function_table_google$auth$crypt$base) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.crypt.base";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$crypt$base(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$crypt$base");

    // Store the module for future use.
    module_google$auth$crypt$base = module;

    moduledict_google$auth$crypt$base = MODULE_DICT(module_google$auth$crypt$base);

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
        PRINT_STRING("google$auth$crypt$base: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$crypt$base: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$crypt$base: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt.base" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$crypt$base\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$crypt$base,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt$base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt$base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$crypt$base);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$crypt$base);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_google$auth$crypt$base$$$class__1_Verifier_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$class__1_Verifier_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$auth$crypt$base$$$class__2_Signer_47 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$class__2_Signer_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_fd52d4a9501e9309d5d2750958d5dbd9;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$crypt$base = MAKE_MODULE_FRAME(code_objects_309eab1d62c3ea240708d9bf29b8c2e1, module_google$auth$crypt$base);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$crypt$base$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$crypt$base$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$crypt$base;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 17;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$crypt$base;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 19;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$crypt$base;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 21;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$crypt$base,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_private_key;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_private_key_id;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_FILE_PRIVATE_KEY_ID, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_assign_source_10 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
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
tmp_assign_source_11 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_11 == NULL) {
    tmp_assign_source_11 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_11);
}
assert(!(tmp_assign_source_11 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_11);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_11;
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


exception_lineno = 27;

    goto try_except_handler_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_Verifier_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 27;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 27;

    goto try_except_handler_1;
}
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 27;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
branch_end_2:;
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$crypt$base$$$class__1_Verifier_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_0257f626bde781cdf48bb2f90a6af6ee;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Verifier;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
frame_frame_google$auth$crypt$base$$$class__1_Verifier_2 = MAKE_CLASS_FRAME(tstate, code_objects_e9a086535a4d5d04a8b54780f09e8e1a, module_google$auth$crypt$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$class__1_Verifier_2);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$class__1_Verifier_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$crypt$base$$$function__1_verify(tstate);

frame_frame_google$auth$crypt$base$$$class__1_Verifier_2->m_frame.f_lineno = 30;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, mod_consts.const_str_plain_verify, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$class__1_Verifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$class__1_Verifier_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$class__1_Verifier_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$class__1_Verifier_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$crypt$base$$$class__1_Verifier_2);

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
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__1_Verifier_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_2 = mod_consts.const_str_plain_Verifier;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_google$auth$crypt$base$$$class__1_Verifier_27;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 27;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_15;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$crypt$base$$$class__1_Verifier_27);
locals_google$auth$crypt$base$$$class__1_Verifier_27 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$crypt$base$$$class__1_Verifier_27);
locals_google$auth$crypt$base$$$class__1_Verifier_27 = NULL;
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
exception_lineno = 27;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Verifier, tmp_assign_source_14);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_7;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_7 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_assign_source_16 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
bool tmp_condition_result_5;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_5 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_17 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_assign_source_17 == NULL) {
    tmp_assign_source_17 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_17);
}
assert(!(tmp_assign_source_17 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_17);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_17;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_6;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_Signer_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 47;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_4;
}
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 47;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 47;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
}
branch_end_5:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$crypt$base$$$class__2_Signer_47 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_db1c315445c1cbb21954187e7792f619;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_Signer;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
frame_frame_google$auth$crypt$base$$$class__2_Signer_3 = MAKE_CLASS_FRAME(tstate, code_objects_36a9e7170dee87debc72b2a0b9b6156a, module_google$auth$crypt$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$class__2_Signer_3);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$class__2_Signer_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$crypt$base$$$function__2_key_id(tstate);

frame_frame_google$auth$crypt$base$$$class__2_Signer_3->m_frame.f_lineno = 50;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractproperty, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain_key_id, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$crypt$base$$$function__3_sign(tstate);

frame_frame_google$auth$crypt$base$$$class__2_Signer_3->m_frame.f_lineno = 55;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain_sign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$class__2_Signer_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$class__2_Signer_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$class__2_Signer_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$class__2_Signer_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$crypt$base$$$class__2_Signer_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__2_Signer_47, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Signer;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$auth$crypt$base$$$class__2_Signer_47;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 47;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_20 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$crypt$base$$$class__2_Signer_47);
locals_google$auth$crypt$base$$$class__2_Signer_47 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$crypt$base$$$class__2_Signer_47);
locals_google$auth$crypt$base$$$class__2_Signer_47 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 47;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_Signer, tmp_assign_source_20);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_13;
tmp_dict_key_3 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_13 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_assign_source_22 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
bool tmp_condition_result_9;
PyObject *tmp_key_value_7;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_key_value_8;
tmp_key_value_7 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_7 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_8 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_key_value_8 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_23 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
if (tmp_assign_source_23 == NULL) {
    tmp_assign_source_23 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_23);
}
assert(!(tmp_assign_source_23 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_23 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_23);
condexpr_end_3:;
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_23;
}
{
bool tmp_condition_result_10;
PyObject *tmp_key_value_9;
PyObject *tmp_dict_arg_value_9;
tmp_key_value_9 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_9 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_3__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_args_value_5 = mod_consts.const_tuple_str_plain_FromServiceAccountMixin_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 70;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_24;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_7;
}
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 70;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_25;
}
branch_end_8:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e1295a6fd7574b3b209f6d73794938fd;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_e73d4ab0af3c69ed845df315ee1446f5;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_FromServiceAccountMixin;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_70;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4 = MAKE_CLASS_FRAME(tstate, code_objects_c4a4539bb49947290e2ca3cbdd5421b2, module_google$auth$crypt$base, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4);
assert(Py_REFCNT(frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4) == 2);

// Framed code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_1;
tmp_called_instance_4 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_google$auth$crypt$base$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_4 = MAKE_FUNCTION_google$auth$crypt$base$$$function__4_from_string(tstate, tmp_defaults_1);

frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4->m_frame.f_lineno = 73;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain_from_string, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, const_str_plain_classmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_google$auth$crypt$base$$$function__5_from_service_account_info(tstate);

frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4->m_frame.f_lineno = 89;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain_from_service_account_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = PyObject_GetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, const_str_plain_classmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$crypt$base$$$function__6_from_service_account_file(tstate);

frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4->m_frame.f_lineno = 113;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain_from_service_account_file, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_FromServiceAccountMixin;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$crypt$base->m_frame.f_lineno = 70;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_26 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70);
locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70);
locals_google$auth$crypt$base$$$class__3_FromServiceAccountMixin_70 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 70;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)mod_consts.const_str_plain_FromServiceAccountMixin, tmp_assign_source_26);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$base->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$crypt$base);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$crypt$base", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt.base" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$crypt$base);
    return module_google$auth$crypt$base;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt$base, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$crypt$base", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

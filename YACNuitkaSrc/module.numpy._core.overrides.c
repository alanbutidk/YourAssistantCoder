/* Generated code for Python module 'numpy$_core$overrides'
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



/* The "module_numpy$_core$overrides" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$overrides;
PyDictObject *moduledict_numpy$_core$overrides;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_ARRAY_FUNCTIONS;
PyObject *const_str_plain_add;
PyObject *const_str_plain_replace;
PyObject *const_str_digest_501743780ee4c212ea9c4830334bd96a;
PyObject *const_str_plain_array_function_like_doc;
PyObject *const_str_plain_get_array_function_like_doc;
PyObject *const_str_plain_ArgSpec;
PyObject *const_str_plain_getargspec;
PyObject *const_str_plain_varargs;
PyObject *const_str_plain_keywords;
PyObject *const_str_plain_defaults;
PyObject *const_str_digest_f7da501bdb512d9226979bf7cb8d8752;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_181a0a31846001165efdeb9223f00ddc;
PyObject *const_str_digest_fb1603eecbaf67d4a8464254af6e3a86;
PyObject *const_str_plain_decorator;
PyObject *const_str_digest_ca8fab18e95a7729619c622469966e82;
PyObject *const_str_digest_fff8ea4a57fc70065d821107e9d721a9;
PyObject *const_str_plain_verify;
PyObject *const_str_plain_dispatcher;
PyObject *const_str_plain_verify_matching_signatures;
PyObject *const_str_plain___code__;
PyObject *const_str_plain_co_argcount;
PyObject *const_str_plain_co_kwonlyargcount;
PyObject *const_str_plain_co_varnames;
PyObject *const_str_plain_like;
PyObject *const_str_digest_ab6acb9e49cf3f3f393f9b0d0328f5cd;
PyObject *const_str_digest_b08ceeb3f2281b65b3b668fdb694ce13;
PyObject *const_str_plain_docs_from_dispatcher;
PyObject *const_str_plain_cleandoc;
PyObject *const_str_plain_add_docstring;
PyObject *const_str_plain__ArrayFunctionDispatcher;
PyObject *const_str_plain_update_wrapper;
PyObject *const_str_plain___text_signature__;
PyObject *const_str_plain_signature;
PyObject *const_str_plain___signature__;
PyObject *const_str_plain_module;
PyObject *const_str_digest_0520e46626259a964d93536ad55d9117;
PyObject *const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9;
PyObject *const_str_plain_array_function_dispatch;
PyObject *const_tuple_str_plain_verify_str_plain_docs_from_dispatcher_tuple;
PyObject *const_str_plain_implementation;
PyObject *const_str_digest_e0990402ddee4ebfd6bcaee354d67e57;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_collections;
PyObject *const_str_plain_functools;
PyObject *const_str_digest_1955d320fcf10915350aecf079948e27;
PyObject *const_tuple_d8742612bf5f4396b8865b2a3d9847f8_tuple;
PyObject *const_str_plain__get_implementing_args;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_str_digest_25f5771768f4d44637b5910b5b49ab7d;
PyObject *const_tuple_str_plain_getargspec_tuple;
PyObject *const_str_digest_372c9f29c501056b5e3fb8b28a7631d4;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_plain_finalize_array_function_like;
PyObject *const_str_digest_16cc21b1ed94cf63ef414917413baccb;
PyObject *const_str_digest_d58146bcb69d19662731a00bb93dcf9a;
PyObject *const_str_plain_namedtuple;
PyObject *const_tuple_798b2e35dded11b58f061530f912bb00_tuple;
PyObject *const_tuple_none_none_true_false_tuple;
PyObject *const_tuple_none_true_true_tuple;
PyObject *const_str_plain_array_function_from_dispatcher;
PyObject *const_str_digest_c9f99989de78818026ffc269d29f0585;
PyObject *const_str_digest_d6a280a06d953ace2fc114a2977b0f01;
PyObject *const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple;
PyObject *const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple;
PyObject *const_tuple_c8a4ca71961acd0e84b57230f53362f0_tuple;
PyObject *const_tuple_c3afd4d61984cd699ccef6b9e3237266_tuple;
PyObject *const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple;
PyObject *const_tuple_47a414d53a25716e77b2e4fba4addbc4_tuple;
PyObject *const_tuple_str_plain_public_api_tuple;
PyObject *const_tuple_1d1e412a38fe5f36ccb359bc24e46e76_tuple;
PyObject *const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[76];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core.overrides"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_ARRAY_FUNCTIONS);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_501743780ee4c212ea9c4830334bd96a);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_like_doc);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_array_function_like_doc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArgSpec);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_getargspec);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_varargs);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_keywords);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaults);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7da501bdb512d9226979bf7cb8d8752);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_181a0a31846001165efdeb9223f00ddc);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb1603eecbaf67d4a8464254af6e3a86);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_decorator);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca8fab18e95a7729619c622469966e82);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_fff8ea4a57fc70065d821107e9d721a9);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_dispatcher);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_matching_signatures);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___code__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_argcount);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_kwonlyargcount);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_varnames);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_like);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab6acb9e49cf3f3f393f9b0d0328f5cd);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_b08ceeb3f2281b65b3b668fdb694ce13);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_docs_from_dispatcher);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_docstring);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayFunctionDispatcher);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_update_wrapper);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___text_signature__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___signature__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_module);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_0520e46626259a964d93536ad55d9117);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_verify_str_plain_docs_from_dispatcher_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_implementation);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0990402ddee4ebfd6bcaee354d67e57);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_d8742612bf5f4396b8865b2a3d9847f8_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_implementing_args);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_25f5771768f4d44637b5910b5b49ab7d);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getargspec_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_372c9f29c501056b5e3fb8b28a7631d4);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_finalize_array_function_like);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_16cc21b1ed94cf63ef414917413baccb);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d58146bcb69d19662731a00bb93dcf9a);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_namedtuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_798b2e35dded11b58f061530f912bb00_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_false_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_true_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_from_dispatcher);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9f99989de78818026ffc269d29f0585);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6a280a06d953ace2fc114a2977b0f01);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_c8a4ca71961acd0e84b57230f53362f0_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_c3afd4d61984cd699ccef6b9e3237266_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_47a414d53a25716e77b2e4fba4addbc4_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_public_api_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_1d1e412a38fe5f36ccb359bc24e46e76_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple);
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
void checkModuleConstants_numpy$_core$overrides(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_ARRAY_FUNCTIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ARRAY_FUNCTIONS);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_501743780ee4c212ea9c4830334bd96a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_501743780ee4c212ea9c4830334bd96a);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_like_doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_like_doc);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_array_function_like_doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_array_function_like_doc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArgSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArgSpec);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_getargspec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getargspec);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_varargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_varargs);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_keywords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keywords);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaults));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaults);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7da501bdb512d9226979bf7cb8d8752));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7da501bdb512d9226979bf7cb8d8752);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_181a0a31846001165efdeb9223f00ddc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_181a0a31846001165efdeb9223f00ddc);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb1603eecbaf67d4a8464254af6e3a86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb1603eecbaf67d4a8464254af6e3a86);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_decorator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decorator);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca8fab18e95a7729619c622469966e82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca8fab18e95a7729619c622469966e82);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_fff8ea4a57fc70065d821107e9d721a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fff8ea4a57fc70065d821107e9d721a9);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dispatcher);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_matching_signatures));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify_matching_signatures);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___code__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___code__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_argcount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_argcount);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_kwonlyargcount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_kwonlyargcount);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_varnames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_varnames);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_like);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab6acb9e49cf3f3f393f9b0d0328f5cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab6acb9e49cf3f3f393f9b0d0328f5cd);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_b08ceeb3f2281b65b3b668fdb694ce13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b08ceeb3f2281b65b3b668fdb694ce13);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_docs_from_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_docs_from_dispatcher);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleandoc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleandoc);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_docstring);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__ArrayFunctionDispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ArrayFunctionDispatcher);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_update_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update_wrapper);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___text_signature__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___text_signature__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___signature__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___signature__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_0520e46626259a964d93536ad55d9117));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0520e46626259a964d93536ad55d9117);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_dispatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_dispatch);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_verify_str_plain_docs_from_dispatcher_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_verify_str_plain_docs_from_dispatcher_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_implementation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_implementation);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0990402ddee4ebfd6bcaee354d67e57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0990402ddee4ebfd6bcaee354d67e57);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_d8742612bf5f4396b8865b2a3d9847f8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d8742612bf5f4396b8865b2a3d9847f8_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_implementing_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_implementing_args);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_25f5771768f4d44637b5910b5b49ab7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25f5771768f4d44637b5910b5b49ab7d);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getargspec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_getargspec_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_372c9f29c501056b5e3fb8b28a7631d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_372c9f29c501056b5e3fb8b28a7631d4);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_finalize_array_function_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finalize_array_function_like);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_16cc21b1ed94cf63ef414917413baccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16cc21b1ed94cf63ef414917413baccb);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d58146bcb69d19662731a00bb93dcf9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d58146bcb69d19662731a00bb93dcf9a);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_namedtuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_namedtuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_798b2e35dded11b58f061530f912bb00_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_798b2e35dded11b58f061530f912bb00_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_true_false_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_true_true_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_array_function_from_dispatcher));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array_function_from_dispatcher);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9f99989de78818026ffc269d29f0585));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9f99989de78818026ffc269d29f0585);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6a280a06d953ace2fc114a2977b0f01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6a280a06d953ace2fc114a2977b0f01);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_c8a4ca71961acd0e84b57230f53362f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c8a4ca71961acd0e84b57230f53362f0_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_c3afd4d61984cd699ccef6b9e3237266_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c3afd4d61984cd699ccef6b9e3237266_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_47a414d53a25716e77b2e4fba4addbc4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_47a414d53a25716e77b2e4fba4addbc4_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_public_api_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_public_api_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_1d1e412a38fe5f36ccb359bc24e46e76_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1d1e412a38fe5f36ccb359bc24e46e76_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_numpy$_core$overrides$ARRAY_FUNCTIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ARRAY_FUNCTIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ARRAY_FUNCTIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ARRAY_FUNCTIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ARRAY_FUNCTIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ARRAY_FUNCTIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ARRAY_FUNCTIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ARRAY_FUNCTIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ARRAY_FUNCTIONS);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$ArgSpec(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgSpec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ArgSpec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ArgSpec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ArgSpec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ArgSpec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgSpec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgSpec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgSpec);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$_ArrayFunctionDispatcher(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayFunctionDispatcher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ArrayFunctionDispatcher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ArrayFunctionDispatcher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ArrayFunctionDispatcher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ArrayFunctionDispatcher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayFunctionDispatcher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayFunctionDispatcher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayFunctionDispatcher);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$_get_implementing_args(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__get_implementing_args);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_implementing_args);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_implementing_args, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_implementing_args);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_implementing_args, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__get_implementing_args);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__get_implementing_args);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_implementing_args);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$add_docstring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_add_docstring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_add_docstring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_add_docstring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_add_docstring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_add_docstring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_add_docstring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_add_docstring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_add_docstring);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$array_function_dispatch(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_dispatch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_dispatch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_dispatch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_dispatch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$array_function_like_doc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_like_doc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_like_doc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_like_doc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_array_function_like_doc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_array_function_like_doc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_like_doc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_like_doc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_like_doc);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$collections(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collections);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collections, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collections);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collections, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$get_array_function_like_doc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_get_array_function_like_doc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_array_function_like_doc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_array_function_like_doc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_array_function_like_doc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_array_function_like_doc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_get_array_function_like_doc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_get_array_function_like_doc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_array_function_like_doc);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$getargspec(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_getargspec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getargspec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getargspec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getargspec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getargspec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_getargspec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_getargspec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getargspec);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$overrides$verify_matching_signatures(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$overrides->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$overrides->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_matching_signatures);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$overrides->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_verify_matching_signatures);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_verify_matching_signatures, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_verify_matching_signatures);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_verify_matching_signatures, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_matching_signatures);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_matching_signatures);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_matching_signatures);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_91ae1b45f3ec981212c14e0e3d54ce17;
static PyCodeObject *code_objects_4f9a6509a3dcecca79195dc4cb4577e3;
static PyCodeObject *code_objects_52a7619c522b697c1525272872c3e07b;
static PyCodeObject *code_objects_c18cb97a3f788903210a354f25aeb701;
static PyCodeObject *code_objects_d40cdefcaf63589c0acc59db2574f536;
static PyCodeObject *code_objects_f1427f3a2717af2ad7d2e7f475cea336;
static PyCodeObject *code_objects_03936605253eb3916a8975783b5d77d4;
static PyCodeObject *code_objects_2377e4931371ddfdcb2cbef6297a6d61;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c9f99989de78818026ffc269d29f0585); CHECK_OBJECT(module_filename_obj);
code_objects_91ae1b45f3ec981212c14e0e3d54ce17 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_d6a280a06d953ace2fc114a2977b0f01, mod_consts.const_str_digest_d6a280a06d953ace2fc114a2977b0f01, NULL, NULL, 0, 0, 0);
code_objects_4f9a6509a3dcecca79195dc4cb4577e3 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_array_function_dispatch, mod_consts.const_str_plain_array_function_dispatch, mod_consts.const_tuple_659ed772c73d0b8e4953817bb2e5e7d9_tuple, NULL, 4, 0, 0);
code_objects_52a7619c522b697c1525272872c3e07b = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_array_function_from_dispatcher, mod_consts.const_str_plain_array_function_from_dispatcher, mod_consts.const_tuple_02ada6ee2fe004535a9d27a92ba4f8d7_tuple, NULL, 4, 0, 0);
code_objects_c18cb97a3f788903210a354f25aeb701 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decorator, mod_consts.const_str_digest_ca8fab18e95a7729619c622469966e82, mod_consts.const_tuple_c8a4ca71961acd0e84b57230f53362f0_tuple, mod_consts.const_tuple_c3afd4d61984cd699ccef6b9e3237266_tuple, 1, 0, 0);
code_objects_d40cdefcaf63589c0acc59db2574f536 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decorator, mod_consts.const_str_digest_0520e46626259a964d93536ad55d9117, mod_consts.const_tuple_0b122aa6de67aced6c527af1180b0e2e_tuple, mod_consts.const_tuple_47a414d53a25716e77b2e4fba4addbc4_tuple, 1, 0, 0);
code_objects_f1427f3a2717af2ad7d2e7f475cea336 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_finalize_array_function_like, mod_consts.const_str_plain_finalize_array_function_like, mod_consts.const_tuple_str_plain_public_api_tuple, NULL, 1, 0, 0);
code_objects_03936605253eb3916a8975783b5d77d4 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_array_function_like_doc, mod_consts.const_str_plain_get_array_function_like_doc, mod_consts.const_tuple_1d1e412a38fe5f36ccb359bc24e46e76_tuple, NULL, 2, 0, 0);
code_objects_2377e4931371ddfdcb2cbef6297a6d61 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify_matching_signatures, mod_consts.const_str_plain_verify_matching_signatures, mod_consts.const_tuple_45638098d31936d0fdaa74fce2f8ca48_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__1_get_array_function_like_doc(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__2_finalize_array_function_like(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__3_verify_matching_signatures(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_numpy$_core$overrides$$$function__1_get_array_function_like_doc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_public_api = python_pars[0];
PyObject *par_docstring_template = python_pars[1];
PyObject *var_docstring = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc = MAKE_FUNCTION_FRAME(tstate, code_objects_03936605253eb3916a8975783b5d77d4, module_numpy$_core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc->m_type_description == NULL);
frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc = cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$overrides$ARRAY_FUNCTIONS(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ARRAY_FUNCTIONS);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_api);
tmp_args_element_value_1 = par_public_api;
frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc->m_frame.f_lineno = 26;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_public_api);
tmp_expression_value_1 = par_public_api;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___doc__);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 27;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_docstring_template);
tmp_or_right_value_1 = par_docstring_template;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_docstring == NULL);
var_docstring = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_docstring);
tmp_expression_value_2 = var_docstring;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_501743780ee4c212ea9c4830334bd96a;
tmp_args_element_value_3 = module_var_accessor_numpy$_core$overrides$array_function_like_doc(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_like_doc);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc->m_frame.f_lineno = 28;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc,
    type_description_1,
    par_public_api,
    par_docstring_template,
    var_docstring
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc == cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc);
    cache_frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc = NULL;
}

assertFrameObject(frame_frame_numpy$_core$overrides$$$function__1_get_array_function_like_doc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_docstring);
CHECK_OBJECT(var_docstring);
Py_DECREF(var_docstring);
var_docstring = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_docstring);
var_docstring = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_public_api);
Py_DECREF(par_public_api);
CHECK_OBJECT(par_docstring_template);
Py_DECREF(par_docstring_template);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_public_api);
Py_DECREF(par_public_api);
CHECK_OBJECT(par_docstring_template);
Py_DECREF(par_docstring_template);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$overrides$$$function__2_finalize_array_function_like(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_public_api = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like = MAKE_FUNCTION_FRAME(tstate, code_objects_f1427f3a2717af2ad7d2e7f475cea336, module_numpy$_core$overrides, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like->m_type_description == NULL);
frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like = cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$overrides$get_array_function_like_doc(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_array_function_like_doc);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_api);
tmp_args_element_value_1 = par_public_api;
frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like->m_frame.f_lineno = 31;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_api);
tmp_assattr_target_1 = par_public_api;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like,
    type_description_1,
    par_public_api
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like == cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like);
    cache_frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like = NULL;
}

assertFrameObject(frame_frame_numpy$_core$overrides$$$function__2_finalize_array_function_like);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_public_api);
tmp_return_value = par_public_api;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_public_api);
Py_DECREF(par_public_api);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_public_api);
Py_DECREF(par_public_api);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$overrides$$$function__3_verify_matching_signatures(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_implementation = python_pars[0];
PyObject *par_dispatcher = python_pars[1];
PyObject *var_implementation_spec = NULL;
PyObject *var_dispatcher_spec = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures = MAKE_FUNCTION_FRAME(tstate, code_objects_2377e4931371ddfdcb2cbef6297a6d61, module_numpy$_core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_type_description == NULL);
frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures = cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_direct_call_arg1_1 = module_var_accessor_numpy$_core$overrides$ArgSpec(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ArgSpec);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_numpy$_core$overrides$getargspec(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getargspec);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_implementation);
tmp_args_element_value_1 = par_implementation;
frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_frame.f_lineno = 88;
tmp_direct_call_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_implementation_spec == NULL);
var_implementation_spec = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_direct_call_arg1_2 = module_var_accessor_numpy$_core$overrides$ArgSpec(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ArgSpec);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$_core$overrides$getargspec(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getargspec);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dispatcher);
tmp_args_element_value_2 = par_dispatcher;
frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_frame.f_lineno = 89;
tmp_direct_call_arg2_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_direct_call_arg2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_dispatcher_spec == NULL);
var_dispatcher_spec = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_value_value_2;
PyObject *tmp_expression_value_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_11;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_1 = var_implementation_spec;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_args);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_2 = var_dispatcher_spec;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_args);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_3 = var_implementation_spec;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_varargs);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_4 = var_dispatcher_spec;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_varargs);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_5 = var_implementation_spec;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_keywords);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_6 = var_dispatcher_spec;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_keywords);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_7 = var_implementation_spec;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_defaults);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_8 = var_dispatcher_spec;
tmp_value_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_defaults);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_or_left_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION));
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_9 = var_implementation_spec;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_defaults);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_10 = var_implementation_spec;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_defaults);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_11 = var_dispatcher_spec;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_defaults);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 98;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 98;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
assert(tmp_and_right_value_1 != NUITKA_BOOL_UNASSIGNED);
assert(tmp_and_right_value_1 != NUITKA_BOOL_EXCEPTION);
tmp_and_right_value_1 = (tmp_and_right_value_1 == NUITKA_BOOL_FALSE) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_4 = tmp_and_left_value_1;
and_end_1:;
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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
tmp_mod_expr_left_1 = mod_consts.const_str_digest_f7da501bdb512d9226979bf7cb8d8752;
CHECK_OBJECT(par_implementation);
tmp_mod_expr_right_1 = par_implementation;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_frame.f_lineno = 99;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 99;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_implementation_spec);
tmp_expression_value_12 = var_implementation_spec;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_defaults);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_13 = var_dispatcher_spec;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_defaults);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_tuple_none_tuple;
CHECK_OBJECT(var_dispatcher_spec);
tmp_expression_value_14 = var_dispatcher_spec;
tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_defaults);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 103;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 103;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_TUPLE_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_cmp_expr_right_8 == NULL));
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_181a0a31846001165efdeb9223f00ddc;
frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_frame.f_lineno = 104;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 104;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures,
    type_description_1,
    par_implementation,
    par_dispatcher,
    var_implementation_spec,
    var_dispatcher_spec
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures == cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures);
    cache_frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures = NULL;
}

assertFrameObject(frame_frame_numpy$_core$overrides$$$function__3_verify_matching_signatures);

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
CHECK_OBJECT(var_implementation_spec);
CHECK_OBJECT(var_implementation_spec);
Py_DECREF(var_implementation_spec);
var_implementation_spec = NULL;
CHECK_OBJECT(var_dispatcher_spec);
CHECK_OBJECT(var_dispatcher_spec);
Py_DECREF(var_dispatcher_spec);
var_dispatcher_spec = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_implementation_spec);
var_implementation_spec = NULL;
Py_XDECREF(var_dispatcher_spec);
var_dispatcher_spec = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_implementation);
Py_DECREF(par_implementation);
CHECK_OBJECT(par_dispatcher);
Py_DECREF(par_dispatcher);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_implementation);
Py_DECREF(par_implementation);
CHECK_OBJECT(par_dispatcher);
Py_DECREF(par_dispatcher);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$overrides$$$function__4_array_function_dispatch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_dispatcher = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_module = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_verify = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_docs_from_dispatcher = Nuitka_Cell_New1(python_pars[3]);
PyObject *var_decorator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_dispatcher;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_docs_from_dispatcher;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_module;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_verify;
Py_INCREF(tmp_closure_1[3]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator(tstate, tmp_closure_1);

assert(var_decorator == NULL);
var_decorator = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_decorator);
tmp_return_value = var_decorator;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_dispatcher);
CHECK_OBJECT(par_dispatcher);
Py_DECREF(par_dispatcher);
par_dispatcher = NULL;
CHECK_OBJECT(par_module);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
par_module = NULL;
CHECK_OBJECT(par_verify);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
par_verify = NULL;
CHECK_OBJECT(par_docs_from_dispatcher);
CHECK_OBJECT(par_docs_from_dispatcher);
Py_DECREF(par_docs_from_dispatcher);
par_docs_from_dispatcher = NULL;
CHECK_OBJECT(var_decorator);
CHECK_OBJECT(var_decorator);
Py_DECREF(var_decorator);
var_decorator = NULL;
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


static PyObject *impl_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_implementation = python_pars[0];
PyObject *var_co = NULL;
PyObject *var_last_arg = NULL;
PyObject *var_doc = NULL;
PyObject *var_public_api = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator = MAKE_FUNCTION_FRAME(tstate, code_objects_c18cb97a3f788903210a354f25aeb701, module_numpy$_core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_type_description == NULL);
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator = cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 146;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[3]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooocccc";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 147;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$_core$overrides$verify_matching_signatures(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify_matching_signatures);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_implementation);
tmp_args_element_value_1 = par_implementation;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_implementation);
tmp_expression_value_1 = par_implementation;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___code__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
assert(var_co == NULL);
var_co = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_co);
tmp_expression_value_2 = var_co;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_co_argcount);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_co);
tmp_expression_value_3 = var_co;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_co_kwonlyargcount);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 152;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
assert(var_last_arg == NULL);
var_last_arg = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_co);
tmp_expression_value_5 = var_co;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_co_varnames);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_last_arg);
tmp_subscript_value_1 = var_last_arg;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_last_arg;
    assert(old != NULL);
    var_last_arg = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_last_arg);
tmp_cmp_expr_left_2 = var_last_arg;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_like;
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_co);
tmp_expression_value_6 = var_co;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_co_kwonlyargcount);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ab6acb9e49cf3f3f393f9b0d0328f5cd;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_implementation);
tmp_format_value_1 = par_implementation;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooocccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b08ceeb3f2281b65b3b668fdb694ce13;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 155;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 155;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooocccc";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_end_2:;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_docs_from_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[1]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___doc__);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_numpy$_core$overrides$inspect(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_cleandoc);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___doc__);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 161;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 161;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
assert(var_doc == NULL);
var_doc = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_3 = module_var_accessor_numpy$_core$overrides$add_docstring(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_docstring);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_implementation);
tmp_args_element_value_4 = par_implementation;
CHECK_OBJECT(var_doc);
tmp_args_element_value_5 = var_doc;
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_numpy$_core$overrides$_ArrayFunctionDispatcher(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ArrayFunctionDispatcher);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_implementation);
tmp_args_element_value_7 = par_implementation;
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
assert(var_public_api == NULL);
var_public_api = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_instance_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_public_api);
tmp_args_element_value_8 = var_public_api;
CHECK_OBJECT(par_implementation);
tmp_args_element_value_9 = par_implementation;
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 165;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_update_wrapper,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
bool tmp_condition_result_5;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_implementation);
tmp_expression_value_10 = par_implementation;
tmp_name_value_1 = mod_consts.const_str_plain___text_signature__;
tmp_default_value_1 = Py_None;
tmp_operand_value_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_10, tmp_name_value_1, tmp_default_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_assattr_target_1;
tmp_expression_value_11 = module_var_accessor_numpy$_core$overrides$inspect(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_signature);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 168;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_public_api);
tmp_assattr_target_1 = var_public_api;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___signature__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 170;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 171;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}

tmp_assattr_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
CHECK_OBJECT(var_public_api);
tmp_assattr_target_2 = var_public_api;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___module__, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_11;
tmp_called_instance_2 = module_var_accessor_numpy$_core$overrides$ARRAY_FUNCTIONS(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ARRAY_FUNCTIONS);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_public_api);
tmp_args_element_value_11 = var_public_api;
frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame.f_lineno = 173;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add, tmp_args_element_value_11);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator,
    type_description_1,
    par_implementation,
    var_co,
    var_last_arg,
    var_doc,
    var_public_api,
    self->m_closure[3],
    self->m_closure[0],
    self->m_closure[1],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator == cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator);
    cache_frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator = NULL;
}

assertFrameObject(frame_frame_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_public_api);
tmp_return_value = var_public_api;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_co);
var_co = NULL;
Py_XDECREF(var_last_arg);
var_last_arg = NULL;
Py_XDECREF(var_doc);
var_doc = NULL;
CHECK_OBJECT(var_public_api);
CHECK_OBJECT(var_public_api);
Py_DECREF(var_public_api);
var_public_api = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_co);
var_co = NULL;
Py_XDECREF(var_last_arg);
var_last_arg = NULL;
Py_XDECREF(var_doc);
var_doc = NULL;
Py_XDECREF(var_public_api);
var_public_api = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_implementation);
Py_DECREF(par_implementation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_implementation);
Py_DECREF(par_implementation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_implementation = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_module = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_verify = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_docs_from_dispatcher = Nuitka_Cell_New1(python_pars[3]);
PyObject *var_decorator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_docs_from_dispatcher;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_implementation;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_module;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_verify;
Py_INCREF(tmp_closure_1[3]);
tmp_assign_source_1 = MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator(tstate, tmp_closure_1);

assert(var_decorator == NULL);
var_decorator = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_decorator);
tmp_return_value = var_decorator;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_implementation);
CHECK_OBJECT(par_implementation);
Py_DECREF(par_implementation);
par_implementation = NULL;
CHECK_OBJECT(par_module);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
par_module = NULL;
CHECK_OBJECT(par_verify);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
par_verify = NULL;
CHECK_OBJECT(par_docs_from_dispatcher);
CHECK_OBJECT(par_docs_from_dispatcher);
Py_DECREF(par_docs_from_dispatcher);
par_docs_from_dispatcher = NULL;
CHECK_OBJECT(var_decorator);
CHECK_OBJECT(var_decorator);
Py_DECREF(var_decorator);
var_decorator = NULL;
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


static PyObject *impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_dispatcher = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator = MAKE_FUNCTION_FRAME(tstate, code_objects_d40cdefcaf63589c0acc59db2574f536, module_numpy$_core$overrides, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator->m_type_description == NULL);
frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator = cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_numpy$_core$overrides$array_function_dispatch(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_array_function_dispatch);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dispatcher);
tmp_kw_call_arg_value_0_1 = par_dispatcher;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[3]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_docs_from_dispatcher);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator->m_frame.f_lineno = 185;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_verify_str_plain_docs_from_dispatcher_tuple);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_implementation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator->m_frame.f_lineno = 185;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "occcc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator,
    type_description_1,
    par_dispatcher,
    self->m_closure[2],
    self->m_closure[3],
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator == cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator);
    cache_frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator = NULL;
}

assertFrameObject(frame_frame_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_dispatcher);
Py_DECREF(par_dispatcher);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_dispatcher);
Py_DECREF(par_dispatcher);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__1_get_array_function_like_doc(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__1_get_array_function_like_doc,
        mod_consts.const_str_plain_get_array_function_like_doc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_03936605253eb3916a8975783b5d77d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__2_finalize_array_function_like(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__2_finalize_array_function_like,
        mod_consts.const_str_plain_finalize_array_function_like,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f1427f3a2717af2ad7d2e7f475cea336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__3_verify_matching_signatures(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__3_verify_matching_signatures,
        mod_consts.const_str_plain_verify_matching_signatures,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2377e4931371ddfdcb2cbef6297a6d61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        mod_consts.const_str_digest_fb1603eecbaf67d4a8464254af6e3a86,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__4_array_function_dispatch,
        mod_consts.const_str_plain_array_function_dispatch,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4f9a6509a3dcecca79195dc4cb4577e3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        mod_consts.const_str_digest_fff8ea4a57fc70065d821107e9d721a9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator,
        mod_consts.const_str_plain_decorator,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca8fab18e95a7729619c622469966e82,
#endif
        code_objects_c18cb97a3f788903210a354f25aeb701,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher,
        mod_consts.const_str_plain_array_function_from_dispatcher,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_52a7619c522b697c1525272872c3e07b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        mod_consts.const_str_digest_346ccaa4d91a86c9cfb95f2ada10cbe9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator,
        mod_consts.const_str_plain_decorator,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0520e46626259a964d93536ad55d9117,
#endif
        code_objects_d40cdefcaf63589c0acc59db2574f536,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$overrides,
        NULL,
        closure,
        4
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

static function_impl_code const function_table_numpy$_core$overrides[] = {
impl_numpy$_core$overrides$$$function__4_array_function_dispatch$$$function__1_decorator,
impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher$$$function__1_decorator,
impl_numpy$_core$overrides$$$function__1_get_array_function_like_doc,
impl_numpy$_core$overrides$$$function__2_finalize_array_function_like,
impl_numpy$_core$overrides$$$function__3_verify_matching_signatures,
impl_numpy$_core$overrides$$$function__4_array_function_dispatch,
impl_numpy$_core$overrides$$$function__5_array_function_from_dispatcher,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core$overrides);
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
        module_numpy$_core$overrides,
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
        function_table_numpy$_core$overrides,
        sizeof(function_table_numpy$_core$overrides) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core.overrides";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core$overrides(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$overrides");

    // Store the module for future use.
    module_numpy$_core$overrides = module;

    moduledict_numpy$_core$overrides = MODULE_DICT(module_numpy$_core$overrides);

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
        PRINT_STRING("numpy$_core$overrides: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$overrides: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$overrides: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core.overrides" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$overrides\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$overrides,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$overrides,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$overrides,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$overrides,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$overrides,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$overrides);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$overrides);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$overrides;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_e0990402ddee4ebfd6bcaee354d67e57;
UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core$overrides = MAKE_MODULE_FRAME(code_objects_91ae1b45f3ec981212c14e0e3d54ce17, module_numpy$_core$overrides);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$overrides);
assert(Py_REFCNT(frame_frame_numpy$_core$overrides) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$overrides$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$overrides$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$overrides;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 2;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_collections, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core$overrides;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_1955d320fcf10915350aecf079948e27;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$_core$overrides;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_d8742612bf5f4396b8865b2a3d9847f8_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 6;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_numpy$_core$overrides,
        mod_consts.const_str_plain__ArrayFunctionDispatcher,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__ArrayFunctionDispatcher);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__ArrayFunctionDispatcher, tmp_assign_source_8);
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
        (PyObject *)moduledict_numpy$_core$overrides,
        mod_consts.const_str_plain__get_implementing_args,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__get_implementing_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain__get_implementing_args, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_core$overrides,
        mod_consts.const_str_plain_add_docstring,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_add_docstring);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_add_docstring, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$_core$overrides;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 11;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_core$overrides,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_25f5771768f4d44637b5910b5b49ab7d;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$_core$overrides;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_getargspec_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 12;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$_core$overrides,
        mod_consts.const_str_plain_getargspec,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_getargspec);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_getargspec, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = PySet_New(NULL);
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ARRAY_FUNCTIONS, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_372c9f29c501056b5e3fb8b28a7631d4;
UPDATE_STRING_DICT0(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_like_doc, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_15 = MAKE_FUNCTION_numpy$_core$overrides$$$function__1_get_array_function_like_doc(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_get_array_function_like_doc, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;

tmp_assign_source_16 = MAKE_FUNCTION_numpy$_core$overrides$$$function__2_finalize_array_function_like(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_finalize_array_function_like, tmp_assign_source_16);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$_core$overrides$add_docstring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_docstring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_numpy$_core$overrides$_ArrayFunctionDispatcher(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ArrayFunctionDispatcher);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_16cc21b1ed94cf63ef414917413baccb;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 35;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_numpy$_core$overrides$add_docstring(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_docstring);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_numpy$_core$overrides$_get_implementing_args(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_implementing_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_d58146bcb69d19662731a00bb93dcf9a;
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$overrides$collections(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$overrides->m_frame.f_lineno = 83;
tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_namedtuple,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_798b2e35dded11b58f061530f912bb00_tuple, 0)
);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgSpec, tmp_assign_source_17);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$overrides, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$overrides->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$overrides, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core$overrides);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_numpy$_core$overrides$$$function__3_verify_matching_signatures(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_matching_signatures, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_true_false_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_19 = MAKE_FUNCTION_numpy$_core$overrides$$$function__4_array_function_dispatch(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_dispatch, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_true_true_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_20 = MAKE_FUNCTION_numpy$_core$overrides$$$function__5_array_function_from_dispatcher(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)mod_consts.const_str_plain_array_function_from_dispatcher, tmp_assign_source_20);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$overrides", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core.overrides" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$overrides);
    return module_numpy$_core$overrides;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$overrides, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$overrides", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

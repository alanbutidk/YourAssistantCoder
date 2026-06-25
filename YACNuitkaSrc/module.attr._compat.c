/* Generated code for Python module 'attr$_compat'
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



/* The "module_attr$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$_compat;
PyDictObject *moduledict_attr$_compat;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_89c0d18fd9e496b550dab2b1c08ff4ac;
PyObject *const_str_plain_signature;
PyObject *const_str_plain_sig;
PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
PyObject *const_str_plain_parameters;
PyObject *const_str_plain_values;
PyObject *const_str_plain_annotation;
PyObject *const_str_plain_Parameter;
PyObject *const_str_plain_empty;
PyObject *const_str_digest_9015b2a8e15a0d8ac39d598f36100118;
PyObject *const_str_plain_return_annotation;
PyObject *const_str_plain_Signature;
PyObject *const_str_digest_e995169440143ac6fe7008fa9b6942cd;
PyObject *const_str_plain__GenericAlias;
PyObject *const_str_plain___origin__;
PyObject *const_str_digest_eae6adbea3b0ef8674062e656fe771c4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_platform;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_threading;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Mapping_str_plain_Sequence_tuple;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_python_implementation;
PyObject *const_str_plain_PyPy;
PyObject *const_str_plain_PYPY;
PyObject *const_str_plain_PY_3_10_PLUS;
PyObject *const_str_plain_PY_3_11_PLUS;
PyObject *const_str_plain_PY_3_12_PLUS;
PyObject *const_str_plain_PY_3_13_PLUS;
PyObject *const_str_plain_PY_3_14_PLUS;
PyObject *const_str_plain__get_annotations;
PyObject *const_str_digest_93f62ff79334686412fc7c44e87e33e7;
PyObject *const_str_digest_df73a1c0bc75d9a60e0e09764e72854a;
PyObject *const_str_plain__AnnotationExtractor;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_40;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_33611bc816f889c34ec42654b25aeed2;
PyObject *const_str_plain_get_first_param_type;
PyObject *const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc;
PyObject *const_str_plain_get_return_type;
PyObject *const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10;
PyObject *const_tuple_str_plain_sig_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_local;
PyObject *const_str_plain_repr_context;
PyObject *const_str_plain_get_generic_base;
PyObject *const_str_digest_4db3bdbc4d0cf08111494cfd160733b3;
PyObject *const_str_digest_1d839ded8750394d9735e1b09f09375e;
PyObject *const_tuple_str_plain_self_str_plain_callable_tuple;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_tuple_str_plain_self_str_plain_params_tuple;
PyObject *const_tuple_str_plain_cl_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[58];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("attr._compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_89c0d18fd9e496b550dab2b1c08ff4ac);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_sig);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_9015b2a8e15a0d8ac39d598f36100118);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_return_annotation);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signature);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_e995169440143ac6fe7008fa9b6942cd);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenericAlias);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain___origin__);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae6adbea3b0ef8674062e656fe771c4);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_platform);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_python_implementation);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyPy);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYPY);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_10_PLUS);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_11_PLUS);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_12_PLUS);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_13_PLUS);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_14_PLUS);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_annotations);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_93f62ff79334686412fc7c44e87e33e7);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_df73a1c0bc75d9a60e0e09764e72854a);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__AnnotationExtractor);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_33611bc816f889c34ec42654b25aeed2);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_first_param_type);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_return_type);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sig_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_local);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_repr_context);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_generic_base);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_4db3bdbc4d0cf08111494cfd160733b3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d839ded8750394d9735e1b09f09375e);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_callable_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cl_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_attr$_compat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_89c0d18fd9e496b550dab2b1c08ff4ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89c0d18fd9e496b550dab2b1c08ff4ac);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_sig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sig);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Parameter);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_9015b2a8e15a0d8ac39d598f36100118));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9015b2a8e15a0d8ac39d598f36100118);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_return_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return_annotation);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signature);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_e995169440143ac6fe7008fa9b6942cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e995169440143ac6fe7008fa9b6942cd);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenericAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenericAlias);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain___origin__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___origin__);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae6adbea3b0ef8674062e656fe771c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eae6adbea3b0ef8674062e656fe771c4);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_platform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_platform);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_python_implementation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_python_implementation);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyPy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyPy);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYPY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYPY);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_10_PLUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_3_10_PLUS);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_11_PLUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_3_11_PLUS);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_12_PLUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_3_12_PLUS);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_13_PLUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_3_13_PLUS);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_3_14_PLUS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_3_14_PLUS);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_annotations);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_93f62ff79334686412fc7c44e87e33e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93f62ff79334686412fc7c44e87e33e7);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_df73a1c0bc75d9a60e0e09764e72854a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df73a1c0bc75d9a60e0e09764e72854a);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__AnnotationExtractor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AnnotationExtractor);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_40));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_40);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_33611bc816f889c34ec42654b25aeed2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33611bc816f889c34ec42654b25aeed2);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_first_param_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_first_param_type);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_return_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_return_type);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sig_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sig_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_local));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_repr_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_repr_context);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_generic_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_generic_base);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_4db3bdbc4d0cf08111494cfd160733b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4db3bdbc4d0cf08111494cfd160733b3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d839ded8750394d9735e1b09f09375e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d839ded8750394d9735e1b09f09375e);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_callable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_callable_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_params_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cl_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_attr$_compat$_GenericAlias(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenericAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenericAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenericAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenericAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_compat$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_compat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_compat$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_compat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_compat$platform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_platform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_platform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_platform);
    }

    return result;
}

static PyObject *module_var_accessor_attr$_compat$threading(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_attr$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_attr$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_attr$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d0c91434e6a1df7cc29406b5711cd6f0;
static PyCodeObject *code_objects_f0ed2ff2631f62247f8fc4226bdaa74b;
static PyCodeObject *code_objects_56ddb828a64fd53f1d76f8afb7ecb860;
static PyCodeObject *code_objects_2aa2666da29d0df68b277406347c474a;
static PyCodeObject *code_objects_0e5482acbb18d8aca6b4198d4aa9b0fe;
static PyCodeObject *code_objects_74138e3733765e54089ba26d4b804363;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4db3bdbc4d0cf08111494cfd160733b3); CHECK_OBJECT(module_filename_obj);
code_objects_d0c91434e6a1df7cc29406b5711cd6f0 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_1d839ded8750394d9735e1b09f09375e, mod_consts.const_str_digest_1d839ded8750394d9735e1b09f09375e, NULL, NULL, 0, 0, 0);
code_objects_f0ed2ff2631f62247f8fc4226bdaa74b = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_33611bc816f889c34ec42654b25aeed2, mod_consts.const_tuple_str_plain_self_str_plain_callable_tuple, NULL, 2, 0, 0);
code_objects_56ddb828a64fd53f1d76f8afb7ecb860 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_annotations, mod_consts.const_str_plain__get_annotations, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_2aa2666da29d0df68b277406347c474a = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_first_param_type, mod_consts.const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple, NULL, 1, 0, 0);
code_objects_0e5482acbb18d8aca6b4198d4aa9b0fe = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_generic_base, mod_consts.const_str_plain_get_generic_base, mod_consts.const_tuple_str_plain_cl_tuple, NULL, 1, 0, 0);
code_objects_74138e3733765e54089ba26d4b804363 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_return_type, mod_consts.const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_attr$_compat$$$function__2__get_annotations(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_compat$$$function__3___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_compat$$$function__4_get_first_param_type(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_compat$$$function__5_get_return_type(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_attr$_compat$$$function__6_get_generic_base(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_attr$_compat$$$function__2__get_annotations(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_attr$_compat$$$function__2__get_annotations;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_compat$$$function__2__get_annotations = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_attr$_compat$$$function__2__get_annotations)) {
    Py_XDECREF(cache_frame_frame_attr$_compat$$$function__2__get_annotations);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_compat$$$function__2__get_annotations == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_compat$$$function__2__get_annotations = MAKE_FUNCTION_FRAME(tstate, code_objects_56ddb828a64fd53f1d76f8afb7ecb860, module_attr$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_compat$$$function__2__get_annotations->m_type_description == NULL);
frame_frame_attr$_compat$$$function__2__get_annotations = cache_frame_frame_attr$_compat$$$function__2__get_annotations;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat$$$function__2__get_annotations);
assert(Py_REFCNT(frame_frame_attr$_compat$$$function__2__get_annotations) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = const_str_plain___annotations__;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_attr$_compat$$$function__2__get_annotations->m_frame.f_lineno = 37;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__2__get_annotations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat$$$function__2__get_annotations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__2__get_annotations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_compat$$$function__2__get_annotations,
    type_description_1,
    par_cls
);


// Release cached frame if used for exception.
if (frame_frame_attr$_compat$$$function__2__get_annotations == cache_frame_frame_attr$_compat$$$function__2__get_annotations) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_compat$$$function__2__get_annotations);
    cache_frame_frame_attr$_compat$$$function__2__get_annotations = NULL;
}

assertFrameObject(frame_frame_attr$_compat$$$function__2__get_annotations);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$_compat$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_callable = python_pars[1];
struct Nuitka_FrameObject *frame_frame_attr$_compat$$$function__3___init__;
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
static struct Nuitka_FrameObject *cache_frame_frame_attr$_compat$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_attr$_compat$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_attr$_compat$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_compat$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_compat$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f0ed2ff2631f62247f8fc4226bdaa74b, module_attr$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_compat$$$function__3___init__->m_type_description == NULL);
frame_frame_attr$_compat$$$function__3___init__ = cache_frame_frame_attr$_compat$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat$$$function__3___init__);
assert(Py_REFCNT(frame_frame_attr$_compat$$$function__3___init__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_attr$_compat$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_callable);
tmp_args_element_value_1 = par_callable;
frame_frame_attr$_compat$$$function__3___init__->m_frame.f_lineno = 50;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_signature, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_sig, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__3___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__3___init__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_sig, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 49;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_attr$_compat$$$function__3___init__->m_frame)) {
        frame_frame_attr$_compat$$$function__3___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_compat$$$function__3___init__,
    type_description_1,
    par_self,
    par_callable
);


// Release cached frame if used for exception.
if (frame_frame_attr$_compat$$$function__3___init__ == cache_frame_frame_attr$_compat$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_compat$$$function__3___init__);
    cache_frame_frame_attr$_compat$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_attr$_compat$$$function__3___init__);

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
CHECK_OBJECT(par_callable);
Py_DECREF(par_callable);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_callable);
Py_DECREF(par_callable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$_compat$$$function__4_get_first_param_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_params = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_compat$$$function__4_get_first_param_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_compat$$$function__4_get_first_param_type = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_attr$_compat$$$function__4_get_first_param_type)) {
    Py_XDECREF(cache_frame_frame_attr$_compat$$$function__4_get_first_param_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_compat$$$function__4_get_first_param_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_compat$$$function__4_get_first_param_type = MAKE_FUNCTION_FRAME(tstate, code_objects_2aa2666da29d0df68b277406347c474a, module_attr$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_compat$$$function__4_get_first_param_type->m_type_description == NULL);
frame_frame_attr$_compat$$$function__4_get_first_param_type = cache_frame_frame_attr$_compat$$$function__4_get_first_param_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat$$$function__4_get_first_param_type);
assert(Py_REFCNT(frame_frame_attr$_compat$$$function__4_get_first_param_type) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sig);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_sig);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_parameters);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_attr$_compat$$$function__4_get_first_param_type->m_frame.f_lineno = 61;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_params);
tmp_and_left_value_1 = CHECK_IF_TRUE(var_params) == 1;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_params);
tmp_expression_value_6 = var_params;
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_annotation);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_attr$_compat$inspect(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_params);
tmp_expression_value_10 = var_params;
tmp_subscript_value_2 = const_int_0;
tmp_expression_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_annotation);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__4_get_first_param_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat$$$function__4_get_first_param_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__4_get_first_param_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_compat$$$function__4_get_first_param_type,
    type_description_1,
    par_self,
    var_params
);


// Release cached frame if used for exception.
if (frame_frame_attr$_compat$$$function__4_get_first_param_type == cache_frame_frame_attr$_compat$$$function__4_get_first_param_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_compat$$$function__4_get_first_param_type);
    cache_frame_frame_attr$_compat$$$function__4_get_first_param_type = NULL;
}

assertFrameObject(frame_frame_attr$_compat$$$function__4_get_first_param_type);

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
Py_XDECREF(var_params);
var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_params);
var_params = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_attr$_compat$$$function__5_get_return_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_attr$_compat$$$function__5_get_return_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_compat$$$function__5_get_return_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_attr$_compat$$$function__5_get_return_type)) {
    Py_XDECREF(cache_frame_frame_attr$_compat$$$function__5_get_return_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_compat$$$function__5_get_return_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_compat$$$function__5_get_return_type = MAKE_FUNCTION_FRAME(tstate, code_objects_74138e3733765e54089ba26d4b804363, module_attr$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_compat$$$function__5_get_return_type->m_type_description == NULL);
frame_frame_attr$_compat$$$function__5_get_return_type = cache_frame_frame_attr$_compat$$$function__5_get_return_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat$$$function__5_get_return_type);
assert(Py_REFCNT(frame_frame_attr$_compat$$$function__5_get_return_type) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sig);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sig);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_return_annotation);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_attr$_compat$inspect(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Signature);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_sig);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_return_annotation);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__5_get_return_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat$$$function__5_get_return_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__5_get_return_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_compat$$$function__5_get_return_type,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_attr$_compat$$$function__5_get_return_type == cache_frame_frame_attr$_compat$$$function__5_get_return_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_compat$$$function__5_get_return_type);
    cache_frame_frame_attr$_compat$$$function__5_get_return_type = NULL;
}

assertFrameObject(frame_frame_attr$_compat$$$function__5_get_return_type);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

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


static PyObject *impl_attr$_compat$$$function__6_get_generic_base(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cl = python_pars[0];
struct Nuitka_FrameObject *frame_frame_attr$_compat$$$function__6_get_generic_base;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_attr$_compat$$$function__6_get_generic_base = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_attr$_compat$$$function__6_get_generic_base)) {
    Py_XDECREF(cache_frame_frame_attr$_compat$$$function__6_get_generic_base);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_attr$_compat$$$function__6_get_generic_base == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_attr$_compat$$$function__6_get_generic_base = MAKE_FUNCTION_FRAME(tstate, code_objects_0e5482acbb18d8aca6b4198d4aa9b0fe, module_attr$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_attr$_compat$$$function__6_get_generic_base->m_type_description == NULL);
frame_frame_attr$_compat$$$function__6_get_generic_base = cache_frame_frame_attr$_compat$$$function__6_get_generic_base;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat$$$function__6_get_generic_base);
assert(Py_REFCNT(frame_frame_attr$_compat$$$function__6_get_generic_base) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cl);
tmp_expression_value_1 = par_cl;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_attr$_compat$_GenericAlias(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenericAlias);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 97;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cl);
tmp_expression_value_2 = par_cl;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___origin__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat$$$function__6_get_generic_base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat$$$function__6_get_generic_base->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat$$$function__6_get_generic_base, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_attr$_compat$$$function__6_get_generic_base,
    type_description_1,
    par_cl
);


// Release cached frame if used for exception.
if (frame_frame_attr$_compat$$$function__6_get_generic_base == cache_frame_frame_attr$_compat$$$function__6_get_generic_base) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_attr$_compat$$$function__6_get_generic_base);
    cache_frame_frame_attr$_compat$$$function__6_get_generic_base = NULL;
}

assertFrameObject(frame_frame_attr$_compat$$$function__6_get_generic_base);

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
CHECK_OBJECT(par_cl);
Py_DECREF(par_cl);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cl);
Py_DECREF(par_cl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_attr$_compat$$$function__2__get_annotations(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_compat$$$function__2__get_annotations,
        mod_consts.const_str_plain__get_annotations,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_56ddb828a64fd53f1d76f8afb7ecb860,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_compat,
        mod_consts.const_str_digest_89c0d18fd9e496b550dab2b1c08ff4ac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_compat$$$function__3___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_compat$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33611bc816f889c34ec42654b25aeed2,
#endif
        code_objects_f0ed2ff2631f62247f8fc4226bdaa74b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_compat$$$function__4_get_first_param_type(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_compat$$$function__4_get_first_param_type,
        mod_consts.const_str_plain_get_first_param_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04a6ec800f3ce02a8ae7468af958f8bc,
#endif
        code_objects_2aa2666da29d0df68b277406347c474a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_compat,
        mod_consts.const_str_digest_9015b2a8e15a0d8ac39d598f36100118,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_compat$$$function__5_get_return_type(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_compat$$$function__5_get_return_type,
        mod_consts.const_str_plain_get_return_type,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ffbc97f25a3e8230ffc45a1b9271ae10,
#endif
        code_objects_74138e3733765e54089ba26d4b804363,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_compat,
        mod_consts.const_str_digest_e995169440143ac6fe7008fa9b6942cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$_compat$$$function__6_get_generic_base(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$_compat$$$function__6_get_generic_base,
        mod_consts.const_str_plain_get_generic_base,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0e5482acbb18d8aca6b4198d4aa9b0fe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$_compat,
        mod_consts.const_str_digest_eae6adbea3b0ef8674062e656fe771c4,
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

static function_impl_code const function_table_attr$_compat[] = {
impl_attr$_compat$$$function__2__get_annotations,
impl_attr$_compat$$$function__3___init__,
impl_attr$_compat$$$function__4_get_first_param_type,
impl_attr$_compat$$$function__5_get_return_type,
impl_attr$_compat$$$function__6_get_generic_base,
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

    return Nuitka_Function_GetFunctionState(function, function_table_attr$_compat);
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
        module_attr$_compat,
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
        function_table_attr$_compat,
        sizeof(function_table_attr$_compat) / sizeof(function_impl_code)
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
static char const *module_full_name = "attr._compat";
#endif

// Internal entry point for module code.
PyObject *module_code_attr$_compat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("attr$_compat");

    // Store the module for future use.
    module_attr$_compat = module;

    moduledict_attr$_compat = MODULE_DICT(module_attr$_compat);

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
        PRINT_STRING("attr$_compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("attr$_compat: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("attr$_compat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "attr._compat" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initattr$_compat\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_attr$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_attr$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_attr$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_attr$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_attr$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_attr$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_attr$_compat);
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

        UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_attr$_compat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_attr$_compat$$$class__1__AnnotationExtractor_40 = NULL;
PyObject *tmp_dictset_value;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_attr$_compat = MAKE_MODULE_FRAME(code_objects_d0c91434e6a1df7cc29406b5711cd6f0, module_attr$_compat);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_attr$_compat);
assert(Py_REFCNT(frame_frame_attr$_compat) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_attr$_compat$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_attr$_compat$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_attr$_compat;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_attr$_compat->m_frame.f_lineno = 3;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_platform;
tmp_globals_arg_value_2 = (PyObject *)moduledict_attr$_compat;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_attr$_compat->m_frame.f_lineno = 4;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_platform, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_3 = (PyObject *)moduledict_attr$_compat;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_attr$_compat->m_frame.f_lineno = 6;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_attr$_compat;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_attr$_compat->m_frame.f_lineno = 8;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_attr$_compat,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_attr$_compat,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_10);
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
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_attr$_compat,
        mod_consts.const_str_plain__GenericAlias,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__GenericAlias);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_attr$_compat$platform(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_platform);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_attr$_compat->m_frame.f_lineno = 12;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_python_implementation);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_PyPy;
tmp_assign_source_12 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PYPY, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_True;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_3_10_PLUS, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_True;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_3_11_PLUS, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_True;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_3_12_PLUS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_True;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_3_13_PLUS, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_False;
UPDATE_STRING_DICT0(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_3_14_PLUS, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_attr$_compat$$$function__2__get_annotations(tstate);

UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__get_annotations, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_attr$_compat$$$class__1__AnnotationExtractor_40 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_93f62ff79334686412fc7c44e87e33e7;
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_df73a1c0bc75d9a60e0e09764e72854a;
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__AnnotationExtractor;
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_40;
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_LIST1(tstate, mod_consts.const_str_plain_sig);
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain___slots__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_attr$_compat$$$function__3___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_attr$_compat$$$function__4_get_first_param_type(tstate);

tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain_get_first_param_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_attr$_compat$$$function__5_get_return_type(tstate);

tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain_get_return_type, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_sig_tuple;
tmp_result = DICT_SET_ITEM(locals_attr$_compat$$$class__1__AnnotationExtractor_40, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain__AnnotationExtractor;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_attr$_compat$$$class__1__AnnotationExtractor_40;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_attr$_compat->m_frame.f_lineno = 40;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_21 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_attr$_compat$$$class__1__AnnotationExtractor_40);
locals_attr$_compat$$$class__1__AnnotationExtractor_40 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_attr$_compat$$$class__1__AnnotationExtractor_40);
locals_attr$_compat$$$class__1__AnnotationExtractor_40 = NULL;
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
exception_lineno = 40;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__AnnotationExtractor, tmp_assign_source_21);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_attr$_compat$threading(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto frame_exception_exit_1;
}
frame_frame_attr$_compat->m_frame.f_lineno = 92;
tmp_assign_source_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_local);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_repr_context, tmp_assign_source_23);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_attr$_compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_attr$_compat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_attr$_compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_attr$_compat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_attr$_compat$$$function__6_get_generic_base(tstate);

UPDATE_STRING_DICT1(moduledict_attr$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_generic_base, tmp_assign_source_24);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("attr$_compat", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "attr._compat" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_attr$_compat);
    return module_attr$_compat;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("attr$_compat", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

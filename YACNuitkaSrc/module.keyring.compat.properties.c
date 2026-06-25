/* Generated code for Python module 'keyring$compat$properties'
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



/* The "module_keyring$compat$properties" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_keyring$compat$properties;
PyDictObject *moduledict_keyring$compat$properties;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_1137d3f592b7b4a611ac5e71d551d0da;
PyObject *const_str_plain_callable;
PyObject *const_str_digest_8bc758b5ea9c62afd77e3fcc890c4f08;
PyObject *const_str_plain_fget;
PyObject *const_str_plain_classproperty;
PyObject *const_str_plain___set__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain__ensure_method;
PyObject *const_str_plain_fset;
PyObject *const_str_plain_setter;
PyObject *const_str_plain___get__;
PyObject *const_str_digest_deb8f9edc0a9e52b10a6cff0130faaba;
PyObject *const_str_plain_Meta;
PyObject *const_tuple_type_classmethod_type_staticmethod_tuple;
PyObject *const_str_digest_139f83f1ac28c706c8ecbbe11e61ded8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_183860622c74b781b108f72e74831387;
PyObject *const_str_digest_509e4f230326b33ac721d612388a671b;
PyObject *const_str_plain_NonDataProperty;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_4;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_a89e73ddd4421596a11a253f77e2eab9;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367;
PyObject *const_tuple_str_plain_fget_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_566942b274416533f2a3db526839b90b;
PyObject *const_int_pos_34;
PyObject *const_tuple_type_type_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_cc4c306682f0d7f994a46afcf1087f72;
PyObject *const_int_pos_137;
PyObject *const_str_digest_94c68d498f056566c778b30e0b78514b;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_205dfdf389de7830a1fbdddd6b8001ed;
PyObject *const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e;
PyObject *const_str_digest_a840a2fbd8fb6debe673d534b201e839;
PyObject *const_str_digest_e270812bd92b22286484c41851932b97;
PyObject *const_str_digest_cbc6dec4d8634cbdd53132908977cf00;
PyObject *const_tuple_str_plain_fget_str_plain_fset_tuple;
PyObject *const_str_digest_788a1e11b7aebdf7b845773dcdcb586e;
PyObject *const_str_digest_6ab0915825551871fda8633451cc0659;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_obj_str_plain_objtype_tuple;
PyObject *const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fget_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fget_str_plain_fset_tuple;
PyObject *const_tuple_str_plain_self_str_plain_owner_str_plain_value_tuple;
PyObject *const_tuple_fa1af448bb3ec3d9ea1b6c4432449999_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_fn_str_plain_needs_method_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fset_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("keyring.compat.properties"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_1137d3f592b7b4a611ac5e71d551d0da);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bc758b5ea9c62afd77e3fcc890c4f08);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_fget);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_classproperty);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___set__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_method);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_fset);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___get__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_deb8f9edc0a9e52b10a6cff0130faaba);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Meta);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_type_classmethod_type_staticmethod_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_139f83f1ac28c706c8ecbbe11e61ded8);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_183860622c74b781b108f72e74831387);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_509e4f230326b33ac721d612388a671b);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_NonDataProperty);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a89e73ddd4421596a11a253f77e2eab9);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fget_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_566942b274416533f2a3db526839b90b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_34);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_type_type_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc4c306682f0d7f994a46afcf1087f72);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_137);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_94c68d498f056566c778b30e0b78514b);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_205dfdf389de7830a1fbdddd6b8001ed);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_a840a2fbd8fb6debe673d534b201e839);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_e270812bd92b22286484c41851932b97);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbc6dec4d8634cbdd53132908977cf00);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fget_str_plain_fset_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_788a1e11b7aebdf7b845773dcdcb586e);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ab0915825551871fda8633451cc0659);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_obj_str_plain_objtype_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fget_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fget_str_plain_fset_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_owner_str_plain_value_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_fa1af448bb3ec3d9ea1b6c4432449999_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_fn_str_plain_needs_method_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fset_tuple);
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
void checkModuleConstants_keyring$compat$properties(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_1137d3f592b7b4a611ac5e71d551d0da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1137d3f592b7b4a611ac5e71d551d0da);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bc758b5ea9c62afd77e3fcc890c4f08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bc758b5ea9c62afd77e3fcc890c4f08);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_fget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fget);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_classproperty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_classproperty);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___set__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___set__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__ensure_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ensure_method);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_fset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fset);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___get__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___get__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_deb8f9edc0a9e52b10a6cff0130faaba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_deb8f9edc0a9e52b10a6cff0130faaba);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Meta);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_type_classmethod_type_staticmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_classmethod_type_staticmethod_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_139f83f1ac28c706c8ecbbe11e61ded8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_139f83f1ac28c706c8ecbbe11e61ded8);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_183860622c74b781b108f72e74831387));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_183860622c74b781b108f72e74831387);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_509e4f230326b33ac721d612388a671b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_509e4f230326b33ac721d612388a671b);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_NonDataProperty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NonDataProperty);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a89e73ddd4421596a11a253f77e2eab9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a89e73ddd4421596a11a253f77e2eab9);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fget_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fget_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_566942b274416533f2a3db526839b90b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_566942b274416533f2a3db526839b90b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_34));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_34);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_type_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_type_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc4c306682f0d7f994a46afcf1087f72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc4c306682f0d7f994a46afcf1087f72);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_137));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_137);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_94c68d498f056566c778b30e0b78514b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94c68d498f056566c778b30e0b78514b);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_205dfdf389de7830a1fbdddd6b8001ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_205dfdf389de7830a1fbdddd6b8001ed);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_a840a2fbd8fb6debe673d534b201e839));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a840a2fbd8fb6debe673d534b201e839);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_e270812bd92b22286484c41851932b97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e270812bd92b22286484c41851932b97);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbc6dec4d8634cbdd53132908977cf00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbc6dec4d8634cbdd53132908977cf00);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fget_str_plain_fset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fget_str_plain_fset_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_788a1e11b7aebdf7b845773dcdcb586e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_788a1e11b7aebdf7b845773dcdcb586e);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ab0915825551871fda8633451cc0659));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ab0915825551871fda8633451cc0659);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_obj_str_plain_objtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_obj_str_plain_objtype_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fget_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fget_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fget_str_plain_fset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fget_str_plain_fset_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_owner_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_owner_str_plain_value_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_fa1af448bb3ec3d9ea1b6c4432449999_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa1af448bb3ec3d9ea1b6c4432449999_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_fn_str_plain_needs_method_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_fn_str_plain_needs_method_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fset_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_keyring$compat$properties$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$compat$properties->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$compat$properties->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$compat$properties->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_keyring$compat$properties$classproperty(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_keyring$compat$properties->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_keyring$compat$properties->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)mod_consts.const_str_plain_classproperty);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_keyring$compat$properties->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_classproperty);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_classproperty, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_classproperty);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_classproperty, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)mod_consts.const_str_plain_classproperty);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)mod_consts.const_str_plain_classproperty);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_classproperty);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_af0ed0f3fe635d3316f54240ceb861d8;
static PyCodeObject *code_objects_4f79b28ff871290619a8150704663417;
static PyCodeObject *code_objects_92da0d1eb7f4ca4d5b6f1b5cdf3803f0;
static PyCodeObject *code_objects_5542c59c5218e44ff56b298a5846d397;
static PyCodeObject *code_objects_4fde9e08e32946118eac2bfaa4f7dd53;
static PyCodeObject *code_objects_141a5838a173a6b378f83501274d2076;
static PyCodeObject *code_objects_0e343abd4150458a2bdcb87479f52e6d;
static PyCodeObject *code_objects_cbce1dea3c2a7b6a7668db59f6ee7775;
static PyCodeObject *code_objects_e845ce3226ae1279ca9cfe39835bf794;
static PyCodeObject *code_objects_88f4ba6c2716a1cfb0fdd90977a2f3c2;
static PyCodeObject *code_objects_7e718ecaef63b307d53ffdbe737750e5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_788a1e11b7aebdf7b845773dcdcb586e); CHECK_OBJECT(module_filename_obj);
code_objects_af0ed0f3fe635d3316f54240ceb861d8 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6ab0915825551871fda8633451cc0659, mod_consts.const_str_digest_6ab0915825551871fda8633451cc0659, NULL, NULL, 0, 0, 0);
code_objects_4f79b28ff871290619a8150704663417 = MAKE_CODE_OBJECT(module_filename_obj, 137, 0, mod_consts.const_str_plain_Meta, mod_consts.const_str_digest_cc4c306682f0d7f994a46afcf1087f72, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_92da0d1eb7f4ca4d5b6f1b5cdf3803f0 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___get__, mod_consts.const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367, mod_consts.const_tuple_str_plain_self_str_plain_obj_str_plain_objtype_tuple, NULL, 3, 0, 0);
code_objects_5542c59c5218e44ff56b298a5846d397 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___get__, mod_consts.const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e, mod_consts.const_tuple_str_plain_self_str_plain_instance_str_plain_owner_tuple, NULL, 3, 0, 0);
code_objects_4fde9e08e32946118eac2bfaa4f7dd53 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_a89e73ddd4421596a11a253f77e2eab9, mod_consts.const_tuple_str_plain_self_str_plain_fget_tuple, NULL, 2, 0, 0);
code_objects_141a5838a173a6b378f83501274d2076 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_205dfdf389de7830a1fbdddd6b8001ed, mod_consts.const_tuple_str_plain_self_str_plain_fget_str_plain_fset_tuple, NULL, 3, 0, 0);
code_objects_0e343abd4150458a2bdcb87479f52e6d = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___set__, mod_consts.const_str_digest_a840a2fbd8fb6debe673d534b201e839, mod_consts.const_tuple_str_plain_self_str_plain_owner_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_cbce1dea3c2a7b6a7668db59f6ee7775 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setattr__, mod_consts.const_str_digest_94c68d498f056566c778b30e0b78514b, mod_consts.const_tuple_fa1af448bb3ec3d9ea1b6c4432449999_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_e845ce3226ae1279ca9cfe39835bf794 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__ensure_method, mod_consts.const_str_digest_cbc6dec4d8634cbdd53132908977cf00, mod_consts.const_tuple_str_plain_cls_str_plain_fn_str_plain_needs_method_tuple, NULL, 2, 0, 0);
code_objects_88f4ba6c2716a1cfb0fdd90977a2f3c2 = MAKE_CODE_OBJECT(module_filename_obj, 34, 0, mod_consts.const_str_plain_classproperty, mod_consts.const_str_plain_classproperty, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7e718ecaef63b307d53ffdbe737750e5 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_setter, mod_consts.const_str_digest_e270812bd92b22286484c41851932b97, mod_consts.const_tuple_str_plain_self_str_plain_fset_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__2___get__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__3___setattr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__4___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__5___get__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__6___set__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__7_setter(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__8__ensure_method(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_keyring$compat$properties$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fget = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4fde9e08e32946118eac2bfaa4f7dd53, module_keyring$compat$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__1___init__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__1___init__ = cache_frame_frame_keyring$compat$properties$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__1___init__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_fget);
tmp_cmp_expr_left_1 = par_fget;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_1137d3f592b7b4a611ac5e71d551d0da;
frame_frame_keyring$compat$properties$$$function__1___init__->m_frame.f_lineno = 24;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 24;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_fget);
tmp_args_element_value_1 = par_fget;
frame_frame_keyring$compat$properties$$$function__1___init__->m_frame.f_lineno = 25;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_8bc758b5ea9c62afd77e3fcc890c4f08;
frame_frame_keyring$compat$properties$$$function__1___init__->m_frame.f_lineno = 25;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 25;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fget);
tmp_assattr_value_1 = par_fget;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fget, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__1___init__,
    type_description_1,
    par_self,
    par_fget
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__1___init__ == cache_frame_frame_keyring$compat$properties$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__1___init__);
    cache_frame_frame_keyring$compat$properties$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__1___init__);

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
CHECK_OBJECT(par_fget);
Py_DECREF(par_fget);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fget);
Py_DECREF(par_fget);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__2___get__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *par_objtype = python_pars[2];
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__2___get__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__2___get__ = NULL;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_obj);
tmp_cmp_expr_left_1 = par_obj;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__2___get__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__2___get__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__2___get__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__2___get__ = MAKE_FUNCTION_FRAME(tstate, code_objects_92da0d1eb7f4ca4d5b6f1b5cdf3803f0, module_keyring$compat$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__2___get__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__2___get__ = cache_frame_frame_keyring$compat$properties$$$function__2___get__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__2___get__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__2___get__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_obj);
tmp_args_element_value_1 = par_obj;
frame_frame_keyring$compat$properties$$$function__2___get__->m_frame.f_lineno = 31;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fget, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__2___get__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__2___get__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__2___get__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__2___get__,
    type_description_1,
    par_self,
    par_obj,
    par_objtype
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__2___get__ == cache_frame_frame_keyring$compat$properties$$$function__2___get__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__2___get__);
    cache_frame_frame_keyring$compat$properties$$$function__2___get__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__2___get__);

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
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_objtype);
Py_DECREF(par_objtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_objtype);
Py_DECREF(par_objtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__3___setattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *var_obj = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__3___setattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__3___setattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__3___setattr__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__3___setattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__3___setattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__3___setattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cbce1dea3c2a7b6a7668db59f6ee7775, module_keyring$compat$properties, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__3___setattr__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__3___setattr__ = cache_frame_frame_keyring$compat$properties$$$function__3___setattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__3___setattr__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__3___setattr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
tmp_args_element_value_2 = Py_None;
frame_frame_keyring$compat$properties$$$function__3___setattr__->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(var_obj);
tmp_type_arg_1 = var_obj;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_cmp_expr_right_1 = module_var_accessor_keyring$compat$properties$classproperty(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_classproperty);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 140;
type_description_1 = "ooooc";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_obj);
tmp_called_instance_1 = var_obj;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_4 = par_value;
frame_frame_keyring$compat$properties$$$function__3___setattr__->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___set__,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_keyring$compat$properties, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_5 = par_key;
CHECK_OBJECT(par_value);
tmp_args_element_value_6 = par_value;
frame_frame_keyring$compat$properties$$$function__3___setattr__->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__3___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__3___setattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__3___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__3___setattr__,
    type_description_1,
    par_self,
    par_key,
    par_value,
    var_obj,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__3___setattr__ == cache_frame_frame_keyring$compat$properties$$$function__3___setattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__3___setattr__);
    cache_frame_frame_keyring$compat$properties$$$function__3___setattr__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__3___setattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_obj);
CHECK_OBJECT(var_obj);
Py_DECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_obj);
var_obj = NULL;
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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fget = python_pars[1];
PyObject *par_fset = python_pars[2];
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_141a5838a173a6b378f83501274d2076, module_keyring$compat$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__4___init__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__4___init__ = cache_frame_frame_keyring$compat$properties$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__4___init__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_fget);
tmp_args_element_value_1 = par_fget;
frame_frame_keyring$compat$properties$$$function__4___init__->m_frame.f_lineno = 145;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__ensure_method, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fget, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_fset);
tmp_assattr_value_2 = par_fset;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_fset, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_fset);
tmp_truth_name_1 = CHECK_IF_TRUE(par_fset);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_fset);
tmp_args_element_value_2 = par_fset;
frame_frame_keyring$compat$properties$$$function__4___init__->m_frame.f_lineno = 147;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__4___init__,
    type_description_1,
    par_self,
    par_fget,
    par_fset
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__4___init__ == cache_frame_frame_keyring$compat$properties$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__4___init__);
    cache_frame_frame_keyring$compat$properties$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__4___init__);

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
CHECK_OBJECT(par_fget);
Py_DECREF(par_fget);
CHECK_OBJECT(par_fset);
Py_DECREF(par_fset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fget);
Py_DECREF(par_fget);
CHECK_OBJECT(par_fset);
Py_DECREF(par_fset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__5___get__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_instance = python_pars[1];
PyObject *par_owner = python_pars[2];
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__5___get__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__5___get__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__5___get__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__5___get__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__5___get__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__5___get__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5542c59c5218e44ff56b298a5846d397, module_keyring$compat$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__5___get__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__5___get__ = cache_frame_frame_keyring$compat$properties$$$function__5___get__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__5___get__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__5___get__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fget);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
CHECK_OBJECT(par_owner);
tmp_args_element_value_2 = par_owner;
frame_frame_keyring$compat$properties$$$function__5___get__->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_called_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___get__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_keyring$compat$properties$$$function__5___get__->m_frame.f_lineno = 150;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__5___get__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__5___get__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__5___get__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__5___get__,
    type_description_1,
    par_self,
    par_instance,
    par_owner
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__5___get__ == cache_frame_frame_keyring$compat$properties$$$function__5___get__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__5___get__);
    cache_frame_frame_keyring$compat$properties$$$function__5___get__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__5___get__);

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
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_owner);
Py_DECREF(par_owner);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_owner);
Py_DECREF(par_owner);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__6___set__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_owner = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__6___set__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__6___set__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__6___set__)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__6___set__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__6___set__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__6___set__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0e343abd4150458a2bdcb87479f52e6d, module_keyring$compat$properties, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__6___set__->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__6___set__ = cache_frame_frame_keyring$compat$properties$$$function__6___set__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__6___set__);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__6___set__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fset);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooo";
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_deb8f9edc0a9e52b10a6cff0130faaba;
frame_frame_keyring$compat$properties$$$function__6___set__->m_frame.f_lineno = 154;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 154;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_owner);
tmp_type_arg_1 = par_owner;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
tmp_expression_value_2 = module_var_accessor_keyring$compat$properties$classproperty(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_classproperty);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 155;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Meta);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 155;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(par_owner);
tmp_type_arg_2 = par_owner;
tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = par_owner;
    assert(old != NULL);
    par_owner = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fset);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
CHECK_OBJECT(par_owner);
tmp_args_element_value_2 = par_owner;
frame_frame_keyring$compat$properties$$$function__6___set__->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_called_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___get__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_keyring$compat$properties$$$function__6___set__->m_frame.f_lineno = 157;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__6___set__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__6___set__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__6___set__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__6___set__,
    type_description_1,
    par_self,
    par_owner,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__6___set__ == cache_frame_frame_keyring$compat$properties$$$function__6___set__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__6___set__);
    cache_frame_frame_keyring$compat$properties$$$function__6___set__ = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__6___set__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_owner);
CHECK_OBJECT(par_owner);
Py_DECREF(par_owner);
par_owner = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_owner);
par_owner = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__7_setter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fset = python_pars[1];
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__7_setter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__7_setter = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__7_setter)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__7_setter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__7_setter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__7_setter = MAKE_FUNCTION_FRAME(tstate, code_objects_7e718ecaef63b307d53ffdbe737750e5, module_keyring$compat$properties, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__7_setter->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__7_setter = cache_frame_frame_keyring$compat$properties$$$function__7_setter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__7_setter);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__7_setter) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_fset);
tmp_args_element_value_1 = par_fset;
frame_frame_keyring$compat$properties$$$function__7_setter->m_frame.f_lineno = 160;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__ensure_method, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fset, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__7_setter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__7_setter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__7_setter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__7_setter,
    type_description_1,
    par_self,
    par_fset
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__7_setter == cache_frame_frame_keyring$compat$properties$$$function__7_setter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__7_setter);
    cache_frame_frame_keyring$compat$properties$$$function__7_setter = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__7_setter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fset);
Py_DECREF(par_fset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fset);
Py_DECREF(par_fset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_keyring$compat$properties$$$function__8__ensure_method(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_fn = python_pars[1];
nuitka_bool var_needs_method = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$function__8__ensure_method;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method)) {
    Py_XDECREF(cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method = MAKE_FUNCTION_FRAME(tstate, code_objects_e845ce3226ae1279ca9cfe39835bf794, module_keyring$compat$properties, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method->m_type_description == NULL);
frame_frame_keyring$compat$properties$$$function__8__ensure_method = cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$function__8__ensure_method);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$function__8__ensure_method) == 2);

// Framed code:
{
nuitka_bool tmp_assign_source_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_fn);
tmp_isinstance_inst_1 = par_fn;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_classmethod_type_staticmethod_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oob";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_needs_method = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$function__8__ensure_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$function__8__ensure_method->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$function__8__ensure_method, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$function__8__ensure_method,
    type_description_1,
    par_cls,
    par_fn,
    (int)var_needs_method
);


// Release cached frame if used for exception.
if (frame_frame_keyring$compat$properties$$$function__8__ensure_method == cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method);
    cache_frame_frame_keyring$compat$properties$$$function__8__ensure_method = NULL;
}

assertFrameObject(frame_frame_keyring$compat$properties$$$function__8__ensure_method);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_classmethod_arg_1;
assert(var_needs_method != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_1 = var_needs_method == NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_fn);
tmp_classmethod_arg_1 = par_fn;
tmp_return_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
assert(!(tmp_return_value == NULL));
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_fn);
tmp_return_value = par_fn;
Py_INCREF(tmp_return_value);
condexpr_end_1:;
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
assert(var_needs_method != NUITKA_BOOL_UNASSIGNED);
var_needs_method = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_fn);
Py_DECREF(par_fn);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_fn);
Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a89e73ddd4421596a11a253f77e2eab9,
#endif
        code_objects_4fde9e08e32946118eac2bfaa4f7dd53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__2___get__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__2___get__,
        mod_consts.const_str_plain___get__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c4ecb3f4b7dca95876d15b4f3151367,
#endif
        code_objects_92da0d1eb7f4ca4d5b6f1b5cdf3803f0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__3___setattr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__3___setattr__,
        mod_consts.const_str_plain___setattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_94c68d498f056566c778b30e0b78514b,
#endif
        code_objects_cbce1dea3c2a7b6a7668db59f6ee7775,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__4___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_205dfdf389de7830a1fbdddd6b8001ed,
#endif
        code_objects_141a5838a173a6b378f83501274d2076,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__5___get__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__5___get__,
        mod_consts.const_str_plain___get__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d00fd94b854b100e00a6a6a865c7ad4e,
#endif
        code_objects_5542c59c5218e44ff56b298a5846d397,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__6___set__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__6___set__,
        mod_consts.const_str_plain___set__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a840a2fbd8fb6debe673d534b201e839,
#endif
        code_objects_0e343abd4150458a2bdcb87479f52e6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__7_setter(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__7_setter,
        mod_consts.const_str_plain_setter,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e270812bd92b22286484c41851932b97,
#endif
        code_objects_7e718ecaef63b307d53ffdbe737750e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_keyring$compat$properties$$$function__8__ensure_method(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_keyring$compat$properties$$$function__8__ensure_method,
        mod_consts.const_str_plain__ensure_method,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cbc6dec4d8634cbdd53132908977cf00,
#endif
        code_objects_e845ce3226ae1279ca9cfe39835bf794,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_keyring$compat$properties,
        mod_consts.const_str_digest_139f83f1ac28c706c8ecbbe11e61ded8,
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

static function_impl_code const function_table_keyring$compat$properties[] = {
impl_keyring$compat$properties$$$function__1___init__,
impl_keyring$compat$properties$$$function__2___get__,
impl_keyring$compat$properties$$$function__3___setattr__,
impl_keyring$compat$properties$$$function__4___init__,
impl_keyring$compat$properties$$$function__5___get__,
impl_keyring$compat$properties$$$function__6___set__,
impl_keyring$compat$properties$$$function__7_setter,
impl_keyring$compat$properties$$$function__8__ensure_method,
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

    return Nuitka_Function_GetFunctionState(function, function_table_keyring$compat$properties);
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
        module_keyring$compat$properties,
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
        function_table_keyring$compat$properties,
        sizeof(function_table_keyring$compat$properties) / sizeof(function_impl_code)
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
static char const *module_full_name = "keyring.compat.properties";
#endif

// Internal entry point for module code.
PyObject *module_code_keyring$compat$properties(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("keyring$compat$properties");

    // Store the module for future use.
    module_keyring$compat$properties = module;

    moduledict_keyring$compat$properties = MODULE_DICT(module_keyring$compat$properties);

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
        PRINT_STRING("keyring$compat$properties: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("keyring$compat$properties: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("keyring$compat$properties: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.compat.properties" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initkeyring$compat$properties\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_keyring$compat$properties,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_keyring$compat$properties,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_keyring$compat$properties,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$compat$properties,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_keyring$compat$properties,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_keyring$compat$properties);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_keyring$compat$properties);
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

        UPDATE_STRING_DICT1(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_classproperty$class_container$class_creation_1__bases = NULL;
PyObject *tmp_classproperty$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_classproperty$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_classproperty$class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_keyring$compat$properties$$$class__1_NonDataProperty_4 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_keyring$compat$properties$$$class__2_classproperty_34 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$class__2_classproperty_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
PyObject *locals_keyring$compat$properties$$$class__3_Meta_137 = NULL;
struct Nuitka_FrameObject *frame_frame_keyring$compat$properties$$$class__3_Meta_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_keyring$compat$properties = MAKE_MODULE_FRAME(code_objects_af0ed0f3fe635d3316f54240ceb861d8, module_keyring$compat$properties);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties);
assert(Py_REFCNT(frame_frame_keyring$compat$properties) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_keyring$compat$properties$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_keyring$compat$properties$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_keyring$compat$properties$$$class__1_NonDataProperty_4 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_183860622c74b781b108f72e74831387;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_509e4f230326b33ac721d612388a671b;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_NonDataProperty;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__1___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__2___get__(tstate, tmp_defaults_1);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, mod_consts.const_str_plain___get__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_fget_tuple;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__1_NonDataProperty_4, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_NonDataProperty;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_keyring$compat$properties$$$class__1_NonDataProperty_4;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$compat$properties->m_frame.f_lineno = 4;
tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_7;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_6 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_6);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_keyring$compat$properties$$$class__1_NonDataProperty_4);
locals_keyring$compat$properties$$$class__1_NonDataProperty_4 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$compat$properties$$$class__1_NonDataProperty_4);
locals_keyring$compat$properties$$$class__1_NonDataProperty_4 = NULL;
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
exception_lineno = 4;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_keyring$compat$properties, (Nuitka_StringObject *)mod_consts.const_str_plain_NonDataProperty, tmp_assign_source_6);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_keyring$compat$properties$$$class__2_classproperty_34 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_183860622c74b781b108f72e74831387;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_566942b274416533f2a3db526839b90b;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_classproperty;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_34;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_keyring$compat$properties$$$class__2_classproperty_2 = MAKE_CLASS_FRAME(tstate, code_objects_88f4ba6c2716a1cfb0fdd90977a2f3c2, module_keyring$compat$properties, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$class__2_classproperty_2);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$class__2_classproperty_2) == 2);

// Framed code:
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_type_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_classproperty$class_container$class_creation_1__bases == NULL);
tmp_classproperty$class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_classproperty$class_container$class_creation_1__class_decl_dict == NULL);
tmp_classproperty$class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
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
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_classproperty$class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_classproperty$class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_classproperty$class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_classproperty$class_container$class_creation_1__metaclass == NULL);
tmp_classproperty$class_container$class_creation_1__metaclass = tmp_assign_source_13;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_classproperty$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_classproperty$class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Meta;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_classproperty$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_classproperty$class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$compat$properties$$$class__2_classproperty_2->m_frame.f_lineno = 137;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_classproperty$class_container$class_creation_1__prepared == NULL);
tmp_classproperty$class_container$class_creation_1__prepared = tmp_assign_source_14;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_classproperty$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
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
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_classproperty$class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_classproperty$class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
frame_frame_keyring$compat$properties$$$class__2_classproperty_2->m_frame.f_lineno = 137;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 137;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_classproperty$class_container$class_creation_1__prepared == NULL);
tmp_classproperty$class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__prepared);
tmp_set_locals_3 = tmp_classproperty$class_container$class_creation_1__prepared;
locals_keyring$compat$properties$$$class__3_Meta_137 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_183860622c74b781b108f72e74831387;
tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_cc4c306682f0d7f994a46afcf1087f72;
tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_137;
tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
frame_frame_keyring$compat$properties$$$class__3_Meta_3 = MAKE_CLASS_FRAME(tstate, code_objects_4f79b28ff871290619a8150704663417, module_keyring$compat$properties, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_keyring$compat$properties$$$class__3_Meta_3);
assert(Py_REFCNT(frame_frame_keyring$compat$properties$$$class__3_Meta_3) == 2);

// Framed code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__3___setattr__(tstate, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, mod_consts.const_str_plain___setattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_3 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$class__3_Meta_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$class__3_Meta_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$class__3_Meta_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$class__3_Meta_3,
    type_description_3,
    outline_2_var___class__
);



assertFrameObject(frame_frame_keyring$compat$properties$$$class__3_Meta_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_2:;
type_description_2 = "o";
goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_classproperty$class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_type_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_type_tuple;
tmp_res = PyObject_SetItem(locals_keyring$compat$properties$$$class__3_Meta_137, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_classproperty$class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Meta;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_classproperty$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_keyring$compat$properties$$$class__3_Meta_137;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_3 = tmp_classproperty$class_container$class_creation_1__class_decl_dict;
frame_frame_keyring$compat$properties$$$class__2_classproperty_2->m_frame.f_lineno = 137;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_16);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_dictset_value = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_dictset_value);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_keyring$compat$properties$$$class__3_Meta_137);
locals_keyring$compat$properties$$$class__3_Meta_137 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$compat$properties$$$class__3_Meta_137);
locals_keyring$compat$properties$$$class__3_Meta_137 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 137;
goto try_except_handler_7;
outline_result_6:;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain_Meta, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto try_except_handler_7;
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_classproperty$class_container$class_creation_1__bases);
tmp_classproperty$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
tmp_classproperty$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_classproperty$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_classproperty$class_container$class_creation_1__prepared);
tmp_classproperty$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__bases);
Py_DECREF(tmp_classproperty$class_container$class_creation_1__bases);
tmp_classproperty$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_classproperty$class_container$class_creation_1__class_decl_dict);
tmp_classproperty$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_classproperty$class_container$class_creation_1__metaclass);
tmp_classproperty$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_classproperty$class_container$class_creation_1__prepared);
Py_DECREF(tmp_classproperty$class_container$class_creation_1__prepared);
tmp_classproperty$class_container$class_creation_1__prepared = NULL;
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

goto frame_no_exception_2;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties$$$class__2_classproperty_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties$$$class__2_classproperty_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties$$$class__2_classproperty_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_keyring$compat$properties$$$class__2_classproperty_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_keyring$compat$properties$$$class__2_classproperty_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_2:;
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__4___init__(tstate, tmp_defaults_2);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__5___get__(tstate, tmp_defaults_3);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain___get__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__6___set__(tstate);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain___set__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_keyring$compat$properties$$$function__7_setter(tstate);

tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain_setter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_classmethod_arg_1;

tmp_classmethod_arg_1 = MAKE_FUNCTION_keyring$compat$properties$$$function__8__ensure_method(tstate);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain__ensure_method, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_fget_str_plain_fset_tuple;
tmp_result = DICT_SET_ITEM(locals_keyring$compat$properties$$$class__2_classproperty_34, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_4;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_classproperty;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_keyring$compat$properties$$$class__2_classproperty_34;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_keyring$compat$properties->m_frame.f_lineno = 34;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_10 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_keyring$compat$properties$$$class__2_classproperty_34);
locals_keyring$compat$properties$$$class__2_classproperty_34 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_keyring$compat$properties$$$class__2_classproperty_34);
locals_keyring$compat$properties$$$class__2_classproperty_34 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 34;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_keyring$compat$properties, (Nuitka_StringObject *)mod_consts.const_str_plain_classproperty, tmp_assign_source_10);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_keyring$compat$properties, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_keyring$compat$properties->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_keyring$compat$properties, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_keyring$compat$properties);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("keyring$compat$properties", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "keyring.compat.properties" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_keyring$compat$properties);
    return module_keyring$compat$properties;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_keyring$compat$properties, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("keyring$compat$properties", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

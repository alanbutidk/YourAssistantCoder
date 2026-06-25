/* Generated code for Python module 'pyasn1$type$tagmap'
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



/* The "module_pyasn1$type$tagmap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$type$tagmap;
PyDictObject *moduledict_pyasn1$type$tagmap;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__TagMap__presentTypes;
PyObject *const_str_plain__TagMap__skipTypes;
PyObject *const_str_plain__TagMap__defaultType;
PyObject *const_str_plain_error;
PyObject *const_str_plain_PyAsn1Error;
PyObject *const_tuple_str_digest_19ac085191da4a2ce0c8c23bf24d7fec_tuple;
PyObject *const_str_digest_10a7540c472fa54811ab365c8ef197d5;
PyObject *const_str_digest_1141e86ba27ab0f97f0e843214288f98;
PyObject *const_str_digest_156f6c06e516a679db8618dc4fce4b19;
PyObject *const_str_digest_4b61d001d2eb6259b9e5da347b265808;
PyObject *const_str_digest_c0c3759da123e387798315e75d2fed70;
PyObject *const_str_digest_6de327263ef1436d109eb27e8b6fa2cc;
PyObject *const_str_digest_fc8919f2c439971f92f609092ac5bffe;
PyObject *const_str_digest_86e27e851d87aacea53fdbf398fcf878;
PyObject *const_str_plain_presentTypes;
PyObject *const_str_plain_skipTypes;
PyObject *const_str_plain_defaultType;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_pyasn1;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_str_plain_TagMap;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7b7d38ad4f0f25c0cfa3736bfd97a14a;
PyObject *const_str_digest_03ae1bb046cfa2f6d68ccc58d346c81b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_12;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_bdc16f41e8b84c052eb4740c31993233;
PyObject *const_str_plain___contains__;
PyObject *const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f;
PyObject *const_str_digest_33d5093fa912bd8ffa151bba5c5b1430;
PyObject *const_str_digest_d53f357c37f35f79e8da05be1069d06f;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_07fbfd12aa8545c2854347b9267de3a1;
PyObject *const_str_plain_property;
PyObject *const_str_digest_7380ae16448de490f93c995e705bab1d;
PyObject *const_str_digest_89293ad2f37ba579fc9688ee6cc7251c;
PyObject *const_str_digest_e210e5ff3b22a74e834f3a38affa15ae;
PyObject *const_str_plain_getPosMap;
PyObject *const_str_digest_cd58ddd046a7fb19260072f2b0886aae;
PyObject *const_str_plain_getNegMap;
PyObject *const_str_digest_6bc69a1eaf94836e46573b983952cd09;
PyObject *const_str_plain_getDef;
PyObject *const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc;
PyObject *const_tuple_ca73985b109073b9729e5cd1bb28ad35_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_3128c41550aa02c454997801e5f8a491;
PyObject *const_str_digest_a4367205497d6d1ab7ac50c7c81ce009;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_tagSet_tuple;
PyObject *const_tuple_bcb0fa670d339d02c67d14e61be75634_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_representation_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[60];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pyasn1.type.tagmap"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__presentTypes);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__skipTypes);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__defaultType);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_19ac085191da4a2ce0c8c23bf24d7fec_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_10a7540c472fa54811ab365c8ef197d5);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_1141e86ba27ab0f97f0e843214288f98);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_156f6c06e516a679db8618dc4fce4b19);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b61d001d2eb6259b9e5da347b265808);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_6de327263ef1436d109eb27e8b6fa2cc);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc8919f2c439971f92f609092ac5bffe);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_86e27e851d87aacea53fdbf398fcf878);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_presentTypes);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_skipTypes);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultType);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_TagMap);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b7d38ad4f0f25c0cfa3736bfd97a14a);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_03ae1bb046cfa2f6d68ccc58d346c81b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdc16f41e8b84c052eb4740c31993233);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_33d5093fa912bd8ffa151bba5c5b1430);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_d53f357c37f35f79e8da05be1069d06f);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_07fbfd12aa8545c2854347b9267de3a1);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_7380ae16448de490f93c995e705bab1d);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_89293ad2f37ba579fc9688ee6cc7251c);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_e210e5ff3b22a74e834f3a38affa15ae);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_getPosMap);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd58ddd046a7fb19260072f2b0886aae);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_getNegMap);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bc69a1eaf94836e46573b983952cd09);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_getDef);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_ca73985b109073b9729e5cd1bb28ad35_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_3128c41550aa02c454997801e5f8a491);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4367205497d6d1ab7ac50c7c81ce009);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tagSet_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_bcb0fa670d339d02c67d14e61be75634_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_representation_tuple);
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
void checkModuleConstants_pyasn1$type$tagmap(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__presentTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TagMap__presentTypes);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__skipTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TagMap__skipTypes);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__TagMap__defaultType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TagMap__defaultType);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyAsn1Error);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_19ac085191da4a2ce0c8c23bf24d7fec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_19ac085191da4a2ce0c8c23bf24d7fec_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_10a7540c472fa54811ab365c8ef197d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_10a7540c472fa54811ab365c8ef197d5);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_1141e86ba27ab0f97f0e843214288f98));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1141e86ba27ab0f97f0e843214288f98);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_156f6c06e516a679db8618dc4fce4b19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_156f6c06e516a679db8618dc4fce4b19);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b61d001d2eb6259b9e5da347b265808));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b61d001d2eb6259b9e5da347b265808);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_6de327263ef1436d109eb27e8b6fa2cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6de327263ef1436d109eb27e8b6fa2cc);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc8919f2c439971f92f609092ac5bffe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc8919f2c439971f92f609092ac5bffe);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_86e27e851d87aacea53fdbf398fcf878));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86e27e851d87aacea53fdbf398fcf878);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_presentTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_presentTypes);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_skipTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_skipTypes);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultType);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyasn1);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_TagMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TagMap);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b7d38ad4f0f25c0cfa3736bfd97a14a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b7d38ad4f0f25c0cfa3736bfd97a14a);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_03ae1bb046cfa2f6d68ccc58d346c81b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03ae1bb046cfa2f6d68ccc58d346c81b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdc16f41e8b84c052eb4740c31993233));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdc16f41e8b84c052eb4740c31993233);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_33d5093fa912bd8ffa151bba5c5b1430));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33d5093fa912bd8ffa151bba5c5b1430);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_d53f357c37f35f79e8da05be1069d06f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d53f357c37f35f79e8da05be1069d06f);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_07fbfd12aa8545c2854347b9267de3a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07fbfd12aa8545c2854347b9267de3a1);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_7380ae16448de490f93c995e705bab1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7380ae16448de490f93c995e705bab1d);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_89293ad2f37ba579fc9688ee6cc7251c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89293ad2f37ba579fc9688ee6cc7251c);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_e210e5ff3b22a74e834f3a38affa15ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e210e5ff3b22a74e834f3a38affa15ae);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_getPosMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getPosMap);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd58ddd046a7fb19260072f2b0886aae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd58ddd046a7fb19260072f2b0886aae);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_getNegMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getNegMap);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bc69a1eaf94836e46573b983952cd09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bc69a1eaf94836e46573b983952cd09);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_getDef));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getDef);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_ca73985b109073b9729e5cd1bb28ad35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ca73985b109073b9729e5cd1bb28ad35_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_3128c41550aa02c454997801e5f8a491));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3128c41550aa02c454997801e5f8a491);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4367205497d6d1ab7ac50c7c81ce009));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4367205497d6d1ab7ac50c7c81ce009);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tagSet_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_tagSet_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_bcb0fa670d339d02c67d14e61be75634_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bcb0fa670d339d02c67d14e61be75634_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_representation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_representation_tuple);
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
static PyObject *module_var_accessor_pyasn1$type$tagmap$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$tagmap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$tagmap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$tagmap->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$type$tagmap$error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$type$tagmap->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$type$tagmap->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$type$tagmap->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_error);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_error, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a70b8fec8924c5d0c8a60778a72e7d3b;
static PyCodeObject *code_objects_d9732d9ac7479efc928b6da854cbd2db;
static PyCodeObject *code_objects_5a726f07e160138241e366d52ba22378;
static PyCodeObject *code_objects_4a55d1f1ceab839c0c2b8b10e608e0b4;
static PyCodeObject *code_objects_66069be8270b4d028f314128550e3786;
static PyCodeObject *code_objects_d0c17c793a48311ce168247d3554fcc1;
static PyCodeObject *code_objects_2da1f2980ffdcafdb495f4e9f283049b;
static PyCodeObject *code_objects_bea20d5d1bdcfc26bfc9ae2068486cda;
static PyCodeObject *code_objects_111730b3594ee30ec06b1cea39d62d7a;
static PyCodeObject *code_objects_a3012083d2a7bf8e838216cd71981ed2;
static PyCodeObject *code_objects_c9f00e5c9a749a08537672d8aeda9c2e;
static PyCodeObject *code_objects_6503140114c15f5ce27364757f104265;
static PyCodeObject *code_objects_62b721cc86ccafed2acde1475b7f386f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3128c41550aa02c454997801e5f8a491); CHECK_OBJECT(module_filename_obj);
code_objects_a70b8fec8924c5d0c8a60778a72e7d3b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a4367205497d6d1ab7ac50c7c81ce009, mod_consts.const_str_digest_a4367205497d6d1ab7ac50c7c81ce009, NULL, NULL, 0, 0, 0);
code_objects_d9732d9ac7479efc928b6da854cbd2db = MAKE_CODE_OBJECT(module_filename_obj, 12, 0, mod_consts.const_str_plain_TagMap, mod_consts.const_str_plain_TagMap, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5a726f07e160138241e366d52ba22378 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___contains__, mod_consts.const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f, mod_consts.const_tuple_str_plain_self_str_plain_tagSet_tuple, NULL, 2, 0, 0);
code_objects_4a55d1f1ceab839c0c2b8b10e608e0b4 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_33d5093fa912bd8ffa151bba5c5b1430, mod_consts.const_tuple_str_plain_self_str_plain_tagSet_tuple, NULL, 2, 0, 0);
code_objects_66069be8270b4d028f314128550e3786 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_bdc16f41e8b84c052eb4740c31993233, mod_consts.const_tuple_bcb0fa670d339d02c67d14e61be75634_tuple, NULL, 4, 0, 0);
code_objects_d0c17c793a48311ce168247d3554fcc1 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_d53f357c37f35f79e8da05be1069d06f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2da1f2980ffdcafdb495f4e9f283049b = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_07fbfd12aa8545c2854347b9267de3a1, mod_consts.const_tuple_str_plain_self_str_plain_representation_tuple, NULL, 1, 0, 0);
code_objects_bea20d5d1bdcfc26bfc9ae2068486cda = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_defaultType, mod_consts.const_str_digest_e210e5ff3b22a74e834f3a38affa15ae, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_111730b3594ee30ec06b1cea39d62d7a = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getDef, mod_consts.const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a3012083d2a7bf8e838216cd71981ed2 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getNegMap, mod_consts.const_str_digest_6bc69a1eaf94836e46573b983952cd09, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c9f00e5c9a749a08537672d8aeda9c2e = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getPosMap, mod_consts.const_str_digest_cd58ddd046a7fb19260072f2b0886aae, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6503140114c15f5ce27364757f104265 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_presentTypes, mod_consts.const_str_digest_7380ae16448de490f93c995e705bab1d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_62b721cc86ccafed2acde1475b7f386f = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_skipTypes, mod_consts.const_str_digest_89293ad2f37ba579fc9688ee6cc7251c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__10_getNegMap(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__11_getDef(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__2___contains__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__3___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__4___iter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__5___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__6_presentTypes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__7_skipTypes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__8_defaultType(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__9_getPosMap(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pyasn1$type$tagmap$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_presentTypes = python_pars[1];
PyObject *par_skipTypes = python_pars[2];
PyObject *par_defaultType = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_66069be8270b4d028f314128550e3786, module_pyasn1$type$tagmap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__1___init__ = cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_presentTypes);
tmp_or_left_value_1 = par_presentTypes;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assattr_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__TagMap__presentTypes, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_skipTypes);
tmp_or_left_value_2 = par_skipTypes;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_assattr_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_assattr_value_2 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__TagMap__skipTypes, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_defaultType);
tmp_assattr_value_3 = par_defaultType;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__TagMap__defaultType, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__1___init__,
    type_description_1,
    par_self,
    par_presentTypes,
    par_skipTypes,
    par_defaultType
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__1___init__ == cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__);
    cache_frame_frame_pyasn1$type$tagmap$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__1___init__);

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
CHECK_OBJECT(par_presentTypes);
Py_DECREF(par_presentTypes);
CHECK_OBJECT(par_skipTypes);
Py_DECREF(par_skipTypes);
CHECK_OBJECT(par_defaultType);
Py_DECREF(par_defaultType);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_presentTypes);
Py_DECREF(par_presentTypes);
CHECK_OBJECT(par_skipTypes);
Py_DECREF(par_skipTypes);
CHECK_OBJECT(par_defaultType);
Py_DECREF(par_defaultType);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$tagmap$$$function__2___contains__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tagSet = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__2___contains__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5a726f07e160138241e366d52ba22378, module_pyasn1$type$tagmap, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__2___contains__ = cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__2___contains__);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__2___contains__) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_tagSet);
tmp_cmp_expr_left_1 = par_tagSet;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_tagSet);
tmp_cmp_expr_left_3 = par_tagSet;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__TagMap__skipTypes);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__2___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__2___contains__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__2___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__2___contains__,
    type_description_1,
    par_self,
    par_tagSet
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__2___contains__ == cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__);
    cache_frame_frame_pyasn1$type$tagmap$$$function__2___contains__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__2___contains__);

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
CHECK_OBJECT(par_tagSet);
Py_DECREF(par_tagSet);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tagSet);
Py_DECREF(par_tagSet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$tagmap$$$function__3___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tagSet = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__3___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4a55d1f1ceab839c0c2b8b10e608e0b4, module_pyasn1$type$tagmap, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ = cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__3___getitem__);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__3___getitem__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_tagSet);
tmp_subscript_value_1 = par_tagSet;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__3___getitem__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__3___getitem__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 49;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame)) {
        frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_tagSet);
tmp_cmp_expr_left_3 = par_tagSet;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__TagMap__skipTypes);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_pyasn1$type$tagmap$error(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame.f_lineno = 51;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PyAsn1Error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_19ac085191da4a2ce0c8c23bf24d7fec_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 51;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 45;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame)) {
        frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__3___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__3___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__3___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__3___getitem__,
    type_description_1,
    par_self,
    par_tagSet
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ == cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__);
    cache_frame_frame_pyasn1$type$tagmap$$$function__3___getitem__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__3___getitem__);

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
CHECK_OBJECT(par_tagSet);
Py_DECREF(par_tagSet);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tagSet);
Py_DECREF(par_tagSet);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$type$tagmap$$$function__4___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__4___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d0c17c793a48311ce168247d3554fcc1, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__4___iter__ = cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__4___iter__);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__4___iter__) == 2);

// Framed code:
{
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__4___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__4___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__4___iter__ == cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__);
    cache_frame_frame_pyasn1$type$tagmap$$$function__4___iter__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__4___iter__);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__5___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_representation = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__5___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2da1f2980ffdcafdb495f4e9f283049b, module_pyasn1$type$tagmap, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__5___repr__ = cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__5___repr__);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__5___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_10a7540c472fa54811ab365c8ef197d5;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_representation == NULL);
var_representation = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 61;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_representation);
tmp_iadd_expr_left_1 = var_representation;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_1141e86ba27ab0f97f0e843214288f98;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_mod_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_representation = tmp_assign_source_2;

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__TagMap__skipTypes);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_representation);
tmp_iadd_expr_left_2 = var_representation;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_156f6c06e516a679db8618dc4fce4b19;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__TagMap__skipTypes);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_mod_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_2;
var_representation = tmp_assign_source_3;

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_representation);
tmp_iadd_expr_left_3 = var_representation;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_4b61d001d2eb6259b9e5da347b265808;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_mod_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_3;
var_representation = tmp_assign_source_4;

}
branch_no_3:;
{
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_c0c3759da123e387798315e75d2fed70;
CHECK_OBJECT(var_representation);
tmp_mod_expr_right_5 = var_representation;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__5___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__5___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__5___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__5___repr__,
    type_description_1,
    par_self,
    var_representation
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__5___repr__ == cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__);
    cache_frame_frame_pyasn1$type$tagmap$$$function__5___repr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__5___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_representation);
CHECK_OBJECT(var_representation);
Py_DECREF(var_representation);
var_representation = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_representation);
var_representation = NULL;
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


static PyObject *impl_pyasn1$type$tagmap$$$function__6_presentTypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes = MAKE_FUNCTION_FRAME(tstate, code_objects_6503140114c15f5ce27364757f104265, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes = cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__TagMap__presentTypes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes == cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes);
    cache_frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__6_presentTypes);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__7_skipTypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes = MAKE_FUNCTION_FRAME(tstate, code_objects_62b721cc86ccafed2acde1475b7f386f, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes = cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__TagMap__skipTypes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes == cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes);
    cache_frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__7_skipTypes);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__8_defaultType(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__8_defaultType;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType = MAKE_FUNCTION_FRAME(tstate, code_objects_bea20d5d1bdcfc26bfc9ae2068486cda, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__8_defaultType = cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__8_defaultType);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__8_defaultType) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__TagMap__defaultType);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__8_defaultType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__8_defaultType->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__8_defaultType, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__8_defaultType,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__8_defaultType == cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType);
    cache_frame_frame_pyasn1$type$tagmap$$$function__8_defaultType = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__8_defaultType);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__9_getPosMap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap = MAKE_FUNCTION_FRAME(tstate, code_objects_c9f00e5c9a749a08537672d8aeda9c2e, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap = cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_presentTypes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap == cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap);
    cache_frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__9_getPosMap);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__10_getNegMap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap = MAKE_FUNCTION_FRAME(tstate, code_objects_a3012083d2a7bf8e838216cd71981ed2, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap = cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_skipTypes);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap == cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap);
    cache_frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__10_getNegMap);

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


static PyObject *impl_pyasn1$type$tagmap$$$function__11_getDef(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$function__11_getDef;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef)) {
    Py_XDECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef = MAKE_FUNCTION_FRAME(tstate, code_objects_111730b3594ee30ec06b1cea39d62d7a, module_pyasn1$type$tagmap, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef->m_type_description == NULL);
frame_frame_pyasn1$type$tagmap$$$function__11_getDef = cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$function__11_getDef);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$function__11_getDef) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_defaultType);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$function__11_getDef, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$function__11_getDef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$function__11_getDef, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$function__11_getDef,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$type$tagmap$$$function__11_getDef == cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef);
    cache_frame_frame_pyasn1$type$tagmap$$$function__11_getDef = NULL;
}

assertFrameObject(frame_frame_pyasn1$type$tagmap$$$function__11_getDef);

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



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__10_getNegMap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__10_getNegMap,
        mod_consts.const_str_plain_getNegMap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6bc69a1eaf94836e46573b983952cd09,
#endif
        code_objects_a3012083d2a7bf8e838216cd71981ed2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__11_getDef(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__11_getDef,
        mod_consts.const_str_plain_getDef,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1b2f60ef91233f69e4bf2b20e0b1bcdc,
#endif
        code_objects_111730b3594ee30ec06b1cea39d62d7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bdc16f41e8b84c052eb4740c31993233,
#endif
        code_objects_66069be8270b4d028f314128550e3786,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__2___contains__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__2___contains__,
        mod_consts.const_str_plain___contains__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d909dcce0e3ac9ebe91aecf308d1be9f,
#endif
        code_objects_5a726f07e160138241e366d52ba22378,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__3___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__3___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33d5093fa912bd8ffa151bba5c5b1430,
#endif
        code_objects_4a55d1f1ceab839c0c2b8b10e608e0b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__4___iter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__4___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d53f357c37f35f79e8da05be1069d06f,
#endif
        code_objects_d0c17c793a48311ce168247d3554fcc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__5___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__5___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_07fbfd12aa8545c2854347b9267de3a1,
#endif
        code_objects_2da1f2980ffdcafdb495f4e9f283049b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__6_presentTypes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__6_presentTypes,
        mod_consts.const_str_plain_presentTypes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7380ae16448de490f93c995e705bab1d,
#endif
        code_objects_6503140114c15f5ce27364757f104265,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        mod_consts.const_str_digest_6de327263ef1436d109eb27e8b6fa2cc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__7_skipTypes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__7_skipTypes,
        mod_consts.const_str_plain_skipTypes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89293ad2f37ba579fc9688ee6cc7251c,
#endif
        code_objects_62b721cc86ccafed2acde1475b7f386f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        mod_consts.const_str_digest_fc8919f2c439971f92f609092ac5bffe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__8_defaultType(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__8_defaultType,
        mod_consts.const_str_plain_defaultType,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e210e5ff3b22a74e834f3a38affa15ae,
#endif
        code_objects_bea20d5d1bdcfc26bfc9ae2068486cda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        mod_consts.const_str_digest_86e27e851d87aacea53fdbf398fcf878,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$type$tagmap$$$function__9_getPosMap(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$type$tagmap$$$function__9_getPosMap,
        mod_consts.const_str_plain_getPosMap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd58ddd046a7fb19260072f2b0886aae,
#endif
        code_objects_c9f00e5c9a749a08537672d8aeda9c2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$type$tagmap,
        NULL,
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

static function_impl_code const function_table_pyasn1$type$tagmap[] = {
impl_pyasn1$type$tagmap$$$function__1___init__,
impl_pyasn1$type$tagmap$$$function__2___contains__,
impl_pyasn1$type$tagmap$$$function__3___getitem__,
impl_pyasn1$type$tagmap$$$function__4___iter__,
impl_pyasn1$type$tagmap$$$function__5___repr__,
impl_pyasn1$type$tagmap$$$function__6_presentTypes,
impl_pyasn1$type$tagmap$$$function__7_skipTypes,
impl_pyasn1$type$tagmap$$$function__8_defaultType,
impl_pyasn1$type$tagmap$$$function__9_getPosMap,
impl_pyasn1$type$tagmap$$$function__10_getNegMap,
impl_pyasn1$type$tagmap$$$function__11_getDef,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pyasn1$type$tagmap);
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
        module_pyasn1$type$tagmap,
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
        function_table_pyasn1$type$tagmap,
        sizeof(function_table_pyasn1$type$tagmap) / sizeof(function_impl_code)
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
static char const *module_full_name = "pyasn1.type.tagmap";
#endif

// Internal entry point for module code.
PyObject *module_code_pyasn1$type$tagmap(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyasn1$type$tagmap");

    // Store the module for future use.
    module_pyasn1$type$tagmap = module;

    moduledict_pyasn1$type$tagmap = MODULE_DICT(module_pyasn1$type$tagmap);

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
        PRINT_STRING("pyasn1$type$tagmap: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1$type$tagmap: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyasn1$type$tagmap: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.type.tagmap" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpyasn1$type$tagmap\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyasn1$type$tagmap,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$tagmap,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyasn1$type$tagmap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$tagmap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$type$tagmap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyasn1$type$tagmap);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyasn1$type$tagmap);
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

        UPDATE_STRING_DICT1(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pyasn1$type$tagmap$$$class__1_TagMap_12 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pyasn1$type$tagmap = MAKE_MODULE_FRAME(code_objects_a70b8fec8924c5d0c8a60778a72e7d3b, module_pyasn1$type$tagmap);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pyasn1$type$tagmap$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pyasn1$type$tagmap$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pyasn1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pyasn1$type$tagmap;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_error_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pyasn1$type$tagmap->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pyasn1$type$tagmap,
        mod_consts.const_str_plain_error,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_error);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)mod_consts.const_str_plain_error, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST1(tstate, mod_consts.const_str_plain_TagMap);
UPDATE_STRING_DICT1(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_6 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
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


exception_lineno = 12;

    goto try_except_handler_1;
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


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_8 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_8;
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


exception_lineno = 12;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_TagMap;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$type$tagmap->m_frame.f_lineno = 12;
tmp_assign_source_9 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_9;
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


exception_lineno = 12;

    goto try_except_handler_1;
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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 12;

    goto try_except_handler_1;
}
frame_frame_pyasn1$type$tagmap->m_frame.f_lineno = 12;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 12;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
branch_end_1:;
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pyasn1$type$tagmap$$$class__1_TagMap_12 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7b7d38ad4f0f25c0cfa3736bfd97a14a;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_03ae1bb046cfa2f6d68ccc58d346c81b;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_TagMap;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2 = MAKE_CLASS_FRAME(tstate, code_objects_d9732d9ac7479efc928b6da854cbd2db, module_pyasn1$type$tagmap, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2);
assert(Py_REFCNT(frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__2___contains__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___contains__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__3___getitem__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__4___iter__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__5___repr__(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__6_presentTypes(tstate);

frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2->m_frame.f_lineno = 72;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_presentTypes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__7_skipTypes(tstate);

frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2->m_frame.f_lineno = 77;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_skipTypes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__8_defaultType(tstate);

frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2->m_frame.f_lineno = 82;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_defaultType, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__9_getPosMap(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_getPosMap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__10_getNegMap(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_getNegMap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$type$tagmap$$$function__11_getDef(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain_getDef, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pyasn1$type$tagmap$$$class__1_TagMap_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_ca73985b109073b9729e5cd1bb28ad35_tuple;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_pyasn1$type$tagmap$$$class__1_TagMap_12, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_TagMap;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_pyasn1$type$tagmap$$$class__1_TagMap_12;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$type$tagmap->m_frame.f_lineno = 12;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_12;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_11 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_pyasn1$type$tagmap$$$class__1_TagMap_12);
locals_pyasn1$type$tagmap$$$class__1_TagMap_12 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$type$tagmap$$$class__1_TagMap_12);
locals_pyasn1$type$tagmap$$$class__1_TagMap_12 = NULL;
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
exception_lineno = 12;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)mod_consts.const_str_plain_TagMap, tmp_assign_source_11);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$type$tagmap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$type$tagmap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$type$tagmap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pyasn1$type$tagmap);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyasn1$type$tagmap", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.type.tagmap" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pyasn1$type$tagmap);
    return module_pyasn1$type$tagmap;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$type$tagmap, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyasn1$type$tagmap", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

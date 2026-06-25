/* Generated code for Python module 'trio$_signals'
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



/* The "module_trio$_signals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_signals;
PyDictObject *moduledict_trio$_signals;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_signals;
PyObject *const_str_plain_signal;
PyObject *const_str_plain_handler;
PyObject *const_str_plain_original_handlers;
PyObject *const_str_plain__signal_handler;
PyObject *const_str_plain_OrderedDict;
PyObject *const_str_plain__pending;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_lowlevel;
PyObject *const_str_plain_ParkingLot;
PyObject *const_str_plain__lot;
PyObject *const_str_plain_ConflictDetector;
PyObject *const_tuple_str_digest_6b5c35c816671846afaef85d9e865a2a_tuple;
PyObject *const_str_plain__conflict_detector;
PyObject *const_str_plain__closed;
PyObject *const_str_plain_raise_signal;
PyObject *const_str_plain_unpark;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_deliver_next;
PyObject *const_str_digest_ae37f925ff862d19aa44001cf4566469;
PyObject *const_str_plain_self;
PyObject *const_str_plain_popitem;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_last_tuple;
PyObject *const_str_digest_fcfb450aea2c5c634fef5034ade24ec4;
PyObject *const_str_plain_park;
PyObject *const_str_plain_checkpoint;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain___anext__;
PyObject *const_str_digest_5a53fbd2f17eece4b42f5103565b75e5;
PyObject *const_str_plain_SignalReceiver;
PyObject *const_str_digest_6a1b331236bd01e3ea09075e02c71117;
PyObject *const_str_digest_5843ab5edc72aee1983c5d310efae2da;
PyObject *const_str_digest_4c797c26ddefc46213d9c3243a297fce;
PyObject *const_str_plain_is_main_thread;
PyObject *const_str_digest_91663b1c0cb3e49d519912bc16c22ef8;
PyObject *const_str_plain_current_trio_token;
PyObject *const_dict_7362b0477f14306d22aefa7d13b275a3;
PyObject *const_str_digest_65dac9d43376ffacac76ca4b57f6193b;
PyObject *const_str_plain__redeliver_remaining;
PyObject *const_str_plain_open_signal_receiver;
PyObject *const_str_plain_token;
PyObject *const_str_plain_run_sync_soon;
PyObject *const_str_plain_queue;
PyObject *const_str_plain__add;
PyObject *const_dict_3604753922ac0dc7d8b864938df14470;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_OrderedDict_tuple;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_ConflictDetector_str_plain_is_main_thread_tuple;
PyObject *const_dict_17c43468e9b07c8325fd65796011efb9;
PyObject *const_str_digest_4e73482adc731087f2f2706441ce6c4e;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_69;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_5a0095e3df6ca5f7603988074706c406;
PyObject *const_dict_4e1f48ccfa309a368fd72efb38e5e58a;
PyObject *const_str_digest_d2250b733ac098cc0b032481914fe8fe;
PyObject *const_str_digest_95067eb08e34ebbf6e0fa6474187c321;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_c760a227475494719ae7c0c466f5136f;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_tuple_7040b9c4be78c76562b5ebc626378f51_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_20950f03c0c414241ba6d6eb6c234e9b;
PyObject *const_str_plain_get_pending_signal_count;
PyObject *const_dict_8aae3b57426d3b75ffd761b663621235;
PyObject *const_str_digest_3f657fed565df1025b901492f087988e;
PyObject *const_str_digest_7a115e8e5c3a2002c6e839b078680a66;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_signum_str_underscore_tuple;
PyObject *const_tuple_str_plain_self_str_plain_signum_tuple;
PyObject *const_tuple_str_plain_self_str_plain_deliver_next_tuple;
PyObject *const_tuple_5f6bd9f77386a3b70161e715ec6618e8_tuple;
PyObject *const_tuple_edb3ef4b92e7e2b3c7ddc45c7b684215_tuple;
PyObject *const_tuple_str_plain_deliver_next_str_plain_self_tuple;
PyObject *const_tuple_str_plain_rec_tuple;
PyObject *const_tuple_220c8d6d21f9351c49d2767b29202fe8_tuple;
PyObject *const_tuple_str_plain_queue_str_plain_token_tuple;
PyObject *const_tuple_6f41fc00c1f17db03342f4f5a9308838_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[88];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._signals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_signals);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_signal);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_original_handlers);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__signal_handler);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__pending);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLot);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__lot);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6b5c35c816671846afaef85d9e865a2a_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__conflict_detector);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__closed);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_signal);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpark);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_deliver_next);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae37f925ff862d19aa44001cf4566469);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_popitem);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_last_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_fcfb450aea2c5c634fef5034ade24ec4);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_park);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___anext__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignalReceiver);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a1b331236bd01e3ea09075e02c71117);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5843ab5edc72aee1983c5d310efae2da);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c797c26ddefc46213d9c3243a297fce);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_main_thread);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_91663b1c0cb3e49d519912bc16c22ef8);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_7362b0477f14306d22aefa7d13b275a3);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_65dac9d43376ffacac76ca4b57f6193b);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__redeliver_remaining);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_soon);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__add);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_3604753922ac0dc7d8b864938df14470);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OrderedDict_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_is_main_thread_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_17c43468e9b07c8325fd65796011efb9);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e73482adc731087f2f2706441ce6c4e);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_69);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a0095e3df6ca5f7603988074706c406);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_4e1f48ccfa309a368fd72efb38e5e58a);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2250b733ac098cc0b032481914fe8fe);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_95067eb08e34ebbf6e0fa6474187c321);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_c760a227475494719ae7c0c466f5136f);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_7040b9c4be78c76562b5ebc626378f51_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_20950f03c0c414241ba6d6eb6c234e9b);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_pending_signal_count);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_dict_8aae3b57426d3b75ffd761b663621235);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f657fed565df1025b901492f087988e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a115e8e5c3a2002c6e839b078680a66);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signum_str_underscore_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signum_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_deliver_next_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_5f6bd9f77386a3b70161e715ec6618e8_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_edb3ef4b92e7e2b3c7ddc45c7b684215_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deliver_next_str_plain_self_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rec_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_220c8d6d21f9351c49d2767b29202fe8_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_queue_str_plain_token_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_6f41fc00c1f17db03342f4f5a9308838_tuple);
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
void checkModuleConstants_trio$_signals(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_signals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signals);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signal);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_original_handlers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_original_handlers);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__signal_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__signal_handler);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_OrderedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OrderedDict);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__pending));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pending);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParkingLot);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__lot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lot);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConflictDetector);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6b5c35c816671846afaef85d9e865a2a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6b5c35c816671846afaef85d9e865a2a_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__conflict_detector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__conflict_detector);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__closed);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_signal);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpark));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unpark);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_deliver_next));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deliver_next);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae37f925ff862d19aa44001cf4566469));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae37f925ff862d19aa44001cf4566469);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_popitem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_popitem);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_last_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_last_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_fcfb450aea2c5c634fef5034ade24ec4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fcfb450aea2c5c634fef5034ade24ec4);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_park));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_park);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___anext__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___anext__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignalReceiver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SignalReceiver);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a1b331236bd01e3ea09075e02c71117));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a1b331236bd01e3ea09075e02c71117);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5843ab5edc72aee1983c5d310efae2da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5843ab5edc72aee1983c5d310efae2da);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c797c26ddefc46213d9c3243a297fce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c797c26ddefc46213d9c3243a297fce);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_main_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_main_thread);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_91663b1c0cb3e49d519912bc16c22ef8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91663b1c0cb3e49d519912bc16c22ef8);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_trio_token);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_7362b0477f14306d22aefa7d13b275a3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7362b0477f14306d22aefa7d13b275a3);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_65dac9d43376ffacac76ca4b57f6193b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65dac9d43376ffacac76ca4b57f6193b);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__redeliver_remaining));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__redeliver_remaining);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_signal_receiver);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_sync_soon);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__add);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_3604753922ac0dc7d8b864938df14470));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3604753922ac0dc7d8b864938df14470);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OrderedDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OrderedDict_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_is_main_thread_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_is_main_thread_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_17c43468e9b07c8325fd65796011efb9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17c43468e9b07c8325fd65796011efb9);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e73482adc731087f2f2706441ce6c4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e73482adc731087f2f2706441ce6c4e);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_69));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_69);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a0095e3df6ca5f7603988074706c406));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a0095e3df6ca5f7603988074706c406);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_4e1f48ccfa309a368fd72efb38e5e58a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4e1f48ccfa309a368fd72efb38e5e58a);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2250b733ac098cc0b032481914fe8fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2250b733ac098cc0b032481914fe8fe);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_95067eb08e34ebbf6e0fa6474187c321));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95067eb08e34ebbf6e0fa6474187c321);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_c760a227475494719ae7c0c466f5136f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c760a227475494719ae7c0c466f5136f);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_7040b9c4be78c76562b5ebc626378f51_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7040b9c4be78c76562b5ebc626378f51_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_20950f03c0c414241ba6d6eb6c234e9b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20950f03c0c414241ba6d6eb6c234e9b);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_pending_signal_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_pending_signal_count);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_dict_8aae3b57426d3b75ffd761b663621235));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8aae3b57426d3b75ffd761b663621235);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f657fed565df1025b901492f087988e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f657fed565df1025b901492f087988e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a115e8e5c3a2002c6e839b078680a66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a115e8e5c3a2002c6e839b078680a66);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signum_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_signum_str_underscore_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_signum_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_deliver_next_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_deliver_next_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_5f6bd9f77386a3b70161e715ec6618e8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5f6bd9f77386a3b70161e715ec6618e8_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_edb3ef4b92e7e2b3c7ddc45c7b684215_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_edb3ef4b92e7e2b3c7ddc45c7b684215_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deliver_next_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deliver_next_str_plain_self_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rec_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_220c8d6d21f9351c49d2767b29202fe8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_220c8d6d21f9351c49d2767b29202fe8_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_queue_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_queue_str_plain_token_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_6f41fc00c1f17db03342f4f5a9308838_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6f41fc00c1f17db03342f4f5a9308838_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_trio$_signals$ConflictDetector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConflictDetector);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConflictDetector, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConflictDetector);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConflictDetector, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$OrderedDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OrderedDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OrderedDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OrderedDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OrderedDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$SignalReceiver(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_SignalReceiver);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SignalReceiver);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SignalReceiver, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SignalReceiver);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SignalReceiver, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_SignalReceiver);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_SignalReceiver);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SignalReceiver);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$_signal_handler(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain__signal_handler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__signal_handler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__signal_handler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__signal_handler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__signal_handler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain__signal_handler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain__signal_handler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__signal_handler);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$is_main_thread(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_main_thread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_main_thread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_main_thread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_main_thread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$signal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_signals$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_signals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_signals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_signals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ab3261cb9b40963e2637b4badb5fa76e;
static PyCodeObject *code_objects_3e1ad073c0415495dfe40fb2faf46773;
static PyCodeObject *code_objects_b7948a920662a4cc7327641ee05d58f6;
static PyCodeObject *code_objects_f46a6ee52d58797e8bd9fd74c602c8ca;
static PyCodeObject *code_objects_1747c04b39b8a8f716376750a54d493c;
static PyCodeObject *code_objects_bd0b8469acff115d5fdab9c2429c6e2f;
static PyCodeObject *code_objects_60f2aa08999869b89e41daac8fc38092;
static PyCodeObject *code_objects_2ffecb4d76bcb6d989fef908ecb16b02;
static PyCodeObject *code_objects_0d991abcfcde0f2ede68cb4ea0341989;
static PyCodeObject *code_objects_ea0adfbcda11cfca27a33b2d58880eb6;
static PyCodeObject *code_objects_60e6b9fbab54dcc68b942b27c5bfd062;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3f657fed565df1025b901492f087988e); CHECK_OBJECT(module_filename_obj);
code_objects_ab3261cb9b40963e2637b4badb5fa76e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_7a115e8e5c3a2002c6e839b078680a66, mod_consts.const_str_digest_7a115e8e5c3a2002c6e839b078680a66, NULL, NULL, 0, 0, 0);
code_objects_3e1ad073c0415495dfe40fb2faf46773 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_c760a227475494719ae7c0c466f5136f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b7948a920662a4cc7327641ee05d58f6 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___anext__, mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5, mod_consts.const_tuple_str_plain_self_str_plain_signum_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_f46a6ee52d58797e8bd9fd74c602c8ca = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_5a0095e3df6ca5f7603988074706c406, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1747c04b39b8a8f716376750a54d493c = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__add, mod_consts.const_str_digest_d2250b733ac098cc0b032481914fe8fe, mod_consts.const_tuple_str_plain_self_str_plain_signum_tuple, NULL, 2, 0, 0);
code_objects_bd0b8469acff115d5fdab9c2429c6e2f = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__redeliver_remaining, mod_consts.const_str_digest_95067eb08e34ebbf6e0fa6474187c321, mod_consts.const_tuple_str_plain_self_str_plain_deliver_next_tuple, NULL, 1, 0, 0);
code_objects_60f2aa08999869b89e41daac8fc38092 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__signal_handler, mod_consts.const_str_plain__signal_handler, mod_consts.const_tuple_5f6bd9f77386a3b70161e715ec6618e8_tuple, NULL, 2, 0, 0);
code_objects_2ffecb4d76bcb6d989fef908ecb16b02 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deliver_next, mod_consts.const_str_digest_ae37f925ff862d19aa44001cf4566469, mod_consts.const_tuple_edb3ef4b92e7e2b3c7ddc45c7b684215_tuple, mod_consts.const_tuple_str_plain_deliver_next_str_plain_self_tuple, 0, 0, 0);
code_objects_0d991abcfcde0f2ede68cb4ea0341989 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_pending_signal_count, mod_consts.const_str_plain_get_pending_signal_count, mod_consts.const_tuple_str_plain_rec_tuple, NULL, 1, 0, 0);
code_objects_ea0adfbcda11cfca27a33b2d58880eb6 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handler, mod_consts.const_str_digest_65dac9d43376ffacac76ca4b57f6193b, mod_consts.const_tuple_220c8d6d21f9351c49d2767b29202fe8_tuple, mod_consts.const_tuple_str_plain_queue_str_plain_token_tuple, 2, 0, 0);
code_objects_60e6b9fbab54dcc68b942b27c5bfd062 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_signal_receiver, mod_consts.const_str_plain_open_signal_receiver, mod_consts.const_tuple_6f41fc00c1f17db03342f4f5a9308838_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_signals$$$function__6___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__1__signal_handler(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__3__add(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__5___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__6___anext__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__7_get_pending_signal_count(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_trio$_signals$$$function__1__signal_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_signals = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_handler;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_signals;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_signals);
CHECK_OBJECT(par_signals);
Py_DECREF(par_signals);
par_signals = NULL;
CHECK_OBJECT(par_handler);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
par_handler = NULL;
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
struct trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_locals {
PyObject *var_original_handlers;
PyObject *var_signum;
PyObject *var_original_handler;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
};
#endif

static PyObject *trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_locals *generator_heap = (struct trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_original_handlers = NULL;
generator_heap->var_signum = NULL;
generator_heap->var_original_handler = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(generator_heap->var_original_handlers == NULL);
generator_heap->var_original_handlers = tmp_assign_source_1;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_60f2aa08999869b89e41daac8fc38092, module_trio$_signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_set_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signals);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}

tmp_set_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_iter_arg_1 = PySet_New(tmp_set_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
generator_heap->exception_lineno = 61;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_signum;
    generator_heap->var_signum = tmp_assign_source_4;
    Py_INCREF(generator_heap->var_signum);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_trio$_signals$signal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_signum);
tmp_args_element_value_1 = generator_heap->var_signum;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_handler);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    generator_heap->tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (generator_heap->tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
if (generator_heap->var_original_handlers == NULL) {
Py_DECREF(generator_heap->tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_original_handlers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}

generator_heap->tmp_dictset_dict = generator_heap->var_original_handlers;
CHECK_OBJECT(generator_heap->var_signum);
generator_heap->tmp_dictset_key = generator_heap->var_signum;
assert(PyDict_CheckExact(generator_heap->tmp_dictset_dict));
generator_heap->tmp_res = PyDict_SetItem(generator_heap->tmp_dictset_dict, generator_heap->tmp_dictset_key, generator_heap->tmp_dictset_value);

CHECK_OBJECT(generator_heap->tmp_dictset_value);
Py_DECREF(generator_heap->tmp_dictset_value);
if (generator_heap->tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_2 = Py_None;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
if (generator_heap->var_original_handlers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_original_handlers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_dict_arg_1 = generator_heap->var_original_handlers;
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
generator_heap->exception_lineno = 65;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = generator_heap->tmp_for_loop_2__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_signum;
    generator_heap->var_signum = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_signum);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_original_handler;
    generator_heap->var_original_handler = tmp_assign_source_11;
    Py_INCREF(generator_heap->var_original_handler);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_trio$_signals$signal(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(generator_heap->var_signum);
tmp_args_element_value_3 = generator_heap->var_signum;
CHECK_OBJECT(generator_heap->var_original_handler);
tmp_args_element_value_4 = generator_heap->var_original_handler;
generator->m_frame->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_signal,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 60;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_4;
PyObject *tmp_dict_arg_2;
if (generator_heap->var_original_handlers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_original_handlers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_2 = generator_heap->var_original_handlers;
tmp_iter_arg_4 = DICT_ITERITEMS(tstate, tmp_dict_arg_2);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
generator_heap->exception_lineno = 65;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_iter_arg_5 = generator_heap->tmp_for_loop_2__iter_value;
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_10;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_7:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_17 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_signum;
    generator_heap->var_signum = tmp_assign_source_17;
    Py_INCREF(generator_heap->var_signum);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_18 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_original_handler;
    generator_heap->var_original_handler = tmp_assign_source_18;
    Py_INCREF(generator_heap->var_original_handler);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_trio$_signals$signal(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(generator_heap->var_signum);
tmp_args_element_value_5 = generator_heap->var_signum;
CHECK_OBJECT(generator_heap->var_original_handler);
tmp_args_element_value_6 = generator_heap->var_original_handler;
generator->m_frame->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_signal,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_8:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_original_handlers,
    generator_heap->var_signum,
    generator_heap->var_original_handler
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_9;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_original_handlers);
generator_heap->var_original_handlers = NULL;
Py_XDECREF(generator_heap->var_signum);
generator_heap->var_signum = NULL;
Py_XDECREF(generator_heap->var_original_handler);
generator_heap->var_original_handler = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:
try_end_9:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
Py_XDECREF(generator_heap->var_original_handlers);
generator_heap->var_original_handlers = NULL;
Py_XDECREF(generator_heap->var_signum);
generator_heap->var_signum = NULL;
Py_XDECREF(generator_heap->var_original_handler);
generator_heap->var_original_handler = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_context,
        module_trio$_signals,
        mod_consts.const_str_plain__signal_handler,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_60f2aa08999869b89e41daac8fc38092,
        closure,
        2,
#if 1
        sizeof(struct trio$_signals$$$function__1__signal_handler$$$genobj__1__signal_handler_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_signals$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f46a6ee52d58797e8bd9fd74c602c8ca, module_trio$_signals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__2___init__->m_type_description == NULL);
frame_frame_trio$_signals$$$function__2___init__ = cache_frame_frame_trio$_signals$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__2___init__);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_trio$_signals$OrderedDict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OrderedDict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_signals$$$function__2___init__->m_frame.f_lineno = 72;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pending, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_expression_value_1 = module_var_accessor_trio$_signals$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_signals$$$function__2___init__->m_frame.f_lineno = 73;
tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ParkingLot);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__lot, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_trio$_signals$ConflictDetector(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConflictDetector);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_signals$$$function__2___init__->m_frame.f_lineno = 74;
tmp_assattr_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_6b5c35c816671846afaef85d9e865a2a_tuple);

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__conflict_detector, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__closed, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__2___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__2___init__ == cache_frame_frame_trio$_signals$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__2___init__);
    cache_frame_frame_trio$_signals$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__2___init__);

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


static PyObject *impl_trio$_signals$$$function__3__add(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_signum = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__3__add;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__3__add = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__3__add)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__3__add);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__3__add == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__3__add = MAKE_FUNCTION_FRAME(tstate, code_objects_1747c04b39b8a8f716376750a54d493c, module_trio$_signals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__3__add->m_type_description == NULL);
frame_frame_trio$_signals$$$function__3__add = cache_frame_frame_trio$_signals$$$function__3__add;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__3__add);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__3__add) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__closed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 80;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_trio$_signals$signal(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signum);
tmp_args_element_value_1 = par_signum;
frame_frame_trio$_signals$$$function__3__add->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_raise_signal, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__pending);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signum);
tmp_ass_subscript_1 = par_signum;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__lot);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_trio$_signals$$$function__3__add->m_frame.f_lineno = 84;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_unpark);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__3__add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__3__add->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__3__add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__3__add,
    type_description_1,
    par_self,
    par_signum
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__3__add == cache_frame_frame_trio$_signals$$$function__3__add) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__3__add);
    cache_frame_frame_trio$_signals$$$function__3__add = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__3__add);

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
CHECK_OBJECT(par_signum);
Py_DECREF(par_signum);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_signum);
Py_DECREF(par_signum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_signals$$$function__4__redeliver_remaining(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *var_deliver_next = Nuitka_Cell_NewEmpty();
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__4__redeliver_remaining;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining = MAKE_FUNCTION_FRAME(tstate, code_objects_bd0b8469acff115d5fdab9c2429c6e2f, module_trio$_signals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining->m_type_description == NULL);
frame_frame_trio$_signals$$$function__4__redeliver_remaining = cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__4__redeliver_remaining);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__4__redeliver_remaining) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__closed, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = var_deliver_next;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(var_deliver_next) == NULL);
Nuitka_Cell_SET(var_deliver_next, tmp_assign_source_1);

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_deliver_next));
tmp_called_value_1 = Nuitka_Cell_GET(var_deliver_next);
frame_frame_trio$_signals$$$function__4__redeliver_remaining->m_frame.f_lineno = 102;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__4__redeliver_remaining, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__4__redeliver_remaining->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__4__redeliver_remaining, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__4__redeliver_remaining,
    type_description_1,
    par_self,
    var_deliver_next
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__4__redeliver_remaining == cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining);
    cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__4__redeliver_remaining);

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
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_deliver_next);
CHECK_OBJECT(var_deliver_next);
Py_DECREF(var_deliver_next);
var_deliver_next = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_deliver_next);
CHECK_OBJECT(var_deliver_next);
Py_DECREF(var_deliver_next);
var_deliver_next = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_signum = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next = MAKE_FUNCTION_FRAME(tstate, code_objects_2ffecb4d76bcb6d989fef908ecb16b02, module_trio$_signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_type_description == NULL);
frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next = cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pending);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 95;
type_description_1 = "oocc";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__pending);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_popitem);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_2;
}
frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame.f_lineno = 96;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_last_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oocc";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_signum == NULL);
Py_INCREF(tmp_assign_source_4);
var_signum = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_trio$_signals$signal(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oocc";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_signum);
tmp_args_element_value_1 = var_signum;
frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame.f_lineno = 98;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_raise_signal, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oocc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deliver_next);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "oocc";
    goto try_except_handler_5;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame.f_lineno = 100;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oocc";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 97;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame)) {
        frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oocc";
goto try_except_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deliver_next);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame.f_lineno = 100;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next,
    type_description_1,
    var_signum,
    var__,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next == cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next);
    cache_frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next);

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
Py_XDECREF(var_signum);
var_signum = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_signum);
var_signum = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_signals$$$function__5___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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


static PyObject *impl_trio$_signals$$$function__6___anext__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_signals$$$function__6___anext__$$$coroutine__1___anext__(tstate, tmp_closure_1);

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
struct trio$_signals$$$function__6___anext__$$$coroutine__1___anext___locals {
PyObject *var_signum;
PyObject *var__;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *trio$_signals$$$function__6___anext__$$$coroutine__1___anext___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_signals$$$function__6___anext__$$$coroutine__1___anext___locals *coroutine_heap = (struct trio$_signals$$$function__6___anext__$$$coroutine__1___anext___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_signum = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b7948a920662a4cc7327641ee05d58f6, module_trio$_signals, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__closed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "coo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_fcfb450aea2c5c634fef5034ade24ec4;
coroutine->m_frame->m_frame.f_lineno = 109;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "coo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__conflict_detector);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_4 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__pending);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 115;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__lot);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 115;
tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_park);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 117;
tmp_expression_value_11 = module_var_accessor_trio$_signals$trio(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
coroutine->m_frame->m_frame.f_lineno = 117;
tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_normal);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_4;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_end_2:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__pending);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_popitem);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 118;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_last_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_5;
}
assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_6;
}
assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_6;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_5;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = coroutine_heap->tmp_tuple_unpack_1__element_1;
assert(coroutine_heap->var_signum == NULL);
Py_INCREF(tmp_assign_source_8);
coroutine_heap->var_signum = tmp_assign_source_8;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = coroutine_heap->tmp_tuple_unpack_1__element_2;
assert(coroutine_heap->var__ == NULL);
Py_INCREF(tmp_assign_source_9);
coroutine_heap->var__ = tmp_assign_source_9;
}
Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

CHECK_OBJECT(coroutine_heap->var_signum);
coroutine_heap->tmp_return_value = coroutine_heap->var_signum;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_3 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 113;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "coo";
goto try_except_handler_7;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 113;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "coo";
goto try_except_handler_7;
branch_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
goto try_end_5;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "coo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
goto try_end_6;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_signum,
    coroutine_heap->var__
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
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_signum);
coroutine_heap->var_signum = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_signum);
coroutine_heap->var_signum = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

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

static PyObject *MAKE_COROUTINE_trio$_signals$$$function__6___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_signals$$$function__6___anext__$$$coroutine__1___anext___context,
        module_trio$_signals,
        mod_consts.const_str_plain___anext__,
        mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5,
        code_objects_b7948a920662a4cc7327641ee05d58f6,
        closure,
        1,
#if 1
        sizeof(struct trio$_signals$$$function__6___anext__$$$coroutine__1___anext___locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_signals$$$function__7_get_pending_signal_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_rec = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__7_get_pending_signal_count;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count = MAKE_FUNCTION_FRAME(tstate, code_objects_0d991abcfcde0f2ede68cb4ea0341989, module_trio$_signals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count->m_type_description == NULL);
frame_frame_trio$_signals$$$function__7_get_pending_signal_count = cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__7_get_pending_signal_count);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__7_get_pending_signal_count) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_rec);
tmp_isinstance_inst_1 = par_rec;
tmp_isinstance_cls_1 = module_var_accessor_trio$_signals$SignalReceiver(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SignalReceiver);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "o";
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
frame_frame_trio$_signals$$$function__7_get_pending_signal_count->m_frame.f_lineno = 125;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 125;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_rec);
tmp_expression_value_1 = par_rec;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pending);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__7_get_pending_signal_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__7_get_pending_signal_count->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__7_get_pending_signal_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__7_get_pending_signal_count,
    type_description_1,
    par_rec
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__7_get_pending_signal_count == cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count);
    cache_frame_frame_trio$_signals$$$function__7_get_pending_signal_count = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__7_get_pending_signal_count);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_rec);
Py_DECREF(par_rec);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_rec);
Py_DECREF(par_rec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_signals$$$function__8_open_signal_receiver(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_signals = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_signals;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_GENERATOR_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_signals);
CHECK_OBJECT(par_signals);
Py_DECREF(par_signals);
par_signals = NULL;
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
struct trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_locals {
struct Nuitka_CellObject *var_token;
struct Nuitka_CellObject *var_queue;
PyObject *var_handler;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_locals *generator_heap = (struct trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_token = Nuitka_Cell_NewEmpty();
generator_heap->var_queue = Nuitka_Cell_NewEmpty();
generator_heap->var_handler = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_60e6b9fbab54dcc68b942b27c5bfd062, module_trio$_signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signals);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4c797c26ddefc46213d9c3243a297fce;
generator->m_frame->m_frame.f_lineno = 168;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 168;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccco";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$_signals$is_main_thread(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_main_thread);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 170;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 170;
tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 170;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 170;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_91663b1c0cb3e49d519912bc16c22ef8;
generator->m_frame->m_frame.f_lineno = 171;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_2;
generator_heap->exception_lineno = 171;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccco";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_signals$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 175;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_trio_token);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 175;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(generator_heap->var_token) == NULL);
Nuitka_Cell_SET(generator_heap->var_token, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_signals$SignalReceiver(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SignalReceiver);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 176;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(generator_heap->var_queue) == NULL);
Nuitka_Cell_SET(generator_heap->var_queue, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7362b0477f14306d22aefa7d13b275a3);
tmp_closure_1[0] = generator_heap->var_queue;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = generator_heap->var_token;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_3 = MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler(tstate, tmp_annotations_1, tmp_closure_1);

assert(generator_heap->var_handler == NULL);
generator_heap->var_handler = tmp_assign_source_3;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_trio$_signals$_signal_handler(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__signal_handler);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_signals);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_handler);
tmp_args_element_value_2 = generator_heap->var_handler;
generator->m_frame->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
generator->m_frame->m_frame.f_lineno = 182;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_3 = generator_heap->tmp_with_1__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_queue));
tmp_expression_value_4 = Nuitka_Cell_GET(generator_heap->var_queue);
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 183;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_5;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_6;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_6;
}
tmp_condition_result_4 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 182;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccco";
goto try_except_handler_6;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 182;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccco";
goto try_except_handler_6;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 182;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_7 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 182;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_5);
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_queue));
tmp_called_instance_2 = Nuitka_Cell_GET(generator_heap->var_queue);
generator->m_frame->m_frame.f_lineno = 185;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__redeliver_remaining);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "ccco";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 181;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccco";
goto try_except_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_queue));
tmp_called_instance_3 = Nuitka_Cell_GET(generator_heap->var_queue);
generator->m_frame->m_frame.f_lineno = 185;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain__redeliver_remaining);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[0],
    generator_heap->var_token,
    generator_heap->var_queue,
    generator_heap->var_handler
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
CHECK_OBJECT(generator_heap->var_queue);
CHECK_OBJECT(generator_heap->var_queue);
Py_DECREF(generator_heap->var_queue);
generator_heap->var_queue = NULL;
Py_XDECREF(generator_heap->var_handler);
generator_heap->var_handler = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:
try_end_6:;
CHECK_OBJECT(generator_heap->var_token);
CHECK_OBJECT(generator_heap->var_token);
Py_DECREF(generator_heap->var_token);
generator_heap->var_token = NULL;
CHECK_OBJECT(generator_heap->var_queue);
CHECK_OBJECT(generator_heap->var_queue);
Py_DECREF(generator_heap->var_queue);
generator_heap->var_queue = NULL;
CHECK_OBJECT(generator_heap->var_handler);
CHECK_OBJECT(generator_heap->var_handler);
Py_DECREF(generator_heap->var_handler);
generator_heap->var_handler = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_context,
        module_trio$_signals,
        mod_consts.const_str_plain_open_signal_receiver,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_60e6b9fbab54dcc68b942b27c5bfd062,
        closure,
        1,
#if 1
        sizeof(struct trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_signum = python_pars[0];
PyObject *par_frame = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler)) {
    Py_XDECREF(cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler = MAKE_FUNCTION_FRAME(tstate, code_objects_ea0adfbcda11cfca27a33b2d58880eb6, module_trio$_signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler->m_type_description == NULL);
frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler = cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler);
assert(Py_REFCNT(frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kwargs_value_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_run_sync_soon);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_queue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__add);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 179;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_signum);
tmp_tuple_element_1 = par_signum;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_3604753922ac0dc7d8b864938df14470);
frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler->m_frame.f_lineno = 179;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler,
    type_description_1,
    par_signum,
    par_frame,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler == cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler);
    cache_frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler = NULL;
}

assertFrameObject(frame_frame_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler);

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
CHECK_OBJECT(par_signum);
Py_DECREF(par_signum);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_signum);
Py_DECREF(par_signum);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__1__signal_handler(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__1__signal_handler,
        mod_consts.const_str_plain__signal_handler,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60f2aa08999869b89e41daac8fc38092,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a0095e3df6ca5f7603988074706c406,
#endif
        code_objects_f46a6ee52d58797e8bd9fd74c602c8ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__3__add(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__3__add,
        mod_consts.const_str_plain__add,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d2250b733ac098cc0b032481914fe8fe,
#endif
        code_objects_1747c04b39b8a8f716376750a54d493c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__4__redeliver_remaining,
        mod_consts.const_str_plain__redeliver_remaining,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_95067eb08e34ebbf6e0fa6474187c321,
#endif
        code_objects_bd0b8469acff115d5fdab9c2429c6e2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next,
        mod_consts.const_str_plain_deliver_next,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ae37f925ff862d19aa44001cf4566469,
#endif
        code_objects_2ffecb4d76bcb6d989fef908ecb16b02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__5___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__5___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c760a227475494719ae7c0c466f5136f,
#endif
        code_objects_3e1ad073c0415495dfe40fb2faf46773,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__6___anext__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__6___anext__,
        mod_consts.const_str_plain___anext__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a53fbd2f17eece4b42f5103565b75e5,
#endif
        code_objects_b7948a920662a4cc7327641ee05d58f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__7_get_pending_signal_count(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__7_get_pending_signal_count,
        mod_consts.const_str_plain_get_pending_signal_count,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0d991abcfcde0f2ede68cb4ea0341989,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        mod_consts.const_str_digest_6a1b331236bd01e3ea09075e02c71117,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__8_open_signal_receiver,
        mod_consts.const_str_plain_open_signal_receiver,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60e6b9fbab54dcc68b942b27c5bfd062,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        mod_consts.const_str_digest_5843ab5edc72aee1983c5d310efae2da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler,
        mod_consts.const_str_plain_handler,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65dac9d43376ffacac76ca4b57f6193b,
#endif
        code_objects_ea0adfbcda11cfca27a33b2d58880eb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_signals,
        NULL,
        closure,
        2
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

static function_impl_code const function_table_trio$_signals[] = {
impl_trio$_signals$$$function__4__redeliver_remaining$$$function__1_deliver_next,
impl_trio$_signals$$$function__8_open_signal_receiver$$$genobj__1_open_signal_receiver$$$function__1_handler,
impl_trio$_signals$$$function__1__signal_handler,
impl_trio$_signals$$$function__2___init__,
impl_trio$_signals$$$function__3__add,
impl_trio$_signals$$$function__4__redeliver_remaining,
impl_trio$_signals$$$function__5___aiter__,
impl_trio$_signals$$$function__6___anext__,
impl_trio$_signals$$$function__7_get_pending_signal_count,
impl_trio$_signals$$$function__8_open_signal_receiver,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_signals);
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
        module_trio$_signals,
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
        function_table_trio$_signals,
        sizeof(function_table_trio$_signals) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._signals";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_signals(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_signals");

    // Store the module for future use.
    module_trio$_signals = module;

    moduledict_trio$_signals = MODULE_DICT(module_trio$_signals);

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
        PRINT_STRING("trio$_signals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_signals: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_signals: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._signals" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_signals\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_signals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_signals,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_signals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_signals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_signals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_signals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_signals);
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

        UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_signals;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_trio$_signals$$$class__1_SignalReceiver_69 = NULL;
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
UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_signals = MAKE_MODULE_FRAME(code_objects_ab3261cb9b40963e2637b4badb5fa76e, module_trio$_signals);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_signals);
assert(Py_REFCNT(frame_frame_trio$_signals) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_signals$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_signals$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_signal;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_signals;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_signals->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_signal, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_signals;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_OrderedDict_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_signals->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_signals,
        mod_consts.const_str_plain_OrderedDict,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_OrderedDict);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_OrderedDict, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_signals;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_trio$_signals->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_signals,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_signals;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_trio$_signals->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio$_signals;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ConflictDetector_str_plain_is_main_thread_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_trio$_signals->m_frame.f_lineno = 10;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_signals,
        mod_consts.const_str_plain_ConflictDetector,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConflictDetector);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_signals,
        mod_consts.const_str_plain_is_main_thread,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_is_main_thread);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_1 = module_var_accessor_trio$_signals$contextmanager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_17c43468e9b07c8325fd65796011efb9);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_signals$$$function__1__signal_handler(tstate, tmp_annotations_1);

frame_frame_trio$_signals->m_frame.f_lineno = 54;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain__signal_handler, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_trio$_signals$$$class__1_SignalReceiver_69 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_4e73482adc731087f2f2706441ce6c4e;
tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_SignalReceiver;
tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_69;
tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_signals$$$function__2___init__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_4e1f48ccfa309a368fd72efb38e5e58a);

tmp_dictset_value = MAKE_FUNCTION_trio$_signals$$$function__3__add(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain__add, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_signals$$$function__4__redeliver_remaining(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain__redeliver_remaining, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_trio$_signals$$$function__5___aiter__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_trio$_signals$$$function__6___anext__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain___anext__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_7040b9c4be78c76562b5ebc626378f51_tuple;
tmp_result = DICT_SET_ITEM(locals_trio$_signals$$$class__1_SignalReceiver_69, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_2 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_SignalReceiver;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_trio$_signals$$$class__1_SignalReceiver_69;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_signals->m_frame.f_lineno = 69;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

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
Py_DECREF(locals_trio$_signals$$$class__1_SignalReceiver_69);
locals_trio$_signals$$$class__1_SignalReceiver_69 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_signals$$$class__1_SignalReceiver_69);
locals_trio$_signals$$$class__1_SignalReceiver_69 = NULL;
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
exception_lineno = 69;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_SignalReceiver, tmp_assign_source_16);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_20950f03c0c414241ba6d6eb6c234e9b);

tmp_assign_source_18 = MAKE_FUNCTION_trio$_signals$$$function__7_get_pending_signal_count(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_pending_signal_count, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_8;
tmp_called_value_3 = module_var_accessor_trio$_signals$contextmanager(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_8aae3b57426d3b75ffd761b663621235);

tmp_args_element_value_2 = MAKE_FUNCTION_trio$_signals$$$function__8_open_signal_receiver(tstate, tmp_annotations_8);

frame_frame_trio$_signals->m_frame.f_lineno = 129;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_signals, (Nuitka_StringObject *)mod_consts.const_str_plain_open_signal_receiver, tmp_assign_source_19);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_signals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_signals->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_signals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_signals);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_signals", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._signals" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_signals);
    return module_trio$_signals;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_signals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_signals", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

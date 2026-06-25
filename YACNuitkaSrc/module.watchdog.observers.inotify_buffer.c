/* Generated code for Python module 'watchdog$observers$inotify_buffer'
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



/* The "module_watchdog$observers$inotify_buffer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$observers$inotify_buffer;
PyDictObject *moduledict_watchdog$observers$inotify_buffer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_DelayedQueue;
PyObject *const_str_digest_16727e9b539f22218260959bb177d7fd;
PyObject *const_str_plain_delay;
PyObject *const_str_plain__queue;
PyObject *const_str_plain_Inotify;
PyObject *const_tuple_str_plain_recursive_str_plain_event_mask_tuple;
PyObject *const_str_plain__inotify;
PyObject *const_str_plain_start;
PyObject *const_str_digest_cb403d749a35076b9c71a975ac832007;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_join;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_debug;
PyObject *const_str_digest_29c56105f330ba9842a3c49eebf43a0b;
PyObject *const_dict_47a9f6905125eed52cc707101a17b121;
PyObject *const_str_plain_matching_from_event;
PyObject *const_str_digest_51cc48df8fc283a3b90acd3cb6652610;
PyObject *const_str_plain_is_moved_to;
PyObject *const_str_plain_grouped;
PyObject *const_str_plain_inotify_event;
PyObject *const_str_plain_self;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_append;
PyObject *const_tuple_str_digest_e6882f4e703f65f61edb8e5713dc9d3a_tuple;
PyObject *const_str_digest_8bebe6cc61be7815bf910473e536d2db;
PyObject *const_str_plain_is_moved_from;
PyObject *const_str_plain_cookie;
PyObject *const_str_plain_should_keep_running;
PyObject *const_str_plain_deleted_self;
PyObject *const_str_plain_read_events;
PyObject *const_str_plain__group_events;
PyObject *const_str_plain_is_ignored;
PyObject *const_str_plain_src_path;
PyObject *const_str_plain_put;
PyObject *const_tuple_str_plain_delay_tuple;
PyObject *const_str_plain_is_delete_self;
PyObject *const_str_digest_2bfddd7e8b397f7579404b5b48801484;
PyObject *const_str_digest_974eb33fa1678545f8225a736bf09fbd;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_digest_98d6f66d16cc5261207f25b9f327a01a;
PyObject *const_tuple_str_plain_Inotify_str_plain_InotifyEvent_tuple;
PyObject *const_str_plain_InotifyEvent;
PyObject *const_str_digest_870ec3fca7cd80393b39a7f5429b73b9;
PyObject *const_tuple_str_plain_BaseThread_tuple;
PyObject *const_str_plain_BaseThread;
PyObject *const_str_digest_79bc69fb41c9abb223c8d97411596a1b;
PyObject *const_tuple_str_plain_DelayedQueue_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_2441f2ba4133a8a65cb1693f97a8d165_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_InotifyBuffer;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2441f2ba4133a8a65cb1693f97a8d165;
PyObject *const_str_digest_6f715da21ef0b0f1e9ef8c58a6145bc3;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_19;
PyObject *const_str_plain___firstlineno__;
PyObject *const_float_0_5;
PyObject *const_dict_323f9e2ba3048b1692fff17129dfaf2b;
PyObject *const_dict_4a71009b1a22cf075ad3d5d99193c3fd;
PyObject *const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad;
PyObject *const_dict_f9a136ce9350d9e476e599eda732dc02;
PyObject *const_str_plain_read_event;
PyObject *const_str_digest_56001fd1ca7951e27176b406eb5c65c7;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_on_thread_stop;
PyObject *const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7;
PyObject *const_str_digest_345ed54074c773add75ed164f583bdc0;
PyObject *const_dict_6a4f0ebc33d81340c8733d305215ba40;
PyObject *const_str_digest_a1d7f5bae81f6debc4efb24434b8b154;
PyObject *const_str_plain_run;
PyObject *const_str_digest_b0e160a76d0496c3e0dae175f9f434a5;
PyObject *const_tuple_str_plain__queue_str_plain__inotify_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_281cb443ce7868af0fdf80c80d6eb425;
PyObject *const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_2b3165206143208ad35a81465b0172fe_tuple;
PyObject *const_tuple_04789ff5b6c3c469adce3bf507cb6ca6_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_event_str_plain_inotify_event_tuple;
PyObject *const_tuple_str_plain_inotify_event_tuple;
PyObject *const_tuple_31d9c69e589faa1f83414c088e392065_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[89];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.observers.inotify_buffer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_DelayedQueue);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_16727e9b539f22218260959bb177d7fd);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_delay);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__queue);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Inotify);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__inotify);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb403d749a35076b9c71a975ac832007);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_29c56105f330ba9842a3c49eebf43a0b);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_47a9f6905125eed52cc707101a17b121);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_matching_from_event);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_51cc48df8fc283a3b90acd3cb6652610);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_to);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_grouped);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_inotify_event);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e6882f4e703f65f61edb8e5713dc9d3a_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bebe6cc61be7815bf910473e536d2db);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_from);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookie);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_keep_running);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_deleted_self);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_events);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__group_events);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_ignored);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_path);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delay_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete_self);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bfddd7e8b397f7579404b5b48801484);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_974eb33fa1678545f8225a736bf09fbd);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Inotify_str_plain_InotifyEvent_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyEvent);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_870ec3fca7cd80393b39a7f5429b73b9);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseThread_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseThread);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_79bc69fb41c9abb223c8d97411596a1b);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DelayedQueue_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2441f2ba4133a8a65cb1693f97a8d165_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyBuffer);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f715da21ef0b0f1e9ef8c58a6145bc3);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_323f9e2ba3048b1692fff17129dfaf2b);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_4a71009b1a22cf075ad3d5d99193c3fd);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_f9a136ce9350d9e476e599eda732dc02);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_event);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_56001fd1ca7951e27176b406eb5c65c7);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_stop);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_345ed54074c773add75ed164f583bdc0);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_6a4f0ebc33d81340c8733d305215ba40);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1d7f5bae81f6debc4efb24434b8b154);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0e160a76d0496c3e0dae175f9f434a5);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__queue_str_plain__inotify_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_281cb443ce7868af0fdf80c80d6eb425);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_2b3165206143208ad35a81465b0172fe_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_04789ff5b6c3c469adce3bf507cb6ca6_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_inotify_event_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inotify_event_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_31d9c69e589faa1f83414c088e392065_tuple);
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
void checkModuleConstants_watchdog$observers$inotify_buffer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_DelayedQueue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DelayedQueue);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_16727e9b539f22218260959bb177d7fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16727e9b539f22218260959bb177d7fd);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delay);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__queue);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Inotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Inotify);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__inotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__inotify);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb403d749a35076b9c71a975ac832007));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb403d749a35076b9c71a975ac832007);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_29c56105f330ba9842a3c49eebf43a0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29c56105f330ba9842a3c49eebf43a0b);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_47a9f6905125eed52cc707101a17b121));
CHECK_OBJECT_DEEP(mod_consts.const_dict_47a9f6905125eed52cc707101a17b121);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_matching_from_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matching_from_event);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_51cc48df8fc283a3b90acd3cb6652610));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51cc48df8fc283a3b90acd3cb6652610);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_moved_to);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_grouped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grouped);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_inotify_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inotify_event);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e6882f4e703f65f61edb8e5713dc9d3a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e6882f4e703f65f61edb8e5713dc9d3a_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bebe6cc61be7815bf910473e536d2db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bebe6cc61be7815bf910473e536d2db);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_moved_from);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookie));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookie);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_keep_running));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_keep_running);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_deleted_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deleted_self);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_events);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__group_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__group_events);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_ignored));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_ignored);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_path);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_put));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_put);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delay_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_delay_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_delete_self);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bfddd7e8b397f7579404b5b48801484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bfddd7e8b397f7579404b5b48801484);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_974eb33fa1678545f8225a736bf09fbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_974eb33fa1678545f8225a736bf09fbd);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Inotify_str_plain_InotifyEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Inotify_str_plain_InotifyEvent_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyEvent);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_870ec3fca7cd80393b39a7f5429b73b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_870ec3fca7cd80393b39a7f5429b73b9);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseThread_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseThread_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseThread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseThread);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_79bc69fb41c9abb223c8d97411596a1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79bc69fb41c9abb223c8d97411596a1b);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DelayedQueue_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DelayedQueue_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2441f2ba4133a8a65cb1693f97a8d165_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2441f2ba4133a8a65cb1693f97a8d165_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyBuffer);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f715da21ef0b0f1e9ef8c58a6145bc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f715da21ef0b0f1e9ef8c58a6145bc3);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_19));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_19);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_323f9e2ba3048b1692fff17129dfaf2b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_323f9e2ba3048b1692fff17129dfaf2b);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_4a71009b1a22cf075ad3d5d99193c3fd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4a71009b1a22cf075ad3d5d99193c3fd);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_f9a136ce9350d9e476e599eda732dc02));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f9a136ce9350d9e476e599eda732dc02);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_event);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_56001fd1ca7951e27176b406eb5c65c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56001fd1ca7951e27176b406eb5c65c7);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_thread_stop);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_345ed54074c773add75ed164f583bdc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_345ed54074c773add75ed164f583bdc0);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_6a4f0ebc33d81340c8733d305215ba40));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a4f0ebc33d81340c8733d305215ba40);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1d7f5bae81f6debc4efb24434b8b154));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1d7f5bae81f6debc4efb24434b8b154);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0e160a76d0496c3e0dae175f9f434a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0e160a76d0496c3e0dae175f9f434a5);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__queue_str_plain__inotify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__queue_str_plain__inotify_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_281cb443ce7868af0fdf80c80d6eb425));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_281cb443ce7868af0fdf80c80d6eb425);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_2b3165206143208ad35a81465b0172fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2b3165206143208ad35a81465b0172fe_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_04789ff5b6c3c469adce3bf507cb6ca6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_04789ff5b6c3c469adce3bf507cb6ca6_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_inotify_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_str_plain_inotify_event_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inotify_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_inotify_event_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_31d9c69e589faa1f83414c088e392065_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_31d9c69e589faa1f83414c088e392065_tuple);
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
static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$BaseThread(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseThread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseThread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseThread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseThread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseThread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseThread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseThread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseThread);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$DelayedQueue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_DelayedQueue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DelayedQueue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DelayedQueue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DelayedQueue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DelayedQueue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_DelayedQueue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_DelayedQueue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DelayedQueue);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$Inotify(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Inotify);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Inotify);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Inotify, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Inotify);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Inotify, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Inotify);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Inotify);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Inotify);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify_buffer$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify_buffer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify_buffer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify_buffer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_120a6eb62f7ee9240cca0ae43cd8974d;
static PyCodeObject *code_objects_7acd3b72220671c1ed77eabc9c647a8f;
static PyCodeObject *code_objects_a6da5a14fe4dd0f31811478d7aafb220;
static PyCodeObject *code_objects_97ada1bfd8da62a7f8907c4f0229b6c6;
static PyCodeObject *code_objects_77d279f6b456d52208374214ccb6ea4c;
static PyCodeObject *code_objects_50f49ae8bf02762045cd5705e38a7fd3;
static PyCodeObject *code_objects_5d606e70847c55e557692467fb71fb58;
static PyCodeObject *code_objects_20d48ecd67b06ec06f28415478e7d323;
static PyCodeObject *code_objects_628c30623cef97066e50d8184cbb1ba4;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_281cb443ce7868af0fdf80c80d6eb425); CHECK_OBJECT(module_filename_obj);
code_objects_120a6eb62f7ee9240cca0ae43cd8974d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c, mod_consts.const_str_digest_c47d75809a4f099e50b6d8f02f8cc85c, NULL, NULL, 0, 0, 0);
code_objects_7acd3b72220671c1ed77eabc9c647a8f = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InotifyBuffer, mod_consts.const_str_plain_InotifyBuffer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a6da5a14fe4dd0f31811478d7aafb220 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad, mod_consts.const_tuple_2b3165206143208ad35a81465b0172fe_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 2, 0);
code_objects_97ada1bfd8da62a7f8907c4f0229b6c6 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__group_events, mod_consts.const_str_digest_a1d7f5bae81f6debc4efb24434b8b154, mod_consts.const_tuple_04789ff5b6c3c469adce3bf507cb6ca6_tuple, NULL, 2, 0, 0);
code_objects_77d279f6b456d52208374214ccb6ea4c = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_345ed54074c773add75ed164f583bdc0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_50f49ae8bf02762045cd5705e38a7fd3 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_matching_from_event, mod_consts.const_str_digest_51cc48df8fc283a3b90acd3cb6652610, mod_consts.const_tuple_str_plain_event_str_plain_inotify_event_tuple, mod_consts.const_tuple_str_plain_inotify_event_tuple, 1, 0, 0);
code_objects_5d606e70847c55e557692467fb71fb58 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_thread_stop, mod_consts.const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_20d48ecd67b06ec06f28415478e7d323 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read_event, mod_consts.const_str_digest_56001fd1ca7951e27176b406eb5c65c7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_628c30623cef97066e50d8184cbb1ba4 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_b0e160a76d0496c3e0dae175f9f434a5, mod_consts.const_tuple_31d9c69e589faa1f83414c088e392065_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__2_read_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__4_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__6_run(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchdog$observers$inotify_buffer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_recursive = python_pars[2];
PyObject *par_event_mask = python_pars[3];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a6da5a14fe4dd0f31811478d7aafb220, module_watchdog$observers$inotify_buffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 27;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_watchdog$observers$inotify_buffer, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_frame.f_lineno = 27;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_expression_value_1 = module_var_accessor_watchdog$observers$inotify_buffer$DelayedQueue(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DelayedQueue);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_digest_16727e9b539f22218260959bb177d7fd;
tmp_called_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_delay);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_frame.f_lineno = 29;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__queue, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_2 = module_var_accessor_watchdog$observers$inotify_buffer$Inotify(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Inotify);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_kw_call_arg_value_0_1 = par_path;
CHECK_OBJECT(par_recursive);
tmp_kw_call_dict_value_0_1 = par_recursive;
CHECK_OBJECT(par_event_mask);
tmp_kw_call_dict_value_1_1 = par_event_mask;
frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_frame.f_lineno = 30;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
}

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__inotify, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_frame.f_lineno = 31;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_start);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__,
    type_description_1,
    par_self,
    par_path,
    par_recursive,
    par_event_mask,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__1___init__);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_event_mask);
Py_DECREF(par_event_mask);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_event_mask);
Py_DECREF(par_event_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__2_read_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event = MAKE_FUNCTION_FRAME(tstate, code_objects_20d48ecd67b06ec06f28415478e7d323, module_watchdog$observers$inotify_buffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__queue);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event->m_frame.f_lineno = 38;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__2_read_event);

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


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop = MAKE_FUNCTION_FRAME(tstate, code_objects_5d606e70847c55e557692467fb71fb58, module_watchdog$observers$inotify_buffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__inotify);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop->m_frame.f_lineno = 41;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__queue);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop->m_frame.f_lineno = 42;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop);

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


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__4_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__4_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close = MAKE_FUNCTION_FRAME(tstate, code_objects_77d279f6b456d52208374214ccb6ea4c, module_watchdog$observers$inotify_buffer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__4_close = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__4_close);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__4_close) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$observers$inotify_buffer$$$function__4_close->m_frame.f_lineno = 45;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_stop);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__4_close->m_frame.f_lineno = 46;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__4_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__4_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__4_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__4_close,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__4_close == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__4_close = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__4_close);

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


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__5__group_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event_list = python_pars[1];
PyObject *var_grouped = NULL;
struct Nuitka_CellObject *var_inotify_event = Nuitka_Cell_NewEmpty();
PyObject *var_matching_from_event = NULL;
PyObject *var_index = NULL;
PyObject *var_event = NULL;
PyObject *var_from_event = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
nuitka_bool tmp_for_loop_2__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_grouped == NULL);
var_grouped = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events = MAKE_FUNCTION_FRAME(tstate, code_objects_97ada1bfd8da62a7f8907c4f0229b6c6, module_watchdog$observers$inotify_buffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_event_list);
tmp_iter_arg_1 = par_event_list;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooocoooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooocoooo";
exception_lineno = 51;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = Nuitka_Cell_GET(var_inotify_event);
    Nuitka_Cell_SET(var_inotify_event, tmp_assign_source_4);
    Py_INCREF(tmp_assign_source_4);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$inotify_buffer$logger(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_29c56105f330ba9842a3c49eebf43a0b;
CHECK_OBJECT(Nuitka_Cell_GET(var_inotify_event));
tmp_args_element_value_2 = Nuitka_Cell_GET(var_inotify_event);
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 52;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_47a9f6905125eed52cc707101a17b121);
tmp_closure_1[0] = var_inotify_event;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_5 = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event(tstate, tmp_annotations_1, tmp_closure_1);

{
    PyObject *old = var_matching_from_event;
    var_matching_from_event = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_inotify_event));
tmp_expression_value_1 = Nuitka_Cell_GET(var_inotify_event);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_moved_to);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 57;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_for_loop_2__break_indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
if (var_grouped == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = var_grouped;
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 59;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_value_value_1 = tmp_for_loop_2__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_8 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopIteration;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_for_loop_2__break_indicator = tmp_assign_source_9;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto loop_end_2;
goto branch_end_2;
branch_no_2:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
branch_end_2:;
// End of try:
try_end_1:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_index;
    var_index = tmp_assign_source_13;
    Py_INCREF(var_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_event;
    var_event = tmp_assign_source_14;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_2;
if (var_matching_from_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matching_from_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}

tmp_called_value_2 = var_matching_from_event;
CHECK_OBJECT(var_event);
tmp_args_element_value_4 = var_event;
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 60;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 60;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_event);
tmp_tuple_element_1 = var_event;
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(var_inotify_event) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inotify_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "ooocoooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(var_inotify_event);
PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (var_grouped == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}

tmp_ass_subscribed_1 = var_grouped;
CHECK_OBJECT(var_index);
tmp_ass_subscript_1 = var_index;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}
}
goto loop_end_2;
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooocoooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_for_loop_2__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_for_loop_2__break_indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 65;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__queue);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
if (var_matching_from_event == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matching_from_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 65;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = var_matching_from_event;
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 65;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_from_event;
    var_from_event = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_from_event);
tmp_cmp_expr_left_3 = var_from_event;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_tuple_element_2;
if (var_grouped == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = var_grouped;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_from_event);
tmp_tuple_element_2 = var_from_event;
tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(var_inotify_event) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inotify_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "ooocoooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(var_inotify_event);
PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_6);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 67;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
tmp_called_instance_2 = module_var_accessor_watchdog$observers$inotify_buffer$logger(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 69;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e6882f4e703f65f61edb8e5713dc9d3a_tuple, 0)
);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_7;
if (var_grouped == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_grouped;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(var_inotify_event) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inotify_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(var_inotify_event);
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame.f_lineno = 70;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_5:;
branch_no_4:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_grouped == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_grouped;
CHECK_OBJECT(Nuitka_Cell_GET(var_inotify_event));
tmp_item_value_1 = Nuitka_Cell_GET(var_inotify_event);
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooocoooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_grouped == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grouped);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooocoooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_grouped;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events,
    type_description_1,
    par_self,
    par_event_list,
    var_grouped,
    var_inotify_event,
    var_matching_from_event,
    var_index,
    var_event,
    var_from_event
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_grouped);
var_grouped = NULL;
CHECK_OBJECT(var_inotify_event);
CHECK_OBJECT(var_inotify_event);
Py_DECREF(var_inotify_event);
var_inotify_event = NULL;
Py_XDECREF(var_matching_from_event);
var_matching_from_event = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_from_event);
var_from_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_grouped);
var_grouped = NULL;
CHECK_OBJECT(var_inotify_event);
CHECK_OBJECT(var_inotify_event);
Py_DECREF(var_inotify_event);
var_inotify_event = NULL;
Py_XDECREF(var_matching_from_event);
var_matching_from_event = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_from_event);
var_from_event = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event_list);
Py_DECREF(par_event_list);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event_list);
Py_DECREF(par_event_list);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_event = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event = MAKE_FUNCTION_FRAME(tstate, code_objects_50f49ae8bf02762045cd5705e38a7fd3, module_watchdog$observers$inotify_buffer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_event);
tmp_isinstance_inst_1 = par_event;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_event);
tmp_expression_value_1 = par_event;
tmp_and_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_moved_from);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_event);
tmp_expression_value_2 = par_event;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cookie);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inotify_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_cookie);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event,
    type_description_1,
    par_event,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify_buffer$$$function__6_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_deleted_self = NULL;
PyObject *var_inotify_events = NULL;
PyObject *var_grouped_events = NULL;
PyObject *var_inotify_event = NULL;
PyObject *var_delay = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$function__6_run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_False;
assert(var_deleted_self == NULL);
Py_INCREF(tmp_assign_source_1);
var_deleted_self = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run = MAKE_FUNCTION_FRAME(tstate, code_objects_628c30623cef97066e50d8184cbb1ba4, module_watchdog$observers$inotify_buffer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_type_description == NULL);
frame_frame_watchdog$observers$inotify_buffer$$$function__6_run = cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$function__6_run);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$function__6_run) == 2);

// Framed code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_operand_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = par_self;
frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_frame.f_lineno = 81;
tmp_and_left_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_should_keep_running);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
if (var_deleted_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_2 = var_deleted_self;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__inotify);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_frame.f_lineno = 82;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_read_events);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_inotify_events;
    var_inotify_events = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_inotify_events);
tmp_args_element_value_1 = var_inotify_events;
frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_frame.f_lineno = 83;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__group_events, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_grouped_events;
    var_grouped_events = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_grouped_events);
tmp_iter_arg_1 = var_grouped_events;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 84;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_inotify_event;
    var_inotify_event = tmp_assign_source_6;
    Py_INCREF(var_inotify_event);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_inotify_event);
tmp_isinstance_inst_1 = var_inotify_event;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_inotify_event);
tmp_expression_value_2 = var_inotify_event;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_is_ignored);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 85;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_inotify_event);
tmp_expression_value_3 = var_inotify_event;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_src_path);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__inotify);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 86;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 86;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_True;
{
    PyObject *old = var_deleted_self;
    var_deleted_self = tmp_assign_source_7;
    Py_INCREF(var_deleted_self);
    Py_XDECREF(old);
}

}
branch_no_3:;
goto loop_start_2;
branch_no_2:;
{
PyObject *tmp_assign_source_8;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_inotify_event);
tmp_isinstance_inst_2 = var_inotify_event;
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_3 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_inotify_event);
tmp_expression_value_6 = var_inotify_event;
tmp_and_right_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_is_moved_from);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
Py_INCREF(tmp_and_left_value_3);
tmp_assign_source_8 = tmp_and_left_value_3;
and_end_3:;
{
    PyObject *old = var_delay;
    var_delay = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__queue);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_put);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_inotify_event);
tmp_kw_call_arg_value_0_1 = var_inotify_event;
CHECK_OBJECT(var_delay);
tmp_kw_call_dict_value_0_1 = var_delay;
frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_frame.f_lineno = 94;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_delay_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_operand_value_5;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_inotify_event);
tmp_isinstance_inst_3 = var_inotify_event;
tmp_isinstance_cls_3 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_inotify_event);
tmp_expression_value_9 = var_inotify_event;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_is_delete_self);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 98;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_inotify_event);
tmp_expression_value_10 = var_inotify_event;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_src_path);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__inotify);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 99;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 99;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_4 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_and_right_value_4 = tmp_and_left_value_5;
and_end_5:;
tmp_condition_result_4 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_4 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_True;
{
    PyObject *old = var_deleted_self;
    var_deleted_self = tmp_assign_source_9;
    Py_INCREF(var_deleted_self);
    Py_XDECREF(old);
}

}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$function__6_run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$function__6_run,
    type_description_1,
    par_self,
    var_deleted_self,
    var_inotify_events,
    var_grouped_events,
    var_inotify_event,
    var_delay
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify_buffer$$$function__6_run == cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run);
    cache_frame_frame_watchdog$observers$inotify_buffer$$$function__6_run = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$function__6_run);

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
Py_XDECREF(var_deleted_self);
var_deleted_self = NULL;
Py_XDECREF(var_inotify_events);
var_inotify_events = NULL;
Py_XDECREF(var_grouped_events);
var_grouped_events = NULL;
Py_XDECREF(var_inotify_event);
var_inotify_event = NULL;
Py_XDECREF(var_delay);
var_delay = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_deleted_self);
var_deleted_self = NULL;
Py_XDECREF(var_inotify_events);
var_inotify_events = NULL;
Py_XDECREF(var_grouped_events);
var_grouped_events = NULL;
Py_XDECREF(var_inotify_event);
var_inotify_event = NULL;
Py_XDECREF(var_delay);
var_delay = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f5800b9a0e26bba8fb8fa3a5cbab93ad,
#endif
        code_objects_a6da5a14fe4dd0f31811478d7aafb220,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__2_read_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__2_read_event,
        mod_consts.const_str_plain_read_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_56001fd1ca7951e27176b406eb5c65c7,
#endif
        code_objects_20d48ecd67b06ec06f28415478e7d323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        mod_consts.const_str_digest_cb403d749a35076b9c71a975ac832007,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop,
        mod_consts.const_str_plain_on_thread_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_392cec1a6adb9b79b6dbd9d01b6ec0f7,
#endif
        code_objects_5d606e70847c55e557692467fb71fb58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__4_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_345ed54074c773add75ed164f583bdc0,
#endif
        code_objects_77d279f6b456d52208374214ccb6ea4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__5__group_events,
        mod_consts.const_str_plain__group_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a1d7f5bae81f6debc4efb24434b8b154,
#endif
        code_objects_97ada1bfd8da62a7f8907c4f0229b6c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        mod_consts.const_str_digest_8bebe6cc61be7815bf910473e536d2db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event,
        mod_consts.const_str_plain_matching_from_event,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51cc48df8fc283a3b90acd3cb6652610,
#endif
        code_objects_50f49ae8bf02762045cd5705e38a7fd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__6_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify_buffer$$$function__6_run,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0e160a76d0496c3e0dae175f9f434a5,
#endif
        code_objects_628c30623cef97066e50d8184cbb1ba4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify_buffer,
        mod_consts.const_str_digest_2bfddd7e8b397f7579404b5b48801484,
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

static function_impl_code const function_table_watchdog$observers$inotify_buffer[] = {
impl_watchdog$observers$inotify_buffer$$$function__5__group_events$$$function__1_matching_from_event,
impl_watchdog$observers$inotify_buffer$$$function__1___init__,
impl_watchdog$observers$inotify_buffer$$$function__2_read_event,
impl_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop,
impl_watchdog$observers$inotify_buffer$$$function__4_close,
impl_watchdog$observers$inotify_buffer$$$function__5__group_events,
impl_watchdog$observers$inotify_buffer$$$function__6_run,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$observers$inotify_buffer);
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
        module_watchdog$observers$inotify_buffer,
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
        function_table_watchdog$observers$inotify_buffer,
        sizeof(function_table_watchdog$observers$inotify_buffer) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.observers.inotify_buffer";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$observers$inotify_buffer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$observers$inotify_buffer");

    // Store the module for future use.
    module_watchdog$observers$inotify_buffer = module;

    moduledict_watchdog$observers$inotify_buffer = MODULE_DICT(module_watchdog$observers$inotify_buffer);

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
        PRINT_STRING("watchdog$observers$inotify_buffer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$observers$inotify_buffer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$observers$inotify_buffer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.inotify_buffer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$observers$inotify_buffer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$observers$inotify_buffer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$inotify_buffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$inotify_buffer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$inotify_buffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$inotify_buffer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$observers$inotify_buffer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$observers$inotify_buffer);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_974eb33fa1678545f8225a736bf09fbd;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$observers$inotify_buffer = MAKE_MODULE_FRAME(code_objects_120a6eb62f7ee9240cca0ae43cd8974d, module_watchdog$observers$inotify_buffer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$observers$inotify_buffer$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$observers$inotify_buffer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$observers$inotify_buffer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 10;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a;
tmp_globals_arg_value_2 = (PyObject *)moduledict_watchdog$observers$inotify_buffer;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Inotify_str_plain_InotifyEvent_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 12;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

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
        (PyObject *)moduledict_watchdog$observers$inotify_buffer,
        mod_consts.const_str_plain_Inotify,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Inotify);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_Inotify, tmp_assign_source_7);
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
        (PyObject *)moduledict_watchdog$observers$inotify_buffer,
        mod_consts.const_str_plain_InotifyEvent,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_InotifyEvent);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEvent, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_870ec3fca7cd80393b39a7f5429b73b9;
tmp_globals_arg_value_3 = (PyObject *)moduledict_watchdog$observers$inotify_buffer;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_BaseThread_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 13;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_watchdog$observers$inotify_buffer,
        mod_consts.const_str_plain_BaseThread,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BaseThread);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseThread, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_79bc69fb41c9abb223c8d97411596a1b;
tmp_globals_arg_value_4 = (PyObject *)moduledict_watchdog$observers$inotify_buffer;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DelayedQueue_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 14;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_watchdog$observers$inotify_buffer,
        mod_consts.const_str_plain_DelayedQueue,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DelayedQueue);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_DelayedQueue, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$inotify_buffer$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 16;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2441f2ba4133a8a65cb1693f97a8d165_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_watchdog$observers$inotify_buffer$BaseThread(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseThread);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto try_except_handler_2;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_13 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
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
tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_15;
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
PyObject *tmp_assign_source_16;
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
tmp_tuple_element_2 = mod_consts.const_str_plain_InotifyBuffer;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 19;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
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
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 19;
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
branch_end_1:;
{
PyObject *tmp_assign_source_18;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_6f715da21ef0b0f1e9ef8c58a6145bc3;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_InotifyBuffer;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2 = MAKE_CLASS_FRAME(tstate, code_objects_7acd3b72220671c1ed77eabc9c647a8f, module_watchdog$observers$inotify_buffer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_float_0_5;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain_delay, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_323f9e2ba3048b1692fff17129dfaf2b);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_4a71009b1a22cf075ad3d5d99193c3fd);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_f9a136ce9350d9e476e599eda732dc02);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__2_read_event(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain_read_event, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__3_on_thread_stop(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain_on_thread_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__4_close(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_6a4f0ebc33d81340c8733d305215ba40);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__5__group_events(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain__group_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify_buffer$$$function__6_run(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain_run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__queue_str_plain__inotify_tuple;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
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
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_InotifyBuffer;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$inotify_buffer->m_frame.f_lineno = 19;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_19);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_18 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_18);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19);
locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19);
locals_watchdog$observers$inotify_buffer$$$class__1_InotifyBuffer_19 = NULL;
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
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer, tmp_assign_source_18);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify_buffer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$observers$inotify_buffer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$observers$inotify_buffer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.inotify_buffer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$observers$inotify_buffer);
    return module_watchdog$observers$inotify_buffer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify_buffer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$observers$inotify_buffer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

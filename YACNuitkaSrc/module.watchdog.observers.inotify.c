/* Generated code for Python module 'watchdog$observers$inotify'
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



/* The "module_watchdog$observers$inotify" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$observers$inotify;
PyDictObject *moduledict_watchdog$observers$inotify;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_plain_timeout_str_plain_event_filter_tuple;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Lock;
PyObject *const_str_plain__lock;
PyObject *const_str_plain__inotify;
PyObject *const_str_plain_fsencode;
PyObject *const_str_plain_watch;
PyObject *const_str_plain_get_event_mask_from_filter;
PyObject *const_str_plain_InotifyBuffer;
PyObject *const_str_plain_is_recursive;
PyObject *const_tuple_str_plain_recursive_str_plain_event_mask_tuple;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple;
PyObject *const_str_plain_read_event;
PyObject *const_str_plain__decode_path;
PyObject *const_str_plain_src_path;
PyObject *const_str_plain_is_directory;
PyObject *const_str_plain_DirMovedEvent;
PyObject *const_str_plain_FileMovedEvent;
PyObject *const_str_plain_queue_event;
PyObject *const_str_plain_DirModifiedEvent;
PyObject *const_str_plain_generate_sub_moved_events;
PyObject *const_str_plain_self;
PyObject *const_str_plain_is_moved_to;
PyObject *const_str_plain_DirCreatedEvent;
PyObject *const_str_plain_FileCreatedEvent;
PyObject *const_str_plain_generate_sub_created_events;
PyObject *const_str_plain_is_attrib;
PyObject *const_str_plain_is_modify;
PyObject *const_str_plain_FileModifiedEvent;
PyObject *const_str_plain_is_delete;
PyObject *const_str_plain_is_moved_from;
PyObject *const_str_plain_DirDeletedEvent;
PyObject *const_str_plain_FileDeletedEvent;
PyObject *const_str_plain_is_create;
PyObject *const_str_plain_is_delete_self;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_is_open;
PyObject *const_str_plain_FileOpenedEvent;
PyObject *const_str_plain_is_close_write;
PyObject *const_str_plain_FileClosedEvent;
PyObject *const_str_plain_is_close_nowrite;
PyObject *const_str_plain_FileClosedNoWriteEvent;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_fsdecode;
PyObject *const_str_digest_ae1a5ec3153a978b3c4063af364306ba;
PyObject *const_str_plain__event_filter;
PyObject *const_str_plain_InotifyConstants;
PyObject *const_str_plain_IN_DELETE_SELF;
PyObject *const_str_plain_event_mask;
PyObject *const_str_plain_IN_MOVE;
PyObject *const_str_plain_IN_CREATE;
PyObject *const_str_plain_IN_ATTRIB;
PyObject *const_str_plain_IN_MODIFY;
PyObject *const_str_plain_IN_CLOSE_WRITE;
PyObject *const_str_plain_IN_DELETE;
PyObject *const_str_plain_IN_CLOSE_NOWRITE;
PyObject *const_str_plain_IN_OPEN;
PyObject *const_str_digest_b0400011e36fbdd8fb3bc240d436cf68;
PyObject *const_str_plain_queue_events;
PyObject *const_tuple_str_plain_full_events_tuple;
PyObject *const_str_plain_InotifyFullEmitter;
PyObject *const_str_plain_InotifyEmitter;
PyObject *const_tuple_str_plain_timeout_tuple;
PyObject *const_str_digest_ea5c7d4c2f1e1262ab99c821efcf9435;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_b959d08b6a3118dc1f467343599e6279;
PyObject *const_tuple_f2f97a7ae3ce9653ddf348e145da4bbb_tuple;
PyObject *const_str_plain_FileSystemEvent;
PyObject *const_str_digest_ea15f84576b1dd4366beab399b51658c;
PyObject *const_tuple_0d4141009deb9a27a6b8d750b79c49c1_tuple;
PyObject *const_str_plain_DEFAULT_EMITTER_TIMEOUT;
PyObject *const_str_plain_DEFAULT_OBSERVER_TIMEOUT;
PyObject *const_str_plain_BaseObserver;
PyObject *const_str_plain_EventEmitter;
PyObject *const_str_digest_2441f2ba4133a8a65cb1693f97a8d165;
PyObject *const_tuple_str_plain_InotifyBuffer_tuple;
PyObject *const_str_digest_98d6f66d16cc5261207f25b9f327a01a;
PyObject *const_tuple_str_plain_InotifyConstants_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_37f230a661bf6c16935c40f92472c005_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_37f230a661bf6c16935c40f92472c005;
PyObject *const_str_digest_12132d81395c931f61a9a8d241c30064;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_85;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_event_filter;
PyObject *const_dict_c72e4bd1cfefe684fdf70b267bd0ad7a;
PyObject *const_str_digest_f680670f5144beea5b68088381d5a6eb;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_on_thread_start;
PyObject *const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361;
PyObject *const_str_plain_on_thread_stop;
PyObject *const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10;
PyObject *const_dict_3ad8c3c1bb416bf027d8a2a289f56dfa;
PyObject *const_dict_55a3d083c63fd933fa7aa7bbd28112f5;
PyObject *const_str_digest_7c9f67abe89d828df8a1e4698008b3b7;
PyObject *const_dict_e108dbbabc01ce8f4a298cd3f762d778;
PyObject *const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569;
PyObject *const_dict_4ceb13db20db0a5d6b10c13b92db4345;
PyObject *const_str_digest_35593745e97a8568d1dee133fbca2ec8;
PyObject *const_tuple_str_plain__lock_str_plain__inotify_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_35fca918c29eb6ab26c3a86e022681e4;
PyObject *const_int_pos_236;
PyObject *const_dict_ee5a7e9b10e19088f43ac24e9dbe6aad;
PyObject *const_dict_bf36ff56a317e3c718060f20c391c07b;
PyObject *const_str_digest_9d26168c59dfe09b0c613365957abe2f;
PyObject *const_str_plain_InotifyObserver;
PyObject *const_str_digest_8503b8306581fe21ebf94456d7ca721f;
PyObject *const_int_pos_245;
PyObject *const_str_plain_generate_full_events;
PyObject *const_dict_e8ce5a89d11634fd12328ea5194bef73;
PyObject *const_str_digest_1d79759c7aef46a6b44b71443bbfd540;
PyObject *const_str_digest_44d5897951fb0c5373370dbc8146e359;
PyObject *const_str_digest_912c33b0d573723e3439a4ae46a8c34b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_b24196686a381309a389d9e83a700fe1_tuple;
PyObject *const_tuple_b79a532f9e141a6b29035a7bd779bd06_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_mask_str_plain_cls_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_str_plain_event_mask_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4e752d2c4cc8e3392bae255dfb7f8c10_tuple;
PyObject *const_tuple_164f02e9699d6a5c65f3cbcbdbfb2534_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[137];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.observers.inotify"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_str_plain_event_filter_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lock);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__lock);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__inotify);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_fsencode);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_watch);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_event_mask_from_filter);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyBuffer);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_recursive);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_event);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__decode_path);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_path);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_directory);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirMovedEvent);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileMovedEvent);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue_event);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirModifiedEvent);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_sub_moved_events);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_to);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirCreatedEvent);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreatedEvent);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_sub_created_events);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_attrib);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_modify);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileModifiedEvent);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_from);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirDeletedEvent);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileDeletedEvent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_create);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete_self);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_open);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileOpenedEvent);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_close_write);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileClosedEvent);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_close_nowrite);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileClosedNoWriteEvent);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_fsdecode);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae1a5ec3153a978b3c4063af364306ba);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyConstants);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_DELETE_SELF);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_mask);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_MOVE);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CREATE);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_ATTRIB);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_MODIFY);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CLOSE_WRITE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_DELETE);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CLOSE_NOWRITE);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_IN_OPEN);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0400011e36fbdd8fb3bc240d436cf68);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue_events);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_full_events_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyFullEmitter);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyEmitter);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea5c7d4c2f1e1262ab99c821efcf9435);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_b959d08b6a3118dc1f467343599e6279);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_f2f97a7ae3ce9653ddf348e145da4bbb_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileSystemEvent);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea15f84576b1dd4366beab399b51658c);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_0d4141009deb9a27a6b8d750b79c49c1_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseObserver);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventEmitter);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InotifyBuffer_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InotifyConstants_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_37f230a661bf6c16935c40f92472c005_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_12132d81395c931f61a9a8d241c30064);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_c72e4bd1cfefe684fdf70b267bd0ad7a);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_f680670f5144beea5b68088381d5a6eb);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_start);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_stop);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_3ad8c3c1bb416bf027d8a2a289f56dfa);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_55a3d083c63fd933fa7aa7bbd28112f5);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c9f67abe89d828df8a1e4698008b3b7);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_e108dbbabc01ce8f4a298cd3f762d778);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_35593745e97a8568d1dee133fbca2ec8);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__lock_str_plain__inotify_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_35fca918c29eb6ab26c3a86e022681e4);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_236);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_ee5a7e9b10e19088f43ac24e9dbe6aad);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_dict_bf36ff56a317e3c718060f20c391c07b);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d26168c59dfe09b0c613365957abe2f);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyObserver);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_8503b8306581fe21ebf94456d7ca721f);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_245);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_full_events);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_dict_e8ce5a89d11634fd12328ea5194bef73);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d79759c7aef46a6b44b71443bbfd540);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_44d5897951fb0c5373370dbc8146e359);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_912c33b0d573723e3439a4ae46a8c34b);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_b24196686a381309a389d9e83a700fe1_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_b79a532f9e141a6b29035a7bd779bd06_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_mask_str_plain_cls_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_event_mask_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_4e752d2c4cc8e3392bae255dfb7f8c10_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_164f02e9699d6a5c65f3cbcbdbfb2534_tuple);
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
void checkModuleConstants_watchdog$observers$inotify(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_str_plain_event_filter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_timeout_str_plain_event_filter_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lock);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lock);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__inotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__inotify);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_fsencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fsencode);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_watch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_watch);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_event_mask_from_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_event_mask_from_filter);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyBuffer);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_recursive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_recursive);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_event);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__decode_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decode_path);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_path);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_directory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_directory);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirMovedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirMovedEvent);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileMovedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileMovedEvent);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue_event);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirModifiedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirModifiedEvent);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_sub_moved_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_sub_moved_events);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_moved_to);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirCreatedEvent);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileCreatedEvent);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_sub_created_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_sub_created_events);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_attrib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_attrib);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_modify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_modify);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileModifiedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileModifiedEvent);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_delete);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_moved_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_moved_from);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirDeletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirDeletedEvent);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileDeletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileDeletedEvent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_create);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_delete_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_delete_self);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_open));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_open);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileOpenedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileOpenedEvent);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_close_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_close_write);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileClosedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileClosedEvent);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_close_nowrite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_close_nowrite);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileClosedNoWriteEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileClosedNoWriteEvent);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_fsdecode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fsdecode);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae1a5ec3153a978b3c4063af364306ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae1a5ec3153a978b3c4063af364306ba);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__event_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__event_filter);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyConstants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyConstants);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_DELETE_SELF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_DELETE_SELF);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event_mask);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_MOVE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_MOVE);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CREATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_CREATE);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_ATTRIB));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_ATTRIB);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_MODIFY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_MODIFY);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CLOSE_WRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_CLOSE_WRITE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_DELETE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_DELETE);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_CLOSE_NOWRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_CLOSE_NOWRITE);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_IN_OPEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IN_OPEN);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0400011e36fbdd8fb3bc240d436cf68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0400011e36fbdd8fb3bc240d436cf68);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue_events);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_full_events_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_full_events_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyFullEmitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyFullEmitter);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyEmitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyEmitter);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_timeout_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea5c7d4c2f1e1262ab99c821efcf9435));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea5c7d4c2f1e1262ab99c821efcf9435);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_b959d08b6a3118dc1f467343599e6279));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b959d08b6a3118dc1f467343599e6279);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_f2f97a7ae3ce9653ddf348e145da4bbb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f2f97a7ae3ce9653ddf348e145da4bbb_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileSystemEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileSystemEvent);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea15f84576b1dd4366beab399b51658c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea15f84576b1dd4366beab399b51658c);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_0d4141009deb9a27a6b8d750b79c49c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0d4141009deb9a27a6b8d750b79c49c1_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseObserver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseObserver);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventEmitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventEmitter);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InotifyBuffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InotifyBuffer_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InotifyConstants_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InotifyConstants_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_37f230a661bf6c16935c40f92472c005_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_37f230a661bf6c16935c40f92472c005_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_12132d81395c931f61a9a8d241c30064));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12132d81395c931f61a9a8d241c30064);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_85));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_85);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_event_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event_filter);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_c72e4bd1cfefe684fdf70b267bd0ad7a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c72e4bd1cfefe684fdf70b267bd0ad7a);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_f680670f5144beea5b68088381d5a6eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f680670f5144beea5b68088381d5a6eb);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_thread_start);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_thread_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_thread_stop);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_3ad8c3c1bb416bf027d8a2a289f56dfa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3ad8c3c1bb416bf027d8a2a289f56dfa);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_55a3d083c63fd933fa7aa7bbd28112f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_55a3d083c63fd933fa7aa7bbd28112f5);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c9f67abe89d828df8a1e4698008b3b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c9f67abe89d828df8a1e4698008b3b7);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_e108dbbabc01ce8f4a298cd3f762d778));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e108dbbabc01ce8f4a298cd3f762d778);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_35593745e97a8568d1dee133fbca2ec8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35593745e97a8568d1dee133fbca2ec8);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__lock_str_plain__inotify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__lock_str_plain__inotify_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_35fca918c29eb6ab26c3a86e022681e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35fca918c29eb6ab26c3a86e022681e4);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_236));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_236);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_ee5a7e9b10e19088f43ac24e9dbe6aad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ee5a7e9b10e19088f43ac24e9dbe6aad);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_dict_bf36ff56a317e3c718060f20c391c07b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bf36ff56a317e3c718060f20c391c07b);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d26168c59dfe09b0c613365957abe2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d26168c59dfe09b0c613365957abe2f);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_InotifyObserver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InotifyObserver);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_8503b8306581fe21ebf94456d7ca721f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8503b8306581fe21ebf94456d7ca721f);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_245));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_245);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_full_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_full_events);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_dict_e8ce5a89d11634fd12328ea5194bef73));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8ce5a89d11634fd12328ea5194bef73);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d79759c7aef46a6b44b71443bbfd540));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d79759c7aef46a6b44b71443bbfd540);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_44d5897951fb0c5373370dbc8146e359));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44d5897951fb0c5373370dbc8146e359);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_912c33b0d573723e3439a4ae46a8c34b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_912c33b0d573723e3439a4ae46a8c34b);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_b24196686a381309a389d9e83a700fe1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b24196686a381309a389d9e83a700fe1_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_b79a532f9e141a6b29035a7bd779bd06_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b79a532f9e141a6b29035a7bd779bd06_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_mask_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_mask_str_plain_cls_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_event_mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_event_mask_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_4e752d2c4cc8e3392bae255dfb7f8c10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e752d2c4cc8e3392bae255dfb7f8c10_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_164f02e9699d6a5c65f3cbcbdbfb2534_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_164f02e9699d6a5c65f3cbcbdbfb2534_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_watchdog$observers$inotify$BaseObserver(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseObserver);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseObserver);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseObserver, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseObserver);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseObserver, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseObserver);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseObserver);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseObserver);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DEFAULT_EMITTER_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DEFAULT_OBSERVER_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DirCreatedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirCreatedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirCreatedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirCreatedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirCreatedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirCreatedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirCreatedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirCreatedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirCreatedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DirDeletedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirDeletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirDeletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirDeletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirDeletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirDeletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirDeletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirDeletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirDeletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirModifiedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirModifiedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirModifiedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirModifiedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirModifiedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirModifiedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirModifiedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirModifiedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$DirMovedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirMovedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirMovedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirMovedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirMovedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirMovedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirMovedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirMovedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirMovedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$EventEmitter(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_EventEmitter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventEmitter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventEmitter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EventEmitter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EventEmitter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_EventEmitter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_EventEmitter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EventEmitter);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileClosedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileClosedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileClosedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileClosedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileClosedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileClosedNoWriteEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedNoWriteEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileClosedNoWriteEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileClosedNoWriteEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileClosedNoWriteEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileClosedNoWriteEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedNoWriteEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedNoWriteEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedNoWriteEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileCreatedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreatedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileCreatedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileCreatedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileCreatedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileCreatedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreatedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreatedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreatedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileDeletedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileDeletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileDeletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileDeletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileDeletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileModifiedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModifiedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileModifiedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileModifiedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileModifiedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileModifiedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModifiedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModifiedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModifiedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileMovedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileMovedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileMovedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileMovedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileMovedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileMovedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileMovedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileMovedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileMovedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$FileOpenedEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileOpenedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileOpenedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileOpenedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileOpenedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileOpenedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileOpenedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileOpenedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileOpenedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$InotifyBuffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyBuffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyBuffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyBuffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyBuffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$InotifyConstants(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyConstants);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyConstants);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyConstants, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyConstants);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyConstants, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyConstants);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyConstants);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyConstants);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$InotifyEmitter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEmitter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyEmitter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyEmitter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyEmitter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyEmitter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEmitter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEmitter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEmitter);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$InotifyFullEmitter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyFullEmitter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyFullEmitter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyFullEmitter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InotifyFullEmitter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InotifyFullEmitter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyFullEmitter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyFullEmitter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyFullEmitter);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$generate_sub_created_events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_created_events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_sub_created_events);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_sub_created_events, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_sub_created_events);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_sub_created_events, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_created_events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_created_events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_created_events);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$generate_sub_moved_events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_moved_events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_sub_moved_events);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_sub_moved_events, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_sub_moved_events);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_sub_moved_events, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_moved_events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_moved_events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_moved_events);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$inotify$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$inotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$inotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$inotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5a1dbff2e41725ef19afb559b25eff9f;
static PyCodeObject *code_objects_e5d7f0e1ab6f3bc39c303ff22da7f4b0;
static PyCodeObject *code_objects_a5aded368a8bc3f61fb5181de26155b0;
static PyCodeObject *code_objects_83b994eca81a3ef5246821a45660b448;
static PyCodeObject *code_objects_b39f17c8264b52bf71d3d193b38fbc70;
static PyCodeObject *code_objects_3204a5d8b949629f7865ba923cfd66c4;
static PyCodeObject *code_objects_36d336baa9141166d61526cd189e6338;
static PyCodeObject *code_objects_888cd61b53b7b7910bcaf0b233eb3a60;
static PyCodeObject *code_objects_84529527a7009064c17d5c183bf7aa7d;
static PyCodeObject *code_objects_2092753e90df0ed9ca0de4800555bb93;
static PyCodeObject *code_objects_b13bbfeb005f5a95b6ead73814d9f0d4;
static PyCodeObject *code_objects_02a23f33c6133393bfbb0cd3fa673414;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_44d5897951fb0c5373370dbc8146e359); CHECK_OBJECT(module_filename_obj);
code_objects_5a1dbff2e41725ef19afb559b25eff9f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_912c33b0d573723e3439a4ae46a8c34b, mod_consts.const_str_digest_912c33b0d573723e3439a4ae46a8c34b, NULL, NULL, 0, 0, 0);
code_objects_e5d7f0e1ab6f3bc39c303ff22da7f4b0 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InotifyEmitter, mod_consts.const_str_plain_InotifyEmitter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a5aded368a8bc3f61fb5181de26155b0 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InotifyFullEmitter, mod_consts.const_str_plain_InotifyFullEmitter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_83b994eca81a3ef5246821a45660b448 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InotifyObserver, mod_consts.const_str_plain_InotifyObserver, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b39f17c8264b52bf71d3d193b38fbc70 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_f680670f5144beea5b68088381d5a6eb, mod_consts.const_tuple_b24196686a381309a389d9e83a700fe1_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 2, 0);
code_objects_3204a5d8b949629f7865ba923cfd66c4 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1d79759c7aef46a6b44b71443bbfd540, mod_consts.const_tuple_b79a532f9e141a6b29035a7bd779bd06_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 2, 0);
code_objects_36d336baa9141166d61526cd189e6338 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decode_path, mod_consts.const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_888cd61b53b7b7910bcaf0b233eb3a60 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_event_mask_from_filter, mod_consts.const_str_digest_35593745e97a8568d1dee133fbca2ec8, mod_consts.const_tuple_str_plain_self_str_plain_event_mask_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_84529527a7009064c17d5c183bf7aa7d = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_thread_start, mod_consts.const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_event_mask_tuple, NULL, 1, 0, 0);
code_objects_2092753e90df0ed9ca0de4800555bb93 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_thread_stop, mod_consts.const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b13bbfeb005f5a95b6ead73814d9f0d4 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_queue_events, mod_consts.const_str_digest_7c9f67abe89d828df8a1e4698008b3b7, mod_consts.const_tuple_4e752d2c4cc8e3392bae255dfb7f8c10_tuple, NULL, 2, 1, 0);
code_objects_02a23f33c6133393bfbb0cd3fa673414 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_queue_events, mod_consts.const_str_digest_9d26168c59dfe09b0c613365957abe2f, mod_consts.const_tuple_164f02e9699d6a5c65f3cbcbdbfb2534_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 1, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__2_on_thread_start(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__3_on_thread_stop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__4_queue_events(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__5__decode_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__7_queue_events(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__8___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_watchdog$observers$inotify$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event_queue = python_pars[1];
PyObject *par_watch = python_pars[2];
PyObject *par_timeout = python_pars[3];
PyObject *par_event_filter = python_pars[4];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b39f17c8264b52bf71d3d193b38fbc70, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__1___init__->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__1___init__ = cache_frame_frame_watchdog$observers$inotify$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__1___init__);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_watchdog$observers$inotify, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_event_queue);
tmp_kw_call_arg_value_0_1 = par_event_queue;
CHECK_OBJECT(par_watch);
tmp_kw_call_arg_value_1_1 = par_watch;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_0_1 = par_timeout;
CHECK_OBJECT(par_event_filter);
tmp_kw_call_dict_value_1_1 = par_event_filter;
frame_frame_watchdog$observers$inotify$$$function__1___init__->m_frame.f_lineno = 112;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_timeout_str_plain_event_filter_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$inotify$threading(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify$$$function__1___init__->m_frame.f_lineno = 113;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Lock);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__lock, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__inotify, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__1___init__,
    type_description_1,
    par_self,
    par_event_queue,
    par_watch,
    par_timeout,
    par_event_filter,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__1___init__ == cache_frame_frame_watchdog$observers$inotify$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__1___init__);
    cache_frame_frame_watchdog$observers$inotify$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__1___init__);

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
CHECK_OBJECT(par_event_queue);
Py_DECREF(par_event_queue);
CHECK_OBJECT(par_watch);
Py_DECREF(par_watch);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_event_filter);
Py_DECREF(par_event_filter);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event_queue);
Py_DECREF(par_event_queue);
CHECK_OBJECT(par_watch);
Py_DECREF(par_watch);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_event_filter);
Py_DECREF(par_event_filter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify$$$function__2_on_thread_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
PyObject *var_event_mask = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start = MAKE_FUNCTION_FRAME(tstate, code_objects_84529527a7009064c17d5c183bf7aa7d, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start = cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fsencode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_watch);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start->m_frame.f_lineno = 117;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start->m_frame.f_lineno = 118;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_event_mask_from_filter);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_event_mask == NULL);
var_event_mask = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_2 = module_var_accessor_watchdog$observers$inotify$InotifyBuffer(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyBuffer);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_kw_call_arg_value_0_1 = var_path;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_watch);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_is_recursive);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_event_mask);
tmp_kw_call_dict_value_1_1 = var_event_mask;
frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start->m_frame.f_lineno = 119;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_recursive_str_plain_event_mask_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__inotify, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start,
    type_description_1,
    par_self,
    var_path,
    var_event_mask
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start == cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start);
    cache_frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__2_on_thread_start);

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
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_event_mask);
CHECK_OBJECT(var_event_mask);
Py_DECREF(var_event_mask);
var_event_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_event_mask);
var_event_mask = NULL;
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


static PyObject *impl_watchdog$observers$inotify$$$function__3_on_thread_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop = MAKE_FUNCTION_FRAME(tstate, code_objects_2092753e90df0ed9ca0de4800555bb93, module_watchdog$observers$inotify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop = cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__inotify);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 122;
type_description_1 = "o";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__inotify);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop->m_frame.f_lineno = 123;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__inotify, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop == cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop);
    cache_frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__3_on_thread_stop);

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


static PyObject *impl_watchdog$observers$inotify$$$function__4_queue_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_full_events = python_pars[2];
PyObject *var_cls = NULL;
PyObject *var_event = NULL;
PyObject *var_move_from = NULL;
PyObject *var_move_to = NULL;
PyObject *var_src_path = NULL;
PyObject *var_dest_path = NULL;
PyObject *var_sub_moved_event = NULL;
PyObject *var_sub_created_event = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__4_queue_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events = MAKE_FUNCTION_FRAME(tstate, code_objects_b13bbfeb005f5a95b6ead73814d9f0d4, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__4_queue_events = cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__4_queue_events);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__4_queue_events) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__inotify);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$inotify$logger(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 130;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__lock);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 132;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
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
// Tried code:
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__inotify);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
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
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
tmp_called_instance_2 = module_var_accessor_watchdog$observers$inotify$logger(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 134;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_error,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f29502ee147bd2f9385d1285b83edf53_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__inotify);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 136;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_read_event);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_event == NULL);
var_event = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_event);
tmp_cmp_expr_left_3 = var_event;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_event);
tmp_isinstance_inst_1 = var_event;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_event);
tmp_iter_arg_1 = var_event;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var_move_from == NULL);
Py_INCREF(tmp_assign_source_9);
var_move_from = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_move_to == NULL);
Py_INCREF(tmp_assign_source_10);
var_move_to = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__decode_path);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_move_from);
tmp_expression_value_8 = var_move_from;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_src_path);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 143;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 143;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_src_path == NULL);
var_src_path = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__decode_path);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_move_to);
tmp_expression_value_10 = var_move_to;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_src_path);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 144;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 144;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_dest_path == NULL);
var_dest_path = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_move_from);
tmp_expression_value_11 = var_move_from;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 145;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_13 = module_var_accessor_watchdog$observers$inotify$DirMovedEvent(tstate);
if (unlikely(tmp_assign_source_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirMovedEvent);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_13 = module_var_accessor_watchdog$observers$inotify$FileMovedEvent(tstate);
if (unlikely(tmp_assign_source_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileMovedEvent);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_1:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_13);
var_cls = tmp_assign_source_13;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_5 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_4 = var_src_path;
CHECK_OBJECT(var_dest_path);
tmp_args_element_value_5 = var_dest_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 146;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 146;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_7 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 147;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_1 = var_src_path;
tmp_args_element_value_7 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 147;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 147;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 147;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 147;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_path_arg_2;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_9 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 148;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_dest_path);
tmp_path_arg_2 = var_dest_path;
tmp_args_element_value_9 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 148;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 148;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 148;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 148;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_move_from);
tmp_expression_value_15 = var_move_from;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_watch);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_is_recursive);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 149;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_10 = module_var_accessor_watchdog$observers$inotify$generate_sub_moved_events(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_generate_sub_moved_events);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_args_element_value_10 = var_src_path;
CHECK_OBJECT(var_dest_path);
tmp_args_element_value_11 = var_dest_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 150;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_16 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_sub_moved_event;
    var_sub_moved_event = tmp_assign_source_16;
    Py_INCREF(var_sub_moved_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_12;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 151;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}

tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_sub_moved_event);
tmp_args_element_value_12 = var_sub_moved_event;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 151;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_queue_event, tmp_args_element_value_12);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_5:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__decode_path);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_event);
tmp_expression_value_19 = var_event;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_src_path);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 154;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 154;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_src_path == NULL);
var_src_path = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
CHECK_OBJECT(var_event);
tmp_expression_value_20 = var_event;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_is_moved_to);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 155;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
CHECK_OBJECT(par_full_events);
tmp_truth_name_5 = CHECK_IF_TRUE(par_full_events);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_18;
nuitka_bool tmp_condition_result_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_6;
CHECK_OBJECT(var_event);
tmp_expression_value_21 = var_event;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 157;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_18 = module_var_accessor_watchdog$observers$inotify$DirMovedEvent(tstate);
if (unlikely(tmp_assign_source_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirMovedEvent);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_18 = module_var_accessor_watchdog$observers$inotify$FileMovedEvent(tstate);
if (unlikely(tmp_assign_source_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileMovedEvent);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_2:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_18);
var_cls = tmp_assign_source_18;
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_13 = var_cls;
tmp_args_element_value_15 = const_str_empty;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_16 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 158;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 158;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_19;
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_23;
PyObject *tmp_attribute_value_6;
int tmp_truth_name_7;
CHECK_OBJECT(var_event);
tmp_expression_value_23 = var_event;
tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_6);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_6);

exception_lineno = 160;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_10 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_6);
Py_DECREF(tmp_attribute_value_6);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_assign_source_19 = module_var_accessor_watchdog$observers$inotify$DirCreatedEvent(tstate);
if (unlikely(tmp_assign_source_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirCreatedEvent);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_19 = module_var_accessor_watchdog$observers$inotify$FileCreatedEvent(tstate);
if (unlikely(tmp_assign_source_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileCreatedEvent);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_3:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_19);
var_cls = tmp_assign_source_19;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_15 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_18 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 161;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 161;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 161;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_end_7:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_20;
PyObject *tmp_path_arg_3;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_17 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 162;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_3 = var_src_path;
tmp_args_element_value_20 = OS_PATH_DIRNAME(tstate, tmp_path_arg_3);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 162;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 162;
tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 162;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 162;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_26;
PyObject *tmp_attribute_value_7;
int tmp_truth_name_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_attribute_value_8;
int tmp_truth_name_9;
CHECK_OBJECT(var_event);
tmp_expression_value_26 = var_event;
tmp_attribute_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_attribute_value_7);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_7);

exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_2 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_7);
Py_DECREF(tmp_attribute_value_7);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_watch);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_attribute_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_is_recursive);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_attribute_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_8);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_8);

exception_lineno = 163;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_2 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_8);
Py_DECREF(tmp_attribute_value_8);
tmp_condition_result_11 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_11 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_21;
tmp_called_value_18 = module_var_accessor_watchdog$observers$inotify$generate_sub_created_events(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_generate_sub_created_events);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_args_element_value_21 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 164;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_21);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_20;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 164;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_22 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_sub_created_event;
    var_sub_created_event = tmp_assign_source_22;
    Py_INCREF(var_sub_created_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_22;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_5 = par_self;
CHECK_OBJECT(var_sub_created_event);
tmp_args_element_value_22 = var_sub_created_event;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 165;
tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_queue_event, tmp_args_element_value_22);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_4;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_8:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_12;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_expression_value_29;
PyObject *tmp_attribute_value_9;
int tmp_truth_name_10;
PyObject *tmp_expression_value_30;
PyObject *tmp_attribute_value_10;
int tmp_truth_name_11;
CHECK_OBJECT(var_event);
tmp_expression_value_29 = var_event;
tmp_attribute_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_is_attrib);
if (tmp_attribute_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_attribute_value_9);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_9);

exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_9);
Py_DECREF(tmp_attribute_value_9);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_event);
tmp_expression_value_30 = var_event;
tmp_attribute_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_is_modify);
if (tmp_attribute_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_attribute_value_10);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_10);

exception_lineno = 166;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_or_right_value_1 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_10);
Py_DECREF(tmp_attribute_value_10);
tmp_condition_result_12 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_12 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_23;
nuitka_bool tmp_condition_result_13;
PyObject *tmp_expression_value_31;
PyObject *tmp_attribute_value_11;
int tmp_truth_name_12;
CHECK_OBJECT(var_event);
tmp_expression_value_31 = var_event;
tmp_attribute_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_attribute_value_11);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_11);

exception_lineno = 167;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_13 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_11);
Py_DECREF(tmp_attribute_value_11);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_assign_source_23 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_assign_source_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_assign_source_23 = module_var_accessor_watchdog$observers$inotify$FileModifiedEvent(tstate);
if (unlikely(tmp_assign_source_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileModifiedEvent);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_4:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_23);
var_cls = tmp_assign_source_23;
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_24;
CHECK_OBJECT(par_self);
tmp_expression_value_32 = par_self;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_20 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_24 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 168;
tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_24);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 168;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 168;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_14;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_expression_value_33;
PyObject *tmp_attribute_value_12;
int tmp_truth_name_13;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_34;
PyObject *tmp_attribute_value_13;
int tmp_truth_name_14;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_event);
tmp_expression_value_33 = var_event;
tmp_attribute_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_is_delete);
if (tmp_attribute_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_attribute_value_12);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_12);

exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_2 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_12);
Py_DECREF(tmp_attribute_value_12);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_event);
tmp_expression_value_34 = var_event;
tmp_attribute_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_is_moved_from);
if (tmp_attribute_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_attribute_value_13);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_13);

exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_3 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_13);
Py_DECREF(tmp_attribute_value_13);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_full_events);
tmp_operand_value_1 = par_full_events;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_14 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_14 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_24;
nuitka_bool tmp_condition_result_15;
PyObject *tmp_expression_value_35;
PyObject *tmp_attribute_value_14;
int tmp_truth_name_15;
CHECK_OBJECT(var_event);
tmp_expression_value_35 = var_event;
tmp_attribute_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_attribute_value_14);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_14);

exception_lineno = 170;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_15 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_14);
Py_DECREF(tmp_attribute_value_14);
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
tmp_assign_source_24 = module_var_accessor_watchdog$observers$inotify$DirDeletedEvent(tstate);
if (unlikely(tmp_assign_source_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirDeletedEvent);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_assign_source_24 = module_var_accessor_watchdog$observers$inotify$FileDeletedEvent(tstate);
if (unlikely(tmp_assign_source_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileDeletedEvent);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_5:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_24);
var_cls = tmp_assign_source_24;
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_36;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_26;
CHECK_OBJECT(par_self);
tmp_expression_value_36 = par_self;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_22 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_26 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 171;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_26);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 171;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 171;
tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_37;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_28;
PyObject *tmp_path_arg_4;
CHECK_OBJECT(par_self);
tmp_expression_value_37 = par_self;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_24 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_23);

exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_4 = var_src_path;
tmp_args_element_value_28 = OS_PATH_DIRNAME(tstate, tmp_path_arg_4);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 172;
tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_28);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 172;
tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
goto branch_end_10;
branch_no_10:;
{
nuitka_bool tmp_condition_result_16;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_expression_value_38;
PyObject *tmp_attribute_value_15;
int tmp_truth_name_16;
int tmp_truth_name_17;
CHECK_OBJECT(var_event);
tmp_expression_value_38 = var_event;
tmp_attribute_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_is_moved_from);
if (tmp_attribute_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_attribute_value_15);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_15);

exception_lineno = 173;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_4 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_15);
Py_DECREF(tmp_attribute_value_15);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_full_events);
tmp_truth_name_17 = CHECK_IF_TRUE(par_full_events);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_4 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_16 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_16 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_25;
nuitka_bool tmp_condition_result_17;
PyObject *tmp_expression_value_39;
PyObject *tmp_attribute_value_16;
int tmp_truth_name_18;
CHECK_OBJECT(var_event);
tmp_expression_value_39 = var_event;
tmp_attribute_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_attribute_value_16);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_16);

exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_17 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_16);
Py_DECREF(tmp_attribute_value_16);
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
tmp_assign_source_25 = module_var_accessor_watchdog$observers$inotify$DirMovedEvent(tstate);
if (unlikely(tmp_assign_source_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirMovedEvent);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_assign_source_25 = module_var_accessor_watchdog$observers$inotify$FileMovedEvent(tstate);
if (unlikely(tmp_assign_source_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileMovedEvent);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_6:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_25);
var_cls = tmp_assign_source_25;
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_40;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_29;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
CHECK_OBJECT(par_self);
tmp_expression_value_40 = par_self;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_26 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_30 = var_src_path;
tmp_args_element_value_31 = const_str_empty;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_args_element_value_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 175;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 175;
tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_41;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_32;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_33;
PyObject *tmp_path_arg_5;
CHECK_OBJECT(par_self);
tmp_expression_value_41 = par_self;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_28 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 176;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_5 = var_src_path;
tmp_args_element_value_33 = OS_PATH_DIRNAME(tstate, tmp_path_arg_5);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 176;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 176;
tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_33);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 176;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 176;
tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
goto branch_end_11;
branch_no_11:;
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_expression_value_42;
PyObject *tmp_attribute_value_17;
int tmp_truth_name_19;
CHECK_OBJECT(var_event);
tmp_expression_value_42 = var_event;
tmp_attribute_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_is_create);
if (tmp_attribute_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_attribute_value_17);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_17);

exception_lineno = 177;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_18 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_17);
Py_DECREF(tmp_attribute_value_17);
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_26;
nuitka_bool tmp_condition_result_19;
PyObject *tmp_expression_value_43;
PyObject *tmp_attribute_value_18;
int tmp_truth_name_20;
CHECK_OBJECT(var_event);
tmp_expression_value_43 = var_event;
tmp_attribute_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_20 = CHECK_IF_TRUE(tmp_attribute_value_18);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_18);

exception_lineno = 178;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_19 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_18);
Py_DECREF(tmp_attribute_value_18);
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
tmp_assign_source_26 = module_var_accessor_watchdog$observers$inotify$DirCreatedEvent(tstate);
if (unlikely(tmp_assign_source_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirCreatedEvent);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_assign_source_26 = module_var_accessor_watchdog$observers$inotify$FileCreatedEvent(tstate);
if (unlikely(tmp_assign_source_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileCreatedEvent);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_7:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_26);
var_cls = tmp_assign_source_26;
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_44;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_34;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_35;
CHECK_OBJECT(par_self);
tmp_expression_value_44 = par_self;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_30 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_35 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 179;
tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_35);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 179;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 179;
tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_34);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
{
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_45;
PyObject *tmp_call_result_17;
PyObject *tmp_args_element_value_36;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_37;
PyObject *tmp_path_arg_6;
CHECK_OBJECT(par_self);
tmp_expression_value_45 = par_self;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_32 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_31);

exception_lineno = 180;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_6 = var_src_path;
tmp_args_element_value_37 = OS_PATH_DIRNAME(tstate, tmp_path_arg_6);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 180;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 180;
tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_37);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_args_element_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 180;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 180;
tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
goto branch_end_12;
branch_no_12:;
{
nuitka_bool tmp_condition_result_20;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_expression_value_46;
PyObject *tmp_attribute_value_19;
int tmp_truth_name_21;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(var_event);
tmp_expression_value_46 = var_event;
tmp_attribute_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_is_delete_self);
if (tmp_attribute_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_21 = CHECK_IF_TRUE(tmp_attribute_value_19);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_19);

exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_5 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_19);
Py_DECREF(tmp_attribute_value_19);
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_src_path);
tmp_cmp_expr_left_4 = var_src_path;
CHECK_OBJECT(par_self);
tmp_expression_value_48 = par_self;
tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_watch);
if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_20 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_20 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_27;
nuitka_bool tmp_condition_result_21;
PyObject *tmp_expression_value_49;
PyObject *tmp_attribute_value_20;
int tmp_truth_name_22;
CHECK_OBJECT(var_event);
tmp_expression_value_49 = var_event;
tmp_attribute_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_is_directory);
if (tmp_attribute_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_22 = CHECK_IF_TRUE(tmp_attribute_value_20);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_20);

exception_lineno = 182;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_21 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_20);
Py_DECREF(tmp_attribute_value_20);
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
tmp_assign_source_27 = module_var_accessor_watchdog$observers$inotify$DirDeletedEvent(tstate);
if (unlikely(tmp_assign_source_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirDeletedEvent);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_assign_source_27 = module_var_accessor_watchdog$observers$inotify$FileDeletedEvent(tstate);
if (unlikely(tmp_assign_source_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileDeletedEvent);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
condexpr_end_8:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_27);
var_cls = tmp_assign_source_27;
}
{
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_50;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_38;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_39;
CHECK_OBJECT(par_self);
tmp_expression_value_50 = par_self;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_34 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_39 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 183;
tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_39);
if (tmp_args_element_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_33);

exception_lineno = 183;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 183;
tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_38);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_19;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 184;
tmp_call_result_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_stop);
if (tmp_call_result_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_19);
Py_DECREF(tmp_call_result_19);
}
goto branch_end_13;
branch_no_13:;
{
bool tmp_condition_result_22;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(var_event);
tmp_expression_value_51 = var_event;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_is_directory);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_22 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_expression_value_52;
PyObject *tmp_attribute_value_21;
int tmp_truth_name_23;
CHECK_OBJECT(var_event);
tmp_expression_value_52 = var_event;
tmp_attribute_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_is_open);
if (tmp_attribute_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_23 = CHECK_IF_TRUE(tmp_attribute_value_21);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_21);

exception_lineno = 186;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_23 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_21);
Py_DECREF(tmp_attribute_value_21);
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = module_var_accessor_watchdog$observers$inotify$FileOpenedEvent(tstate);
if (unlikely(tmp_assign_source_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileOpenedEvent);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_28);
var_cls = tmp_assign_source_28;
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_53;
PyObject *tmp_call_result_20;
PyObject *tmp_args_element_value_40;
PyObject *tmp_called_value_36;
PyObject *tmp_args_element_value_41;
CHECK_OBJECT(par_self);
tmp_expression_value_53 = par_self;
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_36 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_41 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 188;
tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_41);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_35);

exception_lineno = 188;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 188;
tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_call_result_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_20);
Py_DECREF(tmp_call_result_20);
}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_expression_value_54;
PyObject *tmp_attribute_value_22;
int tmp_truth_name_24;
CHECK_OBJECT(var_event);
tmp_expression_value_54 = var_event;
tmp_attribute_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_is_close_write);
if (tmp_attribute_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_24 = CHECK_IF_TRUE(tmp_attribute_value_22);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_22);

exception_lineno = 189;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_24 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_22);
Py_DECREF(tmp_attribute_value_22);
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = module_var_accessor_watchdog$observers$inotify$FileClosedEvent(tstate);
if (unlikely(tmp_assign_source_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileClosedEvent);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_29);
var_cls = tmp_assign_source_29;
}
{
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_55;
PyObject *tmp_call_result_21;
PyObject *tmp_args_element_value_42;
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_43;
CHECK_OBJECT(par_self);
tmp_expression_value_55 = par_self;
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_38 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_43 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 191;
tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_43);
if (tmp_args_element_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_37);

exception_lineno = 191;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 191;
tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_42);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_call_result_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_21);
Py_DECREF(tmp_call_result_21);
}
{
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_56;
PyObject *tmp_call_result_22;
PyObject *tmp_args_element_value_44;
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_45;
PyObject *tmp_path_arg_7;
CHECK_OBJECT(par_self);
tmp_expression_value_56 = par_self;
tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_40 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_39);

exception_lineno = 192;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_src_path);
tmp_path_arg_7 = var_src_path;
tmp_args_element_value_45 = OS_PATH_DIRNAME(tstate, tmp_path_arg_7);
if (tmp_args_element_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_39);

exception_lineno = 192;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 192;
tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_45);
CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_args_element_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_39);

exception_lineno = 192;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 192;
tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_44);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_call_result_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_22);
Py_DECREF(tmp_call_result_22);
}
goto branch_end_16;
branch_no_16:;
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_expression_value_57;
PyObject *tmp_attribute_value_23;
int tmp_truth_name_25;
CHECK_OBJECT(var_event);
tmp_expression_value_57 = var_event;
tmp_attribute_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_is_close_nowrite);
if (tmp_attribute_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_25 = CHECK_IF_TRUE(tmp_attribute_value_23);
if (tmp_truth_name_25 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_23);

exception_lineno = 193;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_25 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_23);
Py_DECREF(tmp_attribute_value_23);
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = module_var_accessor_watchdog$observers$inotify$FileClosedNoWriteEvent(tstate);
if (unlikely(tmp_assign_source_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileClosedNoWriteEvent);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_30);
var_cls = tmp_assign_source_30;
}
{
PyObject *tmp_called_value_41;
PyObject *tmp_expression_value_58;
PyObject *tmp_call_result_23;
PyObject *tmp_args_element_value_46;
PyObject *tmp_called_value_42;
PyObject *tmp_args_element_value_47;
CHECK_OBJECT(par_self);
tmp_expression_value_58 = par_self;
tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_queue_event);
if (tmp_called_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_cls);
tmp_called_value_42 = var_cls;
CHECK_OBJECT(var_src_path);
tmp_args_element_value_47 = var_src_path;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 195;
tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_47);
if (tmp_args_element_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_41);

exception_lineno = 195;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 195;
tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_46);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_call_result_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_23);
Py_DECREF(tmp_call_result_23);
}
branch_no_17:;
branch_end_16:;
branch_end_15:;
branch_no_14:;
branch_end_13:;
branch_end_12:;
branch_end_11:;
branch_end_10:;
branch_end_9:;
branch_end_6:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__4_queue_events, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__4_queue_events, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
nuitka_bool tmp_assign_source_31;
tmp_assign_source_31 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_31;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_48;
PyObject *tmp_args_element_value_49;
PyObject *tmp_args_element_value_50;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_43 = tmp_with_1__exit;
tmp_args_element_value_48 = EXC_TYPE(tstate);
tmp_args_element_value_49 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_49); 
tmp_args_element_value_50 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_50 == NULL) {
    tmp_args_element_value_50 = Py_None;
}
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 132;
{
    PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_43, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame)) {
        frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_9;
branch_no_19:;
goto branch_end_18;
branch_no_18:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame)) {
        frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_9;
branch_end_18:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_44;
PyObject *tmp_call_result_24;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_44 = tmp_with_1__exit;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 132;
tmp_call_result_24 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_44, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_24);
Py_DECREF(tmp_call_result_24);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_28;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_1__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_28 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_called_value_45;
PyObject *tmp_call_result_25;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_45 = tmp_with_1__exit;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 132;
tmp_call_result_25 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_45, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_25);
Py_DECREF(tmp_call_result_25);
}
branch_no_20:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_29;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_1__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_29 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_29 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_called_value_46;
PyObject *tmp_call_result_26;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_46 = tmp_with_1__exit;
frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame.f_lineno = 132;
tmp_call_result_26 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_46, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_26);
Py_DECREF(tmp_call_result_26);
}
branch_no_21:;
goto try_end_8;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__4_queue_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__4_queue_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__4_queue_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__4_queue_events,
    type_description_1,
    par_self,
    par_timeout,
    par_full_events,
    var_cls,
    var_event,
    var_move_from,
    var_move_to,
    var_src_path,
    var_dest_path,
    var_sub_moved_event,
    var_sub_created_event
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__4_queue_events == cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events);
    cache_frame_frame_watchdog$observers$inotify$$$function__4_queue_events = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__4_queue_events);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_cls);
var_cls = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_move_from);
var_move_from = NULL;
Py_XDECREF(var_move_to);
var_move_to = NULL;
Py_XDECREF(var_src_path);
var_src_path = NULL;
Py_XDECREF(var_dest_path);
var_dest_path = NULL;
Py_XDECREF(var_sub_moved_event);
var_sub_moved_event = NULL;
Py_XDECREF(var_sub_created_event);
var_sub_created_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cls);
var_cls = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_move_from);
var_move_from = NULL;
Py_XDECREF(var_move_to);
var_move_to = NULL;
Py_XDECREF(var_src_path);
var_src_path = NULL;
Py_XDECREF(var_dest_path);
var_dest_path = NULL;
Py_XDECREF(var_sub_moved_event);
var_sub_moved_event = NULL;
Py_XDECREF(var_sub_created_event);
var_sub_created_event = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_full_events);
Py_DECREF(par_full_events);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_full_events);
Py_DECREF(par_full_events);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify$$$function__5__decode_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__5__decode_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path = MAKE_FUNCTION_FRAME(tstate, code_objects_36d336baa9141166d61526cd189e6338, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__5__decode_path = cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__5__decode_path);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__5__decode_path) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_watch);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_path);
tmp_return_value = par_path;
Py_INCREF(tmp_return_value);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_watchdog$observers$inotify$$$function__5__decode_path->m_frame.f_lineno = 199;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fsdecode, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__5__decode_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__5__decode_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__5__decode_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__5__decode_path,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__5__decode_path == cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path);
    cache_frame_frame_watchdog$observers$inotify$$$function__5__decode_path = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__5__decode_path);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_event_mask = NULL;
PyObject *var_cls = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter = MAKE_FUNCTION_FRAME(tstate, code_objects_888cd61b53b7b7910bcaf0b233eb3a60, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter = cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__event_filter);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_IN_DELETE_SELF);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_event_mask == NULL);
var_event_mask = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__event_filter);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 209;
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
    PyObject *old = var_cls;
    var_cls = tmp_assign_source_4;
    Py_INCREF(var_cls);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_set_element_1;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_2 = var_cls;
tmp_set_element_1 = module_var_accessor_watchdog$observers$inotify$DirMovedEvent(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirMovedEvent);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = PySet_New(NULL);
assert(tmp_cmp_expr_right_2);
tmp_res = PySet_Add(tmp_cmp_expr_right_2, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_2);

exception_lineno = 210;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_set_element_1 = module_var_accessor_watchdog$observers$inotify$FileMovedEvent(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileMovedEvent);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_right_2);

exception_lineno = 210;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Add(tmp_cmp_expr_right_2, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_2);

exception_lineno = 210;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_expression_value_4;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_1 = var_event_mask;
tmp_expression_value_4 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_IN_MOVE);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = tmp_ibitor_expr_left_1;
var_event_mask = tmp_assign_source_5;

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_set_element_2;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_3 = var_cls;
tmp_set_element_2 = module_var_accessor_watchdog$observers$inotify$DirCreatedEvent(tstate);
if (unlikely(tmp_set_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirCreatedEvent);
}

if (tmp_set_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = PySet_New(NULL);
assert(tmp_cmp_expr_right_3);
tmp_res = PySet_Add(tmp_cmp_expr_right_3, tmp_set_element_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_3);

exception_lineno = 212;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_set_element_2 = module_var_accessor_watchdog$observers$inotify$FileCreatedEvent(tstate);
if (unlikely(tmp_set_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileCreatedEvent);
}

if (tmp_set_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_right_3);

exception_lineno = 212;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Add(tmp_cmp_expr_right_3, tmp_set_element_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_3);

exception_lineno = 212;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_2 = var_event_mask;
tmp_expression_value_5 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_IN_MOVE);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_IN_CREATE);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_ibitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
CHECK_OBJECT(tmp_ibitor_expr_right_2);
Py_DECREF(tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = tmp_ibitor_expr_left_2;
var_event_mask = tmp_assign_source_6;

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_4 = var_cls;
tmp_cmp_expr_right_4 = module_var_accessor_watchdog$observers$inotify$DirModifiedEvent(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ibitor_expr_left_3;
PyObject *tmp_ibitor_expr_right_3;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_bitor_expr_left_3;
PyObject *tmp_bitor_expr_right_3;
PyObject *tmp_bitor_expr_left_4;
PyObject *tmp_bitor_expr_right_4;
PyObject *tmp_bitor_expr_left_5;
PyObject *tmp_bitor_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 215;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_3 = var_event_mask;
tmp_expression_value_7 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_IN_MOVE);
if (tmp_bitor_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_8 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_5);

exception_lineno = 217;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_IN_ATTRIB);
if (tmp_bitor_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_5);

exception_lineno = 217;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
CHECK_OBJECT(tmp_bitor_expr_left_5);
Py_DECREF(tmp_bitor_expr_left_5);
CHECK_OBJECT(tmp_bitor_expr_right_5);
Py_DECREF(tmp_bitor_expr_right_5);
if (tmp_bitor_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_9 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_4);

exception_lineno = 218;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_IN_MODIFY);
if (tmp_bitor_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_4);

exception_lineno = 218;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
CHECK_OBJECT(tmp_bitor_expr_left_4);
Py_DECREF(tmp_bitor_expr_left_4);
CHECK_OBJECT(tmp_bitor_expr_right_4);
Py_DECREF(tmp_bitor_expr_right_4);
if (tmp_bitor_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 219;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_IN_CREATE);
if (tmp_bitor_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 219;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
CHECK_OBJECT(tmp_bitor_expr_left_3);
Py_DECREF(tmp_bitor_expr_left_3);
CHECK_OBJECT(tmp_bitor_expr_right_3);
Py_DECREF(tmp_bitor_expr_right_3);
if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_11 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 220;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_IN_CLOSE_WRITE);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 220;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_ibitor_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_3, tmp_ibitor_expr_right_3);
CHECK_OBJECT(tmp_ibitor_expr_right_3);
Py_DECREF(tmp_ibitor_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_ibitor_expr_left_3;
var_event_mask = tmp_assign_source_7;

}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_5 = var_cls;
tmp_cmp_expr_right_5 = module_var_accessor_watchdog$observers$inotify$FileModifiedEvent(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileModifiedEvent);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_ibitor_expr_left_4;
PyObject *tmp_ibitor_expr_right_4;
PyObject *tmp_bitor_expr_left_6;
PyObject *tmp_bitor_expr_right_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_4 = var_event_mask;
tmp_expression_value_12 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_IN_ATTRIB);
if (tmp_bitor_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_13 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_6);

exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_IN_MODIFY);
if (tmp_bitor_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_6);

exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
CHECK_OBJECT(tmp_bitor_expr_left_6);
Py_DECREF(tmp_bitor_expr_left_6);
CHECK_OBJECT(tmp_bitor_expr_right_6);
Py_DECREF(tmp_bitor_expr_right_6);
if (tmp_ibitor_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_4, tmp_ibitor_expr_right_4);
CHECK_OBJECT(tmp_ibitor_expr_right_4);
Py_DECREF(tmp_ibitor_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = tmp_ibitor_expr_left_4;
var_event_mask = tmp_assign_source_8;

}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_set_element_3;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_6 = var_cls;
tmp_set_element_3 = module_var_accessor_watchdog$observers$inotify$DirDeletedEvent(tstate);
if (unlikely(tmp_set_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirDeletedEvent);
}

if (tmp_set_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_6 = PySet_New(NULL);
assert(tmp_cmp_expr_right_6);
tmp_res = PySet_Add(tmp_cmp_expr_right_6, tmp_set_element_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_6);

exception_lineno = 224;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_set_element_3 = module_var_accessor_watchdog$observers$inotify$FileDeletedEvent(tstate);
if (unlikely(tmp_set_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileDeletedEvent);
}

if (tmp_set_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_right_6);

exception_lineno = 224;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Add(tmp_cmp_expr_right_6, tmp_set_element_3);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_right_6);

exception_lineno = 224;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_res = PySet_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ibitor_expr_left_5;
PyObject *tmp_ibitor_expr_right_5;
PyObject *tmp_expression_value_14;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_5 = var_event_mask;
tmp_expression_value_14 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_IN_DELETE);
if (tmp_ibitor_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_5, tmp_ibitor_expr_right_5);
CHECK_OBJECT(tmp_ibitor_expr_right_5);
Py_DECREF(tmp_ibitor_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_ibitor_expr_left_5;
var_event_mask = tmp_assign_source_9;

}
goto branch_end_6;
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_7 = var_cls;
tmp_cmp_expr_right_7 = module_var_accessor_watchdog$observers$inotify$FileClosedEvent(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileClosedEvent);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitor_expr_left_6;
PyObject *tmp_ibitor_expr_right_6;
PyObject *tmp_expression_value_15;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_6 = var_event_mask;
tmp_expression_value_15 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_IN_CLOSE_WRITE);
if (tmp_ibitor_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_6, tmp_ibitor_expr_right_6);
CHECK_OBJECT(tmp_ibitor_expr_right_6);
Py_DECREF(tmp_ibitor_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_ibitor_expr_left_6;
var_event_mask = tmp_assign_source_10;

}
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_8 = var_cls;
tmp_cmp_expr_right_8 = module_var_accessor_watchdog$observers$inotify$FileClosedNoWriteEvent(tstate);
if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileClosedNoWriteEvent);
}

if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_ibitor_expr_left_7;
PyObject *tmp_ibitor_expr_right_7;
PyObject *tmp_expression_value_16;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_7 = var_event_mask;
tmp_expression_value_16 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_IN_CLOSE_NOWRITE);
if (tmp_ibitor_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_7, tmp_ibitor_expr_right_7);
CHECK_OBJECT(tmp_ibitor_expr_right_7);
Py_DECREF(tmp_ibitor_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_11 = tmp_ibitor_expr_left_7;
var_event_mask = tmp_assign_source_11;

}
goto branch_end_8;
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_cls);
tmp_cmp_expr_left_9 = var_cls;
tmp_cmp_expr_right_9 = module_var_accessor_watchdog$observers$inotify$FileOpenedEvent(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileOpenedEvent);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_9 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_ibitor_expr_left_8;
PyObject *tmp_ibitor_expr_right_8;
PyObject *tmp_expression_value_17;
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_ibitor_expr_left_8 = var_event_mask;
tmp_expression_value_17 = module_var_accessor_watchdog$observers$inotify$InotifyConstants(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyConstants);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_IN_OPEN);
if (tmp_ibitor_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_8, tmp_ibitor_expr_right_8);
CHECK_OBJECT(tmp_ibitor_expr_right_8);
Py_DECREF(tmp_ibitor_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_12 = tmp_ibitor_expr_left_8;
var_event_mask = tmp_assign_source_12;

}
branch_no_9:;
branch_end_8:;
branch_end_7:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
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
if (var_event_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_event_mask;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter,
    type_description_1,
    par_self,
    var_event_mask,
    var_cls
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter == cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter);
    cache_frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_event_mask);
var_event_mask = NULL;
Py_XDECREF(var_cls);
var_cls = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_event_mask);
var_event_mask = NULL;
Py_XDECREF(var_cls);
var_cls = NULL;
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


static PyObject *impl_watchdog$observers$inotify$$$function__7_queue_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_events = python_pars[2];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__7_queue_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events = MAKE_FUNCTION_FRAME(tstate, code_objects_02a23f33c6133393bfbb0cd3fa673414, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__7_queue_events = cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__7_queue_events);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__7_queue_events) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 242;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_watchdog$observers$inotify, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_queue_events);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_arg_value_0_1 = par_timeout;
CHECK_OBJECT(par_events);
tmp_kw_call_dict_value_0_1 = par_events;
frame_frame_watchdog$observers$inotify$$$function__7_queue_events->m_frame.f_lineno = 242;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_full_events_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__7_queue_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__7_queue_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__7_queue_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__7_queue_events,
    type_description_1,
    par_self,
    par_timeout,
    par_events,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__7_queue_events == cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events);
    cache_frame_frame_watchdog$observers$inotify$$$function__7_queue_events = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__7_queue_events);

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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_events);
Py_DECREF(par_events);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_events);
Py_DECREF(par_events);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$inotify$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_generate_full_events = python_pars[2];
PyObject *var_cls = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$inotify$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$inotify$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$inotify$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$inotify$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$inotify$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3204a5d8b949629f7865ba923cfd66c4, module_watchdog$observers$inotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$inotify$$$function__8___init__->m_type_description == NULL);
frame_frame_watchdog$observers$inotify$$$function__8___init__ = cache_frame_frame_watchdog$observers$inotify$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$function__8___init__);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_generate_full_events);
tmp_truth_name_1 = CHECK_IF_TRUE(par_generate_full_events);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = module_var_accessor_watchdog$observers$inotify$InotifyFullEmitter(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyFullEmitter);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = module_var_accessor_watchdog$observers$inotify$InotifyEmitter(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyEmitter);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_cls == NULL);
Py_INCREF(tmp_assign_source_1);
var_cls = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_watchdog$observers$inotify, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cls);
tmp_kw_call_arg_value_0_1 = var_cls;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_0_1 = par_timeout;
frame_frame_watchdog$observers$inotify$$$function__8___init__->m_frame.f_lineno = 252;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$function__8___init__,
    type_description_1,
    par_self,
    par_timeout,
    par_generate_full_events,
    var_cls,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$inotify$$$function__8___init__ == cache_frame_frame_watchdog$observers$inotify$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$inotify$$$function__8___init__);
    cache_frame_frame_watchdog$observers$inotify$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$inotify$$$function__8___init__);

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
CHECK_OBJECT(var_cls);
CHECK_OBJECT(var_cls);
Py_DECREF(var_cls);
var_cls = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cls);
var_cls = NULL;
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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_generate_full_events);
Py_DECREF(par_generate_full_events);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_generate_full_events);
Py_DECREF(par_generate_full_events);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f680670f5144beea5b68088381d5a6eb,
#endif
        code_objects_b39f17c8264b52bf71d3d193b38fbc70,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__2_on_thread_start(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__2_on_thread_start,
        mod_consts.const_str_plain_on_thread_start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a96c65e9cb3ea5c77f845fa331f7361,
#endif
        code_objects_84529527a7009064c17d5c183bf7aa7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__3_on_thread_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__3_on_thread_stop,
        mod_consts.const_str_plain_on_thread_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ccffdad43dbf9c4c9ec05d65d8840a10,
#endif
        code_objects_2092753e90df0ed9ca0de4800555bb93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__4_queue_events(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__4_queue_events,
        mod_consts.const_str_plain_queue_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c9f67abe89d828df8a1e4698008b3b7,
#endif
        code_objects_b13bbfeb005f5a95b6ead73814d9f0d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__5__decode_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__5__decode_path,
        mod_consts.const_str_plain__decode_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7aeaeab201cb0fc04ca6ad7a4460569,
#endif
        code_objects_36d336baa9141166d61526cd189e6338,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify,
        mod_consts.const_str_digest_ae1a5ec3153a978b3c4063af364306ba,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter,
        mod_consts.const_str_plain_get_event_mask_from_filter,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_35593745e97a8568d1dee133fbca2ec8,
#endif
        code_objects_888cd61b53b7b7910bcaf0b233eb3a60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$inotify,
        mod_consts.const_str_digest_b0400011e36fbdd8fb3bc240d436cf68,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__7_queue_events(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__7_queue_events,
        mod_consts.const_str_plain_queue_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d26168c59dfe09b0c613365957abe2f,
#endif
        code_objects_02a23f33c6133393bfbb0cd3fa673414,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$inotify$$$function__8___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$inotify$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d79759c7aef46a6b44b71443bbfd540,
#endif
        code_objects_3204a5d8b949629f7865ba923cfd66c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$observers$inotify,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_watchdog$observers$inotify[] = {
impl_watchdog$observers$inotify$$$function__1___init__,
impl_watchdog$observers$inotify$$$function__2_on_thread_start,
impl_watchdog$observers$inotify$$$function__3_on_thread_stop,
impl_watchdog$observers$inotify$$$function__4_queue_events,
impl_watchdog$observers$inotify$$$function__5__decode_path,
impl_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter,
impl_watchdog$observers$inotify$$$function__7_queue_events,
impl_watchdog$observers$inotify$$$function__8___init__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$observers$inotify);
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
        module_watchdog$observers$inotify,
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
        function_table_watchdog$observers$inotify,
        sizeof(function_table_watchdog$observers$inotify) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.observers.inotify";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$observers$inotify(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$observers$inotify");

    // Store the module for future use.
    module_watchdog$observers$inotify = module;

    moduledict_watchdog$observers$inotify = MODULE_DICT(module_watchdog$observers$inotify);

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
        PRINT_STRING("watchdog$observers$inotify: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$observers$inotify: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$observers$inotify: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.inotify" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$observers$inotify\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$observers$inotify,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$inotify,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$inotify,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$inotify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$inotify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$observers$inotify);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$observers$inotify);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_ea5c7d4c2f1e1262ab99c821efcf9435;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$observers$inotify = MAKE_MODULE_FRAME(code_objects_5a1dbff2e41725ef19afb559b25eff9f, module_watchdog$observers$inotify);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$observers$inotify$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$observers$inotify$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 54;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_2 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 56;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b959d08b6a3118dc1f467343599e6279;
tmp_globals_arg_value_3 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_f2f97a7ae3ce9653ddf348e145da4bbb_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 59;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DirCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_DirCreatedEvent);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirCreatedEvent, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DirDeletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_DirDeletedEvent);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirDeletedEvent, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DirModifiedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_DirModifiedEvent);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirModifiedEvent, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DirMovedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_DirMovedEvent);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DirMovedEvent, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileClosedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_FileClosedEvent);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedEvent, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileClosedNoWriteEvent,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_FileClosedNoWriteEvent);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileClosedNoWriteEvent, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_FileCreatedEvent);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileCreatedEvent, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileDeletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_FileDeletedEvent);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileDeletedEvent, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileModifiedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_FileModifiedEvent);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModifiedEvent, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileMovedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_FileMovedEvent);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileMovedEvent, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileOpenedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_FileOpenedEvent);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileOpenedEvent, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_FileSystemEvent,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_FileSystemEvent);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_FileSystemEvent, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_generate_sub_created_events,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_generate_sub_created_events);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_created_events, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_generate_sub_moved_events,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_generate_sub_moved_events);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_sub_moved_events, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_ea15f84576b1dd4366beab399b51658c;
tmp_globals_arg_value_4 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_0d4141009deb9a27a6b8d750b79c49c1_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 75;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_BaseObserver,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_BaseObserver);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseObserver, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_EventEmitter,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_EventEmitter);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_EventEmitter, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_2441f2ba4133a8a65cb1693f97a8d165;
tmp_globals_arg_value_5 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_InotifyBuffer_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 76;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_InotifyBuffer,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_InotifyBuffer);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyBuffer, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_98d6f66d16cc5261207f25b9f327a01a;
tmp_globals_arg_value_6 = (PyObject *)moduledict_watchdog$observers$inotify;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_InotifyConstants_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 77;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_watchdog$observers$inotify,
        mod_consts.const_str_plain_InotifyConstants,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_InotifyConstants);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyConstants, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$inotify$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 82;
tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_37f230a661bf6c16935c40f92472c005_tuple, 0)
);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_31);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_watchdog$observers$inotify$EventEmitter(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EventEmitter);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto try_except_handler_3;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
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


exception_lineno = 85;

    goto try_except_handler_3;
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


exception_lineno = 85;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_35;
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


exception_lineno = 85;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_36;
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


exception_lineno = 85;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_InotifyEmitter;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 85;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
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


exception_lineno = 85;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
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


exception_lineno = 85;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_3;
}
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 85;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
}
branch_end_1:;
{
PyObject *tmp_assign_source_38;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_12132d81395c931f61a9a8d241c30064;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_InotifyEmitter;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2 = MAKE_CLASS_FRAME(tstate, code_objects_e5d7f0e1ab6f3bc39c303ff22da7f4b0, module_watchdog$observers$inotify, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = PyObject_GetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_watchdog$observers$inotify$DEFAULT_EMITTER_TIMEOUT(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_EMITTER_TIMEOUT);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_event_filter;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c72e4bd1cfefe684fdf70b267bd0ad7a);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__2_on_thread_start(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain_on_thread_start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__3_on_thread_stop(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain_on_thread_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_4;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_3ad8c3c1bb416bf027d8a2a289f56dfa);
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_55a3d083c63fd933fa7aa7bbd28112f5);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__4_queue_events(tstate, tmp_kw_defaults_2, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain_queue_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e108dbbabc01ce8f4a298cd3f762d778);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__5__decode_path(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain__decode_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);

tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__6_get_event_mask_from_filter(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain_get_event_mask_from_filter, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$inotify$$$class__1_InotifyEmitter_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__lock_str_plain__inotify_tuple;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
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


exception_lineno = 85;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_InotifyEmitter;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 85;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_5;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_39);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_38 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85);
locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85);
locals_watchdog$observers$inotify$$$class__1_InotifyEmitter_85 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 85;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyEmitter, tmp_assign_source_38);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_watchdog$observers$inotify$InotifyEmitter(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InotifyEmitter);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_InotifyFullEmitter;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 236;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_6;
}
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 236;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 236;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
branch_end_4:;
{
PyObject *tmp_assign_source_46;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_35fca918c29eb6ab26c3a86e022681e4;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_InotifyFullEmitter;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_236;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3 = MAKE_CLASS_FRAME(tstate, code_objects_a5aded368a8bc3f61fb5181de26155b0, module_watchdog$observers$inotify, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_7;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_ee5a7e9b10e19088f43ac24e9dbe6aad);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_bf36ff56a317e3c718060f20c391c07b);
tmp_closure_2[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__7_queue_events(tstate, tmp_kw_defaults_3, tmp_annotations_7, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, mod_consts.const_str_plain_queue_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_InotifyFullEmitter;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 236;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;

    goto try_except_handler_8;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_47);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_46 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236);
locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236);
locals_watchdog$observers$inotify$$$class__2_InotifyFullEmitter_236 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 236;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyFullEmitter, tmp_assign_source_46);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
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
PyObject *tmp_assign_source_48;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_watchdog$observers$inotify$BaseObserver(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseObserver);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_assign_source_48 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_49 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_51 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_51;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_InotifyObserver;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 245;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_52;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_9, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_9;
}
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 245;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 245;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_53;
}
branch_end_7:;
{
PyObject *tmp_assign_source_54;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_37f230a661bf6c16935c40f92472c005;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_8503b8306581fe21ebf94456d7ca721f;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_InotifyObserver;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_245;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4 = MAKE_CLASS_FRAME(tstate, code_objects_83b994eca81a3ef5246821a45660b448, module_watchdog$observers$inotify, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4);
assert(Py_REFCNT(frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = PyObject_GetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_watchdog$observers$inotify$DEFAULT_OBSERVER_TIMEOUT(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_OBSERVER_TIMEOUT);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_kw_defaults_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_generate_full_events;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8ce5a89d11634fd12328ea5194bef73);
tmp_closure_3[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_watchdog$observers$inotify$$$function__8___init__(tstate, tmp_kw_defaults_4, tmp_annotations_8, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$inotify$$$class__3_InotifyObserver_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_InotifyObserver;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_watchdog$observers$inotify->m_frame.f_lineno = 245;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto try_except_handler_11;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_55);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_54 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_54);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245);
locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245);
locals_watchdog$observers$inotify$$$class__3_InotifyObserver_245 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 245;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)mod_consts.const_str_plain_InotifyObserver, tmp_assign_source_54);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$inotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$inotify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$inotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$observers$inotify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$observers$inotify", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.inotify" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$observers$inotify);
    return module_watchdog$observers$inotify;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$inotify, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$observers$inotify", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

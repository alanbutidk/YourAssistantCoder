/* Generated code for Python module 'textual$drivers$_writer_thread'
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



/* The "module_textual$drivers$_writer_thread" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$drivers$_writer_thread;
PyDictObject *moduledict_textual$drivers$_writer_thread;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_true_str_digest_8a8a41b2c36c4ce0d50455a2a7f24b80_tuple;
PyObject *const_tuple_str_plain_daemon_str_plain_name_tuple;
PyObject *const_str_plain_Queue;
PyObject *const_str_plain_MAX_QUEUED_WRITES;
PyObject *const_str_plain__queue;
PyObject *const_str_plain__file;
PyObject *const_str_plain_put;
PyObject *const_str_digest_3dd950b5a634862445ffa072e1b6e1d2;
PyObject *const_str_digest_d4d682d29773275767ef9fae81798046;
PyObject *const_str_plain_write;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_qsize;
PyObject *const_str_digest_eea7005cc2be7f4532dabb19e92aafed;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_join;
PyObject *const_str_digest_b80ccbacded65e5d859860c337b838d5;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_queue;
PyObject *const_tuple_str_plain_Queue_tuple;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Final_tuple;
PyObject *const_str_plain_Final;
PyObject *const_int_pos_30;
PyObject *const_str_digest_728572520be1b5247d40e4261f8af6f6;
PyObject *const_str_plain_Thread;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_WriterThread;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_69bf1b69ec8e9f399deaeb53a42cefbd;
PyObject *const_str_digest_ccf8e5831210ba05bd1d8b6d44cfa6e9;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_12;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_68914e3bdc3213ef82bfddecdf1906ad;
PyObject *const_str_digest_6b013127cfa3d2213d0694f075eeb23e;
PyObject *const_dict_df05d742a8dbb0b86f60b40616eaa1e9;
PyObject *const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_2d429449a07bcaa8a1f0053a91917c8f;
PyObject *const_str_plain_isatty;
PyObject *const_str_digest_837ec1e6838f00784101bda03bffefde;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_0e605dce261c2b82d358c5692741e7a2;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_1374fad1b600fcc799a658a6592c88f6;
PyObject *const_str_digest_027cad08106191f5c465b3e310cb48c8;
PyObject *const_str_plain_run;
PyObject *const_str_digest_b2d999ba9da1bb6d0010beda9aa84477;
PyObject *const_str_plain_stop;
PyObject *const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786;
PyObject *const_tuple_str_plain__queue_str_plain__file_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_17ba8fa84a7e1538739983a5c99d233a;
PyObject *const_str_digest_2a2e7153b242a0c0dbe6021498b017e8;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_file_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_8bb33b5e5c466d7c06343891f077ed6e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.drivers._writer_thread"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_true_str_digest_8a8a41b2c36c4ce0d50455a2a7f24b80_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_daemon_str_plain_name_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Queue);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_QUEUED_WRITES);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__queue);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__file);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dd950b5a634862445ffa072e1b6e1d2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d682d29773275767ef9fae81798046);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_qsize);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_eea7005cc2be7f4532dabb19e92aafed);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_b80ccbacded65e5d859860c337b838d5);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Queue_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Final_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Final);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_728572520be1b5247d40e4261f8af6f6);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thread);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriterThread);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_69bf1b69ec8e9f399deaeb53a42cefbd);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccf8e5831210ba05bd1d8b6d44cfa6e9);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_68914e3bdc3213ef82bfddecdf1906ad);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b013127cfa3d2213d0694f075eeb23e);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d429449a07bcaa8a1f0053a91917c8f);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_isatty);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_837ec1e6838f00784101bda03bffefde);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e605dce261c2b82d358c5692741e7a2);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_1374fad1b600fcc799a658a6592c88f6);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_027cad08106191f5c465b3e310cb48c8);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2d999ba9da1bb6d0010beda9aa84477);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__queue_str_plain__file_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_17ba8fa84a7e1538739983a5c99d233a);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a2e7153b242a0c0dbe6021498b017e8);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain___class___tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_8bb33b5e5c466d7c06343891f077ed6e_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
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
void checkModuleConstants_textual$drivers$_writer_thread(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_true_str_digest_8a8a41b2c36c4ce0d50455a2a7f24b80_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_str_digest_8a8a41b2c36c4ce0d50455a2a7f24b80_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_daemon_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_daemon_str_plain_name_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Queue);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_QUEUED_WRITES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_QUEUED_WRITES);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__queue);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__file);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_put));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_put);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dd950b5a634862445ffa072e1b6e1d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dd950b5a634862445ffa072e1b6e1d2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d682d29773275767ef9fae81798046));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4d682d29773275767ef9fae81798046);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_qsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_qsize);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_eea7005cc2be7f4532dabb19e92aafed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eea7005cc2be7f4532dabb19e92aafed);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_b80ccbacded65e5d859860c337b838d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b80ccbacded65e5d859860c337b838d5);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Queue_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Queue_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Final_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Final_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Final);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_30));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_30);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_728572520be1b5247d40e4261f8af6f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_728572520be1b5247d40e4261f8af6f6);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Thread);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriterThread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriterThread);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_69bf1b69ec8e9f399deaeb53a42cefbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69bf1b69ec8e9f399deaeb53a42cefbd);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccf8e5831210ba05bd1d8b6d44cfa6e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccf8e5831210ba05bd1d8b6d44cfa6e9);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_68914e3bdc3213ef82bfddecdf1906ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68914e3bdc3213ef82bfddecdf1906ad);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b013127cfa3d2213d0694f075eeb23e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b013127cfa3d2213d0694f075eeb23e);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d429449a07bcaa8a1f0053a91917c8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d429449a07bcaa8a1f0053a91917c8f);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_isatty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isatty);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_837ec1e6838f00784101bda03bffefde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_837ec1e6838f00784101bda03bffefde);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e605dce261c2b82d358c5692741e7a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e605dce261c2b82d358c5692741e7a2);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_1374fad1b600fcc799a658a6592c88f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1374fad1b600fcc799a658a6592c88f6);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_027cad08106191f5c465b3e310cb48c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_027cad08106191f5c465b3e310cb48c8);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2d999ba9da1bb6d0010beda9aa84477));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2d999ba9da1bb6d0010beda9aa84477);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__queue_str_plain__file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__queue_str_plain__file_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_17ba8fa84a7e1538739983a5c99d233a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17ba8fa84a7e1538739983a5c99d233a);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a2e7153b242a0c0dbe6021498b017e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a2e7153b242a0c0dbe6021498b017e8);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain___class___tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_8bb33b5e5c466d7c06343891f077ed6e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8bb33b5e5c466d7c06343891f077ed6e_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
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
static PyObject *module_var_accessor_textual$drivers$_writer_thread$MAX_QUEUED_WRITES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$_writer_thread->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$_writer_thread->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_QUEUED_WRITES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$_writer_thread->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_QUEUED_WRITES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_QUEUED_WRITES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_QUEUED_WRITES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_QUEUED_WRITES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_QUEUED_WRITES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_QUEUED_WRITES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_QUEUED_WRITES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$_writer_thread$Queue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$_writer_thread->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$_writer_thread->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_Queue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$_writer_thread->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Queue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Queue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Queue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Queue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_Queue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_Queue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Queue);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$_writer_thread$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$_writer_thread->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$_writer_thread->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$_writer_thread->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$_writer_thread$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$_writer_thread->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$_writer_thread->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$_writer_thread->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$_writer_thread$threading(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$_writer_thread->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$_writer_thread->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$_writer_thread->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_725e5d4b976e405ae41cc6040a5860de;
static PyCodeObject *code_objects_812884c2e61e63ffca3118d26380c503;
static PyCodeObject *code_objects_d15d470e34894a0a46008fed414c1264;
static PyCodeObject *code_objects_61faae6ed67b7d8880577339ac3f2b91;
static PyCodeObject *code_objects_9714de6920d9936af7f17ceaeb959f98;
static PyCodeObject *code_objects_6f2a75eede8b26b11843cc958a5eb5d2;
static PyCodeObject *code_objects_e4a05fa7aaf76b14e6745ea697eca936;
static PyCodeObject *code_objects_28f695e5fe0dfae18a5feca5220732bd;
static PyCodeObject *code_objects_efc974589b3b845ce5a6b069a15b47e7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_17ba8fa84a7e1538739983a5c99d233a); CHECK_OBJECT(module_filename_obj);
code_objects_725e5d4b976e405ae41cc6040a5860de = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2a2e7153b242a0c0dbe6021498b017e8, mod_consts.const_str_digest_2a2e7153b242a0c0dbe6021498b017e8, NULL, NULL, 0, 0, 0);
code_objects_812884c2e61e63ffca3118d26380c503 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WriterThread, mod_consts.const_str_plain_WriterThread, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d15d470e34894a0a46008fed414c1264 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6b013127cfa3d2213d0694f075eeb23e, mod_consts.const_tuple_str_plain_self_str_plain_file_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_61faae6ed67b7d8880577339ac3f2b91 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_fileno, mod_consts.const_str_digest_0e605dce261c2b82d358c5692741e7a2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9714de6920d9936af7f17ceaeb959f98 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_flush, mod_consts.const_str_digest_027cad08106191f5c465b3e310cb48c8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6f2a75eede8b26b11843cc958a5eb5d2 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_isatty, mod_consts.const_str_digest_837ec1e6838f00784101bda03bffefde, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e4a05fa7aaf76b14e6745ea697eca936 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_b2d999ba9da1bb6d0010beda9aa84477, mod_consts.const_tuple_8bb33b5e5c466d7c06343891f077ed6e_tuple, NULL, 1, 0, 0);
code_objects_28f695e5fe0dfae18a5feca5220732bd = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stop, mod_consts.const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_efc974589b3b845ce5a6b069a15b47e7 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__2_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__3_isatty(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__4_fileno(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__5_flush(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__6_run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__7_stop(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$drivers$_writer_thread$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d15d470e34894a0a46008fed414c1264, module_textual$drivers$_writer_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$drivers$_writer_thread$$$function__1___init__ = cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$drivers$_writer_thread, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$_writer_thread$$$function__1___init__->m_frame.f_lineno = 16;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_str_digest_8a8a41b2c36c4ce0d50455a2a7f24b80_tuple, 0), mod_consts.const_tuple_str_plain_daemon_str_plain_name_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_value_2 = module_var_accessor_textual$drivers$_writer_thread$Queue(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Queue);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_textual$drivers$_writer_thread$MAX_QUEUED_WRITES(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_QUEUED_WRITES);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$_writer_thread$$$function__1___init__->m_frame.f_lineno = 17;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooc";
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


exception_lineno = 17;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_file);
tmp_assattr_value_2 = par_file;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__file, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$function__1___init__,
    type_description_1,
    par_self,
    par_file,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$_writer_thread$$$function__1___init__ == cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__);
    cache_frame_frame_textual$drivers$_writer_thread$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$function__1___init__);

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
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$_writer_thread$$$function__2_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$function__2_write;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write = MAKE_FUNCTION_FRAME(tstate, code_objects_efc974589b3b845ce5a6b069a15b47e7, module_textual$drivers$_writer_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write->m_type_description == NULL);
frame_frame_textual$drivers$_writer_thread$$$function__2_write = cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$function__2_write);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$function__2_write) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__queue);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_text);
tmp_args_element_value_1 = par_text;
frame_frame_textual$drivers$_writer_thread$$$function__2_write->m_frame.f_lineno = 26;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_put, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$function__2_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$function__2_write->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$function__2_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$function__2_write,
    type_description_1,
    par_self,
    par_text
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$_writer_thread$$$function__2_write == cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write);
    cache_frame_frame_textual$drivers$_writer_thread$$$function__2_write = NULL;
}

assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$function__2_write);

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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$_writer_thread$$$function__4_fileno(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$function__4_fileno;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno = MAKE_FUNCTION_FRAME(tstate, code_objects_61faae6ed67b7d8880577339ac3f2b91, module_textual$drivers$_writer_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno->m_type_description == NULL);
frame_frame_textual$drivers$_writer_thread$$$function__4_fileno = cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$function__4_fileno);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$function__4_fileno) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__file);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$_writer_thread$$$function__4_fileno->m_frame.f_lineno = 42;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$function__4_fileno, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$function__4_fileno->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$function__4_fileno, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$function__4_fileno,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$_writer_thread$$$function__4_fileno == cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno);
    cache_frame_frame_textual$drivers$_writer_thread$$$function__4_fileno = NULL;
}

assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$function__4_fileno);

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


static PyObject *impl_textual$drivers$_writer_thread$$$function__6_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_text = NULL;
PyObject *var_write = NULL;
PyObject *var_flush = NULL;
PyObject *var_get = NULL;
PyObject *var_qsize = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$function__6_run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run = MAKE_FUNCTION_FRAME(tstate, code_objects_e4a05fa7aaf76b14e6745ea697eca936, module_textual$drivers$_writer_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_type_description == NULL);
frame_frame_textual$drivers$_writer_thread$$$function__6_run = cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$function__6_run);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$function__6_run) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__file);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_write == NULL);
var_write = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__file);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_flush);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_flush == NULL);
var_flush = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__queue);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_get == NULL);
var_get = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__queue);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_qsize);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_qsize == NULL);
var_qsize = tmp_assign_source_4;
}
loop_start_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
if (var_get == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_get);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = var_get;
frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame.f_lineno = 57;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_text);
tmp_cmp_expr_left_1 = var_text;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (var_write == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_write);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = var_write;
CHECK_OBJECT(var_text);
tmp_args_element_value_1 = var_text;
frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame.f_lineno = 60;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
if (var_qsize == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_qsize);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = var_qsize;
frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame.f_lineno = 61;
tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
if (var_flush == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_flush);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_4 = var_flush;
frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame.f_lineno = 62;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_3;
if (var_flush == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_flush);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_5 = var_flush;
frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame.f_lineno = 63;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$function__6_run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$function__6_run,
    type_description_1,
    par_self,
    var_text,
    var_write,
    var_flush,
    var_get,
    var_qsize
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$_writer_thread$$$function__6_run == cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run);
    cache_frame_frame_textual$drivers$_writer_thread$$$function__6_run = NULL;
}

assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$function__6_run);

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
CHECK_OBJECT(var_text);
CHECK_OBJECT(var_text);
Py_DECREF(var_text);
var_text = NULL;
Py_XDECREF(var_write);
var_write = NULL;
Py_XDECREF(var_flush);
var_flush = NULL;
Py_XDECREF(var_get);
var_get = NULL;
Py_XDECREF(var_qsize);
var_qsize = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_write);
var_write = NULL;
Py_XDECREF(var_flush);
var_flush = NULL;
Py_XDECREF(var_get);
var_get = NULL;
Py_XDECREF(var_qsize);
var_qsize = NULL;
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


static PyObject *impl_textual$drivers$_writer_thread$$$function__7_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$function__7_stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop = MAKE_FUNCTION_FRAME(tstate, code_objects_28f695e5fe0dfae18a5feca5220732bd, module_textual$drivers$_writer_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop->m_type_description == NULL);
frame_frame_textual$drivers$_writer_thread$$$function__7_stop = cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$function__7_stop);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$function__7_stop) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__queue);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$_writer_thread$$$function__7_stop->m_frame.f_lineno = 67;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_put,
    PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$_writer_thread$$$function__7_stop->m_frame.f_lineno = 68;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$function__7_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$function__7_stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$function__7_stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$function__7_stop,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$_writer_thread$$$function__7_stop == cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop);
    cache_frame_frame_textual$drivers$_writer_thread$$$function__7_stop = NULL;
}

assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$function__7_stop);

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



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$_writer_thread$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b013127cfa3d2213d0694f075eeb23e,
#endif
        code_objects_d15d470e34894a0a46008fed414c1264,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__2_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$_writer_thread$$$function__2_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7cb43b20846bbe17f4d8f985a880c8f3,
#endif
        code_objects_efc974589b3b845ce5a6b069a15b47e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_3dd950b5a634862445ffa072e1b6e1d2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__3_isatty(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_isatty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_837ec1e6838f00784101bda03bffefde,
#endif
        code_objects_6f2a75eede8b26b11843cc958a5eb5d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_2d429449a07bcaa8a1f0053a91917c8f,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__4_fileno(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$_writer_thread$$$function__4_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e605dce261c2b82d358c5692741e7a2,
#endif
        code_objects_61faae6ed67b7d8880577339ac3f2b91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_d4d682d29773275767ef9fae81798046,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__5_flush(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_flush,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_027cad08106191f5c465b3e310cb48c8,
#endif
        code_objects_9714de6920d9936af7f17ceaeb959f98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_1374fad1b600fcc799a658a6592c88f6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__6_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$_writer_thread$$$function__6_run,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b2d999ba9da1bb6d0010beda9aa84477,
#endif
        code_objects_e4a05fa7aaf76b14e6745ea697eca936,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_eea7005cc2be7f4532dabb19e92aafed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__7_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$_writer_thread$$$function__7_stop,
        mod_consts.const_str_plain_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e0d4c2ab6e8e7e0dda5d24c89fe9a786,
#endif
        code_objects_28f695e5fe0dfae18a5feca5220732bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$_writer_thread,
        mod_consts.const_str_digest_b80ccbacded65e5d859860c337b838d5,
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

static function_impl_code const function_table_textual$drivers$_writer_thread[] = {
impl_textual$drivers$_writer_thread$$$function__1___init__,
impl_textual$drivers$_writer_thread$$$function__2_write,
impl_textual$drivers$_writer_thread$$$function__4_fileno,
impl_textual$drivers$_writer_thread$$$function__6_run,
impl_textual$drivers$_writer_thread$$$function__7_stop,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$drivers$_writer_thread);
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
        module_textual$drivers$_writer_thread,
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
        function_table_textual$drivers$_writer_thread,
        sizeof(function_table_textual$drivers$_writer_thread) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.drivers._writer_thread";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$drivers$_writer_thread(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$drivers$_writer_thread");

    // Store the module for future use.
    module_textual$drivers$_writer_thread = module;

    moduledict_textual$drivers$_writer_thread = MODULE_DICT(module_textual$drivers$_writer_thread);

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
        PRINT_STRING("textual$drivers$_writer_thread: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$drivers$_writer_thread: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$drivers$_writer_thread: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.drivers._writer_thread" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$drivers$_writer_thread\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$drivers$_writer_thread,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$drivers$_writer_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$drivers$_writer_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$drivers$_writer_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$drivers$_writer_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$drivers$_writer_thread);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$drivers$_writer_thread);
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

        UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2;
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
UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$drivers$_writer_thread = MAKE_MODULE_FRAME(code_objects_725e5d4b976e405ae41cc6040a5860de, module_textual$drivers$_writer_thread);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$drivers$_writer_thread$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$drivers$_writer_thread$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$drivers$_writer_thread;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_queue;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$drivers$_writer_thread;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Queue_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$drivers$_writer_thread,
        mod_consts.const_str_plain_Queue,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Queue);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_Queue, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$drivers$_writer_thread,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$drivers$_writer_thread;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Final_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$drivers$_writer_thread,
        mod_consts.const_str_plain_Final,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Final);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_Final, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_int_pos_30;
UPDATE_STRING_DICT0(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_QUEUED_WRITES, tmp_assign_source_10);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_728572520be1b5247d40e4261f8af6f6;
tmp_ass_subscribed_1 = module_var_accessor_textual$drivers$_writer_thread$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_MAX_QUEUED_WRITES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$drivers$_writer_thread$threading(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Thread);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_11, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_12 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
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
tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_14;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_WriterThread;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 12;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 12;
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
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_69bf1b69ec8e9f399deaeb53a42cefbd;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_ccf8e5831210ba05bd1d8b6d44cfa6e9;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_WriterThread;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2 = MAKE_CLASS_FRAME(tstate, code_objects_812884c2e61e63ffca3118d26380c503, module_textual$drivers$_writer_thread, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2);
assert(Py_REFCNT(frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_68914e3bdc3213ef82bfddecdf1906ad);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__2_write(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__3_isatty(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain_isatty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__4_fileno(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, const_str_plain_fileno, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__5_flush(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain_flush, tmp_dictset_value);
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
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__6_run(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain_run, tmp_dictset_value);
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
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$_writer_thread$$$function__7_stop(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$drivers$_writer_thread$$$class__1_WriterThread_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__queue_str_plain__file_tuple;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
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
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
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
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_WriterThread;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$drivers$_writer_thread->m_frame.f_lineno = 12;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_18);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_17 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12);
locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12);
locals_textual$drivers$_writer_thread$$$class__1_WriterThread_12 = NULL;
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
UPDATE_STRING_DICT1(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)mod_consts.const_str_plain_WriterThread, tmp_assign_source_17);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$_writer_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$_writer_thread->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$_writer_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$drivers$_writer_thread);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$drivers$_writer_thread", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.drivers._writer_thread" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$drivers$_writer_thread);
    return module_textual$drivers$_writer_thread;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$_writer_thread, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$drivers$_writer_thread", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
